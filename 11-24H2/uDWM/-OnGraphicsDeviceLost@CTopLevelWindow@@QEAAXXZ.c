/*
 * XREFs of ?OnGraphicsDeviceLost@CTopLevelWindow@@QEAAXXZ @ 0x1800DB4E0
 * Callers:
 *     ?OnGraphicsDeviceLost@CWindowData@@QEAAXXZ @ 0x1800ED000 (-OnGraphicsDeviceLost@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D960 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnAccentStateUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18008B730 (-OnAccentStateUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnGraphicsDeviceLost@CAccent@@QEAAXXZ @ 0x1800A1404 (-OnGraphicsDeviceLost@CAccent@@QEAAXXZ.c)
 *     ?OnGraphicsDeviceLost@CDWriteText@@QEAAXXZ @ 0x1800C2F1C (-OnGraphicsDeviceLost@CDWriteText@@QEAAXXZ.c)
 *     ?OnGraphicsDeviceLost@CWindowBorder@@QEAAXXZ @ 0x1800EC7D0 (-OnGraphicsDeviceLost@CWindowBorder@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::OnGraphicsDeviceLost(CTopLevelWindow *this)
{
  CAccent *v2; // rcx
  CDWriteText *v3; // rcx
  CWindowBorder *v4; // rcx

  v2 = (CAccent *)*((_QWORD *)this + 32);
  if ( v2 )
  {
    CAccent::OnGraphicsDeviceLost(v2);
    CTopLevelWindow::OnAccentStateUpdated(this);
  }
  v3 = (CDWriteText *)*((_QWORD *)this + 65);
  if ( v3 )
  {
    CDWriteText::OnGraphicsDeviceLost(v3);
    CVisual::SetDirtyFlags(this, 4096);
  }
  v4 = (CWindowBorder *)*((_QWORD *)this + 28);
  if ( v4 )
  {
    CWindowBorder::OnGraphicsDeviceLost(v4);
    CVisual::SetDirtyFlags(this, 0x100000);
  }
}
