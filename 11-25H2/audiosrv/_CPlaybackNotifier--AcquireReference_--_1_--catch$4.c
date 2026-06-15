/*
 * XREFs of _CPlaybackNotifier::AcquireReference_::_1_::catch$4 @ 0x18015F2BA
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BF348 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPlaybackNotifier::AcquireReference_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 104),
    (void *)0x269,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
    a4);
  return 0LL;
}
