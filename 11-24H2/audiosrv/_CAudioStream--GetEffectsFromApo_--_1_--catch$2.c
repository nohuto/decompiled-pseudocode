/*
 * XREFs of _CAudioStream::GetEffectsFromApo_::_1_::catch$2 @ 0x18016E081
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioStream::GetEffectsFromApo_::_1_::catch_2(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 144) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 136),
                            (void *)0x734,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                            a4);
  return 0LL;
}
