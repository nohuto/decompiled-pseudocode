/*
 * XREFs of CrmActivityDereference @ 0x180032160
 * Callers:
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x18000DF50 (CrmSrvActivityQueryWindowClosedReasons.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180030BB0 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmRegistrationCreateActivity @ 0x180031620 (CrmRegistrationCreateActivity.c)
 *     CrmRegistrationRemoveActivity @ 0x18003190C (CrmRegistrationRemoveActivity.c)
 *     CrmRpcSrvActivityFree @ 0x180031A90 (CrmRpcSrvActivityFree.c)
 *     CrmSrvActivityFree @ 0x180031DAC (CrmSrvActivityFree.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x180069748 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     CrmActivityCleanup @ 0x180032E80 (CrmActivityCleanup.c)
 */

char __fastcall CrmActivityDereference(volatile signed __int64 *P)
{
  signed __int64 v2; // rax
  bool v3; // zf
  bool v4; // sf
  bool v5; // of
  signed __int64 v6; // rax

  v2 = _InterlockedExchangeAdd64(P + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = __OFSUB__(v2, 1LL);
  v3 = v2 == 1;
  v4 = v2 - 1 < 0;
  v6 = v2 - 1;
  if ( v4 ^ v5 | v3 )
  {
    if ( v6 )
      __fastfail(0xEu);
    CrmActivityCleanup(P);
    LOBYTE(v6) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)P);
  }
  return v6;
}
