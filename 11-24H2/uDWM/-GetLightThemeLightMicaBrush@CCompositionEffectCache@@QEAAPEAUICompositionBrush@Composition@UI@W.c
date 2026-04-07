/*
 * XREFs of ?GetLightThemeLightMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180072720
 * Callers:
 *     ?GetActiveBrush@CLightMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180087F80 (-GetActiveBrush@CLightMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows.c)
 * Callees:
 *     ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x18007292C (-EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CCompositionEffectCache::GetLightThemeLightMicaBrush(
        CCompositionEffectCache *this)
{
  CCompositionEffectCache::EnsureEffectsInitialized(this);
  return (struct Windows::UI::Composition::ICompositionBrush *)*((_QWORD *)this + 6);
}
