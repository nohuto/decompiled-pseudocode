/*
 * XREFs of PpmEventParkNodeCapChangeEx @ 0x1405DAA80
 * Callers:
 *     PpmParkApplyPolicyEx @ 0x1405DE964 (PpmParkApplyPolicyEx.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeIsSingleGroupAffinityEx @ 0x1404697A0 (KeIsSingleGroupAffinityEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodeCapChangeEx(__int16 a1, unsigned __int16 *a2, __int16 a3, __int16 a4)
{
  _UNKNOWN **v4; // rax
  PEVENT_DATA_DESCRIPTOR v5; // rbx
  unsigned int v7; // r8d
  __int64 v8; // rax
  __int64 v9; // rcx
  char v11; // [rsp+48h] [rbp-79h] BYREF
  char v12; // [rsp+49h] [rbp-78h] BYREF
  unsigned __int16 v13[2]; // [rsp+4Ch] [rbp-75h] BYREF
  unsigned int v14; // [rsp+50h] [rbp-71h] BYREF
  char v15[4]; // [rsp+54h] [rbp-6Dh] BYREF
  int v16; // [rsp+58h] [rbp-69h] BYREF
  int v17[3]; // [rsp+5Ch] [rbp-65h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int16 *v19; // [rsp+78h] [rbp-49h]
  __int64 v20; // [rsp+80h] [rbp-41h]
  char *v21; // [rsp+88h] [rbp-39h]
  __int64 v22; // [rsp+90h] [rbp-31h]
  char *v23; // [rsp+98h] [rbp-29h]
  __int64 v24; // [rsp+A0h] [rbp-21h]
  char v25[64]; // [rsp+A8h] [rbp-19h] BYREF
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+5Fh] BYREF
  __int16 v27; // [rsp+128h] [rbp+67h] BYREF
  __int16 v28; // [rsp+138h] [rbp+77h] BYREF
  __int16 v29; // [rsp+140h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v29 = a4;
  v28 = a3;
  v27 = a1;
  v5 = PpmEventPerfCheckData;
  v13[0] = 0;
  v17[0] = 0;
  v16 = 0;
  if ( PpmEventPerfCheckData )
  {
    if ( PpmEtwRegistered )
    {
      LOBYTE(v4) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_CAP_CHANGE);
      if ( (_BYTE)v4 )
      {
        if ( (unsigned int)KeIsSingleGroupAffinityEx(a2, v13) )
        {
          v18.Ptr = (ULONGLONG)v13;
          v11 = v28;
          v12 = v29;
          v21 = &v11;
          *(_QWORD *)&v18.Size = 2LL;
          v23 = &v12;
          v19 = &a2[4 * v13[0] + 4];
          v20 = 8LL;
          v22 = 1LL;
          v24 = 1LL;
          LOBYTE(v4) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_NODE_CAP_CHANGE_V1, 0LL, 0, 0LL, 0LL, 4u, &v18);
        }
        else
        {
          *(_QWORD *)&v5->Size = 2LL;
          v5->Ptr = (ULONGLONG)&v27;
          v14 = 1;
          PpmEventAddAffinityMaskAsSubset(0LL, a2, (__int64)v15, (__int64)v25, (__int64)v5, v17, &v16, &v14);
          v7 = v14;
          v8 = v14;
          v5[v8].Ptr = (ULONGLONG)&v28;
          *(_QWORD *)&v5[v8].Size = 2LL;
          v9 = v7 + 1;
          v5[v9].Ptr = (ULONGLONG)&v29;
          *(_QWORD *)&v5[v9].Size = 2LL;
          LOBYTE(v4) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_NODE_CAP_CHANGE, 0LL, 0, 0LL, 0LL, v7 + 2, v5);
        }
      }
    }
  }
  return (char)v4;
}
