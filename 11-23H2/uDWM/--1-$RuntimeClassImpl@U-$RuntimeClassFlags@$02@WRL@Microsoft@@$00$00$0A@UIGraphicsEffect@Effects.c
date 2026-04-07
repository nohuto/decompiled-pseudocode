/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180021910
 * Callers:
 *     ??1?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ @ 0x1800218DC (--1-$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composi.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@Internal@3@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180110820 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIGraphicsEffect@Effects@Graphics@Win.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(2 * v1);
  return result;
}
