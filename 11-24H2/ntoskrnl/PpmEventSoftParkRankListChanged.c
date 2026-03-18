/*
 * XREFs of PpmEventSoftParkRankListChanged @ 0x140355138
 * Callers:
 *     PpmParkReportParkedCores @ 0x1403547C0 (PpmParkReportParkedCores.c)
 *     PpmParkApplyPolicy @ 0x1404ED2F4 (PpmParkApplyPolicy.c)
 *     PpmParkApplyPolicyEx @ 0x1405E1344 (PpmParkApplyPolicyEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void PpmEventSoftParkRankListChanged()
{
  void *v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  void *v2; // [rsp+50h] [rbp-28h]
  int v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+5Ch] [rbp-1Ch]

  v0 = PpmParkNewSoftParkRankList;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_SOFT_PARKING_RANK_LIST_CHANGED) )
    {
      UserData.Reserved = 0;
      v4 = 0;
      UserData.Ptr = (ULONGLONG)&KeMaximumProcessors;
      v3 = 4 * KeMaximumProcessors;
      UserData.Size = 4;
      v2 = v0;
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_SOFT_PARKING_RANK_LIST_CHANGED, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
}
