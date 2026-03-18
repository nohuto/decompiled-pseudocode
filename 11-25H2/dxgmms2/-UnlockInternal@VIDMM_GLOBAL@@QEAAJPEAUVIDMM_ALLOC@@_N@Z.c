/*
 * XREFs of ?UnlockInternal@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@_N@Z @ 0x1400EEC00
 * Callers:
 *     ?Unlock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K@Z @ 0x1400EEAF4 (-Unlock1@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     UnlockParavirtualizedAllocationOnHost @ 0x14009653C (UnlockParavirtualizedAllocationOnHost.c)
 *     ?QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGING_QUEUE@@PEAU_VIDSCH_SYNC_OBJECT@@_N@Z @ 0x1400B4C94 (-QueueSystemCommandAndWaitInternal@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@AEAUVIDMM_PAGIN.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD300 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD320 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::UnlockInternal(VIDMM_GLOBAL *this, __int64 ***a2, unsigned __int8 a3)
{
  __int64 **v3; // r14
  int v5; // edi
  __int64 *v7; // r15
  __int64 v8; // r13
  __int64 v9; // rcx
  PRKPROCESS *v10; // rcx
  bool v11; // bp
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  VIDMM_PROCESS *v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // rdi
  __int64 CurrentProcess; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  VIDMM_PROCESS *v23; // rcx
  __int64 v24; // rax
  struct VIDMM_PAGING_QUEUE **v25; // rcx
  _OWORD v26[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v27; // [rsp+70h] [rbp-B8h]
  __int128 v28; // [rsp+80h] [rbp-A8h]
  __int128 v29; // [rsp+90h] [rbp-98h]
  __int64 v30; // [rsp+A0h] [rbp-88h]
  struct _KAPC_STATE v31; // [rsp+B0h] [rbp-78h] BYREF
  PRKPROCESS *v32; // [rsp+E0h] [rbp-48h]

  v3 = *a2;
  v5 = a3;
  v7 = **a2;
  v8 = *v7;
  if ( DXGPROCESS::GetCurrent() && (v9 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8)) != 0 )
    v10 = *(PRKPROCESS **)(v9 + 8);
  else
    v10 = 0LL;
  v32 = v10;
  VIDMM_PROCESS::SafeAttach(v10, &v31);
  v11 = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7 + 39, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v7[40] = (__int64)KeGetCurrentThread();
  if ( !*((_DWORD *)v3 + 17) )
  {
    WdLogSingleEntry1(1LL, a2);
    WdLogGlobalForLineNumber = 22330;
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v7[40] = 0LL;
LABEL_7:
    ExReleasePushLockExclusiveEx(v7 + 39, 0LL);
    KeLeaveCriticalRegion();
    VIDMM_PROCESS::SafeDetach(v15, &v31);
    return 3221225485LL;
  }
  if ( v5 != (*((_BYTE *)v7 + 40) != 0) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 22336;
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    v7[40] = 0LL;
    goto LABEL_7;
  }
  _InterlockedDecrement((volatile signed __int32 *)v7 + 46);
  if ( !_InterlockedDecrement((volatile signed __int32 *)v3 + 17) )
  {
    if ( (*(_DWORD *)(v8 + 56) & 0x10) != 0 )
    {
      v17 = *(_QWORD *)(***a2 + 192);
      if ( v17 )
        v11 = *(_DWORD *)(v17 + 32) != -1;
    }
    else
    {
      v18 = (__int64)*v3;
      if ( (*((_DWORD *)*v3 + 7) & 0x4000) != 0 )
      {
        UnlockParavirtualizedAllocationOnHost((__int64)*v3);
      }
      else
      {
        v19 = **(unsigned int **)(v18 + 376);
        if ( (v19 & 0x40000) != 0 )
        {
          if ( (v19 & 0x20000000) != 0 )
          {
            v20 = v3[2];
            CurrentProcess = PsGetCurrentProcess(v19, v18, v12, v13);
            VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
            (*((void (__fastcall **)(__int64, __int64 *))VirtualMemoryInterface + 4))(CurrentProcess, v20);
          }
          else
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v18 + 224) + 80LL))(
              *(_QWORD *)(v18 + 224),
              *(_QWORD *)(v18 + 232),
              v3[2]);
          }
          v3[2] = 0LL;
        }
      }
    }
  }
  if ( !*((_DWORD *)v7 + 46) )
    *((_BYTE *)v7 + 40) = 0;
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  v7[40] = 0LL;
  ExReleasePushLockExclusiveEx(v7 + 39, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 )
  {
    v30 = 0LL;
    v24 = *((_QWORD *)this + 5049);
    memset(v26, 0, sizeof(v26));
    LODWORD(v26[0]) = 129;
    v27 = 0LL;
    v25 = *(struct VIDMM_PAGING_QUEUE ***)(v24 + 72);
    *((_QWORD *)&v27 + 1) = v8;
    v28 = 0LL;
    v29 = 0LL;
    VIDMM_GLOBAL::QueueSystemCommandAndWaitInternal(
      this,
      (struct _VIDMM_SYSTEM_COMMAND *)v26,
      *v25,
      v25[4 * ((*((_DWORD *)*v25 + 28) >> 5) & 0x1F) + 1],
      1);
  }
  VIDMM_PROCESS::SafeDetach(v23, &v31);
  return 0LL;
}
