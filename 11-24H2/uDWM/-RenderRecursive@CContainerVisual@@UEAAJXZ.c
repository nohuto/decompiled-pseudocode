/*
 * XREFs of ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x180020E90
 * Callers:
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180005D7C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800063C4 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18000728C (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800079A0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800084C4 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180008544 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800085D4 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800087D8 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008B44 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001C608 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x180032CC4 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x18004942C (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180061124 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?CancelCrossfade@CButton@@QEAAJXZ @ 0x18007F2EC (-CancelCrossfade@CButton@@QEAAJXZ.c)
 *     ?OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z @ 0x180099C54 (-OnSettingsUpdated@CWindowIconic@@QEAAJK_N@Z.c)
 *     ?_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18009A68C (-_RecursivelyRenderOwnedWindows@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?OnTransparencyPolicyUpdated@CAcrylicSheet@@QEAAJXZ @ 0x1800A2258 (-OnTransparencyPolicyUpdated@CAcrylicSheet@@QEAAJXZ.c)
 *     ?SetIsLightTheme@CAcrylicSheet@@QEAAJ_N@Z @ 0x1800A22B0 (-SetIsLightTheme@CAcrylicSheet@@QEAAJ_N@Z.c)
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___ @ 0x1800DC864 (CTransitionVisualController--ForEachOwnedWindow__lambda_6dbdf9e79a6466586a7973a857b99254___.c)
 *     ?_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z @ 0x1800DE050 (-_RestoreWindowVisual@CTransitionVisualController@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetIterator@VisualCollection@@QEAA?AVVisualCollectionIterator@@XZ @ 0x180021010 (-GetIterator@VisualCollection@@QEAA-AVVisualCollectionIterator@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CContainerVisual::RenderRecursive(CContainerVisual *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  int v5; // eax
  int v7; // eax
  unsigned int v8; // edi
  char v9; // r12
  __int64 v10; // r15
  char v11; // si
  unsigned int v12; // edi
  __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // r14d
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // [rsp+20h] [rbp-38h] BYREF
  int v19; // [rsp+28h] [rbp-30h]
  unsigned int v20; // [rsp+2Ch] [rbp-2Ch]
  char v21; // [rsp+30h] [rbp-28h]
  char v22; // [rsp+31h] [rbp-27h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( (*((_DWORD *)this + 8) & 0xFFFFFFFE) != 0 )
  {
    v7 = (*(__int64 (__fastcall **)(CContainerVisual *))(*(_QWORD *)this + 32LL))(this);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\containervisual.cpp",
        (const char *)(unsigned int)v7,
        v18);
      return v8;
    }
  }
  v4 = 0;
LABEL_3:
  v5 = *((_DWORD *)this + 8);
  if ( (v5 & 1) != 0 && v4 < 3 )
  {
    ++v4;
    VisualCollection::GetIterator((char *)this + 144, &v18, a3);
    v9 = v22;
    v10 = v18;
    v11 = v21;
    v12 = v20;
    while ( v11 )
    {
      if ( !v9 )
        goto LABEL_12;
LABEL_13:
      if ( v12 == -1 )
      {
        v22 = 1;
LABEL_18:
        if ( v19 == *(_DWORD *)(v10 + 40) )
          *((_DWORD *)this + 8) &= ~1u;
        goto LABEL_3;
      }
      if ( v9 )
        goto LABEL_18;
      v13 = *(_QWORD *)(*(_QWORD *)(v10 + 8) + 8LL * v12);
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
      v15 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x62,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\containervisual.cpp",
          (const char *)(unsigned int)v14,
          v18);
        return v15;
      }
    }
    v12 = *(_DWORD *)(v10 + 32);
    v11 = 1;
LABEL_12:
    --v12;
    goto LABEL_13;
  }
  if ( (v5 & 0xFFFFFFFE) == 0 )
    return 0LL;
  v16 = (*(__int64 (__fastcall **)(CContainerVisual *))(*(_QWORD *)this + 40LL))(this);
  v17 = v16;
  if ( v16 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x77,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\containervisual.cpp",
    (const char *)(unsigned int)v16,
    v18);
  return v17;
}
