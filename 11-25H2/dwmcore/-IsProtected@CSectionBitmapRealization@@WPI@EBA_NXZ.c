/*
 * XREFs of ?IsProtected@CSectionBitmapRealization@@WPI@EBA_NXZ @ 0x1802E0000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSectionBitmapRealization::IsProtected(__int64 a1)
{
  return CWICBitmapRealization::IsProtected((CWICBitmapRealization *)(a1 - 248));
}
