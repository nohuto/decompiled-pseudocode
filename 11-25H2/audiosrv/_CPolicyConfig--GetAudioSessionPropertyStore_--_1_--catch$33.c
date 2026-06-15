/*
 * XREFs of _CPolicyConfig::GetAudioSessionPropertyStore_::_1_::catch$33 @ 0x18015FEF6
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B23C8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetAudioSessionPropertyStore_::_1_::catch_33(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 128) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x84C,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                            a4);
  return 0LL;
}
