/*
 * XREFs of ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x14021E0F0
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x140192624 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(
        DXG_GUEST_GLOBAL_VMBUS *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  ((void (__fastcall *)(_QWORD))qword_140160390)(*(_QWORD *)this);
  if ( *a3 >= *((_QWORD *)DXGGLOBAL::GetGlobal() + 216) && *a2 )
    return 0LL;
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 14308;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"GetMmioSpaceInfo failed", 14308LL, 0LL, 0LL, 0LL, 0LL);
  return 3221225485LL;
}
