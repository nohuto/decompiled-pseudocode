/*
 * XREFs of PpmEventParkNodeRestriction @ 0x1404CBA34
 * Callers:
 *     PpmParkEvaluateRestriction @ 0x14047F6CC (PpmParkEvaluateRestriction.c)
 *     PpmEventTraceControlCallback @ 0x140AC4110 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodeRestriction(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v2; // rax
  const EVENT_DESCRIPTOR *v3; // rbx
  bool v5; // zf
  char v6; // al
  char v8; // [rsp+40h] [rbp-29h] BYREF
  bool v9; // [rsp+41h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  __int64 v11; // [rsp+60h] [rbp-9h]
  int v12; // [rsp+68h] [rbp-1h]
  int v13; // [rsp+6Ch] [rbp+3h]
  char *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  bool *v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  __int64 v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]
  __int64 v23; // [rsp+A0h] [rbp+37h]
  int v24; // [rsp+A8h] [rbp+3Fh]
  int v25; // [rsp+ACh] [rbp+43h]

  v2 = &PPM_ETW_RESTRICTION_UPDATE;
  v3 = (const EVENT_DESCRIPTOR *)PPM_ETW_RESTRICTION_RUNDOWN;
  if ( !a1 )
    v3 = &PPM_ETW_RESTRICTION_UPDATE;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v5 = *(_BYTE *)(a2 + 164) == 0;
      UserData.Ptr = a2 + 4;
      v9 = !v5;
      v11 = a2 + 16;
      v6 = *(_BYTE *)(a2 + 160);
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v8 = v6;
      v14 = &v8;
      v17 = &v9;
      v23 = *(_QWORD *)(a2 + 176);
      v24 = 4 * *(unsigned __int8 *)(a2 + 172);
      v15 = 1;
      v18 = 1;
      v20 = a2 + 172;
      v21 = 1;
      UserData.Size = 2;
      v12 = 8;
      LOBYTE(v2) = EtwWriteEx(PpmEtwHandle, v3, 0LL, 0, 0LL, 0LL, 6u, &UserData);
    }
  }
  return (char)v2;
}
