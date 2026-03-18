/*
 * XREFs of TR_AreTransfersPending @ 0x1400349E8
 * Callers:
 *     Endpoint_AreTransfersPending @ 0x140034988 (Endpoint_AreTransfersPending.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_AreTransfersPending(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 56LL))();
}
