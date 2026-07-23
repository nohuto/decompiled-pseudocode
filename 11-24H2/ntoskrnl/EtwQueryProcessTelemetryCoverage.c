/*
 * XREFs of EtwQueryProcessTelemetryCoverage @ 0x1406F699C
 * Callers:
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     PspIsContextAdmin @ 0x14085A9A4 (PspIsContextAdmin.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryCoverage(_KPROCESS *a1, char *a2, unsigned int a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rax
  char *v8; // rdi
  __int64 v9; // rdx
  unsigned int v10; // r14d
  __int64 *v11; // r12
  __int64 *i; // rcx
  unsigned int v13; // r13d
  _DWORD *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdi
  __int64 *j; // r14
  unsigned int v19; // ecx
  __int64 v20; // rdi
  unsigned int v22; // [rsp+24h] [rbp-54h]
  unsigned int v23; // [rsp+80h] [rbp+8h]

  if ( a1 == KeGetCurrentThread()->ApcState.Process )
  {
    if ( EtwpCoverageContext )
    {
      if ( (unsigned __int8)PspIsContextAdmin() )
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
        v9 = EtwpCoverageContext;
        v10 = *(_DWORD *)(*(_QWORD *)(EtwpCoverageContext + 16) + 16LL);
        v11 = (__int64 *)(EtwpCoverageContext + 48);
        for ( i = *(__int64 **)(EtwpCoverageContext + 48); i != v11; i = (__int64 *)*i )
        {
          v23 = *((_DWORD *)i + 6) - (_DWORD)i - 40;
          v10 += v23;
          if ( v10 < v23 )
          {
            v22 = -1073741675;
            goto LABEL_33;
          }
        }
        if ( a4 )
          *a4 = v10;
        v13 = (_DWORD)a2 + v10;
        v14 = *(_DWORD **)(v9 + 16);
        v15 = v14[4];
        v16 = a3;
        if ( a3 < v15 )
          v15 = a3;
        if ( v15 )
        {
          v17 = v15;
          memmove(a2, v14, v15);
          a2 += v17;
          v16 = a3;
        }
        if ( v16 < v10 )
        {
          v22 = -2147483643;
        }
        else
        {
          for ( j = (__int64 *)*v11; j != v11; j = (__int64 *)*j )
          {
            v19 = *((_DWORD *)j + 6) - (_DWORD)j - 40;
            if ( v19 > v13 - (unsigned int)a2 )
            {
              v22 = -1073741267;
              goto LABEL_33;
            }
            if ( *((_DWORD *)j + 6) - (_DWORD)j != 40 )
            {
              v20 = v19;
              memmove(a2, j + 5, v19);
              a2 += v20;
            }
          }
          v22 = 0;
        }
      }
      else
      {
        v22 = -1073741790;
      }
    }
    else
    {
      v22 = -1073741641;
    }
  }
  else
  {
    v22 = -1073741637;
  }
LABEL_33:
  if ( (struct _KTHREAD *)EtwpCoverageLockOwner == KeGetCurrentThread() )
  {
    EtwpCoverageLockOwner = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCoverageLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCoverageLock);
    KeAbPostRelease((ULONG_PTR)&EtwpCoverageLock);
    KeLeaveCriticalRegion();
  }
  return v22;
}
