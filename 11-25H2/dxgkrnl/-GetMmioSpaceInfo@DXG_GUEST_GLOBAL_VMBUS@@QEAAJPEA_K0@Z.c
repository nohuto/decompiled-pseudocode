/*
 * XREFs of ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x140217B20
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1401902D4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(
        DXG_GUEST_GLOBAL_VMBUS *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  ((void (__fastcall *)(_QWORD))qword_14015D370)(*(_QWORD *)this);
  if ( *a3 >= *((_QWORD *)DXGGLOBAL::GetGlobal() + 212) && *a2 )
    return 0LL;
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 14120;
  DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"GetMmioSpaceInfo failed", 14120LL, 0LL, 0LL, 0LL, 0LL);
  return 3221225485LL;
}
