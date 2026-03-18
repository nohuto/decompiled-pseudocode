/*
 * XREFs of GreIsProcessSystemCritical @ 0x1C0027D10
 * Callers:
 *     xxxQueryInformationThread @ 0x1C0027854 (xxxQueryInformationThread.c)
 * Callees:
 *     ?IsProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NPEAU_EPROCESS@@@Z @ 0x1C00EEEB4 (-IsProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NPEAU_EPROCESS@@@Z.c)
 *     ?IsSessionGlobalsAreaAllocated@Umfd@Gre@@YA_NXZ @ 0x1C00EEF44 (-IsSessionGlobalsAreaAllocated@Umfd@Gre@@YA_NXZ.c)
 */

_BOOL8 __fastcall GreIsProcessSystemCritical(struct _EPROCESS *a1)
{
  return Gre::Umfd::IsSessionGlobalsAreaAllocated(a1) && UmfdHostLifeTimeManager::IsProcessUmfdHost(a1);
}
