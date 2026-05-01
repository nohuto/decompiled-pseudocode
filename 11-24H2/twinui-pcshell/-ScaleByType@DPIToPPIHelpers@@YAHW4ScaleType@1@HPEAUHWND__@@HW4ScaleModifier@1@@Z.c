/*
 * XREFs of ?ScaleByType@DPIToPPIHelpers@@YAHW4ScaleType@1@HPEAUHWND__@@HW4ScaleModifier@1@@Z @ 0x180687AE0
 * Callers:
 *     s_DrawGlyph @ 0x180684E60 (s_DrawGlyph.c)
 *     s_OnDrawItemHelper @ 0x1806857A0 (s_OnDrawItemHelper.c)
 *     s_OnMeasureItem @ 0x180686324 (s_OnMeasureItem.c)
 * Callees:
 *     <none>
 */

int __fastcall DPIToPPIHelpers::ScaleByType(int a1, unsigned int a2, HWND a3, int a4)
{
  if ( a1 == 1 )
    return DPIToPPIHelpers::ScaleByPPI(a2, a3, 0);
  else
    return DPIToPPIHelpers::ScaleBySpecificDPI((HWND)a2, a4, 0);
}
