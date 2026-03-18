/*
 * XREFs of ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD98
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x14000B4BC (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     ?EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x14000CDB0 (-EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?Unlock@CTokenManager@@UEAAXXZ @ 0x14000CE70 (-Unlock@CTokenManager@@UEAAXXZ.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14000D160 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x140024770 (-DeleteAllTokens@CTokenManager@@UEAAXXZ.c)
 *     ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x140025078 (-ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14002E750 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?UnlockIfNotTokenThread@CTokenManager@@UEAAXXZ @ 0x14005AF70 (-UnlockIfNotTokenThread@CTokenManager@@UEAAXXZ.c)
 *     ?ResetAdapterCollection@CTokenManager@@UEAAXXZ @ 0x140065130 (-ResetAdapterCollection@CTokenManager@@UEAAXXZ.c)
 *     ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x140097DD0 (-AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x140097EF0 (-AddUnBindToken@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z.c)
 *     ?ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ @ 0x140097F80 (-ClearAnalogTokenQueue@CTokenManager@@UEAAXXZ.c)
 *     ?ConfirmOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x140097FD0 (-ConfirmOutstandingAnalogToken@CTokenManager@@UEAAXXZ.c)
 *     ?GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z @ 0x140098140 (-GetAnalogExclusiveTokenEvent@CTokenManager@@UEAAJPEAPEAX@Z.c)
 *     ?GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE_@@PEAI@Z @ 0x140098200 (-GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE_@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::ReleaseTokenManagerLock(CTokenManager *this)
{
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
}
