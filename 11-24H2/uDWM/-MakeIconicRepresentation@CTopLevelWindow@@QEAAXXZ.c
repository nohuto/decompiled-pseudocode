/*
 * XREFs of ?MakeIconicRepresentation@CTopLevelWindow@@QEAAXXZ @ 0x180006C1C
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180006834 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::MakeIconicRepresentation(CTopLevelWindow *this)
{
  *((_BYTE *)this + 200) |= 0x20u;
}
