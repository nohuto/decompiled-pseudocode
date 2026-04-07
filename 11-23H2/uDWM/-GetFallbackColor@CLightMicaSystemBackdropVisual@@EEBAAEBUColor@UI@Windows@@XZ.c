/*
 * XREFs of ?GetFallbackColor@CLightMicaSystemBackdropVisual@@EEBAAEBUColor@UI@Windows@@XZ @ 0x18000B940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct Windows::UI::Color *__fastcall CLightMicaSystemBackdropVisual::GetFallbackColor(
        CLightMicaSystemBackdropVisual *this)
{
  const struct Windows::UI::Color *result; // rax

  result = (const struct Windows::UI::Color *)&CLightMicaSystemBackdropVisual::sc_darkThemeFallbackColor;
  if ( !*((_BYTE *)this + 280) )
    return (const struct Windows::UI::Color *)&CLightMicaSystemBackdropVisual::sc_lightThemeFallbackColor;
  return result;
}
