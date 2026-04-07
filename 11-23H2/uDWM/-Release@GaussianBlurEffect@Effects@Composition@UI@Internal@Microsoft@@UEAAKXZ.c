/*
 * XREFs of ?Release@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAKXZ @ 0x18001F8B0
 * Callers:
 *     ?Release@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@W7EAAKXZ @ 0x180066E80 (-Release@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@W7EAAKXZ.c)
 *     ?Release@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WBA@EAAKXZ @ 0x180066EA0 (-Release@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WBA@EAAKXZ.c)
 *     ?Release@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WBI@EAAKXZ @ 0x180066EC0 (-Release@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WBI@EAAKXZ.c)
 *     ?Release@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAKXZ @ 0x180066EE0 (-Release@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::Release(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::Release(this);
}
