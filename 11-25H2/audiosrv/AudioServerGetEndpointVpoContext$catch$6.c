/*
 * XREFs of AudioServerGetEndpointVpoContext$catch$6 @ 0x180167439
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B23C8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AudioServerGetEndpointVpoContext_catch_6(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 168),
                           (void *)0xBCB,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                           a4);
  return 0LL;
}
