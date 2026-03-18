/*
 * XREFs of ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@W4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400FF030
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z @ 0x1400BF898 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJW4VIDMM_PAGE_PRIORITY@@_N@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400D93E0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400D9400 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Reset(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v8; // rcx
  unsigned int v9; // ebx
  VIDMM_PROCESS *v10; // rcx
  __int64 v12; // [rsp+50h] [rbp-68h] BYREF
  char v13; // [rsp+58h] [rbp-60h]
  struct _KAPC_STATE v14; // [rsp+60h] [rbp-58h] BYREF
  PRKPROCESS *v15; // [rsp+90h] [rbp-28h]

  v15 = *(PRKPROCESS **)(a1 + 8);
  VIDMM_PROCESS::SafeAttach(v15, &v14);
  v12 = a1 + 1328;
  v13 = 0;
  if ( a1 == -1328 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(v8, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v12);
  v9 = VIDMM_RECYCLE_MULTIRANGE::Reset(a2, a3, a4);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v12);
  VIDMM_PROCESS::SafeDetach(v10, &v14);
  return v9;
}
