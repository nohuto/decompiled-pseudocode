/*
 * XREFs of ?_WindowEnumCallback@CInputView_SizeOrModeChangeBase@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1950
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009B0B8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x1800D5E78 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z @ 0x1800DC1CC (-StartThemeAnimation@CInputView_SizeOrModeChangeBase@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800DCF8C (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800EB870 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

char __fastcall CInputView_SizeOrModeChangeBase::_WindowEnumCallback(
        CInputView_SizeOrModeChangeBase *a1,
        __int64 a2,
        char a3,
        int *a4)
{
  int v4; // ebx
  const char *v8; // r9
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int started; // eax
  char result; // al
  struct tagRECT v14; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  if ( (a3 & 1) != 0 )
  {
    CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v14);
    switch ( *(_DWORD *)(a2 + 680) & 0xFFF )
    {
      case 25:
        if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
               (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
               *(HWND *)(a2 + 40),
               0) )
        {
          started = CInputView_SizeOrModeChangeBase::StartThemeAnimation(a1, (struct CWindowData *)a2);
          v4 = started;
          if ( started < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              started,
              0x13E7u);
        }
        break;
      case 26:
        if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
               (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
               *(HWND *)(a2 + 40),
               1) )
        {
          v11 = CInputView_SizeOrModeChangeBase::StartThemeAnimation(a1, (struct CWindowData *)a2);
          v4 = v11;
          if ( v11 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1LL,
              v11,
              0x13EEu);
        }
        break;
      case 43:
        v9 = (*(__int64 (__fastcall **)(CInputView_SizeOrModeChangeBase *))(*(_QWORD *)a1 + 112LL))(a1);
        v10 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
                a1,
                (struct CWindowData *)a2,
                v9,
                1,
                (struct CAnimationComponent **)&v14);
        v4 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x13F6u);
        break;
      default:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x13FA,
          (__int64)"clientcore\\windows\\dwm\\udwm\\storyboard.cpp",
          v8);
    }
  }
  result = 1;
  *a4 = v4;
  return result;
}
