/*
 * XREFs of ??1GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ @ 0x180085C58
 * Callers:
 *     ??_EGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAPEAXI@Z @ 0x180085C20 (--_EGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A374 (-InternalRelease@-$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL.c)
 */

void __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::~GaussianBlurEffect(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this)
{
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease((__int64 *)this + 8);
  Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::~EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>(this);
}
