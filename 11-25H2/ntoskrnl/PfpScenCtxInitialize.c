/*
 * XREFs of PfpScenCtxInitialize @ 0x14073A2E0
 * Callers:
 *     PfInitializeSuperfetch @ 0x140C1B81C (PfInitializeSuperfetch.c)
 * Callees:
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall PfpScenCtxInitialize(__int64 a1)
{
  memset_0((void *)a1, 0, 0x78uLL);
  *(_DWORD *)(a1 + 8) &= 0xFFFFFFFC;
  KeInitializeEvent((PRKEVENT)(a1 + 16), NotificationEvent, 0);
}
