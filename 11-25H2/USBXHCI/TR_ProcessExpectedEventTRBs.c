/*
 * XREFs of TR_ProcessExpectedEventTRBs @ 0x1400144C8
 * Callers:
 *     ESM_ProcessingExpectedEventTRBsAfterEndpointStop @ 0x140014410 (ESM_ProcessingExpectedEventTRBsAfterEndpointStop.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_ProcessExpectedEventTRBs(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 136LL))();
}
