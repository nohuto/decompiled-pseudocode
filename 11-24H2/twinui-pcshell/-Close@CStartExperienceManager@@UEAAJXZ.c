/*
 * XREFs of ?Close@CStartExperienceManager@@UEAAJXZ @ 0x180241E00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18029721C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ @ 0x180392AC0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_49402389@@@details@wil@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CStartExperienceManager::Close(CStartExperienceManager *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v2 = (_QWORD *)((char *)this + 504);
  if ( *((_DWORD *)this + 120) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 32LL))(*v2);
    *((_DWORD *)this + 120) = 0;
  }
  if ( *((_DWORD *)this + 121) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 32LL))(*v2);
    *((_DWORD *)this + 121) = 0;
  }
  if ( *((_DWORD *)this + 122) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 32LL))(*v2);
    *((_DWORD *)this + 122) = 0;
  }
  if ( *((_DWORD *)this + 123) )
  {
    v3 = *((_QWORD *)this + 65);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 32LL))(v3);
      *((_DWORD *)this + 123) = 0;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_49402389>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_49402389>::GetImpl'::`2'::impl) )
  {
    if ( *((_DWORD *)this + 124) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 32LL))(*((_QWORD *)this + 63));
      *((_DWORD *)this + 124) = 0;
    }
    if ( *((_DWORD *)this + 125) )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 63) + 32LL))(*((_QWORD *)this + 63));
      *((_DWORD *)this + 125) = 0;
    }
    v12 = 0LL;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 66, &v12);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v12);
  }
  v11 = 0LL;
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 30);
  v5 = **v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  v6 = v5(v4, &_uuidof__AUIDisposable_Platform__, &v11);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x176,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v9);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x177,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 63);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return 0LL;
}
