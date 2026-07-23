/*
 * XREFs of PpmEventParkNodeRestriction @ 0x1404E4890
 * Callers:
 *     PpmParkEvaluateRestriction @ 0x1404E5C48 (PpmParkEvaluateRestriction.c)
 *     PpmEventTraceControlCallback @ 0x140AC8550 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline @ 0x1405B2224 (Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventParkNodeRestrictionEx @ 0x1405DB39C (PpmEventParkNodeRestrictionEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodeRestriction(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // si
  __int64 v6; // rcx
  const EVENT_DESCRIPTOR *v7; // rax
  const EVENT_DESCRIPTOR *v8; // rbx
  bool v9; // zf
  char v10; // al
  char v12; // [rsp+40h] [rbp-39h] BYREF
  bool v13; // [rsp+41h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-29h] BYREF
  __int64 v15; // [rsp+60h] [rbp-19h]
  int v16; // [rsp+68h] [rbp-11h]
  int v17; // [rsp+6Ch] [rbp-Dh]
  char *v18; // [rsp+70h] [rbp-9h]
  int v19; // [rsp+78h] [rbp-1h]
  int v20; // [rsp+7Ch] [rbp+3h]
  bool *v21; // [rsp+80h] [rbp+7h]
  int v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+8Ch] [rbp+13h]
  __int64 v24; // [rsp+90h] [rbp+17h]
  int v25; // [rsp+98h] [rbp+1Fh]
  int v26; // [rsp+9Ch] [rbp+23h]
  __int64 v27; // [rsp+A0h] [rbp+27h]
  int v28; // [rsp+A8h] [rbp+2Fh]
  int v29; // [rsp+ACh] [rbp+33h]

  v5 = a1;
  if ( (unsigned int)Feature_PpmParkEx__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4) )
  {
    LOBYTE(v6) = v5;
    LOBYTE(v7) = PpmEventParkNodeRestrictionEx(v6, a2);
  }
  else
  {
    v7 = &PPM_ETW_RESTRICTION_UPDATE_V0;
    v8 = (const EVENT_DESCRIPTOR *)PPM_ETW_RESTRICTION_RUNDOWN_V0;
    if ( !v5 )
      v8 = &PPM_ETW_RESTRICTION_UPDATE_V0;
    if ( PpmEtwRegistered )
    {
      LOBYTE(v7) = EtwEventEnabled(PpmEtwHandle, v8);
      if ( (_BYTE)v7 )
      {
        UserData.Reserved = 0;
        v17 = 0;
        v20 = 0;
        v9 = *(_BYTE *)(a2 + 1236) == 0;
        UserData.Ptr = a2 + 4;
        v13 = !v9;
        v15 = a2 + 16;
        v10 = *(_BYTE *)(a2 + 1232);
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v12 = v10;
        v18 = &v12;
        v21 = &v13;
        v27 = *(_QWORD *)(a2 + 1256);
        v28 = 4 * *(unsigned __int16 *)(a2 + 1252);
        v19 = 1;
        v22 = 1;
        v24 = a2 + 1252;
        v25 = 1;
        UserData.Size = 2;
        v16 = 8;
        LOBYTE(v7) = EtwWriteEx(PpmEtwHandle, v8, 0LL, 0, 0LL, 0LL, 6u, &UserData);
      }
    }
  }
  return (char)v7;
}
