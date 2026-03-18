/*
 * XREFs of TR_EndpointResetFromClient @ 0x14002E7C8
 * Callers:
 *     ESM_NotifyingTransferRingsEndpointResetFromClient @ 0x14002E750 (ESM_NotifyingTransferRingsEndpointResetFromClient.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_EndpointResetFromClient(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 128LL))();
}
