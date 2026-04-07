/*
 * XREFs of ?GetActiveBaseColor@CLightMicaSystemBackdropVisual@@EEBAAEBUColor@UI@Windows@@XZ @ 0x18000B0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct Windows::UI::Color *__fastcall CLightMicaSystemBackdropVisual::GetActiveBaseColor(
        CLightMicaSystemBackdropVisual *this)
{
  const struct Windows::UI::Color *result; // rax

  result = (const struct Windows::UI::Color *)&CLightMicaSystemBackdropVisual::sc_darkThemeTintColor;
  if ( !*((_BYTE *)this + 280) )
    return (const struct Windows::UI::Color *)&CLightMicaSystemBackdropVisual::sc_lightThemeTintColor;
  return result;
}
