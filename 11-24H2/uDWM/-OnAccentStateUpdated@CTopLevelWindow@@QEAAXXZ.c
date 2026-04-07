/*
 * XREFs of ?OnAccentStateUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18008B730
 * Callers:
 *     ?UpdateAccentState@CWindowList@@QEAAXXZ @ 0x180082944 (-UpdateAccentState@CWindowList@@QEAAXXZ.c)
 *     ?OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ @ 0x1800DB4E0 (-OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ.c)
 * Callees:
 *     ?OnAccentStateUpdated@CAccent@@QEAAXXZ @ 0x180098064 (-OnAccentStateUpdated@CAccent@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnAccentStateUpdated(CTopLevelWindow *this)
{
  CAccent *v1; // rcx

  v1 = (CAccent *)*((_QWORD *)this + 32);
  if ( v1 )
    CAccent::OnAccentStateUpdated(v1);
}
