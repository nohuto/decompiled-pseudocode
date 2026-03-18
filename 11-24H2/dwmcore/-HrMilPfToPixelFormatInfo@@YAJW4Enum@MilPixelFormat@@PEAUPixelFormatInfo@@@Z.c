/*
 * XREFs of ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x1801CF0DC
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x1801CEB84 (-HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PixelFormatToDXGIFormat@@YA?AW4DXGI_FORMAT@@W4Enum@MilPixelFormat@@PEA_N@Z @ 0x1801CF204 (-PixelFormatToDXGIFormat@@YA-AW4DXGI_FORMAT@@W4Enum@MilPixelFormat@@PEA_N@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4Enum@MilPixelFormat@@PEAW4ColorSpace@@@Z @ 0x1801CF258 (-GetPixelFormatColorSpace@@YAJW4Enum@MilPixelFormat@@PEAW4ColorSpace@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4Enum@MilPixelFormat@@@Z @ 0x1801CF2D4 (-HasAlphaChannel@@YAHW4Enum@MilPixelFormat@@@Z.c)
 */

__int64 __fastcall HrMilPfToPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  void *v4; // r9
  _DWORD *v5; // rdx
  __int64 v6; // rdx
  unsigned int v7; // r8d
  int v8; // r9d
  int v9; // ecx
  int PixelFormatColorSpace; // eax
  void *v11; // r9
  __int64 v12; // r10
  int v13; // r11d
  unsigned int v14; // ebx
  int v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0;
  v2 = PixelFormatToDXGIFormat(a1, a2, (unsigned int)a1);
  *v5 = v2;
  if ( v2 )
  {
    if ( (unsigned int)HasAlphaChannel(v3) )
    {
      if ( v7 == 16 || v7 == 23 || v7 == 26 || (v9 = 2, v7 == 69) )
        v9 = v8 + 1;
    }
    else
    {
      v9 = 3;
    }
    *(_DWORD *)(v6 + 4) = v9;
    PixelFormatColorSpace = GetPixelFormatColorSpace(v7, &v16);
    v14 = PixelFormatColorSpace;
    if ( PixelFormatColorSpace < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, PixelFormatColorSpace, 0x369u, v11);
    }
    else
    {
      if ( v16 == 2 )
        LODWORD(v11) = v13;
      *(_DWORD *)(v12 + 8) = (_DWORD)v11;
    }
  }
  else
  {
    v14 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292288, 0x355u, v4);
  }
  return v14;
}
