/*
 * XREFs of ?GetActiveBrush@CLightMicaSystemBackdropVisual@@EEBAPEAUICompositionBrush@Composition@UI@Windows@@XZ @ 0x18000B8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Windows::UI::Composition::ICompositionBrush *__fastcall CLightMicaSystemBackdropVisual::GetActiveBrush(
        CLightMicaSystemBackdropVisual *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
  if ( *((_BYTE *)this + 280) )
    return *(struct Windows::UI::Composition::ICompositionBrush **)(v1 + 40);
  else
    return *(struct Windows::UI::Composition::ICompositionBrush **)(v1 + 48);
}
