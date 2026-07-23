/*
 * XREFs of PsCreateCpuPartition @ 0x14077665C
 * Callers:
 *     NtCreateCpuPartition @ 0x140775A00 (NtCreateCpuPartition.c)
 *     PsInitializeBootCpuPartitions @ 0x140C369DC (PsInitializeBootCpuPartitions.c)
 *     PspInitializeCpuPartitionsPhase0 @ 0x140C37808 (PspInitializeCpuPartitionsPhase0.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeCreateCpuPartition @ 0x1405BD068 (KeCreateCpuPartition.c)
 *     PspCheckCpuPartitionCreateAccess @ 0x140776CD4 (PspCheckCpuPartitionCreateAccess.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 */

__int64 __fastcall PsCreateCpuPartition(
        __int64 a1,
        __int64 a2,
        KPROCESSOR_MODE a3,
        int a4,
        PVOID Object,
        PVOID *a6,
        _QWORD *a7)
{
  char v7; // bl
  int v9; // r14d
  int CpuPartition; // esi
  int v11; // ecx
  int v12; // r9d
  struct _KTHREAD *CurrentThread; // rax
  char *v14; // rax
  signed __int8 v15; // cf
  char *v16; // rdi
  HANDLE v17; // rax
  HANDLE Handle; // [rsp+58h] [rbp-20h] BYREF

  v7 = a4;
  Handle = 0LL;
  v9 = a1;
  if ( (a4 & 0xFFFFFFFE) != 0 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    LOBYTE(a1) = a3;
    CpuPartition = PspCheckCpuPartitionCreateAccess(a1);
    if ( CpuPartition >= 0 )
    {
      LOBYTE(v12) = a3;
      LOBYTE(v11) = a3;
      CpuPartition = ObCreateObjectEx(v11, (_DWORD)PsCpuPartitionType, v9, v12);
      if ( CpuPartition >= 0 )
      {
        CpuPartition = KeCreateCpuPartition(0LL, v7 & 1);
        if ( CpuPartition >= 0 )
        {
          if ( a6 != &PspSystemCpuPartition )
          {
            ObfReferenceObjectWithTag(Object, 0x50707350u);
            MEMORY[8] = Object;
          }
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v14 = (char *)KeAbPreAcquire((__int64)&PspCpuPartitionListLock, 0LL);
          v15 = _interlockedbittestandset64((volatile signed __int32 *)&PspCpuPartitionListLock, 0LL);
          v16 = v14;
          if ( v15 )
            ExfAcquirePushLockExclusiveEx(&PspCpuPartitionListLock, v14, (__int64)&PspCpuPartitionListLock);
          if ( v16 )
            v16[10] = 1;
          if ( *(__int64 **)qword_140FDA3F0 != &PspCpuPartitionListHead )
            __fastfail(3u);
          MEMORY[0x10] = &PspCpuPartitionListHead;
          MEMORY[0x18] = qword_140FDA3F0;
          *(_QWORD *)qword_140FDA3F0 = 16LL;
          qword_140FDA3F0 = 16LL;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspCpuPartitionListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&PspCpuPartitionListLock);
          KeAbPostRelease((ULONG_PTR)&PspCpuPartitionListLock);
          KeLeaveCriticalRegion();
          if ( a6 == &PspSystemCpuPartition
            || (CpuPartition = ObInsertObjectEx(0LL, 0, 0LL, (__int64)&Handle), CpuPartition >= 0) )
          {
            *a6 = 0LL;
            if ( a7 )
            {
              v17 = Handle;
              Handle = 0LL;
              *a7 = v17;
            }
          }
        }
      }
    }
    if ( Handle )
      ObCloseHandle(Handle, a3);
  }
  return (unsigned int)CpuPartition;
}
