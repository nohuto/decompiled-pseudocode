/*
 * XREFs of ?FlushHeapTransitions@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400CE338
 * Callers:
 *     VidMmFlushHeapTransitions @ 0x140043130 (VidMmFlushHeapTransitions.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140032DD0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD300 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400CD320 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::FlushHeapTransitions(VIDMM_GLOBAL *this)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  VIDMM_PROCESS *v4; // rcx
  struct _KAPC_STATE v6; // [rsp+20h] [rbp-48h] BYREF
  __int64 v7; // [rsp+50h] [rbp-18h]

  v1 = 0LL;
  if ( DXGPROCESS::GetCurrent() )
  {
    v2 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v2 )
      v1 = *(_QWORD *)(v2 + 8);
  }
  v7 = v1;
  VIDMM_PROCESS::SafeAttach((PRKPROCESS *)v1, &v6);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 24) + 128LL))(*(_QWORD *)(v1 + 24));
  VIDMM_PROCESS::SafeDetach(v4, &v6);
  return v3;
}
