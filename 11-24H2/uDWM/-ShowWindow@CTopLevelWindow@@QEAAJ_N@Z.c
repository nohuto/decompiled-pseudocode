/*
 * XREFs of ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180023A5C
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180006834 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008B44 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800132D0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18001A6A4 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180024708 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x180074118 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetHolographic@CTopLevelWindow@@QEAAJ_N@Z @ 0x18007A5F4 (-SetHolographic@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18008F480 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180098420 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?Hide@CVisual@@QEAAXXZ @ 0x18002237C (-Hide@CVisual@@QEAAXXZ.c)
 *     ?ShouldHitTest@CTopLevelWindow@@AEBA_NXZ @ 0x180023B88 (-ShouldHitTest@CTopLevelWindow@@AEBA_NXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180023BB4 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x180023BDC (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x1800D0234 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ShowWindow(CTopLevelWindow *this, char a2)
{
  char *v2; // rsi
  bool ShouldHitTest; // al
  CVisual *v6; // r8
  CVisual *v7; // rcx
  bool v8; // dl
  unsigned int v9; // r14d
  CProjectionBorderVisual *v10; // rcx
  __int64 result; // rax
  bool v12; // dl
  struct CVisual *v13; // rdx
  CContainerVisual *v14; // rcx

  v2 = (char *)this + 712;
  if ( *((char *)this + 200) < 0 )
  {
    a2 = 1;
  }
  else if ( (*(_BYTE *)(*(_QWORD *)v2 + 740LL) & 1) != 0 || (*((_BYTE *)this + 201) & 2) != 0 )
  {
    a2 = 0;
  }
  if ( a2 )
  {
    v7 = (CVisual *)*((_QWORD *)this + 28);
    v8 = 1;
LABEL_8:
    v9 = CVisual::ConnectToParent(v7, v8);
    if ( (*((_BYTE *)this + 200) & 1) != 0 )
    {
      CVisual::Unhide(this);
      *((_BYTE *)this + 200) &= ~1u;
    }
    goto LABEL_10;
  }
  ShouldHitTest = CTopLevelWindow::ShouldHitTest(this);
  v7 = v6;
  if ( !ShouldHitTest )
  {
    v8 = 0;
    goto LABEL_8;
  }
  v9 = CVisual::ConnectToParent(v6, 1);
  if ( (*((_BYTE *)this + 200) & 1) == 0 )
  {
    CVisual::Hide(this);
    *((_BYTE *)this + 200) |= 1u;
  }
LABEL_10:
  v10 = *(CProjectionBorderVisual **)(*(_QWORD *)v2 + 464LL);
  if ( v10 )
  {
    v12 = a2 && (*((_BYTE *)this + 201) & 1) == 0;
    CProjectionBorderVisual::Show(v10, v12);
    v13 = *(struct CVisual **)(*(_QWORD *)v2 + 464LL);
    v14 = (CContainerVisual *)*((_QWORD *)v13 + 3);
    if ( v14 )
      CContainerVisual::InsertChildAfter(v14, v13, this);
  }
  result = v9;
  *((_BYTE *)this + 816) = 1;
  return result;
}
