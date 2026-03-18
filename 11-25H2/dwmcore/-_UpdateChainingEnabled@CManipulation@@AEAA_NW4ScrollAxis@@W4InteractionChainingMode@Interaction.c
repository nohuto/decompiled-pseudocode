/*
 * XREFs of ?_UpdateChainingEnabled@CManipulation@@AEAA_NW4ScrollAxis@@W4InteractionChainingMode@Interactions@Composition@UI@Windows@@@Z @ 0x180210D58
 * Callers:
 *     ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATESETTINGS@@@Z @ 0x180210C90 (-ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_UPDATE.c)
 * Callees:
 *     <none>
 */

char __fastcall CManipulation::_UpdateChainingEnabled(__int64 a1, int a2, int a3)
{
  if ( *(_DWORD *)(a1 + 8LL * a2 + 472) == a3 )
    return 0;
  *(_DWORD *)(a1 + 8LL * a2 + 472) = a3;
  return 1;
}
