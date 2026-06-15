/*
 * XREFs of _CConstraintModel::Initialize_::_1_::catch$22 @ 0x180169203
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B23C8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CConstraintModel::Initialize_::_1_::catch_22(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 2072),
                           (void *)0x140,
                           (int)"avcore\\audiocore\\server\\audiosrv\\constraintmodel\\lib\\constraintmodel.cpp",
                           a4);
  return 0LL;
}
