/*
 * XREFs of PopDiagTraceIllegalProcessorThrottle @ 0x1405D0908
 * Callers:
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x1403B0830 (PpmPerfCheckForIllegalProcessorThrottle.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceIllegalProcessorThrottle(int a1, __int64 a2, _QWORD *a3)
{
  char v3; // bl
  char v4; // di
  __int64 v6; // rdx
  int v7; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-9h]
  int v10; // [rsp+68h] [rbp-1h]
  int v11; // [rsp+6Ch] [rbp+3h]
  int *v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+78h] [rbp+Fh]
  int v14; // [rsp+7Ch] [rbp+13h]
  int *v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  int v18; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v19; // [rsp+D8h] [rbp+6Fh] BYREF

  v19 = a2;
  v18 = a1;
  v3 = 1;
  v4 = 1;
  if ( !PopDiagHandleRegistered || !EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_DIAGNOSTIC) )
    v3 = 0;
  if ( !PopDiagHandleRegistered
    || !EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_OPERATIONAL) )
  {
    v4 = 0;
  }
  if ( v3 || v4 )
  {
    UserData.Reserved = 0;
    v11 = 0;
    UserData.Ptr = (ULONGLONG)&v18;
    UserData.Size = 4;
    v9 = &v19;
    v10 = 8;
    if ( *a3 )
      v6 = KeMaximumIncrement * (MEMORY[0xFFFFF78000000320] - *a3) / 10000000LL;
    else
      LODWORD(v6) = 0;
    v14 = 0;
    v17 = 0;
    v12 = &v7;
    v15 = &PopProcessorThrottleLogInterval;
    v7 = v6;
    *a3 = MEMORY[0xFFFFF78000000320];
    v13 = 4;
    v16 = 4;
    if ( v3 )
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_DIAGNOSTIC, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    if ( v4 )
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_ILLEGAL_PROCESSOR_THROTTLE_OPERATIONAL, 0LL, 0, 0LL, 0LL, 4u, &UserData);
  }
}
