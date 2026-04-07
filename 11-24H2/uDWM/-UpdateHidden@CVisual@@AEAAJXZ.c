/*
 * XREFs of ?UpdateHidden@CVisual@@AEAAJXZ @ 0x18007787C
 * Callers:
 *     ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ @ 0x180022710 (-ValidateVisualPostSubgraph@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z @ 0x1800778C8 (-SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CVisual::UpdateHidden(CVisualProxy **this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CVisualProxy::SetExcludeSubtree(this[2], *((_DWORD *)this + 10) != 0);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x337u, 0LL);
  return v2;
}
