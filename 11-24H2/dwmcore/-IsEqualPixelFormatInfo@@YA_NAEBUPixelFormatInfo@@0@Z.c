/*
 * XREFs of ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x180023878
 * Callers:
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800238F4 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 * Callees:
 *     ?IsNoAlphaFormOf@@YAHW4DXGI_FORMAT@@0@Z @ 0x18021552C (-IsNoAlphaFormOf@@YAHW4DXGI_FORMAT@@0@Z.c)
 */

bool __fastcall IsEqualPixelFormatInfo(const struct PixelFormatInfo *a1, enum DXGI_FORMAT *a2)
{
  enum DXGI_FORMAT v2; // ebx
  const struct PixelFormatInfo *v3; // r11
  const struct PixelFormatInfo *v4; // r10
  int v5; // r8d
  char v6; // r9

  v2 = *a2;
  v3 = (const struct PixelFormatInfo *)a2;
  v4 = a1;
  v5 = 1;
  if ( *(_DWORD *)a1 == *a2
    || (unsigned int)IsNoAlphaFormOf((enum DXGI_FORMAT)*(_DWORD *)a1, v2) && *((_DWORD *)v3 + 1) == 3
    || (unsigned int)IsNoAlphaFormOf(v2, (enum DXGI_FORMAT)*(_DWORD *)v4) && *((_DWORD *)v4 + 1) == 3 )
  {
    v6 = v5;
  }
  if ( !v6 || (*((_DWORD *)v3 + 1) == v5) != (*((_DWORD *)v4 + 1) == v5) )
    LOBYTE(v5) = 0;
  return v5;
}
