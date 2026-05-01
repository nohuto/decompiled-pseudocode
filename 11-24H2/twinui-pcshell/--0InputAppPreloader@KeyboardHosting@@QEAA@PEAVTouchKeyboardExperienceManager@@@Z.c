/*
 * XREFs of ??0InputAppPreloader@KeyboardHosting@@QEAA@PEAVTouchKeyboardExperienceManager@@@Z @ 0x1802B4AC8
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UICoreKeyboardInputProfileManagerStatics@Core@Text@Internal@UI@Windows@@@wil@@YA?AV?$com_ptr_t@UICoreKeyboardInputProfileManagerStatics@Core@Text@Internal@UI@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180200A30 (--$GetActivationFactory@UICoreKeyboardInputProfileManagerStatics@Core@Text@Internal@UI@Windows@@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@23456@@Foundation@Windows@@VInputAppPreloader@KeyboardHosting@@PEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@789UI@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@23456@@Foundation@Windows@@@01@PEAVInputAppPreloader@KeyboardHosting@@P834@EAAJPEAUICoreKeyboardInputProfileManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs@6789Windows@@@Z@Z @ 0x1802B4710 (--$Callback@U-$ITypedEventHandler@PEAVCoreKeyboardInputProfileManager@Core@Text@Internal@UI@Wind.c)
 *     ?IsRunningOnServerSku@KeyboardHosting@@YA_NXZ @ 0x1802B4C08 (-IsRunningOnServerSku@KeyboardHosting@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
KeyboardHosting::InputAppPreloader *__fastcall KeyboardHosting::InputAppPreloader::InputAppPreloader(
        KeyboardHosting::InputAppPreloader *this,
        struct TouchKeyboardExperienceManager *a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v5; // rdi
  int v6; // edx
  unsigned int v7; // r8d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbp
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, char *); // rbx
  __int64 *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v18; // [rsp+20h] [rbp-28h]
  KeyboardHosting *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF
  __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)this = a2;
  v5 = (__int64 *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x71,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
      a4);
  if ( KeyboardHosting::IsRunningOnServerSku(retaddr) )
  {
    _InterlockedExchange((volatile __int32 *)this + 8, 1);
  }
  else
  {
    wil::GetActivationFactory<Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerStatics>(&v21, v6, v7);
    v8 = v21;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 48LL);
    v10 = *v5;
    *v5 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v9(v8, v5);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x7E,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
        (const char *)(unsigned int)v11,
        v18);
    v12 = *v5;
    v13 = *(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v12 + 64LL);
    v14 = Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::CoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>,KeyboardHosting::InputAppPreloader,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardInputProfileManagerEnabledProfilesChangedEventArgs *>(
            &v20,
            (__int64)this);
    v15 = v13(v12, *v14, (char *)this + 16);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x82,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\inputapppreloader.cpp",
        (const char *)(unsigned int)v15,
        v18);
    v16 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  }
  return this;
}
