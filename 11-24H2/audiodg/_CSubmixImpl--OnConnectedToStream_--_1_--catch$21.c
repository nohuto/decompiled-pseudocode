/*
 * XREFs of _CSubmixImpl::OnConnectedToStream_::_1_::catch$21 @ 0x1400931E5
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005DEF4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSubmixImpl::OnConnectedToStream_::_1_::catch_21(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 32) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 376),
                           (void *)0x463,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
                           a4);
  return 0LL;
}
