/*
 * XREFs of ?RuntimeClassInitialize@CBaseTrayFlyoutExperienceManager@@UEAAJPEAUIServiceProvider@@PEBG1W4LIGHT_DISMISS_FLAGS@@@Z @ 0x1803CB8D0
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
        _DWORD *a1,
        struct IServiceProvider *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        int a5)
{
  int v6; // ebx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  HSTRING_HEADER *v9; // rax
  int v11[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v12; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)v11 = a4;
  a1[70] = a5;
  v6 = CBaseTrayFlyoutExperienceManager::Initialize(
         (CBaseTrayFlyoutExperienceManager *)a1,
         a2,
         L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
         a3);
  if ( v6 < 0 )
  {
    v8 = 76LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v12, (const WCHAR **)v11, v7);
  v6 = CSingleViewShellExperience::AddTestAumid(
         (CSingleViewShellExperience *)(a1 + 18),
         (HSTRING)v9[1].Reserved.Reserved1);
  if ( v6 < 0 )
  {
    v8 = 77LL;
    goto LABEL_5;
  }
  return (unsigned int)v6;
}
