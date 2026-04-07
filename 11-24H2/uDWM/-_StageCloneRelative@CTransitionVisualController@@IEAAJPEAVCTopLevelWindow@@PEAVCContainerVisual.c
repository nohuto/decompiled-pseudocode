/*
 * XREFs of ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_NPEAVCVisual@@22PEA_N@Z @ 0x180009360
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18004232C (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA_N@Z @ 0x18009A5B8 (-_StageClone@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCContainerVisual@@_N2PEA.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180006D78 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x1800076C4 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z @ 0x180031D68 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_NPEAPEAV1@@Z.c)
 *     ?InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x180032DDC (-InsertChildBefore@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x180088DB8 (-SetHitTestVisibility@CVisual@@QEAAJ_N@Z.c)
 *     ?AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18008C190 (-AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneRelative(
        CTransitionVisualController *this,
        struct tagPOINT *a2,
        struct CContainerVisual *a3,
        char a4,
        struct CVisual *a5,
        bool a6,
        bool a7,
        bool *a8)
{
  int v8; // r14d
  unsigned int v10; // ebx
  CTopLevelWindow *v14; // rcx
  int v15; // eax
  CVisual *v16; // r15
  struct CWindowData *WindowData; // rax
  LONG v18; // ecx
  bool v19; // dl
  int inserted; // eax
  unsigned int v21; // eax
  CTopLevelWindow *v22; // rcx
  struct CWindowData *v23; // rax
  bool v24; // al
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rax
  struct tagPOINT v31; // [rsp+30h] [rbp-30h] BYREF
  CBaseObject *v32; // [rsp+38h] [rbp-28h] BYREF
  __int128 v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h]

  v8 = 0;
  v32 = 0LL;
  v10 = 0;
  v31 = 0LL;
  if ( (*((_BYTE *)CTopLevelWindow::GetWindowData((CTopLevelWindow *)a2) + 736) & 4) != 0 )
    return v10;
  v15 = CTopLevelWindow::CloneVisualTreeForLivePreview(v14, 0, &v32);
  v16 = v32;
  v10 = v15;
  if ( v15 < 0 )
  {
    v8 = v15;
    v21 = 136;
  }
  else
  {
    WindowData = CTopLevelWindow::GetWindowData((CTopLevelWindow *)a2);
    if ( WindowData )
    {
      v18 = *((_DWORD *)WindowData + 12);
      v31.y = *((_DWORD *)WindowData + 13);
      v31.x = v18;
    }
    else
    {
      v31 = a2[8];
    }
    CVisual::SetOffset(v16, &v31);
    if ( a4 )
      CVisual::SetHitTestVisibility(v16, v19);
    if ( a6 )
    {
      inserted = CContainerVisual::InsertChildAfter(a3, v16, a5);
      v10 = inserted;
      if ( inserted < 0 )
      {
        v8 = inserted;
        v21 = 158;
        goto LABEL_32;
      }
LABEL_13:
      if ( a7
        && (!CTopLevelWindow::GetWindowData((CTopLevelWindow *)a2)
         || (*((_DWORD *)CTopLevelWindow::GetWindowData(v22) + 186) & 0x20000000) == 0) )
      {
        CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)a2, 1);
      }
      *(_QWORD *)&v33 = a2;
      *((_QWORD *)&v33 + 1) = v16;
      LOBYTE(v34) = a4;
      *(_WORD *)((char *)&v34 + 1) = 257;
      if ( a8 )
      {
        if ( *a8 )
        {
          v23 = CTopLevelWindow::GetWindowData((CTopLevelWindow *)a2);
          v24 = CTransitionVisualController::AllowSnapshotForSWR(*((HWND *)v23 + 5));
        }
        else
        {
          v24 = 0;
        }
        *a8 = v24;
        BYTE2(v34) = v24;
      }
      v25 = *((unsigned int *)this + 12);
      v26 = v25 + 1;
      if ( (int)v25 + 1 < (unsigned int)v25 )
      {
        v10 = -2147024362;
        v27 = 179;
        v8 = -2147024362;
LABEL_29:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v27, 0LL);
        v21 = 180;
        goto LABEL_32;
      }
      if ( v26 > *((_DWORD *)this + 11) )
      {
        v8 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 24, 24LL, 1LL, &v33);
        v10 = v8;
        if ( v8 < 0 )
        {
          v27 = 190;
          goto LABEL_29;
        }
      }
      else
      {
        v28 = 3 * v25;
        v29 = *((_QWORD *)this + 3);
        *(_OWORD *)(v29 + 8 * v28) = v33;
        *(_QWORD *)(v29 + 8 * v28 + 16) = v34;
        *((_DWORD *)this + 12) = v26;
      }
      v10 = v8;
      CMILRefCountBase::AddRef((CMILRefCountBase *)a2);
      return v10;
    }
    v10 = CContainerVisual::InsertChildBefore(a3, v16, a5);
    v8 = v10;
    if ( (v10 & 0x80000000) == 0 )
    {
      v8 = 0;
      goto LABEL_13;
    }
    v21 = 162;
  }
LABEL_32:
  MilInstrumentationCheckHR_MaybeFailFast(
    0x14u,
    &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
    2u,
    v8,
    v21,
    0LL);
  if ( v16 )
  {
    CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)a2, 0);
    CContainerVisual::RemoveChild(a3, v16);
    CBaseObject::Release(v16);
  }
  return v10;
}
