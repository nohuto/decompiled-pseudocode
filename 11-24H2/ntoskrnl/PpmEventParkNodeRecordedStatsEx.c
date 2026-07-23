/*
 * XREFs of PpmEventParkNodeRecordedStatsEx @ 0x1405DB128
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140401FC4 (PpmParkRecordNodeStatistics.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeIsSingleGroupAffinityEx @ 0x1404697A0 (KeIsSingleGroupAffinityEx.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodeRecordedStatsEx(__int16 a1, unsigned __int16 *a2, __int16 a3, __int64 a4, char a5)
{
  _UNKNOWN **v5; // rax
  PEVENT_DATA_DESCRIPTOR v6; // rdi
  _DWORD *v9; // r14
  __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  char v21; // [rsp+48h] [rbp-C0h] BYREF
  char v22; // [rsp+49h] [rbp-BFh] BYREF
  unsigned __int16 v23[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v24; // [rsp+50h] [rbp-B8h] BYREF
  int v25; // [rsp+54h] [rbp-B4h] BYREF
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  int v27; // [rsp+5Ch] [rbp-ACh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 *v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-88h]
  char *v31; // [rsp+88h] [rbp-80h]
  __int64 v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  __int64 v35; // [rsp+A8h] [rbp-60h]
  int v36; // [rsp+B0h] [rbp-58h]
  int v37; // [rsp+B4h] [rbp-54h]
  char *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  __int64 v40; // [rsp+C8h] [rbp-40h]
  int v41; // [rsp+D0h] [rbp-38h]
  int v42; // [rsp+D4h] [rbp-34h]
  char v43[64]; // [rsp+D8h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+150h] [rbp+48h] BYREF
  __int16 v45; // [rsp+158h] [rbp+50h] BYREF
  __int16 v46; // [rsp+168h] [rbp+60h] BYREF

  v5 = &retaddr;
  v46 = a3;
  v45 = a1;
  v6 = PpmEventPerfCheckData;
  v23[0] = 0;
  v27 = 0;
  v26 = 0;
  if ( PpmEventPerfCheckData )
  {
    if ( PpmEtwRegistered )
    {
      LOBYTE(v5) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_STATS);
      if ( (_BYTE)v5 )
      {
        v9 = (_DWORD *)(a4 + 48);
        if ( (unsigned int)KeIsSingleGroupAffinityEx(a2, v23) )
        {
          UserData.Ptr = (ULONGLONG)v23;
          v21 = v46;
          v31 = &v21;
          v35 = *(_QWORD *)(a4 + 8);
          v22 = a5;
          v38 = &v22;
          v10 = *(_QWORD *)(a4 + 16);
          v29 = &a2[4 * v23[0] + 4];
          v11 = 8 * *v9;
          v40 = v10;
          *(_QWORD *)&UserData.Size = 2LL;
          v30 = 8LL;
          v32 = 1LL;
          v33 = a4 + 48;
          v34 = 4LL;
          v36 = v11;
          v37 = 0;
          v39 = 1LL;
          v41 = v11;
          v42 = 0;
          LOBYTE(v5) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_NODE_STATS_V2, 0LL, 0, 0LL, 0LL, 7u, &UserData);
        }
        else
        {
          *(_QWORD *)&v6->Size = 2LL;
          v6->Ptr = (ULONGLONG)&v45;
          v24 = 1;
          PpmEventAddAffinityMaskAsSubset(0LL, a2, (__int64)&v25, (__int64)v43, (__int64)v6, &v27, &v26, &v24);
          v12 = v24;
          v13 = v24;
          v6[v13].Ptr = (ULONGLONG)&v46;
          *(_QWORD *)&v6[v13].Size = 2LL;
          v14 = v12 + 1;
          v6[v14].Ptr = (ULONGLONG)v9;
          *(_QWORD *)&v6[v14].Size = 4LL;
          v15 = v12 + 2;
          v16 = 8 * *v9;
          v6[v15].Ptr = *(_QWORD *)(a4 + 8);
          v6[v15].Size = v16;
          v6[v15].Reserved = 0;
          v17 = v12 + 3;
          v6[v17].Ptr = (ULONGLONG)&a5;
          *(_QWORD *)&v6[v17].Size = 2LL;
          v18 = 8 * *v9;
          v19 = v12 + 4;
          v6[v19].Ptr = *(_QWORD *)(a4 + 16);
          *(_QWORD *)&v6[v19].Size = v18;
          LOBYTE(v5) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_NODE_STATS, 0LL, 0, 0LL, 0LL, v12 + 5, v6);
        }
      }
    }
  }
  return (char)v5;
}
