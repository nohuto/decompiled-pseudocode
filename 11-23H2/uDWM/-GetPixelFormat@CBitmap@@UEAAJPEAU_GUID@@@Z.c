/*
 * XREFs of ?GetPixelFormat@CBitmap@@UEAAJPEAU_GUID@@@Z @ 0x180020760
 * Callers:
 *     <none>
 * Callees:
 *     ?DXGIFormatToPixelFormat@@YA?AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z @ 0x1800207A4 (-DXGIFormatToPixelFormat@@YA-AW4Enum@MilPixelFormat@@W4DXGI_FORMAT@@_N@Z.c)
 */

__int64 __fastcall CBitmap::GetPixelFormat(CBitmap *this, struct _GUID *a2)
{
  struct _GUID *v2; // r8
  int v3; // eax
  GUID *v4; // r8
  GUID v6; // xmm0

  v2 = a2;
  LOBYTE(a2) = *((_DWORD *)this + 41) == 1;
  v3 = DXGIFormatToPixelFormat(*((unsigned int *)this + 40), a2, v2);
  if ( v3 <= 31 )
  {
    *v4 = GUID_WICPixelFormatDontCare;
    v4->Data4[7] = v3;
    return 0LL;
  }
  switch ( v3 )
  {
    case ',':
      v6 = GUID_WICPixelFormat40bppCMYKAlpha;
LABEL_44:
      *v4 = v6;
      return 0LL;
    case '-':
      v6 = GUID_WICPixelFormat80bppCMYKAlpha;
      goto LABEL_44;
    case 'C':
      v6 = GUID_WICPixelFormat8bppAlpha;
      goto LABEL_44;
    case 'D':
      v6 = GUID_WICPixelFormat32bppRGBA;
      goto LABEL_44;
    case 'E':
      v6 = GUID_WICPixelFormat32bppPRGBA;
      goto LABEL_44;
    case 'H':
      v6 = GUID_WICPixelFormat64bppBGRA;
      goto LABEL_44;
    case 'I':
      v6 = GUID_WICPixelFormat64bppPBGRA;
      goto LABEL_44;
    case 'G':
      v6 = GUID_WICPixelFormat48bppBGR;
      goto LABEL_44;
    case 'F':
      v6 = GUID_WICPixelFormat16bppBGRA5551;
      goto LABEL_44;
    case 'J':
      v6 = GUID_WICPixelFormat48bppBGRFixedPoint;
      goto LABEL_44;
    case 'K':
      v6 = GUID_WICPixelFormat64bppBGRAFixedPoint;
      goto LABEL_44;
    case 'L':
      v6 = GUID_WICPixelFormat96bppRGBFloat;
      goto LABEL_44;
    case 'M':
      v6 = GUID_WICPixelFormat32bppRGB;
      goto LABEL_44;
    case 'N':
      v6 = GUID_WICPixelFormat64bppRGB;
      goto LABEL_44;
    case 'O':
      v6 = GUID_WICPixelFormat8bppY;
      goto LABEL_44;
    case 'P':
      v6 = GUID_WICPixelFormat8bppCb;
      goto LABEL_44;
    case 'Q':
      v6 = GUID_WICPixelFormat8bppCr;
      goto LABEL_44;
    case 'R':
      v6 = GUID_WICPixelFormat16bppCbCr;
      goto LABEL_44;
    case ' ':
      v6 = GUID_WICPixelFormat32bppR10G10B10A2;
      goto LABEL_44;
    case '!':
      v6 = GUID_WICPixelFormat32bppR10G10B10A2HDR10;
      goto LABEL_44;
  }
  return 2147500037LL;
}
