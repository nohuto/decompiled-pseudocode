/*
 * XREFs of ?GetDisplayId@CSecondaryD2DBitmap@@WBA@EBA?AVDisplayId@@XZ @ 0x1802E2F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CSecondaryD2DBitmap::GetDisplayId(__int64 a1, _DWORD *a2)
{
  return CColorKeyBitmapRealization::GetDisplayId(a1 - 16, a2);
}
