/*
 * XREFs of ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800D4D8C
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D6600 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ @ 0x18005218C (-_GetWPT@CStoryboard@@IEAAPEAVCWindowPropertyTracker@@XZ.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800531EC (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053BC4 (-SetEndRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180053C14 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPEAPEAVCAnimationComponent@@@Z @ 0x180053CB4 (-_CreateAndAddAnimationComponentWithRect@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2HPE.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800D1E60 (-GetPVLTarget@CAppArrangementImmediate@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA?AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800D23F0 (-GetSpecialTargetInfo@CAppArrangementImmediate@@UEAA-AW4SpecialTargetInfo@@W4DWMTRANSITION_TARGE.c)
 *     ?_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800D4580 (-_CreateAndAddDesktopAnimationComponent@CStoryboard@@IEAAJPEAVCWindowData@@HAEBUtagRECT@@_NPEAPE.c)
 *     ?_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_TARGET@@PEAPEAVCAnimationComponent@@3@Z @ 0x1800D482C (-_CreateGuttersForApp@CGroupingStoryboard@@IEAAJPEAVCWindowData@@PEBUtagRECT@@1W4DWMTRANSITION_T.c)
 *     ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x1800D50F8 (-_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z.c)
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800D5450 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 */

__int64 __fastcall CAppArrangementImmediate::_HandleThumbnailTag(
        CAppArrangementImmediate *this,
        struct CWindowData *a2,
        char a3)
{
  CBaseObject *v3; // r12
  CBaseObject *v4; // r14
  struct tagRECT v7; // xmm0
  int v8; // edx
  int PVLTarget; // eax
  int v10; // eax
  CStoryboard *v11; // rcx
  unsigned int v12; // r13d
  bool v13; // zf
  struct tagRECT v14; // xmm0
  __int64 v15; // r8
  int v16; // edx
  int v17; // edx
  struct tagRECT *p_rc; // r13
  char v19; // cl
  struct tagRECT *v20; // rbx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  struct tagPOINT v24; // rbx
  struct tagRECT v25; // xmm0
  CWindowPropertyTracker *WPT; // rax
  int v27; // edx
  int v28; // ecx
  struct tagPOINT v30; // [rsp+40h] [rbp-29h] BYREF
  struct tagRECT v31; // [rsp+50h] [rbp-19h] BYREF
  struct CAnimationComponent *v32; // [rsp+60h] [rbp-9h] BYREF
  struct CAnimationComponent *v33; // [rsp+68h] [rbp-1h] BYREF
  struct tagRECT v34; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT rc; // [rsp+80h] [rbp+17h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v30 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  if ( a3 )
  {
    v7 = (struct tagRECT)*((_OWORD *)a2 + 3);
    v8 = *((_DWORD *)a2 + 186);
    rc = v7;
    if ( (v8 & 0x1000000) != 0 )
      rc = *(struct tagRECT *)((char *)a2 + 748);
    PVLTarget = CAppArrangementImmediate::GetPVLTarget((__int64)this, v8);
    v10 = CStoryboard::_CreateAndAddDesktopAnimationComponent(
            this,
            a2,
            PVLTarget,
            &rc,
            1,
            (struct CAnimationComponent **)&v30);
    v12 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0xDFFu, 0LL);
LABEL_31:
      v24 = v30;
      goto LABEL_32;
    }
  }
  else
  {
    v13 = (*((_DWORD *)a2 + 186) & 0x1000000) == 0;
    rc = 0LL;
    if ( !v13 )
    {
      v14 = *(struct tagRECT *)((char *)a2 + 764);
      v15 = *(_QWORD *)((char *)a2 + 764);
      v16 = -*((_DWORD *)a2 + 191);
      rc = v14;
      OffsetRect(&rc, v16, -HIDWORD(v15));
    }
    v17 = *((_DWORD *)a2 + 186);
    if ( (v17 & 0x1000000) != 0 )
    {
      p_rc = &rc;
      v19 = 1;
    }
    else
    {
      p_rc = 0LL;
      v19 = 0;
    }
    v20 = (struct tagRECT *)(((unsigned __int64)a2 + 748) & -(__int64)(v19 != 0));
    v21 = CAppArrangementImmediate::GetPVLTarget((__int64)this, v17);
    v22 = CStoryboard::_CreateAndAddAnimationComponentWithRect(
            this,
            a2,
            1,
            v21,
            v20,
            p_rc,
            -1,
            (struct CAnimationComponent **)&v30);
    v12 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v22, 0xE12u, 0LL);
      goto LABEL_31;
    }
  }
  v23 = *((_DWORD *)a2 + 186);
  v24 = v30;
  if ( (v23 & 0x1000000) != 0 )
    v25 = *(struct tagRECT *)((char *)a2 + 764);
  else
    v25 = *(struct tagRECT *)(*(_QWORD *)&v30 + 88LL);
  v34 = v25;
  if ( (v23 & 0x800000) != 0 )
  {
    v31 = *(struct tagRECT *)((char *)a2 + 796);
  }
  else
  {
    v30 = 0LL;
    WPT = CStoryboard::_GetWPT(v11);
    if ( (int)CWindowPropertyTracker::GetWindowEndPosition(WPT, *((HWND *)a2 + 5), &v30) < 0 )
    {
      v31 = v34;
    }
    else
    {
      v27 = 0;
      v31.left = v30.x;
      if ( v34.right - v34.left >= 0 )
        v27 = v34.right - v34.left;
      v31.top = v30.y;
      v28 = 0;
      v31.right = v30.x + v27;
      if ( v34.bottom - v34.top >= 0 )
        v28 = v34.bottom - v34.top;
      v31.bottom = v30.y + v28;
    }
  }
  CAnimatedTransitionVisual::SetBeginRect(*(struct tagPOINT **)(*(_QWORD *)&v24 + 40LL), &v34);
  CAnimatedTransitionVisual::SetEndRect(*(CAnimatedTransitionVisual **)(*(_QWORD *)&v24 + 40LL), &v31);
  *(_BYTE *)(*(_QWORD *)&v24 + 73LL) = 0;
  if ( (CAppArrangementImmediate::GetSpecialTargetInfo((__int64)this, *((_DWORD *)a2 + 186) & 0xFFF) & 8) != 0 )
  {
    CGroupingStoryboard::_SetUnifiedCenter(this, *(struct CAnimationComponent **)&v24);
    if ( CGroupingStoryboard::_IsPartOfGroup(this, a2) )
    {
      CGroupingStoryboard::_CreateGuttersForApp(
        (__int64)this,
        (__int64)a2,
        &v34,
        &v31,
        *((_DWORD *)a2 + 186) & 0xFFF,
        (CMILRefCountBase *)&v32,
        (CMILRefCountBase *)&v33);
      v3 = v32;
      if ( v32 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v32);
      v4 = v33;
      if ( v33 )
        CGroupingStoryboard::_SetUnifiedCenter(this, v33);
    }
  }
LABEL_32:
  if ( v24 )
    CBaseObject::Release(*(CBaseObject **)&v24);
  if ( v3 )
    CBaseObject::Release(v3);
  if ( v4 )
    CBaseObject::Release(v4);
  return v12;
}
