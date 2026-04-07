/*
 * XREFs of ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180047634
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800482A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18000D4E0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x1800E6340 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CWindowList::UpdateThumbnailsForNewWindow(CWindowList *this, struct CWindowData *a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  __int64 i; // rsi
  __int64 v7; // r14
  int v8; // eax
  CVisual *v9; // rcx
  int v10; // eax
  CThumbnailVisual *v11; // rcx
  int v12; // eax

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)a2 + 140) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)a2 + 67) + 8 * v3);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v2 = v8;
      if ( v8 < 0 )
        break;
      v9 = (CVisual *)*((_QWORD *)a2 + 55);
      if ( *(_BYTE *)(v7 + 34) )
      {
        v10 = *((_DWORD *)v9 + 22);
        if ( (v10 & 0x8000000) == 0 )
        {
          *((_DWORD *)v9 + 22) = v10 | 0x8000000;
          CVisual::PropagateDirtyChildren(v9);
        }
      }
      else
      {
        v12 = CTopLevelWindow::OnThumbnailAdded(v9, *(struct CVisual **)(v7 + 88));
        v2 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1A16u, 0LL);
          return v2;
        }
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)a2 + 140) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1A0Bu, 0LL);
  }
  else
  {
LABEL_2:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 148); i = (unsigned int)(i + 1) )
    {
      v11 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 71) + 8 * i) + 88LL);
      if ( v11 )
        CThumbnailVisual::SetDirtyFlags(v11, 0x2000);
    }
  }
  return v2;
}
