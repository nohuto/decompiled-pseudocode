/*
 * XREFs of PpmEventParkNodeClassRecordedStatsEx @ 0x1405DAC48
 * Callers:
 *     PpmParkRecordNodeStatistics @ 0x140401FC4 (PpmParkRecordNodeStatistics.c)
 * Callees:
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PpmEventAddAffinityMaskAsSubset @ 0x1405DA2C0 (PpmEventAddAffinityMaskAsSubset.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PpmEventParkNodeClassRecordedStatsEx(_WORD *a1, char a2, __int16 a3, char a4, __int64 a5, char a6)
{
  _UNKNOWN **v6; // rax
  struct _EVENT_DATA_DESCRIPTOR *v7; // rbx
  unsigned int v9; // r9d
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v19; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v20[4]; // [rsp+4Ch] [rbp-35h] BYREF
  int v21; // [rsp+50h] [rbp-31h] BYREF
  int v22; // [rsp+54h] [rbp-2Dh] BYREF
  _BYTE v23[64]; // [rsp+58h] [rbp-29h] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+4Fh] BYREF
  char v25; // [rsp+E0h] [rbp+5Fh] BYREF
  __int16 v26; // [rsp+E8h] [rbp+67h] BYREF
  char v27; // [rsp+F0h] [rbp+6Fh] BYREF

  v6 = &retaddr;
  v27 = a4;
  v26 = a3;
  v25 = a2;
  v7 = PpmEventPerfCheckData;
  v22 = 0;
  v21 = 0;
  v19 = 0;
  if ( PpmEventPerfCheckData )
  {
    if ( PpmEtwRegistered )
    {
      LOBYTE(v6) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_CLASS_STATS);
      if ( (_BYTE)v6 )
      {
        PpmEventAddAffinityMaskAsSubset(0LL, a1, (__int64)v20, (__int64)v23, (__int64)v7, &v22, &v21, &v19);
        v9 = v19;
        v10 = a5;
        v11 = v19;
        v7[v11].Ptr = (ULONGLONG)&v25;
        *(_QWORD *)&v7[v11].Size = 1LL;
        v12 = v9 + 1;
        v7[v12].Ptr = (ULONGLONG)&a6;
        *(_QWORD *)&v7[v12].Size = 2LL;
        v13 = v9 + 2;
        v7[v13].Ptr = v10 + 48;
        *(_QWORD *)&v7[v13].Size = 4LL;
        v14 = *(_DWORD *)(v10 + 48);
        v15 = v9 + 3;
        v7[v15].Ptr = *(_QWORD *)(v10 + 8);
        v7[v15].Size = 8 * v14;
        v7[v15].Reserved = 0;
        v16 = v9 + 4;
        v7[v16].Ptr = (ULONGLONG)&v26;
        *(_QWORD *)&v7[v16].Size = 2LL;
        v17 = v9 + 5;
        v7[v17].Ptr = (ULONGLONG)&v27;
        *(_QWORD *)&v7[v17].Size = 1LL;
        LOBYTE(v6) = EtwWriteEx(PpmEtwHandle, &PPM_ETW_PARK_NODE_CLASS_STATS, 0LL, 0, 0LL, 0LL, v9 + 6, v7);
      }
    }
  }
  return (char)v6;
}
