/*
 * XREFs of KxSwapStacksAndRetireDpcList @ 0x1406B2A40
 * Callers:
 *     KiSwapStacksAndRetireDpcList @ 0x1406B2A20 (KiSwapStacksAndRetireDpcList.c)
 * Callees:
 *     KiRetireDpcList @ 0x140251EB0 (KiRetireDpcList.c)
 */

void __fastcall KxSwapStacksAndRetireDpcList(struct _KPRCB *a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x1406B2A2FLL);
}
