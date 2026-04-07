/*
 * XREFs of ??_EGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAPEAXI@Z @ 0x180021880
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composition@UI@Internal@Microsoft@@UEAA@XZ @ 0x1800218DC (--1-$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@@Effects@Composi.c)
 *     ?InternalRelease@?$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800219CC (-InternalRelease@-$ComPtr@UICompositionEffectSourceParameterFactory@Composition@UI@Windows@@@WRL.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *__fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::`vector deleting destructor'(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        char a2)
{
  Microsoft::WRL::ComPtr<Windows::UI::Composition::ICompositionEffectSourceParameterFactory>::InternalRelease((char *)this + 64);
  Microsoft::Internal::UI::Composition::Effects::EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>::~EffectBase<Microsoft::Internal::UI::Composition::Effects::IGaussianBlurEffect>(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
