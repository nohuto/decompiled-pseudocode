/*
 * XREFs of ?RuntimeClassInitialize@ShellExperienceView@Cortana@TwinUI@@QEAAJPEAUIServiceProvider@@PEAUHSTRING__@@11W4ZBID@@@Z @ 0x1803C5FA0
 * Callers:
 *     ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x180378CE0 (--$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18005F010 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1800859D8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::RuntimeClassInitialize(
        __int64 a1,
        struct IServiceProvider *a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        int a6)
{
  int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v8 = CSingleViewShellExperience::RuntimeClassInitialize(
         (HSTRING *)(a1 + 48),
         (struct IWeakReferenceSource *)((a1 + 8) & -(__int64)(a1 != 0)),
         a2,
         a3,
         a5);
  if ( v8 < 0 )
  {
    v9 = 21LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = CSingleViewShellExperience::AddTestAumid((CSingleViewShellExperience *)(a1 + 48), a4);
  if ( v8 < 0 )
  {
    v9 = 22LL;
    goto LABEL_3;
  }
  *(_DWORD *)(a1 + 108) = a6;
  *(_DWORD *)(a1 + 304) = SHTaskPoolGetUniqueContext();
  return 0LL;
}
