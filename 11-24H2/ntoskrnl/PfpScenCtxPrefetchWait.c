/*
 * XREFs of PfpScenCtxPrefetchWait @ 0x140B5D1E0
 * Callers:
 *     PfpProcessScenarioPhase @ 0x1408F77E8 (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x140B6CE28 (PfPowerActionNotify.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PfpScenCtxWaiterTimedOut @ 0x1405C9C70 (PfpScenCtxWaiterTimedOut.c)
 *     PfpPartitionIterateAndCheckCanAnyDoAccessLogging @ 0x1405CA1DC (PfpPartitionIterateAndCheckCanAnyDoAccessLogging.c)
 */

__int64 __fastcall PfpScenCtxPrefetchWait(ULONG_PTR BugCheckParameter2, int a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v4; // r12d
  int v6; // r13d
  unsigned int v7; // r15d
  int v8; // r14d
  struct _KTHREAD *CurrentThread; // rax
  char *v10; // rax
  char *v11; // rbx
  int v12; // ecx
  int v13; // r12d
  unsigned int v14; // ebx
  __int64 v15; // rbx
  unsigned int v16; // esi
  NTSTATUS v17; // eax
  __int64 v18; // r8
  int v19; // edx
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+78h] [rbp+10h]
  unsigned int v23; // [rsp+80h] [rbp+18h]

  v23 = a3;
  v22 = a2;
  Timeout.QuadPart = 0LL;
  v3 = a3;
  v4 = a2;
  v6 = 0;
  v7 = 0;
  v8 = (unsigned int)PfpPartitionIterateAndCheckCanAnyDoAccessLogging() != 0 ? 0x7D0 : 0;
  while ( 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v10 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v10, BugCheckParameter2);
    if ( v11 )
      v11[10] = 1;
    if ( *(_DWORD *)(BugCheckParameter2 + 48) != v4 || (*(_DWORD *)(BugCheckParameter2 + 8) & 0xC) == 8 )
      break;
    if ( v6 )
      goto LABEL_22;
    KeResetEvent((PRKEVENT)(BugCheckParameter2 + 16));
    v12 = *(_DWORD *)(BugCheckParameter2 + 8) & 3;
    if ( v12 == 1 )
    {
      v13 = 2;
      v14 = v3 - v7;
    }
    else
    {
      if ( v12 )
        break;
      if ( !v8 )
      {
LABEL_22:
        PfpScenCtxWaiterTimedOut(BugCheckParameter2);
        break;
      }
      v14 = v8;
      v13 = 1;
      v8 = 0;
    }
    *(_DWORD *)(BugCheckParameter2 + 8) = *(_DWORD *)(BugCheckParameter2 + 8) & 0xFFFFFFF3 | 4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    Timeout.QuadPart = -10000LL * v14;
    v15 = MEMORY[0xFFFFF78000000320];
    v16 = MEMORY[0xFFFFF78000000004];
    v17 = KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 16), Executive, 0, 0, &Timeout);
    v18 = v16;
    v19 = v16 * HIDWORD(v15);
    v3 = v23;
    v7 += ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
        + ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324] - v19) << 8)
        - (((unsigned __int64)(unsigned int)v15 * v18) >> 24);
    if ( v17 == 258 || v7 >= v23 )
    {
      v6 = 1;
    }
    else if ( v13 == 2 )
    {
      return v7;
    }
    v4 = v22;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  return v7;
}
