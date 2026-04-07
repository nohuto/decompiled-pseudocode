/*
 * XREFs of ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180020B10
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A1630 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180020B60 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCanvasVisual::UpdateLayout(CCanvasVisual *this)
{
  int updated; // eax
  unsigned int v2; // ebx

  updated = CRenderDataVisual::UpdateLayout(this, 1);
  v2 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x39u, 0LL);
  return v2;
}
