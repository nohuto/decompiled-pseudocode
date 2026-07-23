/*
 * XREFs of PpmEventAffinityMaskEx @ 0x1405DA420
 * Callers:
 *     PpmEventAffinityMask @ 0x1405D6230 (PpmEventAffinityMask.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PpmEventAffinityMaskEx(PCEVENT_DESCRIPTOR EventDescriptor, _WORD *a2)
{
  ULONG UserDataCount; // [rsp+40h] [rbp-478h] BYREF
  _BYTE v5[4]; // [rsp+44h] [rbp-474h] BYREF
  int v6; // [rsp+48h] [rbp-470h] BYREF
  GUID UserData; // [rsp+4Ch] [rbp-46Ch] BYREF
  _BYTE v8[64]; // [rsp+460h] [rbp-58h] BYREF

  UserData.Data1 = 0;
  v6 = 0;
  UserDataCount = 0;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, EventDescriptor) )
    {
      PpmEventAddAffinityMaskAsSubset(
        0LL,
        a2,
        (__int64)v5,
        (__int64)v8,
        (__int64)&UserData.Data2,
        &UserData,
        &v6,
        &UserDataCount);
      EtwWriteEx(
        PpmEtwHandle,
        EventDescriptor,
        0LL,
        0,
        0LL,
        0LL,
        UserDataCount,
        (PEVENT_DATA_DESCRIPTOR)&UserData.Data2);
    }
  }
}
