/*
 * XREFs of TR_ProcessExpectedEventTRBs @ 0x140004B98
 * Callers:
 *     ESM_ProcessingExpectedEventTRBsAfterEndpointStop @ 0x140004450 (ESM_ProcessingExpectedEventTRBsAfterEndpointStop.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_ProcessExpectedEventTRBs(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 136LL))();
}
