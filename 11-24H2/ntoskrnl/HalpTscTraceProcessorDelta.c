/*
 * XREFs of HalpTscTraceProcessorDelta @ 0x140547314
 * Callers:
 *     HalpTscAdvSynchCalculateRemoteDeltas @ 0x140546740 (HalpTscAdvSynchCalculateRemoteDeltas.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall HalpTscTraceProcessorDelta(int a1, int a2, __int64 a3, int a4)
{
  _UNKNOWN **v4; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+7h] BYREF
  int *v7; // [rsp+58h] [rbp+17h]
  int v8; // [rsp+60h] [rbp+1Fh]
  int v9; // [rsp+64h] [rbp+23h]
  __int64 *v10; // [rsp+68h] [rbp+27h]
  int v11; // [rsp+70h] [rbp+2Fh]
  int v12; // [rsp+74h] [rbp+33h]
  int *v13; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+84h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF
  int v17; // [rsp+A8h] [rbp+67h] BYREF
  int v18; // [rsp+B0h] [rbp+6Fh] BYREF
  __int64 v19; // [rsp+B8h] [rbp+77h] BYREF
  int v20; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v20 = a4;
  v19 = a3;
  v18 = a2;
  v17 = a1;
  if ( HalpDiagnosticEventsRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TIMER_PROC_DELTA_REPORT);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = (ULONGLONG)&v17;
      UserData.Size = 4;
      v7 = &v18;
      v10 = &v19;
      v13 = &v20;
      v8 = 4;
      v14 = 4;
      v11 = 8;
      LOBYTE(v4) = EtwWriteEx(
                     HalpDiagnosticEventHandle,
                     &HAL_ETW_EVENT_TIMER_PROC_DELTA_REPORT,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     4u,
                     &UserData);
    }
  }
  return (char)v4;
}
