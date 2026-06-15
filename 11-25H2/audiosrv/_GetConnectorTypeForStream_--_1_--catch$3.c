/*
 * XREFs of _GetConnectorTypeForStream_::_1_::catch$3 @ 0x18016367B
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800BF348 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetConnectorTypeForStream_::_1_::catch_3(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x1D7,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    a4);
  return 0LL;
}
