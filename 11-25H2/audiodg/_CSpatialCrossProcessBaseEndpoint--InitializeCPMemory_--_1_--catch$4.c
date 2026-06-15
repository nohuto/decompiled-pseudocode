/*
 * XREFs of _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::catch$4 @ 0x140097500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x14005DFE4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 232) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 184),
                            (void *)0x88,
                            (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpbaseendpoint.cpp",
                            a4);
  return 0LL;
}
