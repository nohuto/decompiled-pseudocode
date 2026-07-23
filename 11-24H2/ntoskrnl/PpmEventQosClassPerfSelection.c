/*
 * XREFs of PpmEventQosClassPerfSelection @ 0x1403A32A4
 * Callers:
 *     PpmPerfApplyDomainState @ 0x1403A14F0 (PpmPerfApplyDomainState.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventQosClassPerfSelection(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rax
  const EVENT_DESCRIPTOR *v3; // rbx
  __int64 v5; // r11
  _BYTE *v6; // rdx
  _BYTE *v7; // r8
  _BYTE *v8; // r9
  _BYTE *v9; // r10
  __int64 v10; // rcx
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v14; // [rsp+60h] [rbp-A8h]
  __int64 v15; // [rsp+68h] [rbp-A0h]
  _BYTE *v16; // [rsp+70h] [rbp-98h]
  int v17; // [rsp+78h] [rbp-90h]
  int v18; // [rsp+7Ch] [rbp-8Ch]
  _BYTE v19[4]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v20[4]; // [rsp+8Ch] [rbp-7Ch] BYREF
  _BYTE v21[4]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v22[4]; // [rsp+94h] [rbp-74h] BYREF
  _BYTE v23[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v24[4]; // [rsp+9Ch] [rbp-6Ch] BYREF
  _BYTE v25[8]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v26[368]; // [rsp+A8h] [rbp-60h] BYREF

  v2 = &PPM_ETW_PERF_QOS_CLASS_PERF_SELECTION;
  v3 = (const EVENT_DESCRIPTOR *)PPM_ETW_PERF_QOS_CLASS_PERF_SELECTION_RUNDOWN;
  if ( !a2 )
    v3 = &PPM_ETW_PERF_QOS_CLASS_PERF_SELECTION;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v2 )
    {
      v5 = 7LL;
      LODWORD(v12) = 7;
      v6 = &v19[-a1 - 808];
      v7 = &v21[-a1 - 808];
      v8 = &v22[-a1 - 808];
      v9 = &v23[-a1 - 808];
      v10 = a1 + 828;
      do
      {
        *(_QWORD *)&v6[v10 - 20] = *(_QWORD *)(v10 - 20);
        *(_DWORD *)&v7[v10 - 20] = *(_DWORD *)(v10 - 4);
        *(_DWORD *)&v8[v10 - 20] = *(_DWORD *)v10;
        *(_DWORD *)&v9[v10 - 20] = *(_DWORD *)(v10 + 4);
        *(_DWORD *)&v6[v10] = *(_DWORD *)(v10 + 8);
        *(_DWORD *)&v20[v10 - 808 - a1] = *(_DWORD *)(v10 + 12);
        *(_DWORD *)&v7[v10] = *(_DWORD *)(v10 + 16);
        *(_DWORD *)&v8[v10] = *(_DWORD *)(v10 + 20);
        *(_DWORD *)&v9[v10] = *(unsigned __int8 *)(v10 + 28);
        *(_DWORD *)&v24[v10 - 808 - a1] = *(unsigned __int8 *)(v10 + 29);
        *(_QWORD *)&v25[v10 - 808 - a1] = *(_QWORD *)(v10 - 12);
        *(_DWORD *)&v26[v10 - 808 - a1] = *(_DWORD *)(v10 + 24);
        v10 += 56LL;
        --v5;
      }
      while ( v5 );
      UserData.Reserved = 0;
      v18 = 0;
      UserData.Ptr = a1 + 440;
      v14 = &v12;
      v16 = v19;
      UserData.Size = 4;
      v15 = 2LL;
      v17 = 392;
      LOBYTE(v2) = EtwWriteEx(PpmEtwHandle, v3, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v2;
}
