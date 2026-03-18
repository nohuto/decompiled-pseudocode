/*
 * XREFs of ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x14019D440
 * Callers:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140019A04 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140019CF8 (--0RGNCOREMEMOBJ@@QEAA@XZ.c)
 *     ?AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z @ 0x140019D9C (-AllocateRegionCore@RGNCOREMEMOBJ@@SAPEAVREGION_CORE@@K@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400268F0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140026B80 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1400271F0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400288AC (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     RGNCOREOBJ::bMerge__RGNOBJ::bMerge_::_2_::_lambda_1___ @ 0x140028A10 (RGNCOREOBJ--bMerge__RGNOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x140029050 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1400291D0 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vInit@RGNMEMOBJ@@QEAAXXZ @ 0x140029510 (-vInit@RGNMEMOBJ@@QEAAXXZ.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400296C0 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140029D30 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x14002AF10 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     GreSetRectRgn @ 0x14002C480 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14002C870 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x14002CCB0 (SetRectRgnIndirect.c)
 *     GreCreateRectRgnIndirect @ 0x14002D480 (GreCreateRectRgnIndirect.c)
 *     ?set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z @ 0x140065BE4 (-set_sizeScanAlloc@REGION_CORE@@IEAAXK@Z.c)
 * Callees:
 *     <none>
 */

void RustOnZeroSizedScanCallback(void)
{
  DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
}
