/*
 * XREFs of ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180020780
 * Callers:
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x18001FE70 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 * Callees:
 *     ?UpdateLayout@CContainerVisual@@UEAAJ_N@Z @ 0x180020BC0 (-UpdateLayout@CContainerVisual@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateLayout(CAtlasedRectsVisual *this)
{
  int updated; // eax
  unsigned int v3; // ebx

  updated = CContainerVisual::UpdateLayout(this, 1);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x79u, 0LL);
  else
    (*(void (__fastcall **)(CAtlasedRectsVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  return v3;
}
