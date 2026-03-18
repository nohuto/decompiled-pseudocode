/*
 * XREFs of ?Unlock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1400E8504
 * Callers:
 *     VidMmUnlock @ 0x140038680 (VidMmUnlock.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140023720 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAA4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400D93E0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400D9400 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     UnmapFromSystemMemory @ 0x1400F9C18 (UnmapFromSystemMemory.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Unlock2(VIDMM_GLOBAL *this, __int64 ***a2)
{
  __int64 **v2; // r14
  __int64 *v5; // rdi
  __int64 v6; // r13
  __int64 v7; // rcx
  PRKPROCESS *v8; // rcx
  bool v9; // r15
  int v10; // eax
  __int64 v11; // rcx
  VIDMM_PROCESS *v12; // rcx
  __int64 v13; // rcx
  VIDMM_PROCESS *v14; // rcx
  __int64 *v16; // [rsp+50h] [rbp-89h] BYREF
  char v17; // [rsp+58h] [rbp-81h]
  _QWORD v18[12]; // [rsp+60h] [rbp-79h] BYREF
  struct _KAPC_STATE v19; // [rsp+C0h] [rbp-19h] BYREF
  PRKPROCESS *v20; // [rsp+F0h] [rbp+17h]

  v2 = *a2;
  v5 = **a2;
  v6 = *v5;
  if ( DXGPROCESS::GetCurrent() && (v7 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
    v8 = *(PRKPROCESS **)(v7 + 8);
  else
    v8 = 0LL;
  v20 = v8;
  VIDMM_PROCESS::SafeAttach(v8, &v19);
  v9 = 0;
  v16 = v5 + 41;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5 + 41, 0LL);
  v5[42] = (__int64)KeGetCurrentThread();
  v10 = *((_DWORD *)v2 + 17);
  v17 = 1;
  if ( !v10 )
  {
    WdLogSingleEntry1(1LL, a2);
    WdLogGlobalForLineNumber = 22714;
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
LABEL_7:
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v16);
    VIDMM_PROCESS::SafeDetach(v12, &v19);
    return 0LL;
  }
  if ( !*((_BYTE *)v5 + 40) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 22720;
    goto LABEL_7;
  }
  _InterlockedDecrement((volatile signed __int32 *)v5 + 46);
  _InterlockedDecrement((volatile signed __int32 *)v2 + 17);
  if ( !*((_DWORD *)v2 + 17) )
  {
    if ( (*(_DWORD *)(v6 + 56) & 0x10) != 0 )
    {
      v13 = *(_QWORD *)(***a2 + 192);
      if ( v13 )
        v9 = *(_DWORD *)(v13 + 32) != -1;
    }
    else
    {
      UnmapFromSystemMemory(v2);
    }
  }
  if ( !*((_DWORD *)v5 + 46) )
    *((_BYTE *)v5 + 40) = 0;
  DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v16);
  if ( v9 )
  {
    memset(v18, 0, 0x58uLL);
    LODWORD(v18[0]) = 129;
    v18[5] = v6;
    VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v18, 1);
  }
  VIDMM_PROCESS::SafeDetach(v14, &v19);
  if ( (byte_140081241 & 1) != 0 )
    McTemplateK0p_EtwWriteTransfer();
  return 0LL;
}
