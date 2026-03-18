/*
 * XREFs of VerifierEngCreatePath @ 0x140330090
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x140007240 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x14032FB80 (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *__fastcall VerifierEngCreatePath(int a1, __int64 a2)
{
  if ( (unsigned int)VerifierRandomFailure(a1, a2) )
    return 0LL;
  else
    return EngCreatePath();
}
