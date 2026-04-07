/*
 * XREFs of ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180006834
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18000670C (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180005D7C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800063C4 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?MakeIconicRepresentation@CTopLevelWindow@@QEAAXXZ @ 0x180006C1C (-MakeIconicRepresentation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180006C2C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800077FC (--0CWindowData@@QEAA@XZ.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800079A0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180007B4C (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180008370 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800084C4 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180008544 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800085D4 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800087D8 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180023A5C (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180027CFC (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18002F080 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?Create@CContainerVisual@@SAJPEAPEAV1@@Z @ 0x18003DF7C (-Create@CContainerVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008CBC4 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowIconic::Initialize(CWindowIconic *this, struct CWindowData *a2)
{
  CWindowData *v4; // rax
  struct CWindowData *v5; // rax
  int CentralImage; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  CContainerVisual **v10; // r14
  bool v11; // r8
  CContainerVisual **v12; // rsi
  bool v13; // r8
  unsigned int v15; // [rsp+20h] [rbp-28h]
  CWindowData *v16; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 4) = 5;
  v4 = (CWindowData *)DefaultHeap::AllocClear(0x3A0uLL);
  v16 = v4;
  if ( v4 )
    v5 = CWindowData::CWindowData(v4);
  else
    v5 = 0LL;
  *((_QWORD *)this + 10) = v5;
  if ( !v5 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x64u, 0LL);
    return v7;
  }
  CentralImage = CTopLevelWindow::Create(v5, (struct CTopLevelWindow **)this + 11);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 105;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CentralImage, v15, 0LL);
    return v7;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 488LL) = this;
  CTopLevelWindow::MakeIconicRepresentation(*((CTopLevelWindow **)this + 11));
  *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 40LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 32LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 920LL) = *((_QWORD *)a2 + 115);
  v8 = *((_QWORD *)this + 9);
  v9 = *((_QWORD *)this + 10);
  *(_OWORD *)(v9 + 336) = *(_OWORD *)(v8 + 336);
  *(_OWORD *)(v9 + 352) = *(_OWORD *)(v8 + 352);
  *(_OWORD *)(v9 + 368) = *(_OWORD *)(v8 + 368);
  *(_OWORD *)(v9 + 384) = *(_OWORD *)(v8 + 384);
  *(_QWORD *)(v9 + 400) = *(_QWORD *)(v8 + 400);
  *(_BYTE *)(*((_QWORD *)this + 10) + 737LL) |= 0x10u;
  v10 = (CContainerVisual **)((char *)this + 104);
  CentralImage = CCanvasVisual::Create((struct CCanvasVisual **)this + 13);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 133;
    goto LABEL_22;
  }
  CentralImage = CImage::Create((struct CImage **)this + 12);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 134;
    goto LABEL_22;
  }
  CentralImage = CContainerVisual::AddChild(*v10, *((struct CVisual **)this + 12), v11);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 135;
    goto LABEL_22;
  }
  v12 = (CContainerVisual **)((char *)this + 112);
  CentralImage = CContainerVisual::Create((struct CContainerVisual **)this + 14);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 136;
    goto LABEL_22;
  }
  CentralImage = CContainerVisual::AddChild(*v12, *v10, v13);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 137;
    goto LABEL_22;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 144LL) = *((_QWORD *)*v12 + 2);
  LODWORD(v16) = 0;
  CIconicBitmapRegistry::RegisterIconicRepresentation(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
    this,
    (enum IconicRepresentationType *)&v16);
  CentralImage = CWindowIconic::SetRepresentationType(this, (unsigned int)v16, 0LL);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 145;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnColorizationUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 146;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnAlphaUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 147;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnTitleUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 148;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnIconUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 149;
    goto LABEL_22;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    CentralImage = CWindowIconic::SetBitmap(
                     this,
                     *(struct CBitmapSource **)(*((_QWORD *)this + 9) + 432LL),
                     (*(_BYTE *)(*((_QWORD *)this + 9) + 738LL) & 4) != 0,
                     0);
    v7 = CentralImage;
    if ( CentralImage < 0 )
    {
      v15 = 152;
      goto LABEL_22;
    }
  }
  CentralImage = CWindowIconic::LoadCentralImage(this);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 154;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::OnWindowStyleUpdated(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 155;
    goto LABEL_22;
  }
  CentralImage = CWindowIconic::UpdateSizeOrMargins(this, 0);
  v7 = CentralImage;
  if ( CentralImage < 0 )
  {
    v15 = 156;
    goto LABEL_22;
  }
  if ( *((_BYTE *)this + 20) )
    CTopLevelWindow::ShowWindow(*((CTopLevelWindow **)this + 11), 1);
  return v7;
}
