/*
 * XREFs of ?GetPixelFormatInfo@CCachedImageProducer@@UEBA?AUPixelFormatInfo@@XZ @ 0x18021BE30
 * Callers:
 *     ?GetPixelFormatInfo@CCachedImageProducer@@WBA@EBA?AUPixelFormatInfo@@XZ @ 0x180284E70 (-GetPixelFormatInfo@CCachedImageProducer@@WBA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CCachedImageProducer::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  _DWORD *result; // rax

  a2[2] = 0;
  result = a2;
  *a2 = 87;
  a2[1] = 1;
  return result;
}
