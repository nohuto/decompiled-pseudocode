/*
 * XREFs of ?OnPrimaryViewSystemLevelShowRequested@TabTipAdapter@KeyboardHosting@@QEAAJPEA_NAEBUhstring@winrt@@V?$optional@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@@Z @ 0x18047EB04
 * Callers:
 *     ?OnKeyboardButtonRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180473110 (-OnKeyboardButtonRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEBUShowShellViewRequestedEventArgs@Shell@7WindowsUdk@winrt@@@Z @ 0x18047F7B8 (-OnShellViewCoordinatorShowRequested@TabTipAdapter@KeyboardHosting@@QEAA_NW4CoreKeyboardViewType.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x1802BB350 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@details@wil@@QEAA_NXZ @ 0x180478A5C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2@@@detai.c)
 *     ?EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ @ 0x18047C4D0 (-EnsureTabTip@TabTipAdapter@KeyboardHosting@@AEAAXXZ.c)
 *     ?NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeReason@2@_N1@Z @ 0x18047D48C (-NotifyCurrentVisibilityState@TabTipAdapter@KeyboardHosting@@QEAAJIW4KeyboardVisibilityChangeRea.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnPrimaryViewSystemLevelShowRequested(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  const char *v9; // r9
  unsigned int v10; // edi
  __int64 result; // rax
  char v12; // di
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, _BYTE *, char *, int *, __int64 *); // rbx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // r14
  __int64 (__fastcall *v18)(__int64, _QWORD, __int64); // r12
  __int64 v19; // r15
  winrt::hstring *v20; // rax
  int v21; // r14d
  int v22; // eax
  unsigned int v23; // ebx
  char IsEnabled; // al
  int v25; // edx
  int v26; // eax
  unsigned int v27; // ebx
  int v28; // eax
  unsigned int v29; // ebx
  char v30; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v31[3]; // [rsp+41h] [rbp-37h] BYREF
  int v32; // [rsp+44h] [rbp-34h] BYREF
  int v33; // [rsp+48h] [rbp-30h] BYREF
  __int64 v34; // [rsp+50h] [rbp-28h] BYREF
  volatile signed __int32 *v35; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char v37; // [rsp+9Ch] [rbp+24h]

  v37 = BYTE4(a4);
  v4 = a4;
  try
  {
    KeyboardHosting::TabTipAdapter::EnsureTabTip((KeyboardHosting::TabTipAdapter *)a1);
    *a2 = 0;
    v32 = 0;
    v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 120) + 320LL))(*(_QWORD *)(a1 + 120), &v32);
    v10 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8B9,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v8);
      return v10;
    }
    if ( v32 == 1 )
    {
      *a2 = 1;
      v12 = v37;
      if ( !v37 )
      {
        v31[0] = 0;
        v30 = 0;
        v34 = 0LL;
        v33 = 0;
        v13 = *(_QWORD *)(a1 + 120);
        v14 = *(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, char *, int *, __int64 *))(*(_QWORD *)v13 + 304LL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
        v15 = v14(v13, 0LL, v31, &v30, &v33, &v34);
        v16 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8C7,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)v15);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
          return v16;
        }
        LODWORD(v35) = v33;
        BYTE4(v35) = 1;
        v4 = v33;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
        v12 = 1;
      }
      v17 = *(_QWORD *)(a1 + 128);
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v17 + 336LL);
      v19 = *a3;
      v20 = winrt::hstring::hstring((winrt::hstring *)&v35, L"BUTTON");
      v21 = v18(v17, *(_QWORD *)v20, v19);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v35);
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8CC,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v21);
        return (unsigned int)v21;
      }
      if ( !v12 )
        std::_Throw_bad_optional_access();
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8, v4, 0LL);
      v23 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8CD,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)v22);
        return v23;
      }
      IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_TryShowHidesImmediatelyV2>::GetImpl'::`2'::impl);
      v25 = *(_DWORD *)(a1 + 496);
      if ( IsEnabled )
      {
        v26 = KeyboardHosting::TabTipAdapter::NotifyCurrentVisibilityState(a1, v25, 1, 1, 0);
        v27 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8D7,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)v26);
          return v27;
        }
      }
      else
      {
        v28 = KeyboardHosting::TabTipAdapter::NotifyCurrentVisibilityState(a1, v25, 0, 1, 0);
        v29 = v28;
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8DB,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)v28);
          return v29;
        }
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8E1,
                           (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
                           v9);
  }
  return result;
}
