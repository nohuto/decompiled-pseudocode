/*
 * XREFs of ?GetTreatmentBrush@CWindowBackgroundTreatmentVisual@@CAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x180072890
 * Callers:
 *     ?ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ @ 0x180072760 (-ValidateVisual@CWindowBackgroundTreatmentVisual@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::ICompositionBrush *CWindowBackgroundTreatmentVisual::GetTreatmentBrush(void)
{
  CCompositionEffectCache *v0; // rcx

  v0 = (CCompositionEffectCache *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
  if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 53) + 633LL) )
    return CCompositionEffectCache::GetWindowBackgroundTreatmentBrush(v0);
  else
    return *(struct Windows::UI::Composition::ICompositionBrush **)v0;
}
