/*
 * XREFs of ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E1170
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800DEA40 (-_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E01B0 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800E0400 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z @ 0x18006EB6C (-HasUsableBitmapResource@CTransitionVisualController@@QEAA_NPEAUHWND__@@PEAVCStoryboard@@@Z.c)
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800DDF10 (-_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z @ 0x1800EB5D4 (-GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z.c)
 */

char __fastcall CGroupingStoryboard::_WindowEnumCallback(struct CStoryboard *a1, __int64 a2, char a3, _DWORD *a4)
{
  HWND v7; // rdx
  struct tagRECT v9; // [rsp+20h] [rbp-38h] BYREF

  if ( (a3 & 4) != 0
    && ((*(__int64 (__fastcall **)(struct CStoryboard *, _QWORD))(*(_QWORD *)a1 + 120LL))(
          a1,
          *(_DWORD *)(a2 + 680) & 0xFFF) & 8) != 0 )
  {
    CGroupingStoryboard::_RecordUnionRect(
      a1,
      *(unsigned int *)(a2 + 680),
      (RECT *)(a2 + ((*(_DWORD *)(a2 + 680) & 0x1000000) != 0 ? 700LL : 48LL)));
    if ( CTransitionVisualController::HasUsableBitmapResource(
           *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
           *(HWND *)(a2 + 40),
           a1) )
    {
      v7 = *(HWND *)(a2 + 40);
      v9 = 0LL;
      if ( (int)CTransitionVisualController::GetBitmapRects(
                  *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
                  v7,
                  &v9,
                  0LL) >= 0 )
        CGroupingStoryboard::_RecordUnionRect(a1, *(unsigned int *)(a2 + 680), &v9);
    }
  }
  *a4 = 0;
  return 1;
}
