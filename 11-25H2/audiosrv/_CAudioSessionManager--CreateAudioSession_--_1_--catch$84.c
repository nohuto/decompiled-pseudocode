/*
 * XREFs of _CAudioSessionManager::CreateAudioSession_::_1_::catch$84 @ 0x18015F620
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B23C8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioSessionManager::CreateAudioSession_::_1_::catch_84(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 376),
                            (void *)0x172,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                            a4);
  return 0LL;
}
