/*
 * XREFs of IoUpdateLinkShareAccess @ 0x140712A40
 * Callers:
 *     <none>
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x1409F0A00 (IoUpdateLinkShareAccessEx.c)
 */

__int64 __fastcall IoUpdateLinkShareAccess(__int64 a1, __int64 a2, __int64 a3)
{
  return IoUpdateLinkShareAccessEx(a1, a2, a3, 0LL);
}
