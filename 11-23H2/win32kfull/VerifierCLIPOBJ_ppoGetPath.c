/*
 * XREFs of VerifierCLIPOBJ_ppoGetPath @ 0x1C02A63B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ @ 0x1C0264A58 (-ppoGetPath@XCLIPOBJ@@QEAAPEAU_PATHOBJ@@XZ.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C02A62D0 (-VerifierRandomFailure@@YAHK@Z.c)
 */

struct _PATHOBJ *__fastcall VerifierCLIPOBJ_ppoGetPath(XCLIPOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (unsigned int)VerifierRandomFailure((__int64)this) )
    return 0LL;
  else
    return XCLIPOBJ::ppoGetPath(this, v2, v3, v4);
}
