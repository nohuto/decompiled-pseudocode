/*
 * XREFs of ColorSpaceTransformConvert @ 0x140039740
 * Callers:
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1402DEC30 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEBAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x14042F770 (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 * Callees:
 *     ?ConvertToMatrix_3x4@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x1400397FC (-ConvertToMatrix_3x4@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z.c)
 *     ?ConvertToDxgi1@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x140098C7C (-ConvertToDxgi1@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z.c)
 *     ?ConvertToMatrix_V2@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z @ 0x140098E34 (-ConvertToMatrix_V2@@YAJPEBU_D3DKMDT_GAMMA_RAMP@@PEAU1@@Z.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x140098F7C (ColorSpaceTransformInitIdentityTransform.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall ColorSpaceTransformConvert(const struct _D3DKMDT_GAMMA_RAMP *a1, struct _D3DKMDT_GAMMA_RAMP *a2)
{
  size_t v2; // r9
  __int64 Type; // r8
  int v4; // r8d
  int v5; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d

  v2 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  Type = (unsigned int)a2->Type;
  if ( a1->Type == (_DWORD)Type )
  {
    v7 = Type - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              v2 = 98352LL;
          }
          else
          {
            v2 = 49204LL;
          }
        }
        else
        {
          v2 = 12324LL;
        }
      }
      else
      {
        v2 = 1536LL;
      }
    }
    memmove(a2->Data.pRgb256x3x16, a1->Data.pRgb256x3x16, v2);
    return 0LL;
  }
  if ( a1->Type == D3DDDI_GAMMARAMP_DEFAULT )
    return ColorSpaceTransformInitIdentityTransform(a2, a2, Type, 0LL);
  v4 = Type - 3;
  if ( !v4 )
    return ConvertToDxgi1(a1, a2);
  v5 = v4 - 1;
  if ( !v5 )
    return ConvertToMatrix_3x4(a1, a2);
  if ( v5 != 1 )
    return 0LL;
  return ConvertToMatrix_V2(a1, a2);
}
