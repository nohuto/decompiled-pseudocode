/*
 * XREFs of ?UpdateRect@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEBURect@Foundation@Windows@6@@Z @ 0x1800E590C
 * Callers:
 *     ?UpdateRect@?$produce@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UITransition@456@@impl@winrt@@UEAAHURect@Foundation@Windows@3@@Z @ 0x1800E58E0 (-UpdateRect@-$produce@UWindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     ?BeginRect@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x18004AA00 (-BeginRect@-$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisua.c)
 *     ??1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18004BFEC (--1AnimationCompletedHandler@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?UpdateRect@?$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x18004D0D0 (-UpdateRect@-$consume_Udwm_Transitions_ITransition@UITransition@Transitions@Udwm@winrt@@@impl@wi.c)
 *     ??D?$fast_iterator@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUUserResizeVisual@Transitions@Udwm@2@XZ @ 0x1800E4F44 (--D-$fast_iterator@U-$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@.c)
 *     ?Target@?$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800E57E8 (-Target@-$consume_Udwm_Transitions_IUserResizeVisual@UIUserResizeVisual@Transitions@Udwm@winrt@@.c)
 *     ?begin@?$consume_Windows_Foundation_Collections_IIterable@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800E6094 (-begin@-$consume_Windows_Foundation_Collections_IIterable@U-$IVector@UUserResizeVisual@Transitio.c)
 *     ?end@?$consume_Windows_Foundation_Collections_IIterable@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800E61A0 (-end@-$consume_Windows_Foundation_Collections_IIterable@U-$IVector@UUserResizeVisual@Transitions.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::UpdateRect(
        winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition *this,
        const struct winrt::Windows::Foundation::Rect *a2)
{
  unsigned int v2; // edi
  float v3; // xmm1_4
  unsigned int v4; // esi
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  __int64 v7; // r9
  int i; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  float v18; // xmm1_4
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  float v21; // xmm1_4
  float v22; // xmm0_4
  __int128 v23; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v24[8]; // [rsp+30h] [rbp-20h] BYREF
  int v25; // [rsp+38h] [rbp-18h]
  _BYTE v26[8]; // [rsp+40h] [rbp-10h] BYREF
  int v27; // [rsp+48h] [rbp-8h]
  __int64 *v28; // [rsp+70h] [rbp+20h] BYREF

  v2 = (int)*(float *)a2;
  v3 = *((float *)a2 + 1);
  v4 = (int)v3;
  v5 = (int)(float)(*(float *)a2 + *((float *)a2 + 2));
  v6 = (int)(float)(v3 + *((float *)a2 + 3));
  winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::begin(
    (char *)this + 40,
    v24);
  winrt::impl::consume_Windows_Foundation_Collections_IIterable<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::end(
    v7,
    v26);
  for ( i = v25; i != v27; v25 = i )
  {
    winrt::impl::fast_iterator<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>::operator*(
      (__int64)v24,
      (__int64)&v28);
    winrt::impl::consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::BeginRect(
      (__int64)&v28,
      &v23);
    v9 = winrt::impl::consume_Udwm_Transitions_IUserResizeVisual<winrt::Udwm::Transitions::IUserResizeVisual>::Target((__int64 *)&v28)
       - 95;
    if ( !v9 )
    {
      v19 = _mm_cvtsi32_si128(v2);
LABEL_22:
      v22 = _mm_cvtepi32_ps(v19).m128_f32[0] - *(float *)&v23;
      goto LABEL_23;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        v16 = _mm_cvtsi32_si128(v4);
LABEL_19:
        *((float *)&v23 + 3) = _mm_cvtepi32_ps(v16).m128_f32[0] - *((float *)&v23 + 1);
        goto LABEL_24;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        v17 = _mm_cvtsi32_si128(v6);
        goto LABEL_13;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( !v15 )
          {
            v17 = _mm_cvtsi32_si128(v4);
LABEL_13:
            v18 = _mm_cvtepi32_ps(v17).m128_f32[0];
            *((float *)&v23 + 3) = (float)(*((float *)&v23 + 3) + *((float *)&v23 + 1)) - v18;
            *((float *)&v23 + 1) = v18;
            goto LABEL_24;
          }
          if ( v15 != 1 )
            goto LABEL_24;
          v16 = _mm_cvtsi32_si128(v6);
          goto LABEL_19;
        }
        v19 = _mm_cvtsi32_si128(v5);
        goto LABEL_22;
      }
      v20 = _mm_cvtsi32_si128(v2);
    }
    else
    {
      v20 = _mm_cvtsi32_si128(v5);
    }
    v21 = _mm_cvtepi32_ps(v20).m128_f32[0];
    v22 = (float)(*((float *)&v23 + 2) + *(float *)&v23) - v21;
    *(float *)&v23 = v21;
LABEL_23:
    *((float *)&v23 + 2) = v22;
LABEL_24:
    winrt::impl::consume_Udwm_Transitions_ITransition<winrt::Udwm::Transitions::ITransition>::UpdateRect(&v28, &v23);
    winrt::Udwm::Transitions::AnimationCompletedHandler::~AnimationCompletedHandler((winrt::Udwm::Transitions::AnimationCompletedHandler *)&v28);
    ++i;
  }
}
