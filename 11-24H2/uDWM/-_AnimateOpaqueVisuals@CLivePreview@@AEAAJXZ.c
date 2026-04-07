/*
 * XREFs of ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180055544
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045584 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x1800476AC (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 * Callees:
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180002DB0 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180008798 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x180055838 (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180055878 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x180072D70 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x180088304 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?IsLauncherVisible@CImmersiveState@@QEAA_NXZ @ 0x1800C6638 (-IsLauncherVisible@CImmersiveState@@QEAA_NXZ.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x1800C7E4C (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CLivePreview::_AnimateOpaqueVisuals(CLivePreview *this)
{
  char v2; // r15
  __int64 v3; // rbx
  __int64 v4; // r12
  unsigned int v5; // r13d
  unsigned int v6; // r8d
  int v7; // r14d
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int64 i; // r12
  __int64 v12; // r14
  __int64 v13; // r8
  struct CVisual *v14; // rbx
  struct CWindowData *MDIOwner; // rax
  __int64 *v16; // r15
  int v17; // eax
  CTopLevelWindow *LivePreviewWindow; // rax
  int v19; // eax
  int started; // eax
  void *v22[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+54h] [rbp-14h]
  unsigned int v24; // [rsp+58h] [rbp-10h]
  char v25; // [rsp+B0h] [rbp+48h]
  unsigned int v26; // [rsp+C0h] [rbp+58h]
  int v27; // [rsp+C8h] [rbp+60h]

  v27 = *((_DWORD *)this + 80);
  v2 = 0;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)v22, 0LL, 0);
  v3 = *((_QWORD *)this + 56);
  v4 = *((_QWORD *)this + 57);
  v5 = v24;
  while ( v3 != v4 )
  {
    v6 = v5 + 1;
    if ( v5 + 1 < v5 )
    {
      v7 = -2147024362;
      v8 = 179;
      goto LABEL_13;
    }
    if ( v6 > v23 )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v22, 8, 1, v3);
      if ( v7 < 0 )
      {
        v8 = 190;
LABEL_13:
        v9 = v7;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, v8, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x2DBu, 0LL);
        goto LABEL_45;
      }
      v5 = v24;
    }
    else
    {
      *((_QWORD *)v22[0] + v5++) = *(_QWORD *)v3;
      v24 = v6;
    }
    if ( *(_DWORD *)(*(_QWORD *)v3 + 128LL) == 1 )
      v2 = 1;
    v3 += 8LL;
  }
  if ( (*((_QWORD *)this + 57) == *((_QWORD *)this + 56) || v2) && *((_DWORD *)this + 122) != 4 )
  {
    v10 = CLivePreview::_CollectExcludedImmersiveWindows(this, v22);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x2E5u, 0LL);
      goto LABEL_45;
    }
    v5 = v24;
  }
  for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
  {
    v25 = 0;
    v12 = *((_QWORD *)v22[0] + i);
    v26 = v27
       || (*(_BYTE *)(v12 + 740) & 1) != 0
       || *(_DWORD *)(v12 + 128) != 1 && CImmersiveState::IsLauncherVisible(*((CImmersiveState **)this + 60));
    LODWORD(v13) = *((_DWORD *)this + 80);
    while ( 1 )
    {
      v13 = (unsigned int)(v13 - 1);
      if ( (int)v13 < 0 )
        break;
      if ( *(_QWORD *)(*((_QWORD *)this + 37) + 48 * v13 + 24) == *(_QWORD *)(v12 + 40) )
      {
        v25 = 1;
        break;
      }
    }
    v14 = 0LL;
    if ( (*(_BYTE *)(v12 + 737) & 1) != 0 )
    {
      MDIOwner = CWindowData::GetMDIOwner((HWND *)v12);
      if ( MDIOwner )
      {
        v16 = (__int64 *)((char *)MDIOwner + 40);
        if ( !v25 )
        {
          v17 = CLivePreview::_SetupWindowPreview(this, (__int64)MDIOwner, *v16, 1, v26, 0LL, 1);
          v9 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x30Cu, 0LL);
            goto LABEL_45;
          }
        }
        LivePreviewWindow = CLivePreview::_FindLivePreviewWindow(this, (HWND)*v16);
        v14 = LivePreviewWindow;
        if ( LivePreviewWindow )
          CTopLevelWindow::UpdateTitle(LivePreviewWindow, *(unsigned __int16 **)(v12 + 16));
      }
    }
    if ( !v25 )
    {
      v19 = CLivePreview::_SetupWindowPreview(this, v12, *(_QWORD *)(v12 + 40), 0, v26, v14, v14 == 0LL);
      v9 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, 0x31Au, 0LL);
        goto LABEL_45;
      }
    }
    CLivePreview::OnWindowTitleChange(this, (const struct CWindowData *)v12);
  }
  started = CLivePreview::_StartAnimateOpaqueVisuals(this);
  v9 = started;
  if ( started < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x320u, 0LL);
LABEL_45:
  DynArrayImpl<0>::~DynArrayImpl<0>(v22);
  return v9;
}
