/*
 * XREFs of ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400750F0
 * Callers:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x14004C6E4 (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x14006E6E0 (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x14006FC08 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x140073D14 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x14007424C (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x140074B38 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?BeginDuplicateResource@CConnection@DirectComposition@@QEAAJVResourceHandle@@I@Z @ 0x140075090 (-BeginDuplicateResource@CConnection@DirectComposition@@QEAAJVResourceHandle@@I@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z @ 0x1400755E4 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAVResourceHandle@@@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1400E1A10 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJXZ @ 0x1400E8D3C (-ForceRender@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ @ 0x140130F7C (-ReevaluateMPOCapabilities@CConnection@DirectComposition@@QEAAJXZ.c)
 *     ?ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ @ 0x14014AD80 (-ReevaluateDDA@CConnection@DirectComposition@@QEAAJXZ.c)
 *     DCompositionEnableHwProtectionTeardown @ 0x1402229F4 (DCompositionEnableHwProtectionTeardown.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140223EAC (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x14022412C (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 *     ?UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ @ 0x1402251B0 (-UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     ?CheckConnectionState@CChannel@DirectComposition@@IEAAXXZ @ 0x14007512C (-CheckConnectionState@CChannel@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CChannel::Unlock(PERESOURCE *this)
{
  ExReleaseResourceLite(this[4]);
  KeLeaveCriticalRegion();
  DirectComposition::CChannel::CheckConnectionState((DirectComposition::CChannel *)this);
}
