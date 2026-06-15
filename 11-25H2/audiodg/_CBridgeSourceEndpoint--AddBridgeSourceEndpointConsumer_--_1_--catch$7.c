/*
 * XREFs of _CBridgeSourceEndpoint::AddBridgeSourceEndpointConsumer_::_1_::catch$7 @ 0x140096271
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005DFE4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CBridgeSourceEndpoint::AddBridgeSourceEndpointConsumer_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x88,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp",
                           a4);
  return 0LL;
}
