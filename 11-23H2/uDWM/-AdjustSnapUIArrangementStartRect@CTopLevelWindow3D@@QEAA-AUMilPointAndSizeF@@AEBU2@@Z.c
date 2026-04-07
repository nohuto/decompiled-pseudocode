/*
 * XREFs of ?AdjustSnapUIArrangementStartRect@CTopLevelWindow3D@@QEAA?AUMilPointAndSizeF@@AEBU2@@Z @ 0x1800E7060
 * Callers:
 *     ?AdjustSnapUIArrangementStartRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHURect@Foundation@Windows@3@PEAU4563@@Z @ 0x1800FA9A0 (-AdjustSnapUIArrangementStartRect@-$produce@UTopLevelWindow3DWrapper@implementation@Transitions@.c)
 * Callees:
 *     _o_roundf_0 @ 0x18005D4CC (_o_roundf_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSnapUI@@@details@wil@@QEAA_NXZ @ 0x180065A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSn.c)
 *     ?GetSnapThumbnailLocation@CTopLevelWindow3D@@QEAA?AUtagRECT@@XZ @ 0x1800E7198 (-GetSnapThumbnailLocation@CTopLevelWindow3D@@QEAA-AUtagRECT@@XZ.c)
 */

__int64 __fastcall CTopLevelWindow3D::AdjustSnapUIArrangementStartRect(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rbx
  __m128i v9; // xmm6
  float v10; // xmm7_4
  int v11; // ecx
  float v12; // xmm7_4
  __int64 result; // rax
  struct tagRECT v14; // [rsp+20h] [rbp-38h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSnapUI>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_AccessViolationAdjustSnapUI>::GetImpl'::`2'::impl);
  v6 = *a3;
  v7 = *(_QWORD *)(a1 + 344);
  v8 = *(_QWORD *)(a1 + 336);
  *(_OWORD *)a2 = v6;
  v9 = *(__m128i *)(v7 + 88);
  CTopLevelWindow3D::GetSnapThumbnailLocation((CTopLevelWindow3D *)a1, &v14);
  v10 = *(float *)(a1 + 636);
  *(float *)&v6 = (float)((float)v14.left - (float)(_mm_cvtsi128_si32(v9) + *(_DWORD *)(v8 + 48))) + *(float *)a2;
  o_roundf_0();
  v11 = *(_DWORD *)(v8 + 52);
  *(_DWORD *)a2 = v6;
  *(float *)&v6 = (float)((float)v14.top - (float)(_mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) + v11)) + *(float *)(a2 + 4);
  o_roundf_0();
  *(_DWORD *)(a2 + 4) = v6;
  *(float *)&v6 = v10 * *(float *)(a2 + 8);
  o_roundf_0();
  v12 = v10 * *(float *)(a2 + 12);
  *(_DWORD *)(a2 + 8) = v6;
  o_roundf_0();
  result = a2;
  *(float *)(a2 + 12) = v12;
  return result;
}
