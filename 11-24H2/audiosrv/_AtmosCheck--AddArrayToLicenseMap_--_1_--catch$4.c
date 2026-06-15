/*
 * XREFs of _AtmosCheck::AddArrayToLicenseMap_::_1_::catch$4 @ 0x1801724DF
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AtmosCheck::AddArrayToLicenseMap_::_1_::catch_4(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x3D1,
                           (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
                           a4);
  return 0LL;
}
