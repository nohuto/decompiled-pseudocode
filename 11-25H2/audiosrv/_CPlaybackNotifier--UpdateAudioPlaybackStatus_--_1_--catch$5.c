/*
 * XREFs of _CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch$5 @ 0x18015F0E2
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BF348 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPlaybackNotifier::UpdateAudioPlaybackStatus_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 200),
    (void *)0x2C5,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
    a4);
  return 0LL;
}
