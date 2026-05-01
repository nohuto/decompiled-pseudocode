/*
 * XREFs of ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803D2A54
 * Callers:
 *     ??$MakeAndInitialize@VSearchAppDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803CD35C (--$MakeAndInitialize@VSearchAppDesktopExperienceView@@UIShellExperiencePositioner@Experience@She.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z @ 0x18010554C (--0-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAA@$$QEAV01@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$make_unique_nothrow@VCCortanaWNFService@Cortana@TwinUI@@$$V@wil@@YA?AV?$unique_ptr@VCCortanaWNFService@Cortana@TwinUI@@U?$default_delete@VCCortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@XZ @ 0x1803CD540 (--$make_unique_nothrow@VCCortanaWNFService@Cortana@TwinUI@@$$V@wil@@YA-AV-$unique_ptr@VCCortanaW.c)
 *     ?RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x1803D2B1C (-RuntimeClassInitialize@SearchAppDesktopExperienceView@@QEAAJPEAUIServiceProvider@@_ea_1803D2B1C.c)
 *     ?reset@?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAAXPEAVICortanaWNFService@Cortana@TwinUI@@@Z @ 0x1803D49A0 (-reset@-$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U-$default_delete@VICortanaWNFService@Co.c)
 *     ??1CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ @ 0x1803DE33C (--1CCortanaWNFService@Cortana@TwinUI@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::RuntimeClassInitialize(
        SearchAppDesktopExperienceView *this,
        struct IServiceProvider *a2,
        struct TwinUI::Cortana::ISearchAppExperienceManagerNotification *a3)
{
  __int64 *v6; // rax
  TwinUI::Cortana::CCortanaWNFService *v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v13[16]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  TwinUI::Cortana::CCortanaWNFService *v15; // [rsp+58h] [rbp+20h] BYREF

  v6 = wil::make_unique_nothrow<TwinUI::Cortana::CCortanaWNFService,>(&v15);
  wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>((__int64)&v12, v6);
  v7 = v15;
  v15 = 0LL;
  if ( v7 )
  {
    TwinUI::Cortana::CCortanaWNFService::~CCortanaWNFService(v7);
    operator delete(v7, (const struct std::nothrow_t *)0x48);
  }
  v8 = wistd::unique_ptr<void,wil::process_heap_deleter>::unique_ptr<void,wil::process_heap_deleter>((__int64)v13, &v12);
  v9 = SearchAppDesktopExperienceView::RuntimeClassInitialize(this, a2, a3, v8);
  v10 = v9;
  if ( v9 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v9);
  wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
    &v12,
    0LL);
  return v10;
}
