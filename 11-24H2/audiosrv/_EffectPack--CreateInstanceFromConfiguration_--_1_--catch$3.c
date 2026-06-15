/*
 * XREFs of _EffectPack::CreateInstanceFromConfiguration_::_1_::catch$3 @ 0x18016B4FF
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall EffectPack::CreateInstanceFromConfiguration_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x101,
                           (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                           a4);
  return 0LL;
}
