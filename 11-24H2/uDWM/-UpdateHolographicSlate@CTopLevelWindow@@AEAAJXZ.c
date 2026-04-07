/*
 * XREFs of ?UpdateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x18002CC48
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18002D020 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x1800DABC8 (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateHolographicSlate(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  int HolographicSlate; // eax

  v1 = 0;
  if ( (*((_BYTE *)this + 201) & 2) != 0 )
  {
    HolographicSlate = CTopLevelWindow::CreateHolographicSlate(this);
    v1 = HolographicSlate;
    if ( HolographicSlate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, HolographicSlate, 0x13Bu, 0LL);
  }
  else
  {
    CTopLevelWindow::ReleaseHolographicSlate(this);
  }
  return v1;
}
