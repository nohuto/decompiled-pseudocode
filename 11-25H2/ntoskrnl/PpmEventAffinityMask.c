/*
 * XREFs of PpmEventAffinityMask @ 0x1405D4340
 * Callers:
 *     PpmIdleUpdateSystemLatencyLimit @ 0x140203EC4 (PpmIdleUpdateSystemLatencyLimit.c)
 *     PoExecuteIdleCheck @ 0x140274578 (PoExecuteIdleCheck.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PpmEventAffinityMask(PCEVENT_DESCRIPTOR EventDescriptor, unsigned __int16 *a2)
{
  unsigned __int16 v4; // r10
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  ULONG UserDataCount; // r8d
  _OWORD *v10; // r9
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int16 v14; // [rsp+40h] [rbp-638h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[65]; // [rsp+50h] [rbp-628h] BYREF
  _QWORD v16[64]; // [rsp+460h] [rbp-218h] BYREF

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, EventDescriptor) )
  {
    v4 = *a2;
    v5 = 0;
    v6 = 0;
    v14 = 0;
    do
    {
      v7 = 2LL * v5;
      *(_OWORD *)&v16[v7] = 0LL;
      LOWORD(v16[v7 + 1]) = v6;
      if ( v6 < v4 )
      {
        v8 = *(_QWORD *)&a2[4 * v6 + 4];
        v16[2 * v5] = v8;
        if ( v8 )
          ++v5;
      }
      ++v6;
    }
    while ( v6 < 0x20u );
    v14 = v5;
    UserData[0].Ptr = (ULONGLONG)&v14;
    *(_QWORD *)&UserData[0].Size = 2LL;
    UserDataCount = 1;
    if ( v5 )
    {
      v10 = v16;
      v11 = v5;
      do
      {
        v12 = UserDataCount;
        UserData[v12].Ptr = (ULONGLONG)v10 + 8;
        *(_QWORD *)&UserData[v12].Size = 2LL;
        v13 = UserDataCount + 1;
        UserDataCount += 2;
        UserData[v13].Ptr = (ULONGLONG)v10++;
        *(_QWORD *)&UserData[v13].Size = 8LL;
        --v11;
      }
      while ( v11 );
    }
    EtwWriteEx(PpmEtwHandle, EventDescriptor, 0LL, 0, 0LL, 0LL, UserDataCount, UserData);
  }
}
