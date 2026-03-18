/*
 * XREFs of IoUpdateLinkShareAccess @ 0x140708DB0
 * Callers:
 *     <none>
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x1409FE4B0 (IoUpdateLinkShareAccessEx.c)
 */

__int64 __fastcall IoUpdateLinkShareAccess(__int64 a1, __int64 a2, __int64 a3)
{
  return IoUpdateLinkShareAccessEx(a1, a2, a3, 0LL);
}
