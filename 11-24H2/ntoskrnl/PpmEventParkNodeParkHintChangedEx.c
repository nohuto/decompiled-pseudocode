/*
 * XREFs of PpmEventParkNodeParkHintChangedEx @ 0x1405DADD8
 * Callers:
 *     PpmParkApplyPolicyEx @ 0x1405DE964 (PpmParkApplyPolicyEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventParkNodeParkHintChangedEx(_WORD *a1, _WORD *a2)
{
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rbx
  ULONG UserDataCount; // [rsp+40h] [rbp-59h] BYREF
  int v6; // [rsp+44h] [rbp-55h] BYREF
  GUID v7; // [rsp+48h] [rbp-51h] BYREF

  v7.Data1 = 0;
  v6 = 0;
  UserDataCount = 0;
  UserData = PpmEventPerfCheckData;
  if ( PpmEventPerfCheckData && PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_PARK_HINT_CHANGE) )
    {
      PpmEventAddAffinityMaskAsSubset(
        0LL,
        a1,
        (__int64)&v7.Data2,
        (__int64)v7.Data4,
        (__int64)UserData,
        &v7,
        &v6,
        &UserDataCount);
      PpmEventAddAffinityMaskAsSubset(
        a1,
        a2,
        (__int64)&v7.Data2,
        (__int64)v7.Data4,
        (__int64)UserData,
        &v7,
        &v6,
        &UserDataCount);
      EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_NODE_PARK_HINT_CHANGE, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
    }
  }
}
