/*
 * XREFs of MiNodeZeroConductor @ 0x1407FFF00
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140331740 (KeSetActualBasePriorityThread.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     MiLockDynamicMemoryExclusive @ 0x14066EFB8 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x14066F014 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14066FB1C (MiUnlockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryNestedExclusive @ 0x14066FB80 (MiUnlockDynamicMemoryNestedExclusive.c)
 *     MiPreserveBootDecisions @ 0x140690C48 (MiPreserveBootDecisions.c)
 *     MiZeroNodeConductorWait @ 0x1406911A8 (MiZeroNodeConductorWait.c)
 *     MiZeroNodeExiting @ 0x1406912C4 (MiZeroNodeExiting.c)
 *     MiInitializeZeroEngines @ 0x1407FFB34 (MiInitializeZeroEngines.c)
 *     MiStartZeroEngineThreads @ 0x14080010C (MiStartZeroEngineThreads.c)
 */

void __fastcall MiNodeZeroConductor(unsigned int *P)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  LARGE_INTEGER v5; // rbx
  const LARGE_INTEGER *v6; // rdi
  int started; // eax
  LARGE_INTEGER *v8; // rdx
  int v9; // eax
  LARGE_INTEGER v10; // rax
  LARGE_INTEGER v11; // rcx
  signed __int32 v12[14]; // [rsp+0h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER v14; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 12);
  v3 = *((_QWORD *)P + 6);
  v4 = *(_QWORD *)(v3 + 16) + 57216LL * P[14];
  MiLockDynamicMemoryExclusive(v3, (__int64)CurrentThread);
  if ( (ULONG *)v3 != &MiSystemPartition )
    MiLockDynamicMemoryNestedExclusive();
  *(_QWORD *)(v4 + 15272) = P;
  if ( (ULONG *)v3 != &MiSystemPartition )
    MiUnlockDynamicMemoryNestedExclusive();
  MiUnlockDynamicMemoryExclusive(v3, (__int64)CurrentThread);
  *((_QWORD *)P + 5) = P + 8;
  *((_QWORD *)P + 4) = P + 8;
  KeInitializeEvent((PRKEVENT)P, SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(P + 22), SynchronizationEvent, 0);
  _InterlockedAdd((volatile signed __int32 *)P + 32, 3u);
  PerformanceFrequency.QuadPart = 0LL;
  v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( PerformanceFrequency.QuadPart != 10000000 )
    v5.QuadPart = 10000000 * v5.QuadPart / PerformanceFrequency.QuadPart;
  _InterlockedOr(v12, 0);
  while ( 1 )
  {
    v6 = &MiFiveSeconds;
    if ( (unsigned int)MiInitializeZeroEngines((__int64)P) )
      v6 = 0LL;
    started = MiStartZeroEngineThreads(P);
    v8 = (LARGE_INTEGER *)&MiFiveSeconds;
    if ( started )
      v8 = (LARGE_INTEGER *)v6;
    v9 = MiZeroNodeConductorWait((__int64)P, v8);
    if ( !v9 )
      break;
    if ( v9 == 2 && *((_BYTE *)P + 80) )
    {
      _InterlockedOr(v12, 0);
      v14.QuadPart = 0LL;
      v10 = KeQueryPerformanceCounter(&v14);
      if ( v14.QuadPart != 10000000 )
        v10.QuadPart = 10000000 * v10.QuadPart / v14.QuadPart;
      *((_BYTE *)P + 80) = 0;
      v11 = v5;
      if ( v10.QuadPart >= (unsigned __int64)v5.QuadPart )
        v11 = v10;
      *((_QWORD *)P + 3) = v11.QuadPart - v5.QuadPart;
      MiPreserveBootDecisions(v4, P);
    }
  }
  MiZeroNodeExiting(P);
}
