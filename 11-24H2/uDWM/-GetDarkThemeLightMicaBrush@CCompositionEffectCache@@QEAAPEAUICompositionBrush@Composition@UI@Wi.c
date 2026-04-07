/*
 * XREFs of ?GetDarkThemeLightMicaBrush@CCompositionEffectCache@@QEAAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x18009AB00
 * Callers:
 *     ?GetActiveBrush@CLightMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180087F80 (-GetActiveBrush@CLightMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows.c)
 * Callees:
 *     ?EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ @ 0x18007292C (-EnsureEffectsInitialized@CCompositionEffectCache@@AEAAXXZ.c)
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CCompositionEffectCache::GetDarkThemeLightMicaBrush(
        CCompositionEffectCache *this,
        __int64 a2,
        __int64 a3)
{
  CCompositionEffectCache::EnsureEffectsInitialized(this, a2, a3);
  return (struct Windows::UI::Composition::ICompositionBrush *)*((_QWORD *)this + 5);
}
