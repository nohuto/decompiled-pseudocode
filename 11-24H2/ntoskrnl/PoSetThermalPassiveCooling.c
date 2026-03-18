/*
 * XREFs of PoSetThermalPassiveCooling @ 0x140A8F9C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     PopPropogateCoolingChange @ 0x14042796C (PopPropogateCoolingChange.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopThermalUpdatePassiveTimeTracking @ 0x140A8FAF8 (PopThermalUpdatePassiveTimeTracking.c)
 */

__int64 __fastcall PoSetThermalPassiveCooling(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // ebx
  __int64 v6; // rdx
  bool v7; // zf
  char v9; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+38h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-48h] BYREF
  __int64 *v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+58h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  if ( *(_QWORD *)(v2 + 136) )
  {
    if ( a2 <= 0x64u )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)(v2 + 32));
      if ( *(_BYTE *)(a1 + 18) )
      {
        LOBYTE(v6) = *(_BYTE *)(a1 + 16);
        if ( (_BYTE)v6 != a2 )
        {
          PopThermalUpdatePassiveTimeTracking(a1 + 40, v6);
          v7 = PopDiagHandleRegistered == 0;
          *(_BYTE *)(a1 + 16) = a2;
          if ( !v7 && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_REQUEST_PASSIVE_UPDATE) )
          {
            v9 = *(_BYTE *)(a1 + 16);
            v10 = a1;
            UserData.Ptr = (ULONGLONG)&v9;
            v12 = &v10;
            *(_QWORD *)&UserData.Size = 1LL;
            v13 = 8LL;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_THERMAL_REQUEST_PASSIVE_UPDATE, 0LL, 2u, &UserData);
          }
          PopPropogateCoolingChange(v2);
        }
      }
      else
      {
        v3 = -1073741431;
      }
      PopReleaseRwLock((signed __int64 *)(v2 + 32));
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
