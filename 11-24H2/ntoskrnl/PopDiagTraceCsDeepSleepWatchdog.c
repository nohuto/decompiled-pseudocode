/*
 * XREFs of PopDiagTraceCsDeepSleepWatchdog @ 0x1405D1CE0
 * Callers:
 *     PopDeepSleepWatchdogTakeAction @ 0x140765DA8 (PopDeepSleepWatchdogTakeAction.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceCsDeepSleepWatchdog(
        int a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        unsigned __int8 a6)
{
  _UNKNOWN **v6; // rax
  int v7; // ebx
  int v9; // [rsp+48h] [rbp-39h] BYREF
  int v10; // [rsp+4Ch] [rbp-35h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-29h] BYREF
  int *v12; // [rsp+68h] [rbp-19h]
  int v13; // [rsp+70h] [rbp-11h]
  int v14; // [rsp+74h] [rbp-Dh]
  int *v15; // [rsp+78h] [rbp-9h]
  int v16; // [rsp+80h] [rbp-1h]
  int v17; // [rsp+84h] [rbp+3h]
  int *v18; // [rsp+88h] [rbp+7h]
  int v19; // [rsp+90h] [rbp+Fh]
  int v20; // [rsp+94h] [rbp+13h]
  char *v21; // [rsp+98h] [rbp+17h]
  int v22; // [rsp+A0h] [rbp+1Fh]
  int v23; // [rsp+A4h] [rbp+23h]
  int *v24; // [rsp+A8h] [rbp+27h]
  int v25; // [rsp+B0h] [rbp+2Fh]
  int v26; // [rsp+B4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+4Fh] BYREF
  int v28; // [rsp+D8h] [rbp+57h] BYREF
  int v29; // [rsp+E0h] [rbp+5Fh] BYREF
  int v30; // [rsp+E8h] [rbp+67h] BYREF

  v6 = &retaddr;
  v30 = a3;
  v29 = a2;
  v28 = a1;
  v7 = a4;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v6) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_DEEP_SLEEP_WATCHDOG);
    if ( (_BYTE)v6 )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      UserData.Ptr = (ULONGLONG)&v28;
      v12 = &v29;
      v15 = &v30;
      v18 = &v9;
      v21 = &a5;
      v10 = a6;
      v24 = &v10;
      UserData.Size = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      v25 = 4;
      v9 = v7;
      LOBYTE(v6) = EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_CS_DEEP_SLEEP_WATCHDOG, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return (char)v6;
}
