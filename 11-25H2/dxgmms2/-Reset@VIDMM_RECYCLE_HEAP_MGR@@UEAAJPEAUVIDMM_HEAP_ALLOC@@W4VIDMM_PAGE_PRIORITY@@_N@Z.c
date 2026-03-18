/*
 * XREFs of ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@W4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400CBBA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140033EB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140036068 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD300 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD320 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400CDC28 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Reset(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v8; // r8
  unsigned int v9; // ebx
  VIDMM_PROCESS *v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // [rsp+50h] [rbp-68h] BYREF
  char v14; // [rsp+58h] [rbp-60h]
  struct _KAPC_STATE v15; // [rsp+60h] [rbp-58h] BYREF
  VIDMM_PROCESS *v16; // [rsp+90h] [rbp-28h]

  v16 = *(VIDMM_PROCESS **)(a1 + 8);
  VIDMM_PROCESS::SafeAttach(v16, &v15);
  v13 = a1 + 1328;
  v14 = 0;
  if ( a1 == -1328 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(v12, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v13);
  LOBYTE(v8) = a4;
  v9 = VIDMM_RECYCLE_MULTIRANGE::Reset(a2, a3, v8);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v13);
  VIDMM_PROCESS::SafeDetach(v10, &v15);
  return v9;
}
