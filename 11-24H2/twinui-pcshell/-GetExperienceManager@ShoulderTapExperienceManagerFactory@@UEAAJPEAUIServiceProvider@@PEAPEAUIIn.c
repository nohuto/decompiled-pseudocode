/*
 * XREFs of ?GetExperienceManager@ShoulderTapExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x180209BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCShoulderTapExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180209C1C (--$MakeAndInitialize@VCShoulderTapExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@De.c)
 */

__int64 __fastcall ShoulderTapExperienceManagerFactory::GetExperienceManager(
        ShoulderTapExperienceManagerFactory *this,
        struct IServiceProvider *a2,
        struct IInspectable **a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CShoulderTapExperienceManager,IInspectable,IServiceProvider * &>((void **)a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
