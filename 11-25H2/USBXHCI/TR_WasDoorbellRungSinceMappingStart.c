/*
 * XREFs of TR_WasDoorbellRungSinceMappingStart @ 0x14002FB14
 * Callers:
 *     Endpoint_SM_WasDoorbellRungSinceMappingStart @ 0x14002FA8C (Endpoint_SM_WasDoorbellRungSinceMappingStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 152LL))();
}
