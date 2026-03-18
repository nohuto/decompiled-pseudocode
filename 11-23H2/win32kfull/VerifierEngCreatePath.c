/*
 * XREFs of VerifierEngCreatePath @ 0x1C02A67D0
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x1C02868E0 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A62D0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *__fastcall VerifierEngCreatePath(__int64 a1)
{
  if ( (unsigned int)VerifierRandomFailure(a1) )
    return 0LL;
  else
    return EngCreatePath();
}
