/*
 * XREFs of ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801EA6A8
 * Callers:
 *     _lambda_88ee5d53108de150d348bf39630d7967_::_lambda_invoker_cdecl_ @ 0x1802163B0 (_lambda_88ee5d53108de150d348bf39630d7967_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180181F44 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1802DF698 (sqrtf_0.c)
 */

__int64 __fastcall CComponentTransform3D::SetRotationAxis(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        unsigned __int64 *a3)
{
  __m128 v3; // xmm8
  unsigned int v4; // edx
  __m128 v5; // xmm7
  __m128i v6; // xmm9
  unsigned int v7; // edi
  float v9; // xmm2_4
  unsigned __int64 v10; // xmm0_8
  unsigned __int64 v11; // rcx
  float v13; // xmm6_4
  int v14; // eax
  unsigned __int64 v15; // [rsp+30h] [rbp-68h] BYREF

  v3 = (__m128)*((unsigned int *)a3 + 1);
  v4 = 0;
  v5 = (__m128)*(unsigned int *)a3;
  v6 = (__m128i)*((unsigned int *)a3 + 2);
  v7 = 0;
  v15 = 0LL;
  v9 = (float)((float)(v5.m128_f32[0] * v5.m128_f32[0]) + (float)(v3.m128_f32[0] * v3.m128_f32[0]))
     + (float)(*(float *)v6.m128i_i32 * *(float *)v6.m128i_i32);
  if ( (float)(v9 - 1.0) < -0.00000011920929 || (float)(v9 - 1.0) > 0.00000011920929 )
  {
    if ( v9 <= 1.1754944e-38 )
    {
      v4 = _mm_cvtsi128_si32((__m128i)0LL);
      v10 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    }
    else
    {
      v13 = 1.0 / sqrtf_0(v9);
      v5.m128_f32[0] = v5.m128_f32[0] * v13;
      v3.m128_f32[0] = v3.m128_f32[0] * v13;
      *(float *)v6.m128i_i32 = *(float *)v6.m128i_i32 * v13;
      v10 = _mm_unpacklo_ps(v5, v3).m128_u64[0];
      v4 = _mm_cvtsi128_si32(v6);
    }
    goto LABEL_5;
  }
  if ( &v15 != a3 )
  {
    v10 = *a3;
    v4 = *((_DWORD *)a3 + 2);
LABEL_5:
    v15 = v10;
    goto LABEL_6;
  }
  v10 = v15;
LABEL_6:
  v11 = *((_QWORD *)this + 24) - v15;
  if ( !v11 )
    v11 = *((unsigned int *)this + 50) - (unsigned __int64)v4;
  if ( v11 )
  {
    *((_QWORD *)this + 24) = v10;
    *((_DWORD *)this + 50) = v4;
    CResource::InvalidateAnimationSources(this, 7);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v14 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, 7u, (CComponentTransform3D *)((char *)this + 192));
    v7 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x181u, 0LL);
  }
  return v7;
}
