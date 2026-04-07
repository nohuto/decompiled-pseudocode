/*
 * XREFs of ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x1800122C0
 * Callers:
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x1800121D8 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x18000F370 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180036F9C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x1800E5968 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::_AddWindow(CDesktopThumbnailBase *this, struct CWindowData *a2)
{
  volatile signed __int32 *v2; // rsi
  int v5; // eax
  unsigned int v6; // edi
  CBaseObject *v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v11; // eax
  int v12; // eax
  bool v13; // [rsp+20h] [rbp-20h]
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v15; // [rsp+70h] [rbp+30h] BYREF
  CTopLevelWindow *v16; // [rsp+78h] [rbp+38h] BYREF
  CBaseObject *v17; // [rsp+80h] [rbp+40h] BYREF

  v2 = (volatile signed __int32 *)*((_QWORD *)a2 + 55);
  v15 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(CDesktopThumbnailBase *))(*(_QWORD *)this + 224LL))(this)
    && (*((_DWORD *)a2 + 29) & 0x20000000) != 0 )
  {
    v17 = 0LL;
    v16 = 0LL;
    CTopLevelWindow::GetLivePreviewVisual(a2, &v16, &v17);
    v12 = CTopLevelWindow::CloneVisualTreeForLivePreview(v16, 0, &v15);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x7Eu, 0LL);
LABEL_16:
      v7 = v15;
      goto LABEL_7;
    }
    if ( v17 )
      CBaseObject::Release(v17);
  }
  else
  {
    v5 = CTopLevelWindow::CloneVisualTreeForLivePreview((CTopLevelWindow *)v2, 0, &v15);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x84u, 0LL);
      goto LABEL_16;
    }
  }
  v7 = v15;
  v8 = *((_DWORD *)this + 68);
  *((_QWORD *)&v14 + 1) = v15;
  *(_QWORD *)&v14 = v2;
  v9 = v8 + 1;
  if ( v8 + 1 >= v8 )
  {
    if ( v9 > *((_DWORD *)this + 67) )
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 248, 16LL, 1LL, &v14);
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u, 0LL);
        goto LABEL_7;
      }
    }
    else
    {
      *(_OWORD *)(*((_QWORD *)this + 31) + 16LL * v8) = v14;
      *((_DWORD *)this + 68) = v9;
    }
    _InterlockedIncrement(v2 + 2);
    _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
    v7 = v15;
    VisualCollection::InsertRelative((CDesktopThumbnailBase *)((char *)this + 32), v15, 0LL, 0, v13);
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_7:
  if ( v7 )
    CBaseObject::Release(v7);
  return v6;
}
