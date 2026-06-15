/*
 * XREFs of __lambda_74c162fae599aeca3eeb692ee18148b4_::operator()_::_1_::catch$4 @ 0x180166B09
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B23C8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall _lambda_74c162fae599aeca3eeb692ee18148b4_::operator()_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 184),
                           (void *)0x119,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\dummybroadcastprovider.cpp",
                           a4);
  return 0LL;
}
