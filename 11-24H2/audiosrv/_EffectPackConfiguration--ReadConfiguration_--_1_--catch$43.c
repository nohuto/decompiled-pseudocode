/*
 * XREFs of _EffectPackConfiguration::ReadConfiguration_::_1_::catch$43 @ 0x180172102
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall EffectPackConfiguration::ReadConfiguration_::_1_::catch_43(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 240) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 344),
                            (void *)0x2B7,
                            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                            a4);
  return 0LL;
}
