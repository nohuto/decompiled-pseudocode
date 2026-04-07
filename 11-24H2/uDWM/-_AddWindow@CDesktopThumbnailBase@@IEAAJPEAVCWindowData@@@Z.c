/*
 * XREFs of ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCWindowData@@@Z @ 0x180011DDC
 * Callers:
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x180012A04 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 * Callees:
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x180002F8C (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180031D68 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180032DDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopThumbnailBase::_AddWindow(CDesktopThumbnailBase *this, struct CWindowData *a2)
{
  __int64 v2; // rax
  CTopLevelWindow *v4; // rsi
  int v6; // eax
  unsigned int v7; // edi
  CMILRefCountBase *v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // edx
  int v12; // eax
  int v13; // eax
  __int128 v14; // [rsp+30h] [rbp-10h] BYREF
  CMILRefCountBase *v15; // [rsp+70h] [rbp+30h] BYREF
  struct CTopLevelWindow *v16; // [rsp+78h] [rbp+38h] BYREF
  CBaseObject *v17; // [rsp+80h] [rbp+40h] BYREF

  v2 = *(_QWORD *)this;
  v4 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
  v15 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(CDesktopThumbnailBase *))(v2 + 216))(this)
    || (*((_DWORD *)a2 + 29) & 0x20000000) == 0 )
  {
    v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(v4, 0, &v15);
    v7 = v6;
    if ( v6 >= 0 )
      goto LABEL_3;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x7Du, 0LL);
LABEL_11:
    v8 = v15;
    goto LABEL_7;
  }
  v17 = 0LL;
  v16 = 0LL;
  CTopLevelWindow::GetLivePreviewVisual(a2, &v16, &v17);
  v12 = CTopLevelWindow::CloneVisualTreeForLivePreview(v16, 0, &v15);
  v7 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x77u, 0LL);
    goto LABEL_11;
  }
  if ( v17 )
    CBaseObject::Release(v17);
LABEL_3:
  v8 = v15;
  v9 = *((_DWORD *)this + 56);
  *((_QWORD *)&v14 + 1) = v15;
  *(_QWORD *)&v14 = v4;
  v10 = v9 + 1;
  if ( v9 + 1 < v9 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB3u, 0LL);
  }
  else
  {
    if ( v10 <= *((_DWORD *)this + 55) )
    {
      *(_OWORD *)(*((_QWORD *)this + 25) + 16LL * v9) = v14;
      *((_DWORD *)this + 56) = v10;
LABEL_6:
      CMILRefCountBase::AddRef(v4);
      CMILRefCountBase::AddRef(v8);
      CContainerVisual::InsertChildBefore(this, v8, 0LL);
      goto LABEL_7;
    }
    v13 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 200, 16LL, 1LL, &v14);
    if ( v13 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xBEu, 0LL);
  }
LABEL_7:
  if ( v8 )
    CBaseObject::Release(v8);
  return v7;
}
