/*
 * XREFs of PpmEventHiddenProcessorPerformance @ 0x14075D488
 * Callers:
 *     PpmEventTraceProcessorPerformance @ 0x140A6C678 (PpmEventTraceProcessorPerformance.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventHiddenProcessorPerformance(__int64 a1, int a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  __int16 v6; // ax
  __int16 v8; // [rsp+38h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v10; // [rsp+58h] [rbp+7h]
  int v11; // [rsp+60h] [rbp+Fh]
  int v12; // [rsp+64h] [rbp+13h]
  int *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  int *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]
  int *v19; // [rsp+88h] [rbp+37h]
  int v20; // [rsp+90h] [rbp+3Fh]
  int v21; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v23; // [rsp+C0h] [rbp+6Fh] BYREF
  int v24; // [rsp+C8h] [rbp+77h] BYREF
  int v25; // [rsp+D0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v25 = a4;
  v24 = a3;
  v23 = a2;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v4) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HIDDEN_PROCESSOR_CURRENT_PERF_RUNDOWN);
    if ( (_BYTE)v4 )
    {
      v6 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v8 = v6;
      UserData.Ptr = (ULONGLONG)&v8;
      v10 = a1 + 209;
      v13 = &v23;
      v16 = &v24;
      v19 = &v25;
      v14 = 4;
      v17 = 4;
      v20 = 4;
      UserData.Size = 2;
      v11 = 1;
      LOBYTE(v4) = EtwWrite(PpmEtwHandle, &PPM_ETW_HIDDEN_PROCESSOR_CURRENT_PERF_RUNDOWN, 0LL, 5u, &UserData);
    }
  }
  return (char)v4;
}
