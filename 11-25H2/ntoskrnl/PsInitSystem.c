/*
 * XREFs of PsInitSystem @ 0x140BCD7F8
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PspInitPhase1 @ 0x140C23BF4 (PspInitPhase1.c)
 *     PspInitPhase2 @ 0x140C23EA0 (PspInitPhase2.c)
 *     PspInitPhase3 @ 0x140C24038 (PspInitPhase3.c)
 *     PspInitPhase0 @ 0x140C563A8 (PspInitPhase0.c)
 */

__int64 __fastcall PsInitSystem(int a1, void *a2)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return PspInitPhase0(a2);
  v2 = a1 - 1;
  if ( !v2 )
    return PspInitPhase1();
  v3 = v2 - 1;
  if ( !v3 )
    return PspInitPhase2();
  if ( v3 != 1 )
    KeBugCheckEx(0x33u, 1uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return PspInitPhase3();
}
