/*
 * XREFs of asm_GetApplicationSubmixFromId$catch$7 @ 0x18016D1BD
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B056C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall asm_GetApplicationSubmixFromId_catch_7(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 136) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 104),
                            (void *)0x133,
                            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                            a4);
  return 0LL;
}
