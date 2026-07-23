/*
 * XREFs of PoRundownSystemTimer @ 0x140A914FC
 * Callers:
 *     ExTraceTimerResolution @ 0x1404A3CD8 (ExTraceTimerResolution.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PoRundownSystemTimer(int a1, int a2, int a3, int a4, char a5, char a6)
{
  _UNKNOWN **v6; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-29h] BYREF
  int *v9; // [rsp+48h] [rbp-19h]
  int v10; // [rsp+50h] [rbp-11h]
  int v11; // [rsp+54h] [rbp-Dh]
  int *v12; // [rsp+58h] [rbp-9h]
  int v13; // [rsp+60h] [rbp-1h]
  int v14; // [rsp+64h] [rbp+3h]
  int *v15; // [rsp+68h] [rbp+7h]
  int v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+74h] [rbp+13h]
  char *v18; // [rsp+78h] [rbp+17h]
  int v19; // [rsp+80h] [rbp+1Fh]
  int v20; // [rsp+84h] [rbp+23h]
  char *v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+90h] [rbp+2Fh]
  int v23; // [rsp+94h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+4Fh] BYREF
  int v25; // [rsp+B8h] [rbp+57h] BYREF
  int v26; // [rsp+C0h] [rbp+5Fh] BYREF
  int v27; // [rsp+C8h] [rbp+67h] BYREF
  int v28; // [rsp+D0h] [rbp+6Fh] BYREF

  v6 = &retaddr;
  v28 = a4;
  v27 = a3;
  v26 = a2;
  v25 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v6) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_RUNDOWN);
    if ( (_BYTE)v6 )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      UserData.Ptr = (ULONGLONG)&v25;
      UserData.Size = 4;
      v9 = &v26;
      v12 = &v27;
      v15 = &v28;
      v18 = &a5;
      v21 = &a6;
      v10 = 4;
      v13 = 4;
      v16 = 4;
      v19 = 4;
      v22 = 4;
      LOBYTE(v6) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_TIME_RESOLUTION_RUNDOWN, 0LL, 6u, &UserData);
    }
  }
  return (char)v6;
}
