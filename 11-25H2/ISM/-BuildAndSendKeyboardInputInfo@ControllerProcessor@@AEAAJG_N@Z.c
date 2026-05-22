/*
 * XREFs of ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x18006EEE4
 * Callers:
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x18006ED2C (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x18006EE38 (-OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1801798D8 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x18017A044 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 *     ?TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x18017AA28 (-TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV-$vector@U-$pair@G_N@std@@V-$allocato.c)
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180024020 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x18007EA18 (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A8AC4 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z @ 0x180106144 (-InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z.c)
 *     ?IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z @ 0x180106210 (-IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details@wil@@QEAA_NXZ @ 0x18013259C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details.c)
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
  int v12; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v15; // [rsp+40h] [rbp-C0h]
  int v16; // [rsp+48h] [rbp-B8h]
  __int64 v17; // [rsp+50h] [rbp-B0h]
  unsigned __int16 v18; // [rsp+6Ch] [rbp-94h]
  __int16 v19; // [rsp+8Eh] [rbp-72h]
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
    memset_0(v14, 0, 0x170uLL);
    v15 = PerformanceCount;
    v17 = *((_QWORD *)this + 38);
    v19 = 64;
    v16 = 368;
    v14[0] = 4;
    v14[2] = TickCount;
    v18 = a2;
    if ( !a3 )
      v19 = 65;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::GetImpl'::`2'::impl) )
    {
      if ( a2 == 7
        || IsEdition(253345LL)
        || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228)
        || (v10 = *((_DWORD *)this + 1953)) != 0
        && GamepadInterceptionHelper::IsProcessSubscribedToGamepadEvents(v7, v10) )
      {
        v11 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), (struct InputInfo *)v14);
        if ( v11 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x89B,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v11,
            PerformanceCount.LowPart);
      }
    }
    else if ( a2 == 7 || IsEdition(253345LL) || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228) )
    {
      v12 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), (struct InputInfo *)v14);
      if ( v12 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x8A7,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v12,
          PerformanceCount.LowPart);
    }
  }
  return 0LL;
}
