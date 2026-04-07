/*
 * XREFs of ??0GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ @ 0x1800F5A98
 * Callers:
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@V123456@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@Internal@2@@Z @ 0x1800864F4 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@_ea_1800864F4.c)
 * Callees:
 *     ??0?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@QEAA@XZ @ 0x180096F08 (--0-$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composi.c)
 */

Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *__fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::GaussianBlurEffect(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this)
{
  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *result; // rax

  Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>(this);
  *(_QWORD *)this = &Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>'};
  *((_QWORD *)this + 3) = &Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vftable'{for `Windows::Graphics::Effects::IGraphicsEffectD2D1Interop'};
  *((_QWORD *)this + 4) = &Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>'};
  result = this;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 18) = 1077936128;
  *((_DWORD *)this + 19) = 1;
  return result;
}
