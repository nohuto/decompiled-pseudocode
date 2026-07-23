/*
 * XREFs of PspDeleteCpuPartition @ 0x140776DE0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeDeleteCpuPartition @ 0x14073A7A8 (KeDeleteCpuPartition.c)
 */

void __fastcall PspDeleteCpuPartition(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rdi
  __int64 v6; // r8
  _QWORD *v7; // rdx

  KeDeleteCpuPartition(*(_QWORD *)a1, **(_QWORD **)(a1 + 8));
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x50707350u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&PspCpuPartitionListLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&PspCpuPartitionListLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&PspCpuPartitionListLock, v3, (__int64)&PspCpuPartitionListLock);
  if ( v5 )
    v5[10] = 1;
  v6 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v6 + 8) != a1 + 16 || (v7 = *(_QWORD **)(a1 + 24), *v7 != a1 + 16) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspCpuPartitionListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspCpuPartitionListLock);
  KeAbPostRelease((ULONG_PTR)&PspCpuPartitionListLock);
  KeLeaveCriticalRegion();
}
