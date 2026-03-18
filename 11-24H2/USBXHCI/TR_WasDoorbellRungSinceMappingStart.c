/*
 * XREFs of TR_WasDoorbellRungSinceMappingStart @ 0x14002EE24
 * Callers:
 *     Endpoint_SM_WasDoorbellRungSinceMappingStart @ 0x14002ED9C (Endpoint_SM_WasDoorbellRungSinceMappingStart.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 152LL))();
}
