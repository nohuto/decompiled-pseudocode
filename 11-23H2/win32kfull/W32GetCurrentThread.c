/*
 * XREFs of W32GetCurrentThread @ 0x1C011D630
 * Callers:
 *     ?GetPhysicalFrameBounds@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C00170B8 (-GetPhysicalFrameBounds@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     _lambda_e277e00ef720cdd7e05078d97cf7089b_::operator() @ 0x1C013A588 (_lambda_e277e00ef720cdd7e05078d97cf7089b_--operator().c)
 *     NtGdiSetPUMPDOBJ @ 0x1C02CCFB0 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C011E7DC (W32GetThreadWin32Thread.c)
 */

__int64 W32GetCurrentThread()
{
  return W32GetThreadWin32Thread(KeGetCurrentThread());
}
