/*
 * XREFs of CrmActivityDereference @ 0x1800320E0
 * Callers:
 *     CrmSrvActivityQueryWindowClosedReasons @ 0x18000DED0 (CrmSrvActivityQueryWindowClosedReasons.c)
 *     CrmSrvActivityWindowClosedReasonSubscribe @ 0x180030B30 (CrmSrvActivityWindowClosedReasonSubscribe.c)
 *     CrmRegistrationCreateActivity @ 0x1800315A0 (CrmRegistrationCreateActivity.c)
 *     CrmRegistrationRemoveActivity @ 0x18003188C (CrmRegistrationRemoveActivity.c)
 *     CrmRpcSrvActivityFree @ 0x180031A10 (CrmRpcSrvActivityFree.c)
 *     CrmSrvActivityFree @ 0x180031D2C (CrmSrvActivityFree.c)
 *     CrmSrvActivityWindowClosedReasonUnsubscribe @ 0x1800695C8 (CrmSrvActivityWindowClosedReasonUnsubscribe.c)
 * Callees:
 *     CrmActivityCleanup @ 0x180032E00 (CrmActivityCleanup.c)
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
