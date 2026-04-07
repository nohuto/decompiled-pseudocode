/*
 * XREFs of ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x18007A5F4
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x1800F2E90 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 * Callees:
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180023A5C (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::SetHolographic(CTopLevelWindow *this, char a2)
{
  unsigned int v3; // ebx
  char v4; // cl
  int updated; // eax

  v3 = 0;
  v4 = *((_BYTE *)this + 201);
  if ( a2 != ((v4 & 2) != 0) )
  {
    *((_BYTE *)this + 201) = (2 * a2) | v4 & 0xFD;
    updated = CTopLevelWindow::UpdateWindowVisuals(this);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x115u, 0LL);
    else
      CTopLevelWindow::ShowWindow(this, (*((_BYTE *)this + 201) & 2) == 0);
  }
  return v3;
}
