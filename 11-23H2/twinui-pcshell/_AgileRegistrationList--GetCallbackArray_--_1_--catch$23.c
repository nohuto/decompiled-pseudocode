/*
 * XREFs of _AgileRegistrationList::GetCallbackArray_::_1_::catch$23 @ 0x1802BA370
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180132134 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AgileRegistrationList::GetCallbackArray_::_1_::catch_23(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x3C,
                           (int)"desktop\\internal\\shell\\inc\\private\\agileregistrationlist.h",
                           a4);
  return 0LL;
}
