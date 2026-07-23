/*
 * XREFs of PpmEventAffinityMask @ 0x1405D6230
 * Callers:
 *     PoExecuteIdleCheck @ 0x1402ABB40 (PoExecuteIdleCheck.c)
 *     PpmIdleUpdateSystemLatencyLimit @ 0x1402AEDA4 (PpmIdleUpdateSystemLatencyLimit.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventAffinityMaskEx @ 0x1405DA420 (PpmEventAffinityMaskEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventAffinityMask(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2)
{
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int16 v5; // r10
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  ULONG UserDataCount; // r8d
  _OWORD *v11; // r9
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int16 v16; // [rsp+40h] [rbp-638h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[65]; // [rsp+50h] [rbp-628h] BYREF
  _QWORD v18[64]; // [rsp+460h] [rbp-218h] BYREF

  IsEnabledDeviceUsageNoInline = Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    LOBYTE(IsEnabledDeviceUsageNoInline) = PpmEventAffinityMaskEx(EventDescriptor);
  }
  else if ( PpmEtwRegistered )
  {
    LOBYTE(IsEnabledDeviceUsageNoInline) = EtwEventEnabled(PpmEtwHandle, EventDescriptor);
    if ( (_BYTE)IsEnabledDeviceUsageNoInline )
    {
      v5 = *a2;
      v6 = 0;
      v7 = 0;
      v16 = 0;
      do
      {
        v8 = 2LL * v6;
        *(_OWORD *)&v18[v8] = 0LL;
        LOWORD(v18[v8 + 1]) = v7;
        if ( v7 < v5 )
        {
          v9 = *(_QWORD *)&a2[4 * v7 + 4];
          v18[2 * v6] = v9;
          if ( v9 )
            ++v6;
        }
        ++v7;
      }
      while ( v7 < 0x20u );
      v16 = v6;
      UserData[0].Ptr = (ULONGLONG)&v16;
      *(_QWORD *)&UserData[0].Size = 2LL;
      UserDataCount = 1;
      if ( v6 )
      {
        v11 = v18;
        v12 = v6;
        do
        {
          v13 = UserDataCount;
          UserData[v13].Ptr = (ULONGLONG)v11 + 8;
          *(_QWORD *)&UserData[v13].Size = 2LL;
          v14 = UserDataCount + 1;
          UserDataCount += 2;
          UserData[v14].Ptr = (ULONGLONG)v11++;
          *(_QWORD *)&UserData[v14].Size = 8LL;
          --v12;
        }
        while ( v12 );
      }
      LOBYTE(IsEnabledDeviceUsageNoInline) = EtwWriteEx(
                                               PpmEtwHandle,
                                               EventDescriptor,
                                               0LL,
                                               0,
                                               0LL,
                                               0LL,
                                               UserDataCount,
                                               UserData);
    }
  }
  return IsEnabledDeviceUsageNoInline;
}
