/*
 * XREFs of ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x18006EC74
 * Callers:
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x18006EABC (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x18006EBC8 (-OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x18017B0A8 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x18017BA20 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 *     ?TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x18017C47C (-TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV-$vector@U-$pair@G_N@std@@V-$allocato.c)
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800245F0 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180035D40 (-IsEdition@@YA_N_K@Z.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x18007E798 (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A7574 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z @ 0x180107FA8 (-InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z.c)
 *     ?IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z @ 0x180108018 (-IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendKeyboardInputInfo(
        ControllerProcessor *this,
        unsigned __int16 a2,
        char a3)
{
  struct GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  GamepadInterceptionHelper *v7; // r15
  DWORD TickCount; // ebx
  unsigned int v10; // edx
  int v11; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v13[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v14; // [rsp+40h] [rbp-C0h]
  int v15; // [rsp+48h] [rbp-B8h]
  __int64 v16; // [rsp+50h] [rbp-B0h]
  unsigned __int16 v17; // [rsp+6Ch] [rbp-94h]
  __int16 v18; // [rsp+8Eh] [rbp-72h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  v7 = GamepadInterceptionHelper;
  if ( *((_QWORD *)GamepadInterceptionHelper + 2) )
  {
    GamepadInterceptionHelper::InterceptGamepadInput(GamepadInterceptionHelper, a2, a3 != 1);
  }
  else
  {
    PerformanceCount.QuadPart = 0LL;
    TickCount = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    memset_0(v13, 0, 0x170uLL);
    v14 = PerformanceCount;
    v16 = *((_QWORD *)this + 38);
    v18 = 64;
    v15 = 368;
    v13[0] = 4;
    v13[2] = TickCount;
    v17 = a2;
    if ( !a3 )
      v18 = 65;
    if ( a2 == 7
      || IsEdition(253345LL)
      || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228)
      || (v10 = *((_DWORD *)this + 1951)) != 0 && GamepadInterceptionHelper::IsProcessSubscribedToGamepadEvents(v7, v10) )
    {
      v11 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), (struct InputInfo *)v13);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x88C,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v11,
          PerformanceCount.LowPart);
    }
  }
  return 0LL;
}
