/*
 * XREFs of ?_WindowEnumCallback@CGrowPanel@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1270
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180013CEC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180058514 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800D5E78 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800D9EC0 (-GetPVLTarget@CShrinkPanel@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z @ 0x1800DE1DC (-_ShouldSlideBasedOnLeft@CPanelAnimation@@IEAA_NPEBUtagRECT@@0@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800DE210 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CGrowPanel::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  CAnimatedTransitionVisual **v4; // rbx
  int v5; // r14d
  int v9; // eax
  int v10; // eax
  CPanelAnimation *v11; // rcx
  int v12; // ecx
  LONG v13; // edx
  LONG v14; // edx
  int v15; // eax
  struct tagPOINT *v16; // rcx
  CAnimatedTransitionVisual *v17; // rax
  CVisual *v18; // rcx
  int v19; // eax
  int v20; // eax
  int PVLTarget; // eax
  int v22; // eax
  struct tagRECT v23; // xmm6
  struct tagPOINT *v24; // rcx
  CAnimatedTransitionVisual *v25; // rax
  CVisual *v26; // rcx
  int v27; // eax
  __int128 v28; // xmm0
  char result; // al
  struct tagRECT v30; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v31; // [rsp+60h] [rbp-20h] BYREF
  CBaseObject *v32; // [rsp+B8h] [rbp+38h] BYREF

  v4 = 0LL;
  v5 = 0;
  v32 = 0LL;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 || (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x28 )
      goto LABEL_34;
    v28 = *(_OWORD *)(a2 + 48);
    *(_BYTE *)(a1 + 136) = 1;
    *(_OWORD *)(a1 + 140) = v28;
    goto LABEL_32;
  }
  if ( (*(_DWORD *)(a2 + 680) & 0xFFF) == 0x28 )
  {
    if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
            (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
            *(HWND *)(a2 + 40),
            1) )
      goto LABEL_34;
    PVLTarget = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
    v22 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            PVLTarget,
            0LL,
            0LL,
            -1,
            1,
            &v32);
    v5 = v22;
    if ( v22 >= 0 )
    {
      v4 = (CAnimatedTransitionVisual **)v32;
      if ( *(_BYTE *)(a1 + 136) )
        v23 = *(struct tagRECT *)(a1 + 140);
      else
        v23 = *(struct tagRECT *)((char *)v32 + 88);
      v24 = (struct tagPOINT *)*((_QWORD *)v32 + 5);
      v31 = v23;
      CAnimatedTransitionVisual::SetBeginRect(v24, &v31);
      v25 = v4[5];
      v26 = (CAnimatedTransitionVisual *)((char *)v25 + 8);
      *(struct tagRECT *)((char *)v25 + 872) = v23;
      v27 = *((_DWORD *)v25 + 24);
      if ( (v27 & 0x1000) == 0 )
      {
        *((_DWORD *)v26 + 22) = v27 | 0x1000;
        CVisual::PropagateDirtyChildren(v26);
      }
      goto LABEL_32;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0x53Eu);
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(a2 + 680) & 0xFFF) != 0x29
    || !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
          (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
          *(HWND *)(a2 + 40),
          0) )
  {
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a1 + 136) )
  {
    v9 = CShrinkPanel::GetPVLTarget(a1, *(_DWORD *)(a2 + 680));
    v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            0,
            v9,
            0LL,
            0LL,
            -1,
            1,
            &v32);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v4 = (CAnimatedTransitionVisual **)v32;
      v30 = *(struct tagRECT *)((char *)v32 + 88);
      v31 = v30;
      if ( CPanelAnimation::_ShouldSlideBasedOnLeft(v11, &v30, (const struct tagRECT *)(a1 + 140)) )
      {
        v12 = 0;
        v13 = *(_DWORD *)(a1 + 140);
        if ( v30.right - v30.left >= 0 )
          v12 = v30.right - v30.left;
        v31.right = v13 + v12;
      }
      else
      {
        v14 = *(_DWORD *)(a1 + 148);
        v15 = 0;
        v31.right = v14;
        if ( v30.right - v30.left >= 0 )
          v15 = v30.right - v30.left;
        v13 = v14 - v15;
      }
      v16 = (struct tagPOINT *)v4[5];
      v31.left = v13;
      CAnimatedTransitionVisual::SetBeginRect(v16, &v31);
      v17 = v4[5];
      v18 = (CAnimatedTransitionVisual *)((char *)v17 + 8);
      *(struct tagRECT *)((char *)v17 + 872) = v30;
      v19 = *((_DWORD *)v17 + 24);
      if ( (v19 & 0x1000) == 0 )
      {
        *((_DWORD *)v18 + 22) = v19 | 0x1000;
        CVisual::PropagateDirtyChildren(v18);
      }
      CAnimatedTransitionVisual::SetBeginAlpha(v4[5], 0.0);
      goto LABEL_32;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x51Fu);
LABEL_8:
    v4 = (CAnimatedTransitionVisual **)v32;
LABEL_32:
    if ( v4 )
      CBaseObject::Release((CBaseObject *)v4);
    goto LABEL_34;
  }
  v20 = CSlide::_SlideWindow((CSlide *)a1, (struct CWindowData *)a2, 0.0, 0LL);
  v5 = v20;
  if ( v20 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v20, 0x536u);
LABEL_34:
  result = 1;
  *a4 = v5;
  return result;
}
