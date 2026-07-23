/*
 * XREFs of EtwpCoverageResetCP @ 0x1407AB4F4
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x1408DCC48 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwTelemetryCoverageReport @ 0x14044D270 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageValidateCP @ 0x14044D4CC (EtwpCoverageValidateCP.c)
 *     TelemetryCoverageTableLocateInternal @ 0x1404AE9A8 (TelemetryCoverageTableLocateInternal.c)
 *     TelemetryCoverageStringHashInternal @ 0x1404C3E84 (TelemetryCoverageStringHashInternal.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     EtwpCoverageFlushPending @ 0x140A9A3F0 (EtwpCoverageFlushPending.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCoverageResetCP(__int64 a1, __int64 a2)
{
  _DWORD *Pool2; // r14
  unsigned int v4; // ebp
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rax
  char *v8; // rsi
  int v9; // r11d
  _QWORD *v10; // rsi
  unsigned __int64 v11; // r12
  char *i; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r8d
  unsigned int v15; // edx
  _DWORD *v16; // rcx
  int v17; // r9d
  __int64 v18; // rax
  unsigned int *v19; // rcx
  unsigned int j; // esi
  unsigned int *v21; // rax
  unsigned int v22; // r11d
  int v24; // [rsp+68h] [rbp+10h] BYREF
  int v25; // [rsp+70h] [rbp+18h] BYREF
  unsigned int *Internal; // [rsp+78h] [rbp+20h]

  v24 = 0;
  Pool2 = 0LL;
  v4 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (unsigned int)dword_140E091F4 < MEMORY[0xFFFFF7800000037C] )
  {
    if ( !dword_140E091F0 )
      dword_140E091F0 = TelemetryCoverageStringHashInternal(off_140E091E8, &v25);
    EtwTelemetryCoverageReport((__int64)&off_140E091E8, a2);
  }
  if ( (unsigned int)EtwpCoverageValidateCP((char **)a2, &v24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (char *)KeAbPreAcquire((__int64)&EtwpCoverageLock, 0LL);
    v8 = v7;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&EtwpCoverageLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&EtwpCoverageLock, v7, (__int64)&EtwpCoverageLock);
    if ( v8 )
      v8[10] = 1;
    EtwpCoverageLockOwner = (__int64)KeGetCurrentThread();
    *(_DWORD *)(a1 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    Internal = TelemetryCoverageTableLocateInternal(*(unsigned int **)(a1 + 16), *(_DWORD *)(a2 + 8));
    if ( *Internal == v9 )
    {
      EtwpCoverageFlushPending(a1);
      Pool2 = (_DWORD *)ExAllocatePool2(
                          0x100uLL,
                          (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL)),
                          0x56777445u);
      if ( Pool2 )
      {
        v10 = *(_QWORD **)(a1 + 48);
LABEL_13:
        if ( v10 != (_QWORD *)(a1 + 48) )
        {
          v11 = v10[3];
          for ( i = (char *)(v10 + 5); ; i += v13 + 1 )
          {
            if ( (unsigned __int64)i >= v11 )
            {
              v10 = (_QWORD *)*v10;
              goto LABEL_13;
            }
            v13 = -1LL;
            do
              ++v13;
            while ( i[v13] );
            if ( v13 == v24 && !strcmp(i, *(const char **)a2) )
              break;
          }
          memmove(i, &i[v24 + 1], v11 - (_QWORD)&i[v24 + 1]);
          v14 = 0;
          v10[3] -= (unsigned int)(v24 + 1);
          v15 = 0;
          v10[4] = v10[3];
          ++*(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL);
          *Internal = 0;
          --*(_DWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
          v16 = *(_DWORD **)(a1 + 16);
          if ( v16[1] )
          {
            do
            {
              v17 = v16[v15 + 13];
              if ( v17 )
              {
                v18 = v14++;
                Pool2[v18] = v17;
                v16 = *(_DWORD **)(a1 + 16);
                if ( v14 >= v16[8] )
                  break;
              }
              ++v15;
            }
            while ( v15 < v16[1] );
          }
          memset_0(v16 + 13, 0, 4LL * (unsigned int)v16[1]);
          v19 = *(unsigned int **)(a1 + 16);
          for ( j = 0; j < v19[8]; v19 = *(unsigned int **)(a1 + 16) )
          {
            v21 = TelemetryCoverageTableLocateInternal(v19, Pool2[j++]);
            *v21 = v22;
          }
          v4 = 1;
          *(_DWORD *)(a2 + 12) = v19[6];
        }
      }
    }
  }
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegion();
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x56777445u);
  return v4;
}
