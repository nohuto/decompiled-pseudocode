/*
 * XREFs of PfpScenCtxInitialize @ 0x140746300
 * Callers:
 *     PfInitializeSuperfetch @ 0x140C2C91C (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall PfpScenCtxInitialize(__int64 a1)
{
  memset_0((void *)a1, 0, 0x78uLL);
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 16), NotificationEvent, 0);
}
