/*
 * XREFs of VerifierEngCreateClip @ 0x14032FEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x14032FB80 (-VerifierRandomFailure@@YAHK@Z.c)
 */

CLIPOBJ *__fastcall VerifierEngCreateClip(int a1, __int64 a2)
{
  if ( (unsigned int)VerifierRandomFailure(a1, a2) )
    return 0LL;
  else
    return EngCreateClip();
}
