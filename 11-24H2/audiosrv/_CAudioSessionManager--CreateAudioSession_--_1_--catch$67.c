/*
 * XREFs of _CAudioSessionManager::CreateAudioSession_::_1_::catch$67 @ 0x180168BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioSessionManager::CreateAudioSession_::_1_::catch_67(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 344),
                            (void *)0x17F,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                            a4);
  return 0LL;
}
