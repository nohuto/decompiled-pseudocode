/*
 * XREFs of PpmEventTraceExpectedUtility @ 0x140469D1C
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1402ADC20 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceExpectedUtility(__int64 a1)
{
  const EVENT_DESCRIPTOR *v2; // rdi
  int *v3; // rax
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // r8
  unsigned int v7; // edx
  int v8; // eax
  int v9; // edx
  int v11; // [rsp+48h] [rbp-39h] BYREF
  int v12; // [rsp+4Ch] [rbp-35h] BYREF
  int v13; // [rsp+50h] [rbp-31h] BYREF
  int v14; // [rsp+54h] [rbp-2Dh] BYREF
  unsigned int v15; // [rsp+58h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  int *v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  int *v19; // [rsp+88h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+Fh]
  int *v21; // [rsp+98h] [rbp+17h]
  __int64 v22; // [rsp+A0h] [rbp+1Fh]
  unsigned int *v23; // [rsp+A8h] [rbp+27h]
  __int64 v24; // [rsp+B0h] [rbp+2Fh]
  int *v25; // [rsp+B8h] [rbp+37h]
  __int64 v26; // [rsp+C0h] [rbp+3Fh]

  v11 = 0;
  if ( *(_BYTE *)(a1 + 68) )
  {
    v2 = &PPM_ETW_EXPECTED_UTILITY;
    LOWORD(v11) = *(unsigned __int8 *)(a1 - 35040);
    BYTE2(v11) = *(_BYTE *)(a1 - 35039);
    v26 = 3LL;
  }
  else
  {
    v2 = (const EVENT_DESCRIPTOR *)PPM_ETW_EXPECTED_UTILITY_HV;
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
    v26 = 4LL;
  }
  v3 = &v11;
  v25 = &v11;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v3) = EtwEventEnabled(PpmEtwHandle, v2);
    if ( (_BYTE)v3 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 )
        v5 = *(_DWORD *)(v4 + 80);
      else
        v5 = 100;
      v15 = v5;
      v6 = PpmCheckPeriod / 0x2710uLL;
      v7 = ((unsigned int)(PpmCheckPeriod / 0x2710uLL) * (*(_DWORD *)(a1 + 40) / v5) + 50) / 0x64;
      v12 = v7;
      if ( v7 > (unsigned int)(PpmCheckPeriod / 0x2710uLL) )
      {
        v12 = PpmCheckPeriod / 0x2710uLL;
        v8 = 0;
        v9 = v7 - v6;
      }
      else
      {
        v8 = v6 - v7;
        v9 = 0;
      }
      v13 = v8;
      v14 = v9;
      v17 = &v13;
      v18 = 4LL;
      v19 = &v12;
      v21 = &v14;
      v23 = &v15;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 4LL;
      LOBYTE(v3) = EtwWriteEx(PpmEtwHandle, v2, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return (char)v3;
}
