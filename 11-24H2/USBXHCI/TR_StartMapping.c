/*
 * XREFs of TR_StartMapping @ 0x14002C2B0
 * Callers:
 *     Endpoint_SM_StartMapping @ 0x14002C234 (Endpoint_SM_StartMapping.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_StartMapping(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 96LL))();
}
