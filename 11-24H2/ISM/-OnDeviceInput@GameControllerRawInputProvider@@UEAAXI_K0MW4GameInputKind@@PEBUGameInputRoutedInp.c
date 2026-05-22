/*
 * XREFs of ?OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInputBuffer@@PEBUGameInputGamepadState@@PEBUGameInputUiNavigationState@@@Z @ 0x180086720
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x18005AD40 (-SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009DC44 (--3@YAXPEAX@Z.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x1800A7574 (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GameInputUAP_GamepadFilterDriver@@@details@wil@@QEAA_NXZ @ 0x1800CE858 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GameInputUAP_GamepadFilterDriver@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GameControllerRawInputProvider::OnDeviceInput(
        __int64 a1,
        int a2,
        __int64 a3,
        const char *a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        _DWORD *a9)
{
  __int64 v10; // rbx
  int v11; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v10 = a7 - 88;
  if ( *(_DWORD *)(a7 - 88 + 4) != a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1A9,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      a4);
  *(_DWORD *)v10 = 64;
  *(_QWORD *)(v10 + 32) = a3;
  *(_DWORD *)(v10 + 40) = a5;
  *(_DWORD *)(v10 + 44) = a6;
  GameControllerRawInputProvider::SetTimestampsFromInput(
    (GameControllerRawInputProvider *)(a1 - 16),
    (unsigned __int64)a4,
    (struct InputInfo *)v10);
  if ( a8 )
  {
    *(_OWORD *)(v10 + 48) = *(_OWORD *)a8;
    *(_QWORD *)(v10 + 64) = *(_QWORD *)(a8 + 16);
    *(_DWORD *)(v10 + 72) = *(_DWORD *)(a8 + 24);
  }
  if ( a9 )
    *(_DWORD *)(v10 + 76) = *a9;
  *(_BYTE *)(v10 + 80) = (a6 & 0x10F0000) == 0x1000000;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameInputUAP_GamepadFilterDriver>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_GameInputUAP_GamepadFilterDriver>::GetImpl'::`2'::impl)
    || !*((_QWORD *)ISMStatics::GetGamepadInterceptionHelper() + 2)
    || a6 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64, __int64))(**(_QWORD **)(a1 + 40)
                                                                                              + 152LL))(
            *(_QWORD *)(a1 + 40),
            GameControllerRawInputProvider::InputReportCallback,
            v10,
            4LL);
    if ( v11 >= 0 )
      return;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1CE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawi"
                    "nputprovider.cpp",
      (const char *)(unsigned int)v11,
      v12);
  }
  operator delete((void *)v10);
}
