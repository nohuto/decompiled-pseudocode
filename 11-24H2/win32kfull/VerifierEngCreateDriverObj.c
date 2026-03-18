/*
 * XREFs of VerifierEngCreateDriverObj @ 0x14032FFD0
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateDriverObj @ 0x14032F500 (EngCreateDriverObj.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x14032FB80 (-VerifierRandomFailure@@YAHK@Z.c)
 */

HDRVOBJ __fastcall VerifierEngCreateDriverObj(PVOID pvObj, FREEOBJPROC pFreeObjProc, HDEV hdev)
{
  if ( (unsigned int)VerifierRandomFailure((int)pvObj, (__int64)pFreeObjProc) )
    return 0LL;
  else
    return EngCreateDriverObj(pvObj, pFreeObjProc, hdev);
}
