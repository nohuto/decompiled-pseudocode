/*
 * XREFs of PpInitSystem @ 0x140C22754
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PnpInitPhase0 @ 0x140C22600 (PnpInitPhase0.c)
 */

char PpInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return PnpInitPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 2uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return 1;
}
