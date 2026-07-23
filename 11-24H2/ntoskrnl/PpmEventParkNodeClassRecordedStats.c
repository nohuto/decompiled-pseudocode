/*
 * XREFs of PpmEventParkNodeClassRecordedStats @ 0x1404C5A78
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140401FC4 (PpmParkRecordNodeStatistics.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodeClassRecordedStats(
        __int16 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        __int64 a6,
        char a7)
{
  _UNKNOWN **v7; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-51h] BYREF
  __int64 *v10; // [rsp+58h] [rbp-41h]
  int v11; // [rsp+60h] [rbp-39h]
  int v12; // [rsp+64h] [rbp-35h]
  char *v13; // [rsp+68h] [rbp-31h]
  int v14; // [rsp+70h] [rbp-29h]
  int v15; // [rsp+74h] [rbp-25h]
  char *v16; // [rsp+78h] [rbp-21h]
  int v17; // [rsp+80h] [rbp-19h]
  int v18; // [rsp+84h] [rbp-15h]
  __int64 v19; // [rsp+88h] [rbp-11h]
  int v20; // [rsp+90h] [rbp-9h]
  int v21; // [rsp+94h] [rbp-5h]
  __int64 v22; // [rsp+98h] [rbp-1h]
  int v23; // [rsp+A0h] [rbp+7h]
  int v24; // [rsp+A4h] [rbp+Bh]
  char *v25; // [rsp+A8h] [rbp+Fh]
  int v26; // [rsp+B0h] [rbp+17h]
  int v27; // [rsp+B4h] [rbp+1Bh]
  char *v28; // [rsp+B8h] [rbp+1Fh]
  int v29; // [rsp+C0h] [rbp+27h]
  int v30; // [rsp+C4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+47h] BYREF
  __int16 v32; // [rsp+E8h] [rbp+4Fh] BYREF
  __int64 v33; // [rsp+F0h] [rbp+57h] BYREF
  char v34; // [rsp+F8h] [rbp+5Fh] BYREF
  char v35; // [rsp+100h] [rbp+67h] BYREF

  v7 = &retaddr;
  v35 = a4;
  v34 = a3;
  v33 = a2;
  v32 = a1;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v7) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_CLASS_STATS_V1);
    if ( (_BYTE)v7 )
    {
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      UserData.Ptr = (ULONGLONG)&v32;
      v10 = &v33;
      v13 = &v34;
      v16 = &a7;
      v11 = 8;
      v14 = 1;
      v17 = 1;
      v26 = 1;
      v22 = *(_QWORD *)(a6 + 8);
      v23 = 8 * *(_DWORD *)(a6 + 48);
      v25 = &v35;
      v28 = &a5;
      v19 = a6 + 48;
      v29 = 1;
      UserData.Size = 2;
      v20 = 4;
      LOBYTE(v7) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_NODE_CLASS_STATS_V1, 0LL, 0, 0LL, 0LL, 8u, &UserData);
    }
  }
  return (char)v7;
}
