/*
 * XREFs of PopDiagTraceSystemIdleEventAssessment @ 0x140A1C3B4
 * Callers:
 *     PopAssessSystemIdleEvent @ 0x140A1C320 (PopAssessSystemIdleEvent.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceSystemIdleEventAssessment(int a1, int a2, int a3, unsigned __int8 a4, char a5)
{
  _UNKNOWN **v5; // rax
  int v6; // ebx
  int v8; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-11h] BYREF
  int *v10; // [rsp+58h] [rbp-1h]
  int v11; // [rsp+60h] [rbp+7h]
  int v12; // [rsp+64h] [rbp+Bh]
  int *v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+74h] [rbp+1Bh]
  int *v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+84h] [rbp+2Bh]
  char *v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+90h] [rbp+37h]
  int v21; // [rsp+94h] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+57h] BYREF
  int v23; // [rsp+B8h] [rbp+5Fh] BYREF
  int v24; // [rsp+C0h] [rbp+67h] BYREF
  int v25; // [rsp+C8h] [rbp+6Fh] BYREF

  v5 = &retaddr;
  v25 = a3;
  v24 = a2;
  v23 = a1;
  v6 = a4;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_EVENT_ASSESSMENT);
    if ( (_BYTE)v5 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      UserData.Ptr = (ULONGLONG)&v23;
      v10 = &v24;
      UserData.Size = 4;
      v13 = &v25;
      v16 = &v8;
      v19 = &a5;
      v11 = 4;
      v14 = 4;
      v17 = 4;
      v20 = 4;
      v8 = v6;
      LOBYTE(v5) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_EVENT_ASSESSMENT, 0LL, 5u, &UserData);
    }
  }
  return (char)v5;
}
