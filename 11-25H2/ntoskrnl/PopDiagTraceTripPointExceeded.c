/*
 * XREFs of PopDiagTraceTripPointExceeded @ 0x140A9B148
 * Callers:
 *     PopDiagTraceZoneCriticalTripPointExceeded @ 0x14074C2E8 (PopDiagTraceZoneCriticalTripPointExceeded.c)
 *     PopDiagTraceZoneS4TripPointExceeded @ 0x14074C3DC (PopDiagTraceZoneS4TripPointExceeded.c)
 *     PopThermalProcessUsermodeEvent @ 0x140A9AFB4 (PopThermalProcessUsermodeEvent.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x140A9B0D0 (PopDiagTraceUsermodeTripPointExceeded.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceTripPointExceeded(unsigned __int16 a1, __int64 a2, int a3, const EVENT_DESCRIPTOR *a4)
{
  __int64 v6; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 v8; // [rsp+50h] [rbp+7h]
  int v9; // [rsp+58h] [rbp+Fh]
  int v10; // [rsp+5Ch] [rbp+13h]
  __int64 *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  int *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  unsigned __int16 v17; // [rsp+B0h] [rbp+67h] BYREF
  int v18; // [rsp+C0h] [rbp+77h] BYREF

  v18 = a3;
  v17 = a1;
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, a4) )
    {
      UserData.Reserved = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v17;
      UserData.Size = 2;
      v9 = 2 * v17;
      v8 = a2;
      v13 = 0;
      v16 = 0;
      v6 = MEMORY[0xFFFFF78000000014];
      v11 = &v6;
      v14 = &v18;
      v12 = 8;
      v15 = 4;
      EtwWrite(PopDiagHandle, a4, 0LL, 4u, &UserData);
    }
  }
}
