/*
 * XREFs of ?RegisterForUserWatcherNotifications@AtmosCheck@@AEAAJXZ @ 0x1801495F4
 * Callers:
 *     _lambda_7ee6381ccef9550c878152fb933ee002_::operator() @ 0x1801474BC (_lambda_7ee6381ccef9550c878152fb933ee002_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180022D84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180064D38 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18006D8B8 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800828DC (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??$AsWeak@UIAudioModeEffectsWatcher@@@WRL@Microsoft@@YAJPEAUIAudioModeEffectsWatcher@@PEAVWeakRef@01@@Z @ 0x1800B4044 (--$AsWeak@UIAudioModeEffectsWatcher@@@WRL@Microsoft@@YAJPEAUIAudioModeEffectsWatcher@@PEAVWeakRe.c)
 *     Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_763aee26e7d4656314e991e320ffb749___ @ 0x1801466D0 (Microsoft--WRL--Callback_Microsoft--WRL--Implements_Microsoft--WRL--RuntimeClassFlags_2__Windows.c)
 *     _lambda_7e22c0f576fc86e89f8df846bfab63fc_::_lambda_7e22c0f576fc86e89f8df846bfab63fc_ @ 0x180146BC8 (_lambda_7e22c0f576fc86e89f8df846bfab63fc_--_lambda_7e22c0f576fc86e89f8df846bfab63fc_.c)
 *     ?IsMultiUserSKU@@YA_NXZ @ 0x1801487B4 (-IsMultiUserSKU@@YA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall AtmosCheck::RegisterForUserWatcherNotifications(AtmosCheck *this)
{
  __int64 *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  _QWORD *v5; // r14
  int ActivationFactory; // eax
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 (__fastcall *v9)(__int64 *, char *); // rdi
  __int64 *v10; // rax
  __int64 v11; // rbx
  int v12; // eax
  int v13; // edi
  __int64 *v15; // [rsp+20h] [rbp-50h] BYREF
  __int64 v16; // [rsp+28h] [rbp-48h] BYREF
  AtmosCheck *v17; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  if ( IsMultiUserSKU() )
  {
    v17 = this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v17);
    v16 = 0LL;
    v15 = &v16;
    v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v15);
    v3 = Microsoft::WRL::AsWeak<IAudioModeEffectsWatcher>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this, v2);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBEF,
        (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v3);
LABEL_14:
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v17);
      return v4;
    }
    v5 = (_QWORD *)((char *)this + 248);
    if ( !*((_QWORD *)this + 31) )
    {
      v15 = 0LL;
      v20 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.System.User", 0x14u, 0x13u);
      ActivationFactory = RoGetActivationFactory(v20, &GUID_155eb23b_242a_45e0_a2e9_3171fc6a7fdd, &v15);
      v4 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v7 = 3061LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)ActivationFactory);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
        goto LABEL_14;
      }
      v8 = v15;
      v9 = *(__int64 (__fastcall **)(__int64 *, char *))(*v15 + 48);
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)this + 31);
      ActivationFactory = v9(v8, (char *)this + 248);
      v4 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v7 = 3062LL;
        goto LABEL_7;
      }
      v10 = lambda_7e22c0f576fc86e89f8df846bfab63fc_::_lambda_7e22c0f576fc86e89f8df846bfab63fc_(
              (__int64 *)&hstringHeader,
              &v16,
              (__int64)this);
      Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_763aee26e7d4656314e991e320ffb749___(
        &v18,
        (__int64)v10);
      Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&hstringHeader);
      v11 = v18;
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *))(*(_QWORD *)*v5 + 72LL))(*v5, v18, (char *)this + 256);
      v13 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC0F,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          (const char *)(unsigned int)v12);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
        v4 = v13;
        goto LABEL_14;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 56LL))(*v5);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v15);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v16);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    *((_BYTE *)this + 264) = 1;
  }
  return 0LL;
}
