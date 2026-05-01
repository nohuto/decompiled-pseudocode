/*
 * XREFs of ?OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180165430
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x18003E8B0 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$InvokeAll@PEAVCStartExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCStartExperienceManager@@$$T@Z @ 0x1801655C4 (--$InvokeAll@PEAVCStartExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVStartExper.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CStartExperienceManager::OnViewHidden(
        CStartExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  ExperienceManagerUtils **v3; // rdi
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  HWND v8; // rax
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  struct Windows::Foundation::Collections::IPropertySet *v11; // r9
  int v12; // eax
  unsigned int v13; // esi
  HSTRING_HEADER v14; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = (ExperienceManagerUtils **)((char *)this + 248);
  if ( *((_BYTE *)this + 664)
    && (*((_BYTE *)this + 664) = 0,
        v8 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*v3, a2),
        EnableWindow(v8, 1),
        v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v14, (const WCHAR **)&off_18075D140, v9),
        v12 = CSingleViewShellExperience::Reactivate(
                (CStartExperienceManager *)((char *)this + 224),
                (HSTRING)v10[1].Reserved.Reserved1,
                0LL,
                v11),
        v13 = v12,
        v12 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x326,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  else
  {
    if ( *v3 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 38) + 88LL))(
             *((_QWORD *)this + 38),
             0LL,
             0LL,
             0LL,
             0LL);
      if ( v4 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x203,
          (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v4);
    }
    v5 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CStartExperienceManager *,std::nullptr_t>(
           (char *)this + 32,
           (char *)this - 96);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32C,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
    else
    {
      return 0LL;
    }
  }
}
