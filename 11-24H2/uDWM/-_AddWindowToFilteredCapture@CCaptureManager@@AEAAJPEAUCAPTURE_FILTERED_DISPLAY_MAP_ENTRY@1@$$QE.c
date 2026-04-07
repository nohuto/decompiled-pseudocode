/*
 * XREFs of ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800B30CC
 * Callers:
 *     ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800AD280 (-AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKE.c)
 *     ?OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AFB30 (-OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2CA0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 * Callees:
 *     ?InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z @ 0x18002639C (-InsertChild@CContainerVisualProxy@@QEAAJPEAVCVisualProxy@@0_N@Z.c)
 *     ?GetActualWindowRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N00@Z @ 0x1800405C0 (-GetActualWindowRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N00@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180043FD0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z @ 0x1800778C8 (-SetExcludeSubtree@CVisualProxy@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180096A00 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ??$_Copy_backward_memmove@PEAU_DWMCaptureWindowInformation@@PEAU1@@std@@YAPEAU_DWMCaptureWindowInformation@@PEAU1@00@Z @ 0x1800ABCEC (--$_Copy_backward_memmove@PEAU_DWMCaptureWindowInformation@@PEAU1@@std@@YAPEAU_DWMCaptureWindowI.c)
 *     ??$_Emplace_back_with_unused_capacity@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAAEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@$$QEAU23@@Z @ 0x1800ABD8C (--$_Emplace_back_with_unused_capacity@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTU.c)
 *     ??$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAPEAU_DWMCaptureWindowInformation@@QEAU2@AEBU2@@Z @ 0x1800ABEC8 (--$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@-$vector@U_DWMCaptureWindowInformation.c)
 *     ??$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@AEAAPEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAU23@$$QEAU23@@Z @ 0x1800AC0DC (--$_Emplace_reallocate@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WIN.c)
 *     ??$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@?$vector@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@V?$allocator@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@std@@@std@@@1@$$QEAUCAPTURE_FILTERED_WINDOW@CCaptureManager@@@Z @ 0x1800ACAB4 (--$emplace@UCAPTURE_FILTERED_WINDOW@CCaptureManager@@@-$vector@UCAPTURE_FILTERED_WINDOW@CCapture.c)
 *     ?ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ @ 0x1800B06C0 (-ShouldExcludeFromFilteredCaptures@CWindowData@@QEBA_NXZ.c)
 */

__int64 __fastcall CCaptureManager::_AddWindowToFilteredCapture(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  CTopLevelWindow *v4; // rcx
  char ShouldExcludeFromFilteredCaptures; // al
  CVisualProxy *v9; // rcx
  int inserted; // edi
  __int64 v11; // rdx
  struct _LIST_ENTRY ***v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // rcx
  bool v16; // zf
  struct CVisualProxy *v17; // r12
  unsigned __int8 v18; // r13
  int v19; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  unsigned __int64 v21; // r9
  struct _LIST_ENTRY *v22; // rcx
  struct _LIST_ENTRY **v23; // rdx
  struct _LIST_ENTRY **v24; // r8
  CTopLevelWindow *i; // rcx
  CContainerVisualProxy *v26; // rcx
  struct CVisualProxy *v27; // rdx
  int v28; // eax
  unsigned int v29; // esi
  __int64 v30; // rdx
  _QWORD *v31; // r8
  __int64 *v32; // rcx
  _OWORD *v33; // rdi
  _OWORD *v34; // r8
  __int128 v35; // xmm1
  __int128 v36; // xmm1
  _OWORD *v37; // rdx
  __int128 v38; // xmm1
  __m256i v39; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v40; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v4 = *(CTopLevelWindow **)(a4 + 440);
  *(_OWORD *)v39.m256i_i8 = (unsigned __int64)*a3;
  *(_OWORD *)&v39.m256i_u64[2] = 0LL;
  *(_OWORD *)&v39.m256i_u64[1] = *(_OWORD *)(a4 + 48);
  if ( v4 )
    *(struct tagRECT *)&v39.m256i_u64[1] = *CTopLevelWindow::GetActualWindowRect(v4, &v40, 0, 1, 1);
  ShouldExcludeFromFilteredCaptures = CWindowData::ShouldExcludeFromFilteredCaptures((CTopLevelWindow **)a4);
  v9 = (CVisualProxy *)a3[1];
  v39.m256i_i8[24] = ShouldExcludeFromFilteredCaptures == 0;
  inserted = CVisualProxy::SetExcludeSubtree(v9, ShouldExcludeFromFilteredCaptures);
  if ( inserted < 0 )
  {
    v11 = 2064LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)inserted);
    return (unsigned int)inserted;
  }
  v13 = (struct _LIST_ENTRY ***)(a2 + 64);
  if ( *(_QWORD *)(a2 + 64) == *(_QWORD *)(a2 + 72) )
  {
    inserted = CContainerVisualProxy::InsertChild(
                 *(CContainerVisualProxy **)(a2 + 56),
                 (struct CVisualProxy *)a3[1],
                 0LL,
                 0);
    if ( inserted < 0 )
    {
      v11 = 2161LL;
      goto LABEL_5;
    }
    v14 = *(_QWORD *)(a2 + 72);
    v15 = (__int64 *)(a2 + 64);
    v16 = v14 == *(_QWORD *)(a2 + 80);
  }
  else
  {
    v17 = 0LL;
    v18 = 0;
    v19 = -1;
    if ( *(_QWORD *)a4 != a4 || *(_QWORD *)(a4 + 8) != a4 )
    {
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53),
                               *(_QWORD *)(a4 + 136));
      v22 = *(struct _LIST_ENTRY **)(a4 + 8);
      if ( v22 == WindowListForDesktop )
        goto LABEL_22;
      while ( 1 )
      {
        v21 = (unsigned __int64)retaddr;
        if ( v22 == (struct _LIST_ENTRY *)a4 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x824,
            (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)retaddr);
        if ( v22 )
        {
          v23 = *v13;
          v19 = -1;
          v21 = 0LL;
          if ( (__int64)(*(_QWORD *)(a2 + 72) - *(_QWORD *)(a2 + 64)) >> 4 )
          {
            v24 = *v13;
            while ( *v24 != v22[2].Blink )
            {
              ++v21;
              v24 += 2;
              if ( v21 >= (__int64)(*(_QWORD *)(a2 + 72) - (_QWORD)v23) >> 4 )
                goto LABEL_21;
            }
            v19 = v21;
            if ( (v21 & 0x80000000) == 0LL )
              break;
          }
        }
LABEL_21:
        v22 = v22->Blink;
        if ( v22 == WindowListForDesktop )
          goto LABEL_22;
      }
      v18 = 1;
      v17 = (struct CVisualProxy *)v23[2 * (int)v21 + 1];
      if ( !v17 )
      {
LABEL_22:
        for ( i = *(CTopLevelWindow **)a4; i != (CTopLevelWindow *)WindowListForDesktop; i = *(CTopLevelWindow **)i )
        {
          if ( i == (CTopLevelWindow *)a4 )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x842,
              (int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
              (const char *)v21);
          if ( i )
          {
            v30 = *(_QWORD *)(a2 + 64);
            v19 = -1;
            v21 = 0LL;
            if ( (*(_QWORD *)(a2 + 72) - v30) >> 4 )
            {
              v31 = *(_QWORD **)(a2 + 64);
              while ( *v31 != *((_QWORD *)i + 5) )
              {
                ++v21;
                v31 += 2;
                if ( v21 >= (*(_QWORD *)(a2 + 72) - v30) >> 4 )
                  goto LABEL_35;
              }
              v19 = v21;
              if ( (v21 & 0x80000000) == 0LL )
              {
                v18 = 0;
                v17 = *(struct CVisualProxy **)(v30 + 16LL * (int)v21 + 8);
                break;
              }
            }
          }
LABEL_35:
          ;
        }
      }
    }
    v26 = *(CContainerVisualProxy **)(a2 + 56);
    v27 = (struct CVisualProxy *)a3[1];
    if ( v17 )
    {
      v28 = CContainerVisualProxy::InsertChild(v26, v27, v17, v18);
      v29 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x85D,
          (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
          (const char *)(unsigned int)v28);
        return v29;
      }
      if ( v18 )
        ++v19;
      std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::emplace<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
        (__int64 *)(a2 + 64),
        &v40,
        *(_QWORD *)(a2 + 64) + 16LL * v19,
        a3);
      v32 = (__int64 *)(a2 + 88);
      v33 = (_OWORD *)(*(_QWORD *)(a2 + 88) + 32LL * v19);
      v34 = *(_OWORD **)(a2 + 96);
      if ( v34 != *(_OWORD **)(a2 + 104) )
      {
        if ( v33 == v34 )
        {
          v35 = *(_OWORD *)&v39.m256i_u64[2];
          *v34 = *(_OWORD *)v39.m256i_i8;
          v34[1] = v35;
          *(_QWORD *)(a2 + 96) += 32LL;
        }
        else
        {
          *v34 = *(v34 - 2);
          v34[1] = *(v34 - 1);
          *(_QWORD *)(a2 + 96) += 32LL;
          std::_Copy_backward_memmove<_DWMCaptureWindowInformation *,_DWMCaptureWindowInformation *>(
            v33,
            (__int64)(v34 - 2),
            (__int64)v34);
          v36 = *(_OWORD *)&v39.m256i_u64[2];
          *v33 = *(_OWORD *)v39.m256i_i8;
          v33[1] = v36;
        }
        return 0LL;
      }
      v37 = v33;
      goto LABEL_46;
    }
    inserted = CContainerVisualProxy::InsertChild(v26, v27, 0LL, 0);
    if ( inserted < 0 )
    {
      v11 = 2154LL;
      goto LABEL_5;
    }
    v14 = *(_QWORD *)(a2 + 72);
    v15 = (__int64 *)(a2 + 64);
    v16 = v14 == *(_QWORD *)(a2 + 80);
  }
  if ( v16 )
    std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Emplace_reallocate<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
      v15,
      v14,
      (__int64)a3);
  else
    std::vector<CCaptureManager::CAPTURE_FILTERED_WINDOW>::_Emplace_back_with_unused_capacity<CCaptureManager::CAPTURE_FILTERED_WINDOW>(
      (__int64)v15,
      a3);
  v37 = *(_OWORD **)(a2 + 96);
  v32 = (__int64 *)(a2 + 88);
  if ( v37 != *(_OWORD **)(a2 + 104) )
  {
    v38 = *(_OWORD *)&v39.m256i_u64[2];
    *v37 = *(_OWORD *)v39.m256i_i8;
    v37[1] = v38;
    *(_QWORD *)(a2 + 96) += 32LL;
    return 0LL;
  }
LABEL_46:
  std::vector<_DWMCaptureWindowInformation>::_Emplace_reallocate<_DWMCaptureWindowInformation const &>(
    v32,
    (__int64)v37,
    &v39);
  return 0LL;
}
