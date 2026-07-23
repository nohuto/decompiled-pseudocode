/*
 * XREFs of PopDiagTraceSessionDisplayStateChange @ 0x1404A7B1C
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceSessionDisplayStateChange(char a1, int a2, int a3, int a4)
{
  const EVENT_DESCRIPTOR *v4; // rax
  const EVENT_DESCRIPTOR *v5; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  int *v8; // [rsp+50h] [rbp-30h]
  int v9; // [rsp+58h] [rbp-28h]
  int v10; // [rsp+5Ch] [rbp-24h]
  int *v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]
  int v14; // [rsp+98h] [rbp+18h] BYREF
  int v15; // [rsp+A0h] [rbp+20h] BYREF
  int v16; // [rsp+A8h] [rbp+28h] BYREF

  v16 = a4;
  v15 = a3;
  v14 = a2;
  v4 = &POP_ETW_EVENT_SESSION_DISPLAY_ON;
  v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_SESSION_DISPLAY_OFF;
  if ( !a1 )
    v5 = &POP_ETW_EVENT_SESSION_DISPLAY_ON;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PopDiagHandle, v5);
    if ( (_BYTE)v4 )
    {
      UserData.Reserved = 0;
      v10 = 0;
      v13 = 0;
      UserData.Ptr = (ULONGLONG)&v14;
      UserData.Size = 4;
      v8 = &v15;
      v9 = 4;
      v11 = &v16;
      v12 = 4;
      LOBYTE(v4) = EtwWriteEx(PopDiagHandle, v5, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v4;
}
