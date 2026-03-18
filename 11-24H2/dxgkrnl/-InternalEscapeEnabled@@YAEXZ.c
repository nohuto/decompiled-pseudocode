/*
 * XREFs of ?InternalEscapeEnabled@@YAEXZ @ 0x14018B96C
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x14018AED8 (DxgkpIsDrtEnabled.c)
 */

unsigned __int8 InternalEscapeEnabled(void)
{
  char v0; // bl

  v0 = 0;
  if ( g_OSTestSigningEnabled || DxgkpIsDrtEnabled() )
    return 1;
  return v0;
}
