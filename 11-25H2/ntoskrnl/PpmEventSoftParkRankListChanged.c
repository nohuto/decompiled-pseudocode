/*
 * XREFs of PpmEventSoftParkRankListChanged @ 0x140496D74
 * Callers:
 *     PpmParkReportParkedCores @ 0x1403AD8E0 (PpmParkReportParkedCores.c)
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
