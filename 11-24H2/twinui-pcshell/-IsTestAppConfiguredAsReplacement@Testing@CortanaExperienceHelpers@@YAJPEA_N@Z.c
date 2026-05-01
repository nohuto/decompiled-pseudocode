/*
 * XREFs of ?IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YAJPEA_N@Z @ 0x1803A984C
 * Callers:
 *     ?IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YA_NXZ @ 0x1803A98E0 (-IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YA_NXZ.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1802A9AEC (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CortanaExperienceHelpers::Testing::IsTestAppConfiguredAsReplacement(
        CortanaExperienceHelpers::Testing *this,
        bool *a2)
{
  unsigned int ValueW; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v6; // [rsp+50h] [rbp+8h] BYREF
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  *(_BYTE *)this = 0;
  v7 = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
             L"IsTestAppConfiguredAsReplacement",
             0x10u,
             0LL,
             &v6,
             &v7);
  if ( ValueW != 2 )
  {
    if ( ValueW )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x1C,
               (int)"shellcommon\\internal\\shell\\inc\\cortana\\CortanaAvailabilityHelpers.h",
               (const char *)ValueW);
    *(_BYTE *)this = v6 == 1;
  }
  return 0LL;
}
