/*
 * XREFs of ?InternalEscapeEnabled@@YAEXZ @ 0x14018971C
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x140188BF0 (DxgkpIsDrtEnabled.c)
 */

unsigned __int8 InternalEscapeEnabled(void)
{
  char v0; // bl

  v0 = 0;
  if ( g_OSTestSigningEnabled || DxgkpIsDrtEnabled() )
    return 1;
  return v0;
}
