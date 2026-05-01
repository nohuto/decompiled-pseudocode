/*
 * XREFs of ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18017CF60
 * Callers:
 *     ??$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18017CC40 (--$MakeAndInitialize@VCToastCenterExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@De.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18005F010 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x1800731D4 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1800859D8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x1800937A4 (-IsShellLauncherEnabledForCurrentUser@@YA_NXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ @ 0x18022E274 (-SubscribeToShellReadyWnf@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ??$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@SmartCookie@@QEAAJPEAUIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastCenterExperienceManager@@@Z @ 0x18023001C (--$Register@UIInputHostLayout@@P81@EAAJPEAUIInputHostLayoutChanges@@PEAK@ZP81@EAAJK@ZPEAVCToastC.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59977048@@@details@wil@@QEAA_NXZ @ 0x180372174 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59977048@@@details@wil@@QEAA_NXZ.c)
 *     ?Close@CToastCenterExperienceManager@@UEAAJXZ @ 0x180383B40 (-Close@CToastCenterExperienceManager@@UEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CToastCenterExperienceManager::RuntimeClassInitialize(
        CToastCenterExperienceManager *this,
        struct IServiceProvider *a2)
{
  HSTRING *v4; // r12
  HSTRING v5; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  HSTRING v9; // rbx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v11; // eax
  int v12; // eax
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  int v17; // eax
  HRESULT (__stdcall *v18)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v19; // eax
  int v20; // eax
  HRESULT (__stdcall *v21)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  int v22; // eax
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, char *); // rsi
  int v25; // eax
  HRESULT (__stdcall *v26)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v27; // rdi
  int v28; // eax
  int v29; // eax
  int v30; // eax
  HRESULT (__stdcall *v31)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  int v32; // eax
  int ready; // eax
  struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **v34; // r8
  int HostExperiencePriorityManipulator; // eax
  unsigned int v36; // r8d
  HSTRING_HEADER *v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // [rsp+30h] [rbp-29h] BYREF
  __int64 v41; // [rsp+38h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-19h] BYREF
  HSTRING v43; // [rsp+58h] [rbp-1h]
  HSTRING_HEADER v44; // [rsp+60h] [rbp+7h] BYREF
  HSTRING v45; // [rsp+78h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = (HSTRING *)((char *)this + 104);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59977048>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59977048>::GetImpl'::`2'::impl) )
  {
    v43 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.ToastCenter",
      0x2Du,
      0x2Cu);
    v5 = v43;
    v45 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v44,
      L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!FullTrustApp",
      0x41u,
      0x40u);
    v6 = CSingleViewShellExperience::RuntimeClassInitialize(
           v4,
           (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
           a2,
           v45,
           v5);
    if ( (v6 & 0x80000000) != 0 )
    {
      v7 = 324LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
        (const char *)v6);
      return v6;
    }
  }
  else
  {
    v45 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v44,
      L"Windows.Internal.ShellExperience.ToastCenter",
      0x2Du,
      0x2Cu);
    v9 = v45;
    v43 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
      0x38u,
      0x37u);
    v6 = CSingleViewShellExperience::RuntimeClassInitialize(
           v4,
           (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
           a2,
           v43,
           v9);
    if ( (v6 & 0x80000000) != 0 )
    {
      v7 = 328LL;
      goto LABEL_4;
    }
  }
  hstringHeader.Reserved.Reserved1 = this;
  hstringHeader.Reserved.Reserved2[8] = 1;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 51);
  v11 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
          a2,
          &IID_IImmersiveSessionIdleDetector,
          &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
          (char *)this + 408);
  v6 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x150,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 51) + 32LL))(
          *((_QWORD *)this + 51),
          ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
          (char *)this + 416);
  v6 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x151,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  v13 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 53);
  v14 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v13)(
          a2,
          &SID_InputHostLayout,
          &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
          (char *)this + 424);
  v6 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x153,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  v17 = SmartCookie::Register<IInputHostLayout,long (IInputHostLayout::*)(IInputHostLayoutChanges *,unsigned long *),long (IInputHostLayout::*)(unsigned long),CToastCenterExperienceManager *>(
          (int)this + 432,
          *((_QWORD *)this + 53),
          v15,
          v16,
          (__int64)this);
  v6 = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x155,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v17);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  v18 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 78);
  v19 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v18)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
          (char *)this + 624);
  v6 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x157,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v19);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  v20 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 78) + 24LL))(
          *((_QWORD *)this + 78),
          ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
          (char *)this + 568);
  v6 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x158,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v20);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  v40 = 0LL;
  v21 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
  v22 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))v21)(
          a2,
          &SID_IImmersiveMonitorService,
          &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
          &v40);
  v6 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15D,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v22);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  v23 = v40;
  v24 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v40 + 64LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 79);
  v25 = v24(v23, (char *)this + 632);
  v6 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v25);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  v26 = a2->lpVtbl->QueryService;
  v27 = (_QWORD *)((char *)this + 616);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 77);
  v28 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v26)(
          a2,
          &IID_IImmersiveWindowMessageService,
          &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
          (char *)this + 616);
  v6 = v28;
  if ( v28 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x162,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v28);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(*(_QWORD *)*v27 + 24LL))(
          *v27,
          0LL,
          ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
          (char *)this + 560);
  v6 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x164,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v29);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  v30 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v27 + 24LL))(
          *v27,
          26LL,
          ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
          (char *)this + 564);
  v6 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x165,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v30);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  v41 = 0LL;
  v31 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 81);
  v32 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v31)(
          a2,
          &IID_IRealmActivationHistory,
          &GUID_67136e8b_6914_43f0_8f25_05619927d22e,
          (char *)this + 648);
  v6 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x168,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v32);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  ready = CToastCenterExperienceManager::SubscribeToShellReadyWnf(this);
  v6 = ready;
  if ( ready < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)ready);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 12);
  HostExperiencePriorityManipulator = ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
                                        (ExperienceManagerUtils *)a2,
                                        (struct IServiceProvider *)this + 12,
                                        v34);
  v6 = HostExperiencePriorityManipulator;
  if ( HostExperiencePriorityManipulator < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)HostExperiencePriorityManipulator);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  v37 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v44, (const WCHAR **)&off_18075D038, v36);
  v38 = CSingleViewShellExperience::AddTestAumid((CSingleViewShellExperience *)v4, (HSTRING)v37[1].Reserved.Reserved1);
  v6 = v38;
  if ( v38 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16E,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v38);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
    CToastCenterExperienceManager::Close((CToastCenterExperienceManager *)((char *)this + 48));
    return v6;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 76, (__int64)a2);
  *((_BYTE *)this + 404) = IsShellLauncherEnabledForCurrentUser(v39);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v41);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v40);
  return 0LL;
}
