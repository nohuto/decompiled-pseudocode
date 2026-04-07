/*
 * XREFs of ?_WindowEnumCallback@CFlyoutPopup@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0E10
 * Callers:
 *     ?_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1AE0 (-_WindowEnumCallback@CLauncherDismiss@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEA.c)
 *     ?_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1E80 (-_WindowEnumCallback@CLauncherLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ.c)
 * Callees:
 *     ?GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z @ 0x1800085D0 (-GetWindowEndCloak@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEA_N@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180013CEC (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18004F2A0 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180055EE4 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180058514 (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DCF8C (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 */

char __fastcall CFlyoutPopup::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  int v4; // r15d
  __int16 v8; // di
  unsigned int v9; // edi
  bool v10; // zf
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // eax
  struct tagPOINT **v14; // rbx
  int v15; // eax
  int v16; // eax
  HWND v17; // rdx
  char v18; // al
  bool v19; // di
  int v20; // r8d
  int v21; // edx
  struct tagRECT *p_rc; // rcx
  int v23; // eax
  struct tagPOINT *v24; // rax
  CVisual *v25; // rcx
  LONG x; // eax
  CAnimatedTransitionVisual *v27; // rcx
  struct tagPOINT *v28; // rax
  CVisual *v29; // rcx
  LONG v30; // eax
  struct tagPOINT *v31; // rax
  LONG v32; // edx
  bool v34; // [rsp+50h] [rbp-29h] BYREF
  int v35; // [rsp+54h] [rbp-25h] BYREF
  int v36; // [rsp+58h] [rbp-21h] BYREF
  CBaseObject *v37[2]; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v39; // [rsp+80h] [rbp+7h] BYREF

  v4 = 0;
  v37[0] = 0LL;
  if ( (a3 & 1) == 0 || !(*(unsigned __int8 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 144LL))(a1) )
    goto LABEL_49;
  v8 = *(_DWORD *)(a2 + 680);
  v36 = 0;
  v9 = v8 & 0xFFF;
  v35 = 0;
  if ( v9 > 0x4F )
  {
    if ( v9 == 80 || v9 == 81 || v9 == 82 || v9 == 88 || v9 == 89 || v9 == 90 )
      goto LABEL_14;
    v11 = v9 - 91;
    v10 = v9 == 91;
  }
  else
  {
    if ( v9 == 79 || v9 == 12 || v9 == 13 || v9 == 14 || v9 == 15 || v9 == 16 )
      goto LABEL_14;
    if ( v9 == 43 )
    {
      v15 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 112LL))(a1);
      v16 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(a1, (struct CWindowData *)a2, v15, 1, v37);
      v4 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x4BCu);
      goto LABEL_16;
    }
    v11 = v9 - 77;
    v10 = v9 == 77;
  }
  if ( !v10 && v11 != 1 )
    goto LABEL_49;
LABEL_14:
  v12 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, v9);
  v13 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          a1,
          (struct CWindowData *)a2,
          1,
          v12,
          0LL,
          0LL,
          -1,
          1,
          v37);
  v4 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x493u);
LABEL_16:
    v14 = (struct tagPOINT **)v37[0];
    goto LABEL_47;
  }
  v14 = (struct tagPOINT **)v37[0];
  v17 = *(HWND *)(a2 + 40);
  v39 = *(struct tagRECT *)((char *)v37[0] + 88);
  rc = v39;
  if ( (int)CWindowPropertyTracker::GetWindowEndCloak(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
              v17,
              &v34) >= 0 )
  {
    v18 = (*(__int64 (__fastcall **)(CStoryboard *, _QWORD, int *, int *))(*(_QWORD *)a1 + 152LL))(a1, v9, &v36, &v35);
    v19 = v34;
    if ( v18 )
    {
      v20 = v35;
      if ( v34 )
        v20 = -v35;
      v21 = v36;
      if ( v34 )
        v21 = -v36;
      p_rc = &v39;
      if ( !v34 )
        p_rc = &rc;
      OffsetRect(p_rc, v21, v20);
    }
    v23 = *(_DWORD *)(a2 + 680);
    if ( (v23 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)(a2 + 700);
    if ( (v23 & 0x800000) != 0 )
      v39 = *(struct tagRECT *)(a2 + 732);
    CAnimatedTransitionVisual::SetBeginRect(v14[5], &rc);
    v24 = v14[5];
    v25 = (CVisual *)&v24[1];
    *(struct tagRECT *)&v24[109].x = v39;
    x = v24[12].x;
    if ( (x & 0x1000) == 0 )
    {
      *((_DWORD *)v25 + 22) = x | 0x1000;
      CVisual::PropagateDirtyChildren(v25);
    }
    v27 = (CAnimatedTransitionVisual *)v14[5];
    if ( v19 )
    {
      CAnimatedTransitionVisual::SetBeginAlpha(v27, 1.0);
      v28 = v14[5];
      v28[116].y = 0;
      v29 = (CVisual *)&v28[1];
      v30 = v28[12].x;
      if ( (v30 & 0x1000) != 0 )
        goto LABEL_47;
      *((_DWORD *)v29 + 22) = v30 | 0x1000;
    }
    else
    {
      CAnimatedTransitionVisual::SetBeginAlpha(v27, 0.0);
      v31 = v14[5];
      v29 = (CVisual *)&v31[1];
      v31[116].y = 1065353216;
      v32 = v31[12].x;
      if ( (v32 & 0x1000) != 0 )
        goto LABEL_47;
      v31[12].x = v32 | 0x1000;
    }
    CVisual::PropagateDirtyChildren(v29);
  }
LABEL_47:
  if ( v14 )
    CBaseObject::Release((CBaseObject *)v14);
LABEL_49:
  *a4 = v4;
  return 1;
}
