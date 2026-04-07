/*
 * XREFs of ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180106658
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x1801063D8 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180039180 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180047F08 (--0CWindowData@@QEAA@XZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18004C860 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z @ 0x18004E674 (-Create@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJPEAPEAV1@@Z @ 0x18004F93C (-Create@CVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x180054B7C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x1800C34D0 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180106A30 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106BD0 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106C50 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106D84 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106F0C (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180106FD8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180107100 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180107224 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18010761C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowIconic::Initialize(CWindowIconic *this, struct CWindowData *a2)
{
  CWindowData *v4; // rax
  struct CWindowData *v5; // rax
  unsigned int v6; // ebx
  int v7; // r9d
  CTopLevelWindow **v8; // r14
  int inserted; // eax
  unsigned __int64 *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rcx
  char *v13; // rsi
  unsigned int v15; // [rsp+20h] [rbp-28h]
  unsigned int v16; // [rsp+20h] [rbp-28h]
  unsigned int v17; // [rsp+20h] [rbp-28h]
  CWindowData *v18; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 4) = 5;
  v4 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        864LL);
  v18 = v4;
  if ( v4 )
    v5 = CWindowData::CWindowData(v4);
  else
    v5 = 0LL;
  *((_QWORD *)this + 10) = v5;
  if ( !v5 )
  {
    v6 = -2147024882;
    v7 = -2147024882;
    v16 = 101;
LABEL_6:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v16);
    return v6;
  }
  v8 = (CTopLevelWindow **)((char *)this + 88);
  inserted = CTopLevelWindow::Create(v5, (struct CTopLevelWindow **)this + 11);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 106;
LABEL_9:
    v7 = inserted;
    goto LABEL_6;
  }
  v10 = (unsigned __int64 *)((char *)this + 104);
  *(_QWORD *)(*((_QWORD *)this + 10) + 488LL) = this;
  *((_BYTE *)*v8 + 248) |= 0x20u;
  *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 40LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 32LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 856LL) = *((_QWORD *)a2 + 107);
  v11 = *((_QWORD *)this + 9);
  v12 = *((_QWORD *)this + 10);
  *(_OWORD *)(v12 + 336) = *(_OWORD *)(v11 + 336);
  *(_OWORD *)(v12 + 352) = *(_OWORD *)(v11 + 352);
  *(_OWORD *)(v12 + 368) = *(_OWORD *)(v11 + 368);
  *(_OWORD *)(v12 + 384) = *(_OWORD *)(v11 + 384);
  *(_QWORD *)(v12 + 400) = *(_QWORD *)(v11 + 400);
  *(_BYTE *)(*((_QWORD *)this + 10) + 673LL) |= 0x10u;
  inserted = CCanvasVisual::Create((struct CCanvasVisual **)this + 13);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 134;
    goto LABEL_9;
  }
  inserted = CImage::Create((struct CImage **)this + 12);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 135;
    goto LABEL_9;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*v10 + 32), *((_QWORD *)this + 12), 0LL, 0, v15);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 136;
    goto LABEL_9;
  }
  v13 = (char *)this + 112;
  inserted = CVisual::Create((struct CVisual **)this + 14);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 137;
    goto LABEL_9;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v13 + 32LL), *v10, 0LL, 0, v17);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 138;
    goto LABEL_9;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 144LL) = *(_QWORD *)(*(_QWORD *)v13 + 16LL);
  CIconicBitmapRegistry::RegisterIconicRepresentation(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 29),
    this,
    (enum IconicRepresentationType *)&v18);
  inserted = CWindowIconic::SetRepresentationType(this, (unsigned int)v18, 0LL);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 146;
    goto LABEL_9;
  }
  inserted = CWindowIconic::OnColorizationUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 147;
    goto LABEL_9;
  }
  inserted = CWindowIconic::OnAlphaUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 148;
    goto LABEL_9;
  }
  inserted = CWindowIconic::OnTitleUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 149;
    goto LABEL_9;
  }
  inserted = CWindowIconic::OnIconUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 150;
    goto LABEL_9;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    inserted = CWindowIconic::SetBitmap(
                 this,
                 *(struct CBitmapSource **)(*((_QWORD *)this + 9) + 432LL),
                 (*(_BYTE *)(*((_QWORD *)this + 9) + 674LL) & 4) != 0,
                 0);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v16 = 153;
      goto LABEL_9;
    }
  }
  inserted = CWindowIconic::LoadCentralImage(this);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 155;
    goto LABEL_9;
  }
  inserted = CWindowIconic::OnWindowStyleUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 156;
    goto LABEL_9;
  }
  inserted = CWindowIconic::UpdateSizeOrMargins(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v16 = 157;
    goto LABEL_9;
  }
  if ( *((_BYTE *)this + 20) )
    CTopLevelWindow::ShowWindow(*v8, 1);
  return v6;
}
