/*
 * XREFs of ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180020B60
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18001F970 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?UpdateLayout@CCanvasVisual@@UEAAJ_N@Z @ 0x180020B10 (-UpdateLayout@CCanvasVisual@@UEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x180020BC0 (-UpdateLayout@CContainerVisual@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateLayout(CRenderDataVisual *this, bool a2)
{
  int updated; // eax
  unsigned int v4; // ebx

  updated = CContainerVisual::UpdateLayout(this, a2);
  v4 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x51u, 0LL);
  else
    (*(void (__fastcall **)(CRenderDataVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4LL);
  return v4;
}
