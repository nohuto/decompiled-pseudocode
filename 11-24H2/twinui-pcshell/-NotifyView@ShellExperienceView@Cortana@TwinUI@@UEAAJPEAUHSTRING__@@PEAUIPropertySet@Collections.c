/*
 * XREFs of ?NotifyView@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803C5C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x18003E8B0 (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::NotifyView(
        TwinUI::Cortana::ShellExperienceView *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CSingleViewShellExperience::Reactivate((TwinUI::Cortana::ShellExperienceView *)((char *)this + 48), a2, a3, a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
