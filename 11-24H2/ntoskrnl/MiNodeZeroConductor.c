/*
 * XREFs of MiNodeZeroConductor @ 0x1407FF7C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14020A160 (KeSetActualBasePriorityThread.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     MiLockDynamicMemoryExclusive @ 0x14066DDE4 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x14066DE40 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x14066E948 (MiUnlockDynamicMemoryExclusive.c)
 *     MiUnlockDynamicMemoryNestedExclusive @ 0x14066E9AC (MiUnlockDynamicMemoryNestedExclusive.c)
 *     MiPreserveBootDecisions @ 0x14068FB78 (MiPreserveBootDecisions.c)
 *     MiZeroNodeConductorWait @ 0x1406900D8 (MiZeroNodeConductorWait.c)
 *     MiZeroNodeExiting @ 0x1406901F4 (MiZeroNodeExiting.c)
 *     MiInitializeZeroEngines @ 0x1407FF3F0 (MiInitializeZeroEngines.c)
 *     MiStartZeroEngineThreads @ 0x1407FF9CC (MiStartZeroEngineThreads.c)
 */

void __fastcall MiNodeZeroConductor(unsigned int *P, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // rbx
  __int64 v6; // rbp
  LARGE_INTEGER v7; // rbx
  const LARGE_INTEGER *v8; // rdi
  int started; // eax
  LARGE_INTEGER *v10; // rdx
  int v11; // eax
  LARGE_INTEGER v12; // rax
  LARGE_INTEGER v13; // rcx
  signed __int32 v14[14]; // [rsp+0h] [rbp-38h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER v16; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, 12, a3);
  v5 = *((_QWORD *)P + 6);
  v6 = *(_QWORD *)(v5 + 16) + 57216LL * P[14];
  MiLockDynamicMemoryExclusive(v5, (__int64)CurrentThread);
  if ( (ULONG *)v5 != &MiSystemPartition )
    MiLockDynamicMemoryNestedExclusive();
  *(_QWORD *)(v6 + 15272) = P;
  if ( (ULONG *)v5 != &MiSystemPartition )
    MiUnlockDynamicMemoryNestedExclusive();
  MiUnlockDynamicMemoryExclusive(v5, (__int64)CurrentThread);
  *((_QWORD *)P + 5) = P + 8;
  *((_QWORD *)P + 4) = P + 8;
  KeInitializeEvent((PRKEVENT)P, SynchronizationEvent, 0);
  KeInitializeEvent((PRKEVENT)(P + 22), SynchronizationEvent, 0);
  _InterlockedAdd((volatile signed __int32 *)P + 32, 3u);
  PerformanceFrequency.QuadPart = 0LL;
  v7 = KeQueryPerformanceCounter(&PerformanceFrequency);
  if ( PerformanceFrequency.QuadPart != 10000000 )
    v7.QuadPart = 10000000 * v7.QuadPart / PerformanceFrequency.QuadPart;
  _InterlockedOr(v14, 0);
  while ( 1 )
  {
    v8 = &MiFiveSeconds;
    if ( (unsigned int)MiInitializeZeroEngines((__int64)P) )
      v8 = 0LL;
    started = MiStartZeroEngineThreads(P);
    v10 = (LARGE_INTEGER *)&MiFiveSeconds;
    if ( started )
      v10 = (LARGE_INTEGER *)v8;
    v11 = MiZeroNodeConductorWait((__int64)P, v10);
    if ( !v11 )
      break;
    if ( v11 == 2 && *((_BYTE *)P + 80) )
    {
      _InterlockedOr(v14, 0);
      v16.QuadPart = 0LL;
      v12 = KeQueryPerformanceCounter(&v16);
      if ( v16.QuadPart != 10000000 )
        v12.QuadPart = 10000000 * v12.QuadPart / v16.QuadPart;
      *((_BYTE *)P + 80) = 0;
      v13 = v7;
      if ( v12.QuadPart >= (unsigned __int64)v7.QuadPart )
        v13 = v12;
      *((_QWORD *)P + 3) = v13.QuadPart - v7.QuadPart;
      MiPreserveBootDecisions(v6, P);
    }
  }
  MiZeroNodeExiting(P);
}
