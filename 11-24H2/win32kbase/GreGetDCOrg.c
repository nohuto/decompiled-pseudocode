/*
 * XREFs of GreGetDCOrg @ 0x140010E40
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z @ 0x140010910 (-GreGetDCPoint@@YAHPEAUHDC__@@IPEAU_POINTL@@@Z.c)
 */

__int64 __fastcall GreGetDCOrg(HDC a1, struct _POINTL *a2)
{
  return GreGetDCPoint(a1, 32, a2);
}
