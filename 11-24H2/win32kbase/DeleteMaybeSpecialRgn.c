/*
 * XREFs of DeleteMaybeSpecialRgn @ 0x14000F440
 * Callers:
 *     DestroyCacheDC @ 0x1401689F0 (DestroyCacheDC.c)
 * Callees:
 *     GreDeleteObject @ 0x140010390 (GreDeleteObject.c)
 */

__int64 __fastcall DeleteMaybeSpecialRgn(HRGN a1)
{
  __int64 result; // rax

  if ( (unsigned __int64)a1 > 2 )
    return GreDeleteObject(a1);
  return result;
}
