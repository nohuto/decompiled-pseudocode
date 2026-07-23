/*
 * XREFs of PsQueryStatisticsProcess @ 0x1408DD540
 * Callers:
 *     PspEnforceLimitsProcessCallback @ 0x1408DD220 (PspEnforceLimitsProcessCallback.c)
 *     ExpCopyProcessInfo @ 0x1408DD324 (ExpCopyProcessInfo.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x1408DE040 (PspQueryProcessAccountingInformationCallback.c)
 *     PspRemoveProcessFromJobChain @ 0x1408E09E4 (PspRemoveProcessFromJobChain.c)
 *     EtwTraceAppStateChange @ 0x14091FF00 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x140921388 (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x1409D2880 (NtQueryInformationProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeQueryValuesThread @ 0x1403DE8C0 (KeQueryValuesThread.c)
 */

__int64 __fastcall PsQueryStatisticsProcess(_QWORD *a1, _QWORD *a2)
{
  signed __int64 *v2; // rsi
  __int64 *v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rdi
  _QWORD *v10; // r14
  __int64 v11; // rbp
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 result; // rax
  _QWORD *v15; // [rsp+20h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+28h] [rbp-60h]
  __int128 v17; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+40h] [rbp-48h]
  __int64 v20; // [rsp+A8h] [rbp+20h]

  v2 = a1 + 188;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v17 = 0LL;
  v18 = 0LL;
  v5 = KeAbPreAcquire((__int64)(a1 + 188), 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v5, (unsigned __int64)v2);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = a1[39];
  v7 = a1[40];
  v8 = a1[41];
  v9 = a1[47];
  v20 = a1[48];
  a2[3] = a1[36];
  a2[4] = a1[37];
  a2[5] = a1[116];
  a2[6] = a1[117];
  a2[7] = a1[118];
  a2[8] = a1[119];
  a2[9] = a1[120];
  a2[10] = a1[121];
  v10 = (_QWORD *)a1[110];
  v15 = a1 + 110;
  if ( v10 != a1 + 110 )
  {
    v11 = v20;
    v12 = v9;
    do
    {
      v6 += *((unsigned int *)v10 - 187);
      v7 += *((unsigned int *)v10 - 167);
      KeQueryValuesThread((__int64)(v10 - 175), (__int64)&v17);
      v12 += v18;
      v8 += DWORD1(v17);
      a2[3] += *(v10 - 166);
      a2[4] += *((unsigned int *)v10 - 265);
      a2[5] += *(v10 - 63);
      a2[6] += *(v10 - 62);
      a2[7] += *(v10 - 61);
      a2[8] += *(v10 - 60);
      a2[9] += *(v10 - 59);
      a2[10] += *(v10 - 58);
      v10 = (_QWORD *)*v10;
      v11 += *((_QWORD *)&v18 + 1);
    }
    while ( v10 != v15 );
    v9 = v12;
    v2 = a1 + 188;
    v20 = v11;
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v13 = KeMaximumIncrement;
  *a2 = v6 * KeMaximumIncrement;
  a2[1] = v7 * (unsigned int)v13;
  a2[2] = v8 * (unsigned int)v13;
  result = v9 * (unsigned int)v13;
  a2[11] = result;
  a2[12] = v20 * v13;
  return result;
}
