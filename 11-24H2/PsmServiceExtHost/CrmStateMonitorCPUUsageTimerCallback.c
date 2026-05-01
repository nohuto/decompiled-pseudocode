/*
 * XREFs of CrmStateMonitorCPUUsageTimerCallback @ 0x18002CBB0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x18002D3DC (CrmStateMonitorStateSizeGet.c)
 *     CrmLogStateMonitorStateSet @ 0x18002D500 (CrmLogStateMonitorStateSet.c)
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CrmStateMonitorCPUUsageTimerCallback(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned int *i; // rbx
  __int64 v11; // rcx
  int Src; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v16[5]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  _QWORD SystemInformation[48]; // [rsp+B0h] [rbp-50h] BYREF

  memset_0(SystemInformation, 0, 0x178uLL);
  v14 = 0LL;
  v15 = 0LL;
  NtQuerySystemInformation(SystemPerformanceInformation, SystemInformation, 0x178u, 0LL);
  RtlQueryUnbiasedInterruptTime(&v14);
  v3 = v14 - *((_QWORD *)a2 + 13);
  v4 = (SystemInformation[0] - *((_QWORD *)a2 + 14)) / (unsigned __int64)*((char *)a2 + 100);
  if ( v14 == *((_QWORD *)a2 + 13) )
  {
    LODWORD(v6) = 100;
  }
  else
  {
    v5 = v3 - v4;
    if ( v3 < v4 )
      v5 = 0LL;
    v6 = 100 * v5 / v3;
  }
  Src = v6;
  RtlAcquireSRWLockExclusive(a2 + 2);
  a2[4] = GetCurrentThreadId();
  v7 = *a2;
  v18 = 0LL;
  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  v8 = CrmStateMonitorStateSizeGet(v7);
  memcpy_0((char *)&v16[2] + 8, *((const void **)a2 + 5), v8);
  memcpy_0(v16, &Src, v8);
  if ( *a2 != 5 )
  {
    *((_QWORD *)&v17 + 1) = *((_QWORD *)a2 + 6);
    v9 = MEMORY[0x7FFE0008];
    *(_QWORD *)&v17 = MEMORY[0x7FFE0008];
LABEL_7:
    *((_QWORD *)a2 + 6) = v9;
    goto LABEL_8;
  }
  *((_QWORD *)&v17 + 1) = *((_QWORD *)a2 + 6);
  v9 = MEMORY[0x7FFE0008];
  *(_QWORD *)&v17 = MEMORY[0x7FFE0008];
  if ( LODWORD(v16[0]) == 20 * (LODWORD(v16[0]) / 0x14) )
    goto LABEL_7;
  LODWORD(v18) = 1;
LABEL_8:
  **((_DWORD **)a2 + 5) = Src;
  for ( i = (unsigned int *)*((_QWORD *)a2 + 3); i != a2 + 6; i = *(unsigned int **)i )
    (*((void (__fastcall **)(unsigned int *, _QWORD, int *))i - 1))(i - 2, *a2, &Src);
  a2[4] = 0;
  RtlReleaseSRWLockExclusive(a2 + 2);
  CrmLogStateMonitorStateSet(a2, v16);
  *((_QWORD *)a2 + 14) = SystemInformation[0];
  *((_QWORD *)a2 + 13) = v14;
  RtlAcquireSRWLockExclusive(a2 + 2);
  a2[4] = GetCurrentThreadId();
  if ( (unsigned int)TpIsTimerSet(*((_QWORD *)a2 + 11)) )
  {
    v11 = *((_QWORD *)a2 + 11);
    v15 = -10000LL * a2[24];
    TpSetTimer(v11, &v15, 0LL, 2000LL);
  }
  a2[4] = 0;
  return RtlReleaseSRWLockExclusive(a2 + 2);
}
