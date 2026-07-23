/*
 * XREFs of HalpTscTraceProcessorSynchronization @ 0x1405473F8
 * Callers:
 *     HalpTscAdvSynchToLeader @ 0x140483724 (HalpTscAdvSynchToLeader.c)
 *     HalpTscAdvSynchToTarget @ 0x140546B08 (HalpTscAdvSynchToTarget.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char HalpTscTraceProcessorSynchronization(int a1, int a2, ...)
{
  _UNKNOWN **v2; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  int *v5; // [rsp+58h] [rbp-1h]
  int v6; // [rsp+60h] [rbp+7h]
  int v7; // [rsp+64h] [rbp+Bh]
  va_list v8; // [rsp+68h] [rbp+Fh]
  int v9; // [rsp+70h] [rbp+17h]
  int v10; // [rsp+74h] [rbp+1Bh]
  va_list v11; // [rsp+78h] [rbp+1Fh]
  int v12; // [rsp+80h] [rbp+27h]
  int v13; // [rsp+84h] [rbp+2Bh]
  va_list v14; // [rsp+88h] [rbp+2Fh]
  int v15; // [rsp+90h] [rbp+37h]
  int v16; // [rsp+94h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  int v18; // [rsp+B8h] [rbp+5Fh] BYREF
  int v19; // [rsp+C0h] [rbp+67h] BYREF
  __int64 v20; // [rsp+C8h] [rbp+6Fh] BYREF
  va_list va; // [rsp+C8h] [rbp+6Fh]
  __int64 v22; // [rsp+D0h] [rbp+77h] BYREF
  va_list va1; // [rsp+D0h] [rbp+77h]
  va_list va2; // [rsp+D8h] [rbp+7Fh] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  v2 = &retaddr;
  v19 = a2;
  v18 = a1;
  if ( HalpDiagnosticEventsRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TIMER_PROC_SYNCH_REPORT);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      v7 = 0;
      v10 = 0;
      v13 = 0;
      v16 = 0;
      UserData.Ptr = (ULONGLONG)&v18;
      v5 = &v19;
      UserData.Size = 4;
      va_copy(v8, va);
      va_copy(v11, va1);
      va_copy(v14, va2);
      v6 = 4;
      v9 = 8;
      v12 = 8;
      v15 = 4;
      LOBYTE(v2) = EtwWriteEx(
                     HalpDiagnosticEventHandle,
                     &HAL_ETW_EVENT_TIMER_PROC_SYNCH_REPORT,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     5u,
                     &UserData);
    }
  }
  return (char)v2;
}
