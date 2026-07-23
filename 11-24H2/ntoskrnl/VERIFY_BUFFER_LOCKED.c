/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x140B86EB4
 * Callers:
 *     VfBuildScatterGatherList @ 0x140B87AB0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B87DB0 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140B88BE0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140B88F30 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140B89310 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140B894C0 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1406109F4 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x140B8B21C (ViHalPreprocessOptions.c)
 *     MmAreMdlPagesLocked @ 0x140BA6694 (MmAreMdlPagesLocked.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(ULONG_PTR a1)
{
  __int16 v2; // di

  v2 = *(_WORD *)(a1 + 10) & 0x804;
  if ( !(unsigned int)MmAreMdlPagesLocked(a1) && !v2 )
  {
    ViHalPreprocessOptions(byte_140E0E9DC, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(0xE6u, 0xEuLL, a1, 0LL, 0LL, byte_140E0E9DC);
  }
}
