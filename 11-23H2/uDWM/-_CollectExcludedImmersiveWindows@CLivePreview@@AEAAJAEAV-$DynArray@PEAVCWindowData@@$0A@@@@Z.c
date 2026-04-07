/*
 * XREFs of ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800C76E8
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800C705C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180012434 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ @ 0x180021304 (-IsWindowVisibleAndUncloaked@CWindowData@@QEBA_NXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002B8A0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18003A9B0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x1800C8390 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CLivePreview::_CollectExcludedImmersiveWindows(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  struct _LIST_ENTRY *WindowListForDesktop; // r12
  struct _LIST_ENTRY *Flink; // r14
  CWindowData *v8; // rcx
  int *v9; // rsi
  unsigned int v10; // ebp
  int Flink_high; // r15d
  char ShouldCloneWindow; // al
  unsigned int v13; // eax
  unsigned int v14; // r8d
  int v15; // esi
  int v16; // r9d
  unsigned int v17; // eax
  CWindowData *v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+80h] [rbp+18h] BYREF
  int v21; // [rsp+84h] [rbp+1Ch]
  CWindowData **v22; // [rsp+88h] [rbp+20h] BYREF

  v20 = 10;
  v3 = *(_QWORD *)(a1 + 296);
  v21 = 8;
  v5 = 0;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           v3);
  Flink = WindowListForDesktop->Flink;
  if ( WindowListForDesktop->Flink == WindowListForDesktop )
    return v5;
  while ( 2 )
  {
    v8 = (CWindowData *)Flink;
    v9 = &v20;
    v19 = (CWindowData *)Flink;
    v10 = 0;
    Flink_high = HIDWORD(Flink[8].Flink);
    while ( 1 )
    {
      if ( Flink_high == *v9 )
      {
        ShouldCloneWindow = CTransitionVisualController::ShouldCloneWindow(*((HWND *)v8 + 5));
        v8 = v19;
        if ( ShouldCloneWindow )
        {
          if ( CWindowData::IsWindowVisibleAndUncloaked(v19) )
            break;
        }
      }
      ++v10;
      ++v9;
      if ( v10 >= 2 )
        goto LABEL_14;
    }
    if ( !(unsigned int)CLivePreview::_GetCoverageStateOfWindow(a1, v8) )
    {
      v13 = *(_DWORD *)(a2 + 24);
      v14 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
        v5 = -2147024362;
        v17 = 181;
        v15 = -2147024362;
        v16 = -2147024362;
      }
      else
      {
        v5 = 0;
        if ( v14 <= *(_DWORD *)(a2 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)a2 + 8LL * v13) = v19;
          *(_DWORD *)(a2 + 24) = v14;
          goto LABEL_14;
        }
        v22 = &v19;
        v15 = DynArrayImpl<0>::Grow((char **)a2, 8u, 1, 0, (unsigned __int64 *)&v22);
        v5 = v15;
        if ( v15 >= 0 )
        {
          *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(a2 + 24))++) + *(_QWORD *)a2) = *v22;
          goto LABEL_14;
        }
        v16 = v15;
        v17 = 192;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v17);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x2C7u);
      return v5;
    }
LABEL_14:
    Flink = Flink->Flink;
    if ( Flink != WindowListForDesktop )
      continue;
    return v5;
  }
}
