/*
 * XREFs of ?OnGraphicsDeviceLost@CWindowData@@QEAAXXZ @ 0x1800ED000
 * Callers:
 *     ?OnGraphicsDeviceLost@CWindowList@@QEAAXXZ @ 0x1800F1448 (-OnGraphicsDeviceLost@CWindowList@@QEAAXXZ.c)
 * Callees:
 *     ?OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ @ 0x1800DB4E0 (-OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowData::OnGraphicsDeviceLost(CWindowData *this)
{
  CTopLevelWindow *v1; // rcx

  v1 = (CTopLevelWindow *)*((_QWORD *)this + 55);
  if ( v1 )
    CTopLevelWindow::OnGraphicsDeviceLost(v1);
}
