/*
 * XREFs of ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x1800397C4
 * Callers:
 *     ?OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z @ 0x180024180 (-OnTargetWithFocusChanged@ControllerNavigationManager@@QEAAJPEAUIInputTarget@@0@Z.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x1800993F4 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 *     ?ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18010606C (-ClearGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 *     ?ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180174840 (-ClientRemoved@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 * Callees:
 *     ?NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ @ 0x180039828 (-NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180039878 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 */

void __fastcall ControllerNavigationManager::DisableNavigation(ControllerNavigationManager *this)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  InputETW::ControllerNavigationManager::NavigationDisabled();
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    ControllerProcessor::UpdateNavigationState(i[3], 2LL, 0LL);
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8, 0LL);
}
