/*
 * XREFs of ?OnInputPaneTryShowRequested@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputPaneTryShowRequestedEventArgs@45678@@Z @ 0x18047DF90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x180049738 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@details@wil@@QEAA_NXZ @ 0x1804789A4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadInvocation@@@_ea_1804789A4.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@QEAA_NXZ @ 0x180478A5C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@detai.c)
 *     ?NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeReason@2@_N1@Z @ 0x18047D48C (-NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeRea.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18047F674 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardView_ea_18047F674.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputPaneTryShowRequested(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryShowRequestedEventArgs *a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  unsigned int v7; // r14d
  unsigned int v8; // ecx
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(_QWORD, HSTRING, HSTRING); // rdi
  HSTRING v11; // rbx
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(_QWORD, HSTRING, HSTRING); // rdi
  HSTRING v14; // rbx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  int v20; // ecx
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(_QWORD, _QWORD, _BYTE *, _BYTE *); // rbx
  int v23; // eax
  __int64 v24; // rdx
  char IsEnabled; // al
  int v26; // edx
  HSTRING v27; // rbx
  int v28; // eax
  char v29; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v30[3]; // [rsp+41h] [rbp-28h] BYREF
  unsigned int v31; // [rsp+44h] [rbp-25h] BYREF
  int v32; // [rsp+48h] [rbp-21h] BYREF
  int v33; // [rsp+4Ch] [rbp-1Dh] BYREF
  __int64 v34; // [rsp+50h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-11h] BYREF
  HSTRING v36; // [rsp+70h] [rbp+7h]
  HSTRING_HEADER v37; // [rsp+78h] [rbp+Fh] BYREF
  HSTRING v38; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v32 = 0;
  v31 = 0;
  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputPaneTryShowRequestedEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v31);
  if ( v4 < 0 )
  {
    v5 = 1188LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 15) + 104LL))(
         *((_QWORD *)this + 15),
         v31,
         &v32);
  if ( v4 < 0 )
  {
    v5 = 1190LL;
    goto LABEL_3;
  }
  v7 = 7;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) )
  {
    if ( v32 == 1 || (v8 = v31, v31 - 1 <= 1) || v31 == 7 )
    {
      v9 = *((_QWORD *)this + 16);
      v10 = *(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING))(*(_QWORD *)v9 + 336LL);
      v36 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, &pvData, 1u, 0);
      v11 = v36;
      v38 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v37, L"TRYSHOW2", 9u, 8u);
      v4 = v10(v9, v38, v11);
      if ( v4 < 0 )
      {
        v5 = 1197LL;
        goto LABEL_3;
      }
      goto LABEL_17;
    }
  }
  else if ( v32 == 1 || (v8 = v31, v31 - 1 <= 1) )
  {
    v12 = *((_QWORD *)this + 16);
    v13 = *(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING))(*(_QWORD *)v12 + 336LL);
    v38 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v37, &pvData, 1u, 0);
    v14 = v38;
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TRYSHOW2", 9u, 8u);
    v4 = v13(v12, v36, v14);
    if ( v4 < 0 )
    {
      v5 = 1207LL;
      goto LABEL_3;
    }
LABEL_17:
    v8 = v31;
  }
  if ( v32 != 1 )
    return 0LL;
  if ( !v8 )
    goto LABEL_33;
  v15 = v8 - 1;
  if ( !v15 )
  {
    v7 = 8;
    goto LABEL_34;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( !v17 )
    {
      v7 = 2;
      goto LABEL_34;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
      v7 = 10;
      goto LABEL_34;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      v7 = 3;
      goto LABEL_34;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      v7 = 4;
      goto LABEL_34;
    }
    if ( v20 == 1 )
    {
      v7 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadInvocation>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GamepadInvocation>::GetImpl'::`2'::impl) != 0
         ? 0xE
         : 0;
      goto LABEL_34;
    }
LABEL_33:
    v7 = 0;
  }
LABEL_34:
  v30[0] = 0;
  v29 = 0;
  v33 = 0;
  v34 = 0LL;
  v21 = *((_QWORD *)this + 15);
  v22 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _BYTE *))(*(_QWORD *)v21 + 304LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
  v23 = v22(v21, v7, v30, &v29);
  v4 = v23;
  if ( v23 < 0 )
  {
    v24 = 1252LL;
LABEL_47:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v23);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    return (unsigned int)v4;
  }
  if ( ((v7 - 2) & 0xFFFFFFF7) != 0 )
  {
    (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 24LL))(
      (char *)this + 8,
      (unsigned int)v33,
      v7);
  }
  else
  {
    v38 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v37, L"1", 2u, 1u);
    v27 = v38;
    v36 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"ShowEmojiPanelTips", 0x13u, 0x12u);
    v28 = KeyboardHosting::TabTipAdapter::SetShellPreference(this, v36, v27);
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4E8,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v28);
    v23 = KeyboardHosting::TabTipAdapter::OnShellRequestedStateChange(
            this,
            v7,
            (unsigned int)v33,
            5LL,
            (unsigned int)&v33,
            (unsigned int)&v34);
    v4 = v23;
    if ( v23 < 0 )
    {
      v24 = 1258LL;
      goto LABEL_47;
    }
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::GetImpl'::`2'::impl);
  v26 = *((_DWORD *)this + 124);
  if ( IsEnabled )
  {
    v23 = KeyboardHosting::TabTipAdapter::NotifyCurrentVisibilityState((__int64)this, v26, 2, 1, 0);
    v4 = v23;
    if ( v23 < 0 )
    {
      v24 = 1272LL;
      goto LABEL_47;
    }
  }
  else
  {
    v23 = KeyboardHosting::TabTipAdapter::NotifyCurrentVisibilityState((__int64)this, v26, 0, 1, 0);
    v4 = v23;
    if ( v23 < 0 )
    {
      v24 = 1276LL;
      goto LABEL_47;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
  return 0LL;
}
