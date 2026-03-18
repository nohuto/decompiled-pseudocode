/*
 * XREFs of ?GetConversionShader@ColorConversion@@SAJW4DXGI_COLOR_SPACE_TYPE@@_NI0PEAVShader@1@PEA_N@Z @ 0x1801AAFE0
 * Callers:
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180289650 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     ?IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801AB310 (-IsHDRColorSpace@ColorConversion@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall ColorConversion::GetConversionShader(
        enum DXGI_COLOR_SPACE_TYPE a1,
        char a2,
        int a3,
        enum DXGI_COLOR_SPACE_TYPE a4,
        struct ColorConversion::Shader *a5,
        bool *a6)
{
  bool *v6; // r11
  unsigned int v8; // r10d
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  bool v13; // zf
  int v14; // r9d
  int v15; // r9d
  char v16; // al

  v6 = a6;
  v8 = -2003292288;
  if ( a6 )
  {
    if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 || ColorConversion::IsHDRColorSpace(a1) )
      v16 = 0;
    else
      v16 = a4;
    *v6 = v16;
  }
  v9 = 0;
  switch ( a1 )
  {
    case DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709:
      if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
        goto LABEL_15;
      if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
        goto LABEL_3;
      v9 = 6;
      goto LABEL_12;
    case DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709:
      if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
      {
        v9 = 48;
        goto LABEL_15;
      }
      if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
      {
        v9 = 2;
        v8 = 0;
        v10 = 2;
        goto LABEL_4;
      }
      if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 )
        goto LABEL_3;
      v9 = 4;
      v8 = 0;
      v10 = 4;
      goto LABEL_4;
    case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P709:
      if ( a4 )
      {
        if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
          goto LABEL_3;
        if ( a3 == 8 )
        {
          v9 = 22;
          v8 = 0;
          v10 = 22;
          goto LABEL_4;
        }
        v13 = a3 == 10;
        goto LABEL_32;
      }
      if ( a3 == 8 )
      {
        v9 = 20;
        v8 = 0;
        v10 = 20;
        goto LABEL_4;
      }
      if ( a3 == 10 )
      {
        v9 = 28;
        goto LABEL_15;
      }
      goto LABEL_3;
    case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020:
      if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
      {
        v9 = 30;
        v8 = 0;
        goto LABEL_3;
      }
      v13 = a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709;
LABEL_32:
      if ( !v13 )
        goto LABEL_3;
      v9 = 32;
LABEL_12:
      v8 = 0;
      v10 = v9;
      goto LABEL_4;
    case DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020:
      if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
      {
        v9 = 16;
        v8 = 0;
        goto LABEL_3;
      }
      v14 = a4 - 1;
      if ( v14 )
      {
        if ( v14 != 11 )
          goto LABEL_3;
        v8 = 0;
        v10 = 0;
      }
      else
      {
        v9 = 18;
        v8 = 0;
        v10 = 18;
      }
      goto LABEL_4;
    case DXGI_COLOR_SPACE_RGB_STUDIO_G2084_NONE_P2020:
      if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 )
      {
        v9 = 46;
        v8 = 0;
        goto LABEL_3;
      }
      if ( a4 )
      {
        if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
          goto LABEL_3;
        v9 = 44;
        v8 = 0;
        v10 = 44;
      }
      else
      {
        v9 = 42;
        v8 = 0;
        v10 = 42;
      }
      goto LABEL_4;
    case DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P2020:
      if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 )
      {
        v9 = 12;
        v8 = 0;
        goto LABEL_3;
      }
      v15 = a4 - 1;
      if ( !v15 )
      {
        v9 = 10;
        v8 = 0;
        v10 = 10;
        goto LABEL_4;
      }
      if ( v15 != 11 )
        goto LABEL_3;
      return v8;
    case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P709:
      if ( a4 )
      {
        if ( a4 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
          goto LABEL_3;
        if ( a3 == 8 )
        {
          v9 = 26;
          v8 = 0;
          v10 = 26;
          goto LABEL_4;
        }
        if ( a3 == 10 )
        {
          v9 = 36;
          v8 = 0;
          v10 = 36;
          goto LABEL_4;
        }
      }
      else
      {
        if ( a3 == 8 )
        {
          v9 = 24;
          v8 = 0;
          v10 = 24;
          goto LABEL_4;
        }
        if ( a3 == 10 )
        {
          v9 = 34;
LABEL_15:
          v8 = 0;
        }
      }
      goto LABEL_3;
    case DXGI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P2020:
      if ( a4 )
      {
        if ( a4 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
        {
          v9 = 40;
          v8 = 0;
          v10 = 40;
        }
        else
        {
LABEL_3:
          v10 = v9;
          if ( (v8 & 0x80000000) != 0 )
            return v8;
        }
      }
      else
      {
        v9 = 38;
        v8 = 0;
        v10 = 38;
      }
LABEL_4:
      v11 = v9 + 1;
      if ( !a2 )
        v11 = v10;
      *(_OWORD *)a5 = *((_OWORD *)&ColorConversion::sc_rgShaders + v11);
      return v8;
    default:
      goto LABEL_3;
  }
}
