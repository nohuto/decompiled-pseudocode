/*
 * XREFs of __lambda_23a707cc6c78406526adb642245a01c2_::operator()_::_1_::catch$11 @ 0x18016ECF2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_23a707cc6c78406526adb642245a01c2_::operator()_::_1_::catch_11(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 168),
                           (void *)0x17A,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btbroadcastprovider.cpp",
                           a4);
  return 0LL;
}
