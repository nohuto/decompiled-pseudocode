/*
 * XREFs of ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x1803CB830
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18005F010 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z @ 0x180121ECC (-Initialize@CBaseTrayFlyoutExperienceManager@@AEAAJPEAUIServiceProvider@@PEBG1@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseTrayFlyoutExperienceManager::RuntimeClassInitialize(
        CBaseTrayFlyoutExperienceManager *this,
        struct IServiceProvider *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  int v5; // ebx
  unsigned int v6; // r8d
  __int64 v7; // rdx
  HSTRING_HEADER *v8; // rax
  int v10[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v11; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)v10 = a4;
  v5 = CBaseTrayFlyoutExperienceManager::Initialize(
         this,
         a2,
         L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
         a3);
  if ( v5 < 0 )
  {
    v7 = 63LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v11, (const WCHAR **)v10, v6);
  v5 = CSingleViewShellExperience::AddTestAumid(
         (CBaseTrayFlyoutExperienceManager *)((char *)this + 72),
         (HSTRING)v8[1].Reserved.Reserved1);
  if ( v5 < 0 )
  {
    v7 = 64LL;
    goto LABEL_5;
  }
  return (unsigned int)v5;
}
