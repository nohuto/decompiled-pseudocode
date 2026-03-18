/*
 * XREFs of ?IsMatchingColorSpace@CCachedVisualImage@@UEBA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802773E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCachedVisualImage::IsMatchingColorSpace(CCachedVisualImage *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  return *((_BYTE *)this + 1977) == 0;
}
