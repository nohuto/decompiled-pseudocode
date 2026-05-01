/*
 * XREFs of ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803AB5E0
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803AB510 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CreateShellExperienceView@SearchAppExperienceManager@@AEAAJXZ @ 0x1803ABE28 (-_CreateShellExperienceView@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ @ 0x1803ACFC4 (-_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VSearchAppDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803CD35C (--$MakeAndInitialize@VSearchAppDesktopExperienceView@@UIShellExperiencePositioner@Experience@She.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppExperienceManager::RuntimeClassInitialize(
        SearchAppExperienceManager *this,
        struct IServiceProvider *a2,
        __int64 (__fastcall ***a3)(struct TwinUI::Cortana::ISearchAppExperienceManagerNotification *, GUID *, char *))
{
  __int64 (__fastcall *v6)(struct TwinUI::Cortana::ISearchAppExperienceManagerNotification *, GUID *, char *); // rdi
  int ShellExperienceView; // ebx
  __int64 v8; // rdx
  char *v10; // r14
  int v11; // eax
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v13)(_QWORD, GUID *, char *); // rbx
  __int64 (__fastcall ***v14)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v15)(_QWORD, GUID *, char *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct TwinUI::Cortana::ISearchAppExperienceManagerNotification *v17; // [rsp+50h] [rbp+8h] BYREF
  struct IServiceProvider *v18; // [rsp+60h] [rbp+18h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 51, (__int64)a2);
  v6 = **a3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 61);
  ShellExperienceView = v6(
                          (struct TwinUI::Cortana::ISearchAppExperienceManagerNotification *)a3,
                          &_uuidof__AUIDisposable_Platform__,
                          (char *)this + 488);
  if ( ShellExperienceView < 0 )
  {
    v8 = 334LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)ShellExperienceView);
    return (unsigned int)ShellExperienceView;
  }
  v10 = (char *)this + 424;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 53);
  v17 = (struct TwinUI::Cortana::ISearchAppExperienceManagerNotification *)a3;
  v18 = a2;
  *((_QWORD *)this + 53) = 0LL;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<SearchAppDesktopExperienceView,Windows::Internal::Shell::Experience::IShellExperiencePositioner,IServiceProvider * &,TwinUI::Cortana::ISearchAppExperienceManagerNotification * &>(
          (char *)this + 424,
          &v18,
          &v17);
  ShellExperienceView = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x968,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v11);
    v8 = 336LL;
    goto LABEL_3;
  }
  v12 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v10;
  v13 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v10;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 54);
  ShellExperienceView = v13(v12, &GUID_19864e88_16fe_4208_922f_2e86a377d532, (char *)this + 432);
  if ( ShellExperienceView < 0 )
  {
    v8 = 337LL;
    goto LABEL_3;
  }
  v14 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v10;
  v15 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, char *))v10;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 62);
  ShellExperienceView = v15(v14, &GUID_5f2a82c6_e25c_461e_aedb_deab82507200, (char *)this + 496);
  if ( ShellExperienceView < 0 )
  {
    v8 = 338LL;
    goto LABEL_3;
  }
  ShellExperienceView = SearchAppExperienceManager::_RegisterMessages(this);
  if ( ShellExperienceView < 0 )
  {
    v8 = 340LL;
    goto LABEL_3;
  }
  ShellExperienceView = SearchAppExperienceManager::_CreateShellExperienceView(this);
  if ( ShellExperienceView < 0 )
  {
    v8 = 341LL;
    goto LABEL_3;
  }
  return 0LL;
}
