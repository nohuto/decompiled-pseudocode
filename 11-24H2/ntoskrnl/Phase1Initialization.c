/*
 * XREFs of Phase1Initialization @ 0x1406FC8E0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     InbvSetProgressBarSubset @ 0x1404FA794 (InbvSetProgressBarSubset.c)
 *     MmEnumerateSystemImages @ 0x1404FAB30 (MmEnumerateSystemImages.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     IoInitSystem @ 0x140C1A988 (IoInitSystem.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // r8
  __int64 v4; // r9
  int inited; // eax
  __int64 v6; // rdx

  qword_1410077B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset(25LL, 75LL, v3, v4);
  inited = IoInitSystem(StartContext);
  if ( inited < 0 )
    KeBugCheckEx(0x69u, (unsigned int)IopInitFailCode, (unsigned int)inited, 0LL, 0LL);
  LOBYTE(v6) = v2;
  Phase1InitializationIoReady(StartContext, v6);
  MmEnumerateSystemImages((__int64)MiFreeBootDriverInitializationCode, 0LL);
  byte_140E2D82D = 1;
}
