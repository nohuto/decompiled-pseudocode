/*
 * XREFs of ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAUVIDMM_HEAP_ALLOC@@@Z @ 0x14010BA90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x140031790 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOMUTEX@@QEAA@XZ @ 0x140034988 (--1DXGAUTOMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400D93E0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400D9400 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x140104B0C (-ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::ResetUndo(VIDMM_RECYCLE_HEAP_MGR *this, struct VIDMM_HEAP_ALLOC *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  VIDMM_PROCESS *v6; // rcx
  char *v8; // [rsp+50h] [rbp-58h] BYREF
  char v9; // [rsp+58h] [rbp-50h]
  struct _KAPC_STATE v10; // [rsp+60h] [rbp-48h] BYREF
  PRKPROCESS *v11; // [rsp+90h] [rbp-18h]

  v11 = (PRKPROCESS *)*((_QWORD *)this + 1);
  VIDMM_PROCESS::SafeAttach(v11, &v10);
  v8 = (char *)this + 1328;
  v9 = 0;
  if ( this == (VIDMM_RECYCLE_HEAP_MGR *)-1328LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(v4, 262146LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v8);
  v5 = VIDMM_RECYCLE_MULTIRANGE::ResetUndo(a2);
  DXGAUTOMUTEX::~DXGAUTOMUTEX((DXGAUTOMUTEX *)&v8);
  VIDMM_PROCESS::SafeDetach(v6, &v10);
  return v5;
}
