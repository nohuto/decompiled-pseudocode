/*
 * XREFs of VerifierEngCreateClip @ 0x1C02A6620
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A62D0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

CLIPOBJ *__fastcall VerifierEngCreateClip(__int64 a1)
{
  if ( (unsigned int)VerifierRandomFailure(a1) )
    return 0LL;
  else
    return EngCreateClip();
}
