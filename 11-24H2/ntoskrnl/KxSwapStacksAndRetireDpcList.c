/*
 * XREFs of KxSwapStacksAndRetireDpcList @ 0x1406B39E0
 * Callers:
 *     KiSwapStacksAndRetireDpcList @ 0x1406B39C0 (KiSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KiRetireDpcList @ 0x1402824C0 (KiRetireDpcList.c)
 */

void __fastcall KxSwapStacksAndRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x1406B39CFLL);
}
