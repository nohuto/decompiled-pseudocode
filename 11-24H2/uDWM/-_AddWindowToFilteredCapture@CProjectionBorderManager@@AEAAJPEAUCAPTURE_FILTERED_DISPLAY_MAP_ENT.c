/*
 * XREFs of ?_AddWindowToFilteredCapture@CProjectionBorderManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@PEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800CE9A4
 * Callers:
 *     ?OnWindowZOrderUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180074AD0 (-OnWindowZOrderUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CB590 (-AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAP.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800CE538 (-_AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@AEAAJPEAUHWND__@@_NPEAUCAPTU.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z @ 0x18002639C (-InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800405C0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180043FD0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z @ 0x1800778C8 (-SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180096A00 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ @ 0x1800B06C0 (-ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ.c)
 *     ?InsertAt@?$DynArray@PEAUCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@$0A@@@QEAAJAEBQEAUCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@I@Z @ 0x1800CBF80 (-InsertAt@-$DynArray@PEAUCAPTURE_FILTERED_WINDOW@CProjectionBorderManager@@$0A@@@QEAAJAEBQEAUCAP.c)
 *     ?InsertAt@?$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJAEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800CC05C (-InsertAt@-$DynArray@U_DWMCaptureWindowInformation@@$0A@@@QEAAJAEBU_DWMCaptureWindowInformation@.c)
 */

__int64 __fastcall CProjectionBorderManager::_AddWindowToFilteredCapture(
        CProjectionBorderManager *this,
        struct CProjectionBorderManager::CAPTURE_FILTERED_DISPLAY_MAP_ENTRY *a2,
        struct CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *a3,
        struct CWindowData *a4)
{
  CTopLevelWindow *v6; // rcx
  struct CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *v7; // r9
  int v8; // r15d
  struct CVisualProxy *v9; // r12
  unsigned __int8 v10; // r13
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  const char *Blink; // r9
  struct _LIST_ENTRY *v13; // rcx
  int v14; // edx
  struct _LIST_ENTRY *i; // rcx
  int v16; // edx
  unsigned int v17; // r14d
  int inserted; // edi
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // eax
  int v24; // r9d
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // r9d
  unsigned int v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // eax
  int v32; // r9d
  unsigned int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // eax
  int v36; // r9d
  char ShouldExcludeFromFilteredCaptures; // [rsp+30h] [rbp-50h]
  struct CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *v39; // [rsp+38h] [rbp-48h] BYREF
  __m256i v40; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v41; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v39 = a3;
  memset(&v40, 0, sizeof(v40));
  v6 = (CTopLevelWindow *)*((_QWORD *)a4 + 55);
  v40.m256i_i64[0] = *(_QWORD *)a3;
  *(_OWORD *)&v40.m256i_u64[1] = *((_OWORD *)a4 + 3);
  if ( v6 )
    *(struct tagRECT *)&v40.m256i_u64[1] = *CTopLevelWindow::GetActualWindowRect(v6, &v41, 0, 1, 1);
  ShouldExcludeFromFilteredCaptures = CWindowData::ShouldExcludeFromFilteredCaptures((CTopLevelWindow **)a4);
  v40.m256i_i8[24] = ShouldExcludeFromFilteredCaptures == 0;
  if ( !*((_DWORD *)a2 + 24) )
  {
    v29 = *((_DWORD *)a2 + 24);
    v30 = v29 + 1;
    if ( v29 + 1 < v29 )
    {
      inserted = -2147024362;
      v31 = 179;
      v32 = -2147024362;
LABEL_74:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v32, v31, 0LL);
      v20 = 2663LL;
      goto LABEL_75;
    }
    if ( v30 > *((_DWORD *)a2 + 23) )
    {
      inserted = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 72, 8, 1, &v39);
      v32 = inserted;
      if ( inserted < 0 )
      {
        v31 = 190;
        goto LABEL_74;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a2 + 9) + 8LL * *((unsigned int *)a2 + 24)) = v7;
      *((_DWORD *)a2 + 24) = v30;
    }
    v33 = *((_DWORD *)a2 + 32);
    v34 = v33 + 1;
    if ( v33 + 1 < v33 )
    {
      inserted = -2147024362;
      v35 = 179;
      v36 = -2147024362;
LABEL_72:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, v35, 0LL);
      v20 = 2664LL;
      goto LABEL_75;
    }
    if ( v34 > *((_DWORD *)a2 + 31) )
    {
      inserted = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 104, 32, 1, &v40);
      v36 = inserted;
      if ( inserted < 0 )
      {
        v35 = 190;
        goto LABEL_72;
      }
    }
    else
    {
      *(__m256i *)(32LL * *((unsigned int *)a2 + 32) + *((_QWORD *)a2 + 13)) = v40;
      *((_DWORD *)a2 + 32) = v34;
    }
    inserted = CContainerVisualProxy::InsertChild(
                 *((CContainerVisualProxy **)a2 + 8),
                 *((struct CVisualProxy **)v39 + 1),
                 0LL,
                 0);
    if ( inserted < 0 )
    {
      v20 = 2665LL;
      goto LABEL_75;
    }
    goto LABEL_68;
  }
  v8 = -1;
  v9 = 0LL;
  v10 = 0;
  if ( *(struct CWindowData **)a4 == a4 && *((struct CWindowData **)a4 + 1) == a4 )
  {
LABEL_40:
    v21 = *((_DWORD *)a2 + 24);
    v22 = v21 + 1;
    if ( v21 + 1 < v21 )
    {
      inserted = -2147024362;
      v23 = 179;
      v24 = -2147024362;
LABEL_55:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, v23, 0LL);
      v20 = 2656LL;
      goto LABEL_75;
    }
    if ( v22 > *((_DWORD *)a2 + 23) )
    {
      inserted = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 72, 8, 1, &v39);
      v24 = inserted;
      if ( inserted < 0 )
      {
        v23 = 190;
        goto LABEL_55;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a2 + 9) + 8LL * *((unsigned int *)a2 + 24)) = v7;
      *((_DWORD *)a2 + 24) = v22;
    }
    v25 = *((_DWORD *)a2 + 32);
    v26 = v25 + 1;
    if ( v25 + 1 < v25 )
    {
      inserted = -2147024362;
      v27 = 179;
      v28 = -2147024362;
LABEL_53:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v28, v27, 0LL);
      v20 = 2657LL;
      goto LABEL_75;
    }
    if ( v26 > *((_DWORD *)a2 + 31) )
    {
      inserted = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2 + 104, 32, 1, &v40);
      v28 = inserted;
      if ( inserted < 0 )
      {
        v27 = 190;
        goto LABEL_53;
      }
    }
    else
    {
      *(__m256i *)(32LL * *((unsigned int *)a2 + 32) + *((_QWORD *)a2 + 13)) = v40;
      *((_DWORD *)a2 + 32) = v26;
    }
    inserted = CContainerVisualProxy::InsertChild(
                 *((CContainerVisualProxy **)a2 + 8),
                 *((struct CVisualProxy **)v39 + 1),
                 0LL,
                 0);
    if ( inserted < 0 )
    {
      v20 = 2658LL;
      goto LABEL_75;
    }
    goto LABEL_68;
  }
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                           *((_QWORD *)a4 + 17));
  v13 = (struct _LIST_ENTRY *)*((_QWORD *)a4 + 1);
  if ( v13 != WindowListForDesktop )
  {
    while ( 1 )
    {
      Blink = (const char *)retaddr;
      if ( v13 == (struct _LIST_ENTRY *)a4 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xA1B,
          (int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
          (const char *)retaddr);
      if ( v13 )
      {
        v8 = -1;
        v14 = 0;
        if ( *((_DWORD *)a2 + 24) )
        {
          Blink = (const char *)v13[2].Blink;
          while ( **(const char ***)(*((_QWORD *)a2 + 9) + 8LL * (unsigned int)v14) != Blink )
          {
            if ( (unsigned int)++v14 >= *((_DWORD *)a2 + 24) )
              goto LABEL_15;
          }
          v8 = v14;
          if ( v14 >= 0 )
            break;
        }
      }
LABEL_15:
      v13 = v13->Blink;
      if ( v13 == WindowListForDesktop )
        goto LABEL_16;
    }
    _mm_lfence();
    v10 = 1;
    v9 = *(struct CVisualProxy **)(*(_QWORD *)(*((_QWORD *)a2 + 9) + 8LL * (unsigned int)v14) + 8LL);
    if ( v9 )
      goto LABEL_30;
  }
LABEL_16:
  for ( i = *(struct _LIST_ENTRY **)a4; i != WindowListForDesktop; i = i->Flink )
  {
    if ( i == (struct _LIST_ENTRY *)a4 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xA39,
        (int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
        Blink);
    if ( i )
    {
      v8 = -1;
      v16 = 0;
      if ( *((_DWORD *)a2 + 24) )
      {
        Blink = (const char *)i[2].Blink;
        while ( **(const char ***)(*((_QWORD *)a2 + 9) + 8LL * (unsigned int)v16) != Blink )
        {
          if ( (unsigned int)++v16 >= *((_DWORD *)a2 + 24) )
            goto LABEL_27;
        }
        v8 = v16;
        if ( v16 >= 0 )
        {
          _mm_lfence();
          v10 = 0;
          v9 = *(struct CVisualProxy **)(*(_QWORD *)(*((_QWORD *)a2 + 9) + 8LL * (unsigned int)v16) + 8LL);
          break;
        }
      }
    }
LABEL_27:
    ;
  }
  if ( !v9 )
  {
    v7 = v39;
    goto LABEL_40;
  }
LABEL_30:
  v17 = v8 + 1;
  if ( !v10 )
    v17 = v8;
  inserted = DynArray<CProjectionBorderManager::CAPTURE_FILTERED_WINDOW *,0>::InsertAt(
               (__int64)a2 + 72,
               (unsigned __int64)&v39,
               v17,
               (__int64)Blink);
  if ( inserted < 0 )
  {
    v20 = 2645LL;
    goto LABEL_75;
  }
  inserted = DynArray<_DWMCaptureWindowInformation,0>::InsertAt((__int64)a2 + 104, (unsigned __int64)&v40, v17, v19);
  if ( inserted < 0 )
  {
    v20 = 2646LL;
    goto LABEL_75;
  }
  inserted = CContainerVisualProxy::InsertChild(
               *((CContainerVisualProxy **)a2 + 8),
               *((struct CVisualProxy **)v39 + 1),
               v9,
               v10);
  if ( inserted < 0 )
  {
    v20 = 2647LL;
    goto LABEL_75;
  }
LABEL_68:
  inserted = CVisualProxy::SetExcludeSubtree(*((CVisualProxy **)v39 + 1), ShouldExcludeFromFilteredCaptures);
  if ( inserted >= 0 )
    return 0LL;
  v20 = 2668LL;
LABEL_75:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v20,
    (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)inserted);
  return (unsigned int)inserted;
}
