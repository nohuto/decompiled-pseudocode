/*
 * XREFs of MiLaunchZeroWorkers @ 0x140271D90
 * Callers:
 *     MiZeroInParallel @ 0x140271430 (MiZeroInParallel.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140262AE0 (PsReferencePartitionSafe.c)
 *     MiGetNextAffinityWalker @ 0x140271ED0 (MiGetNextAffinityWalker.c)
 *     ExQueueWorkItemToPartition @ 0x140279D60 (ExQueueWorkItemToPartition.c)
 *     KeQueryPriorityThread @ 0x1402E24A0 (KeQueryPriorityThread.c)
 */

char __fastcall MiLaunchZeroWorkers(__int64 a1)
{
  __int64 v1; // rbp
  __int64 (__fastcall *v3)(); // r13
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v5; // r12
  __int64 v6; // r15
  __int64 v7; // rax
  ULONG_PTR v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 *v12; // rcx

  v1 = *(unsigned int *)(a1 + 32);
  v3 = MiZeroHugeRangeWorker;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a1 + 16) & 0x800) == 0 )
    v3 = MiZeroInParallelWorker;
  LODWORD(v7) = KeQueryPriorityThread(CurrentThread) + 32;
  v8 = a1 + 168;
  v9 = 0;
  v10 = a1 + 168;
  while ( v9 < (unsigned int)v1 )
  {
    if ( v6 )
    {
      LOBYTE(v7) = PsReferencePartitionSafe(v6);
      if ( !(_BYTE)v7 )
      {
        if ( !v9 )
          *(_DWORD *)(a1 + 32) = 0;
        return v7;
      }
    }
    LODWORD(v7) = MiGetNextAffinityWalker(v5);
    if ( (int)v7 < 0 )
    {
      *(_DWORD *)(v10 + 44) = -2;
    }
    else if ( !*(_DWORD *)(v5 + 12) )
    {
      *(_DWORD *)(v10 + 44) = -1;
      v12 = *(__int64 **)(a1 + 80);
      if ( v12 )
      {
        v7 = *v12;
        *(_QWORD *)(a1 + 80) = *v12;
      }
      *(_QWORD *)(v10 + 48) = v12;
    }
    *(_QWORD *)(v10 + 32) = a1;
    *(_QWORD *)v10 = 0LL;
    *(_QWORD *)(v10 + 16) = v3;
    *(_QWORD *)(v10 + 24) = v10;
    v10 += 128LL;
    ++v9;
  }
  if ( (_DWORD)v1 )
  {
    v11 = v1;
    do
    {
      LOBYTE(v7) = ExQueueWorkItemToPartition(v8);
      v8 += 128LL;
      --v11;
    }
    while ( v11 );
  }
  *(_DWORD *)(a1 + 16) |= 0x200u;
  return v7;
}
