/*
 * XREFs of ?get_Source@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJPEAPEAUIGraphicsEffectSource@2Graphics@Windows@@@Z @ 0x180110DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180021AD4 (-InternalAddRef@-$ComPtr@UIGraphicsEffectSource@Effects@Graphics@Windows@@@WRL@Microsoft@@IEBAXX.c)
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::get_Source(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        struct Windows::Graphics::Effects::IGraphicsEffectSource **a2)
{
  struct Windows::Graphics::Effects::IGraphicsEffectSource **v2; // rbx

  v2 = (struct Windows::Graphics::Effects::IGraphicsEffectSource **)((char *)this + 32);
  Microsoft::WRL::ComPtr<Windows::Graphics::Effects::IGraphicsEffectSource>::InternalAddRef((__int64 *)this + 4);
  *a2 = *v2;
  return 0LL;
}
