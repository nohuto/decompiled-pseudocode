/*
 * XREFs of KxSwapStacksAndRetireDpcList @ 0x1406A7770
 * Callers:
 *     KiSwapStacksAndRetireDpcList @ 0x1406A7750 (KiSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 */

void __fastcall KxSwapStacksAndRetireDpcList(struct _KPRCB *a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x1406A775FLL);
}
