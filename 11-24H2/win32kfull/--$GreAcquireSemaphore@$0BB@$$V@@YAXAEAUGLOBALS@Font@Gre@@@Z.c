/*
 * XREFs of ??$GreAcquireSemaphore@$0BB@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1400FDDF8
 * Callers:
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1400FDC0C (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z @ 0x140199568 (-bCleanupPFT@PUBLIC_PFTOBJ@@QEAAXW4eCleanupMode@1@PEAK@Z.c)
 *     ?GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z @ 0x140199764 (-GrepRemoveFontResource@@YAHPEBGKKKKPEAUtagDESIGNVECTOR@@K@Z.c)
 *     GrepAcquirePublicPFTSemaphoreEx @ 0x140215B90 (GrepAcquirePublicPFTSemaphoreEx.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x140228D98 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     HDEV_DeleteRfontsAndUnloadDeviceFonts @ 0x14025AFF0 (HDEV_DeleteRfontsAndUnloadDeviceFonts.c)
 *     PFF_bUnloadWorkhorseForDCOBJ @ 0x14030ECB0 (PFF_bUnloadWorkhorseForDCOBJ.c)
 *     ?bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z @ 0x140336918 (-bRemoveMergeFont@XDCOBJ@@QEAAHU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ??$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FDE3C (--$GreAcquireSemaphoreCommon@$0BB@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

__int64 __fastcall GreAcquireSemaphore<17,>(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 15472);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"PublicPFT", v1, 0LL);
  return GreAcquireSemaphoreCommon<17,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal, v1);
}
