/*
 * XREFs of VerifierCLIPOBJ_ppoGetPath @ 0x14032FC60
 * Callers:
 *     <none>
 * Callees:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1400DA724 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x14032FB80 (-VerifierRandomFailure@@YAHK@Z.c)
 */

struct _PATHOBJ *__fastcall VerifierCLIPOBJ_ppoGetPath(XCLIPOBJ *this, __int64 a2)
{
  if ( (unsigned int)VerifierRandomFailure((int)this, a2) )
    return 0LL;
  else
    return XCLIPOBJ::ppoGetPath(this);
}
