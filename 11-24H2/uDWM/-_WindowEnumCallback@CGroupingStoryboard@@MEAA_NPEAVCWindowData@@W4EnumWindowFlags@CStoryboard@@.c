/*
 * XREFs of ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D7B30
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D5A70 (-_WindowEnumCallback@CAppArrangementBase@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 *     ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D7060 (-_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D7260 (-_WindowEnumCallback@CAppSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 * Callees:
 *     ?_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z @ 0x18009B1C8 (-_HasUsableBitmapResource@CStoryboard@@IEAA_NPEAUHWND__@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D52C0 (-_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ?GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z @ 0x1800DD75C (-GetBitmapRects@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAUtagRECT@@1@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CGroupingStoryboard::_WindowEnumCallback(char *a1, __int64 a2, char a3, _DWORD *a4)
{
  HWND v7; // rdx
  struct tagRECT v9; // [rsp+20h] [rbp-38h] BYREF

  if ( (a3 & 4) != 0
    && ((*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, *(_DWORD *)(a2 + 744) & 0xFFF) & 8) != 0 )
  {
    CGroupingStoryboard::_RecordUnionRect(
      a1,
      *(unsigned int *)(a2 + 744),
      (RECT *)(a2 + ((*(_DWORD *)(a2 + 744) & 0x1000000) != 0 ? 764LL : 48LL)));
    if ( CStoryboard::_HasUsableBitmapResource((CStoryboard *)a1, *(HWND *)(a2 + 40)) )
    {
      v7 = *(HWND *)(a2 + 40);
      v9 = 0LL;
      if ( (int)CTransitionVisualController::GetBitmapRects(
                  *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
                  v7,
                  &v9,
                  0LL) >= 0 )
        CGroupingStoryboard::_RecordUnionRect(a1, *(unsigned int *)(a2 + 744), &v9);
    }
  }
  *a4 = 0;
  return 1;
}
