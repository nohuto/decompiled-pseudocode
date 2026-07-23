/*
 * XREFs of PopDiagTraceIoCoalescingOn @ 0x140754C64
 * Callers:
 *     PopCoalescingSetActiveState @ 0x1404A8140 (PopCoalescingSetActiveState.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     PopPrintEx @ 0x14047F604 (PopPrintEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceIoCoalescingOn(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char result; // al
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+38h] [rbp-11h] BYREF
  int v7; // [rsp+40h] [rbp-9h] BYREF
  int v8; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  int *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  int *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  int *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  v8 = a4;
  v7 = PopCoalescingFlushInterval;
  v6 = PopCoalescingTimerInterval;
  v5 = PopCurrentCoalescingSpindownTimeout;
  result = PopPrintEx(
             3,
             (int)"PopCoalescing: ON notification sent (spindown timeout:%u, timer interval: %u, flush delay interval:%u, Enforced:%u)\n");
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_IO_COALESCING_ON);
    if ( result )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      v10 = &v6;
      v13 = &v7;
      v16 = &v8;
      UserData.Size = 4;
      v11 = 4;
      v14 = 4;
      v17 = 4;
      return EtwWrite(PopDiagHandle, &POP_ETW_IO_COALESCING_ON, 0LL, 4u, &UserData);
    }
  }
  return result;
}
