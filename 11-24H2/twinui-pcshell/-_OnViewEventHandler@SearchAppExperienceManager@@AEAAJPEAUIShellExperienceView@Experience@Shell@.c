/*
 * XREFs of ?_OnViewEventHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x1803ACEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803ACB40 (-_OnViewEvent@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Found.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnViewEventHandler(
        SearchAppExperienceManager *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *a3)
{
  __int64 (__fastcall *v5)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, HSTRING *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Foundation::Collections::IPropertySet *v12; // [rsp+40h] [rbp+18h] BYREF
  HSTRING string; // [rsp+48h] [rbp+20h] BYREF

  string = 0LL;
  v5 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, HSTRING *))(*(_QWORD *)a3 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v6 = v5(a3, &string);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v12 = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewEventArg *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)a3 + 56LL))(
           a3,
           &v12);
    v7 = v8;
    if ( v8 >= 0 )
    {
      v8 = SearchAppExperienceManager::_OnViewEvent(this, (Microsoft::WRL::Wrappers::Details *)string, v12);
      v7 = v8;
      if ( v8 >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
        v7 = 0;
        goto LABEL_9;
      }
      v9 = 984LL;
    }
    else
    {
      v9 = 983LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D5,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  }
LABEL_9:
  WindowsDeleteString(string);
  return v7;
}
