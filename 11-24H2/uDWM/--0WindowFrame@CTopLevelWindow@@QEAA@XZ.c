/*
 * XREFs of ??0WindowFrame@CTopLevelWindow@@QEAA@XZ @ 0x18000AB58
 * Callers:
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18000AA30 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009BD74 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=6
CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::WindowFrame::WindowFrame(CTopLevelWindow::WindowFrame *this)
{
  *(_QWORD *)this = &CTopLevelWindow::WindowFrame::`vftable';
  CBitmapSourceArray::CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 8));
  CBitmapSourceArray::CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 40));
  CBitmapSourceArray::CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 72));
  CBitmapSourceArray::CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 104));
  CBitmapSourceArray::CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 136));
  CBitmapSourceArray::CBitmapSourceArray((CTopLevelWindow::WindowFrame *)((char *)this + 168));
  `eh vector constructor iterator'(
    (char *)this + 200,
    0x140uLL,
    4uLL,
    (void (*)(void *))CTopLevelWindow::WindowFrame::DPIImages::DPIImages,
    (void (*)(void *))CTopLevelWindow::WindowFrame::DPIImages::~DPIImages);
  return this;
}
