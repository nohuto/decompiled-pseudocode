/*
 * XREFs of _QueueGenericWorkItem_::_1_::catch$20 @ 0x1800490E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18002A440 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall QueueGenericWorkItem_::_1_::catch_20(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 152) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 136),
                            (void *)0x150,
                            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
                            a4);
  return 0LL;
}
