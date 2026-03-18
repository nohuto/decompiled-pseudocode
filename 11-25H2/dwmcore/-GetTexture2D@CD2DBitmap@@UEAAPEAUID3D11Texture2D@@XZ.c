/*
 * XREFs of ?GetTexture2D@CD2DBitmap@@UEAAPEAUID3D11Texture2D@@XZ @ 0x180211C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ID3D11Texture2D *__fastcall CD2DBitmap::GetTexture2D(CD2DBitmap *this)
{
  return (struct ID3D11Texture2D *)*((_QWORD *)this + 4);
}
