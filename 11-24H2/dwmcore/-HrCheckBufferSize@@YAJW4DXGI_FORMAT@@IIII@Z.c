/*
 * XREFs of ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x180025458
 * Callers:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18002432C (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x180025A28 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x1802DC8F8 (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18002555C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HrCheckBufferSize(enum DXGI_FORMAT a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned __int8 PixelFormatSize; // al
  __int64 v8; // r10
  unsigned int v9; // r11d
  unsigned int v10; // r8d
  unsigned __int64 v11; // r9
  unsigned int v12; // eax
  int v13; // ebx
  unsigned int v15; // edx
  unsigned __int64 v16; // rcx

  v5 = 0;
  v6 = 0;
  if ( a4 )
  {
    PixelFormatSize = GetPixelFormatSize(a1);
    v11 = v10 * (unsigned __int64)PixelFormatSize;
    if ( v11 > 0xFFFFFFFF )
    {
      v12 = 1632;
LABEL_4:
      v13 = -2147024362;
LABEL_5:
      v5 = v13;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v12, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x68Eu, 0LL);
      return v5;
    }
    if ( (int)v11 + 7 < (unsigned int)v11 )
    {
      v12 = 1633;
      goto LABEL_4;
    }
    v15 = (unsigned int)(v11 + 7) >> 3;
    if ( (unsigned int)v8 < v15 )
    {
      v13 = -2147024809;
      v12 = 1638;
      goto LABEL_5;
    }
    v16 = v8 * v9;
    if ( v16 > 0xFFFFFFFF )
    {
      v12 = 1641;
      goto LABEL_4;
    }
    v6 = v16 + v15;
    if ( (unsigned int)v16 + v15 < (unsigned int)v16 )
    {
      v12 = 1642;
      goto LABEL_4;
    }
  }
  if ( v6 > a5 )
  {
    v5 = -2003292276;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292276, 0x692u, 0LL);
  }
  return v5;
}
