/*
 * XREFs of _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::catch$22 @ 0x18004C070
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002C870 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::catch_22(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 304) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 280),
                            (void *)0xAE,
                            (int)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
                            a4);
  return 0LL;
}
