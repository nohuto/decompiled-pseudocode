/*
 * XREFs of ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x1800E66E4
 * Callers:
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18006DAA6 (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJXZ @ 0x1800C7D34 (-_FadeOutToGlass@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?SendSetOpacity@CVisual@@MEAAJN@Z @ 0x180019E50 (-SendSetOpacity@CVisual@@MEAAJN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::SetLivePreviewAlpha(CVisualProxy **this, double a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisual::SendSetOpacity(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x1190u);
  return v3;
}
