/*
 * XREFs of TR_FSEReceived @ 0x14000E7D4
 * Callers:
 *     Endpoint_SM_NotifyTransferRingsFSEReceived @ 0x14000E754 (Endpoint_SM_NotifyTransferRingsFSEReceived.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall TR_FSEReceived(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 144LL))();
}
