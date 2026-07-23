/*
 * XREFs of PpInitSystem @ 0x140C24784
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PnpInitPhase0 @ 0x140C24640 (PnpInitPhase0.c)
 */

char PpInitSystem()
{
  if ( !(_DWORD)InitializationPhase )
    return PnpInitPhase0();
  if ( (_DWORD)InitializationPhase != 1 )
    KeBugCheckEx(0x33u, 2uLL, (unsigned int)InitializationPhase, 0LL, 0LL);
  return 1;
}
