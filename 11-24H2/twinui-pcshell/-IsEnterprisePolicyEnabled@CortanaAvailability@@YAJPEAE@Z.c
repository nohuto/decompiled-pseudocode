/*
 * XREFs of ?IsEnterprisePolicyEnabled@CortanaAvailability@@YAJPEAE@Z @ 0x18022E3AC
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1800F2D78 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CortanaAvailability::IsEnterprisePolicyEnabled(CortanaAvailability *this, unsigned __int8 *a2)
{
  bool v3; // bl
  int v4; // eax
  int ExperiencePolicy_AllowCortana; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  BOOL v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *(_BYTE *)this = 0;
  v4 = SHWindowsPolicy(&POLID_AllowCortana);
  v9 = v4 != 0;
  if ( v4 )
  {
    ExperiencePolicy_AllowCortana = PolicyManager_GetExperiencePolicy_AllowCortana(&v9);
    v6 = ExperiencePolicy_AllowCortana;
    if ( ExperiencePolicy_AllowCortana < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7F,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
        (const char *)(unsigned int)ExperiencePolicy_AllowCortana);
      return v6;
    }
    v3 = v9;
  }
  *(_BYTE *)this = v3;
  return 0LL;
}
