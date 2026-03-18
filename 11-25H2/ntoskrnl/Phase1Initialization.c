/*
 * XREFs of Phase1Initialization @ 0x1406F0AF0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14031B970 (KeQueryPerformanceCounter.c)
 *     InbvSetProgressBarSubset @ 0x1404F82B4 (InbvSetProgressBarSubset.c)
 *     MmEnumerateSystemImages @ 0x1404F8690 (MmEnumerateSystemImages.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     IoInitSystem @ 0x140C098E8 (IoInitSystem.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  int inited; // eax
  __int64 v4; // rdx

  qword_1410077B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset(25LL, 75LL);
  inited = IoInitSystem(StartContext);
  if ( inited < 0 )
    KeBugCheckEx(0x69u, (unsigned int)IopInitFailCode, (unsigned int)inited, 0LL, 0LL);
  LOBYTE(v4) = v2;
  Phase1InitializationIoReady(StartContext, v4);
  MmEnumerateSystemImages((__int64)MiFreeBootDriverInitializationCode, 0LL);
  byte_140E2D5ED = 1;
}
