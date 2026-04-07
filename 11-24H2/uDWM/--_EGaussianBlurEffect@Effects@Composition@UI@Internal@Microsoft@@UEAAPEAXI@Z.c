/*
 * XREFs of ??_EGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAPEAXI@Z @ 0x180085C20
 * Callers:
 *     <none>
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x180029370 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ @ 0x180085C58 (--1GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ.c)
 */

Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *__fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vector deleting destructor'(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        char a2)
{
  const struct std::nothrow_t *v4; // rdx

  Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::~GaussianBlurEffect(this);
  if ( (a2 & 1) != 0 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(this, v4);
  return this;
}
