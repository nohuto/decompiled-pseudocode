/*
 * XREFs of ?UpdateFocusPids@GameControllerRawInputProvider@@AEAAJXZ @ 0x180066768
 * Callers:
 *     ?OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x1800665F0 (-OnTargetWithFocusChanged@GameControllerRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ??0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z @ 0x18007F064 (--0GameControllerRawInputProvider@@AEAA@PEAUIRawInputClient@@@Z.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800CD814 (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ?OnGamepadInterceptionTargetProcessChanged@GameControllerRawInputProvider@@UEAAXK@Z @ 0x1800CE210 (-OnGamepadInterceptionTargetProcessChanged@GameControllerRawInputProvider@@UEAAXK@Z.c)
 *     ?OnGamepadMouseModeEnabledChanged@GameControllerRawInputProvider@@UEAAX_N@Z @ 0x1800CE230 (-OnGamepadMouseModeEnabledChanged@GameControllerRawInputProvider@@UEAAX_N@Z.c)
 *     ?SetGameControllerMpcFocusOverride@@YAXK@Z @ 0x1800CE7A0 (-SetGameControllerMpcFocusOverride@@YAXK@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18008D698 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18009BD18 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAKAEA_N@ISMTracing@@SAXAEAK00AEBK0000AEA_N@Z @ 0x1800CD750 (--$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAKAEA_N@ISMTraci.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix@@@details@wil@@QEAA_NXZ @ 0x1800CE894 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_Li.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall GameControllerRawInputProvider::UpdateFocusPids(GameControllerRawInputProvider *this)
{
  char IsEnabled; // al
  unsigned int *v3; // rsi
  DWORD CurrentProcessId; // edx
  __int64 v5; // rcx
  char *v6; // rcx
  const char *v7; // r9
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // eax
  DWORD v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  unsigned int v15; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v16; // [rsp+88h] [rbp+38h] BYREF
  DWORD InBuffer; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+48h] BYREF

  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix>::GetImpl'::`2'::impl);
  v3 = (unsigned int *)((char *)this + 160);
  CurrentProcessId = *((_DWORD *)this + 40);
  if ( IsEnabled )
  {
    if ( !CurrentProcessId )
    {
      CurrentProcessId = *((_DWORD *)this + 42);
      if ( !CurrentProcessId )
      {
        CurrentProcessId = *((_DWORD *)this + 41);
        if ( !CurrentProcessId )
        {
          if ( *((_BYTE *)this + 176) )
          {
            CurrentProcessId = GetCurrentProcessId();
            goto LABEL_11;
          }
          goto LABEL_10;
        }
      }
    }
  }
  else if ( !CurrentProcessId )
  {
    CurrentProcessId = *((_DWORD *)this + 42);
    if ( !CurrentProcessId )
    {
      CurrentProcessId = *((_DWORD *)this + 41);
      if ( !CurrentProcessId )
LABEL_10:
        CurrentProcessId = *((_DWORD *)this + 39);
    }
  }
LABEL_11:
  InBuffer = CurrentProcessId;
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
  v6 = (char *)*((_QWORD *)this + 10);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && !DeviceIoControl(v6, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x391,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             v7);
  }
  v9 = *v3;
  if ( !*v3 )
    v9 = *((_DWORD *)this + 39);
  v16 = v9;
  v10 = RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v16, 4LL);
  if ( v10 < 0 )
  {
    v11 = 941LL;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)v11,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrol"
                           "lerrawinputprovider.cpp",
             (const char *)(unsigned int)v10,
             0);
  }
  v12 = *((_DWORD *)this + 42);
  if ( !v12 )
    v12 = *((_DWORD *)this + 41);
  if ( *v3 )
    v12 = 0;
  v15 = v12;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_ListenerFix>::GetImpl'::`2'::impl)
    && *((_BYTE *)this + 176) )
  {
    v13 = GetCurrentProcessId();
    v15 = v13;
  }
  else
  {
    v13 = v15;
  }
  v18 = *((_DWORD *)this + 43);
  if ( v13 != v18 )
  {
    v10 = RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &v15, 4LL);
    if ( v10 < 0 )
    {
      v11 = 974LL;
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)v11,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontr"
                             "ollerrawinputprovider.cpp",
               (const char *)(unsigned int)v10,
               0);
    }
    *((_DWORD *)this + 43) = v15;
  }
  ISMTracing::GameControllerRawInputProvider_UpdateFocusPids<unsigned long &,unsigned long &,unsigned long &,unsigned long const &,unsigned long &,unsigned long &,unsigned long &,unsigned long &,bool &>(
    (unsigned int *)this + 39,
    (unsigned int *)this + 40,
    (unsigned int *)this + 41,
    &v18,
    &InBuffer,
    &v16,
    &v15,
    (unsigned int *)this + 42,
    (bool *)this + 176);
  return 0;
}
