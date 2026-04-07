/*
 * XREFs of ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z @ 0x180004668
 * Callers:
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z @ 0x180004314 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCCachedVisualImageProxy@@@Z.c)
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z @ 0x1800045F4 (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z.c)
 * Callees:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18000471C (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 */

char __fastcall CDesktopManager::_IsSameAsTargetCachedCVI(int a1, int a2)
{
  __m128i v4; // xmm6
  float ScalingFactorForCVI; // xmm0_4
  char v6; // cl
  int v7; // r8d
  int v8; // edx
  int v9; // eax
  int v10; // eax
  __m128i v12; // [rsp+20h] [rbp-28h] BYREF

  v12 = *(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 396);
  v4 = v12;
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(
                          CDesktopManager::s_pDesktopManagerInstance,
                          (const struct tagRECT *)&v12);
  v6 = 0;
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) - _mm_cvtsi128_si32(v4);
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v4, 4));
  v9 = 0;
  if ( v7 >= 0 )
    v9 = v7;
  if ( a1 == (int)(float)((float)v9 * ScalingFactorForCVI) )
  {
    v10 = 0;
    if ( v8 >= 0 )
      v10 = v8;
    if ( a2 == (int)(float)((float)v10 * ScalingFactorForCVI) )
      return 1;
  }
  return v6;
}
