/*
 * XREFs of TR_EndpointHalted @ 0x14002EFC4
 * Callers:
 *     Endpoint_SM_NotifyTransferRingsEndpointHalted @ 0x14002EF44 (Endpoint_SM_NotifyTransferRingsEndpointHalted.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_EndpointHalted(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 120LL))();
}
