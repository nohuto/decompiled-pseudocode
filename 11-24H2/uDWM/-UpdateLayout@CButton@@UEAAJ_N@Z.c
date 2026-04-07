/*
 * XREFs of ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x18001FE70
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180020780 (-UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x18002262C (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CButton::UpdateLayout(CButton *this, bool a2)
{
  int updated; // eax
  unsigned int v4; // ebx

  updated = CAtlasedRectsVisual::UpdateLayout(this, a2);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xCCu, 0LL);
  else
    CButton::UpdateAtlasPositionAndSize(this);
  return v4;
}
