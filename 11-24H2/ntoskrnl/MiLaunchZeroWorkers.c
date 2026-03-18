/*
 * XREFs of MiLaunchZeroWorkers @ 0x140416850
 * Callers:
 *     MiZeroInParallel @ 0x1404155D0 (MiZeroInParallel.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x140248260 (KeQueryPriorityThread.c)
 *     ExQueueWorkItemToPartition @ 0x1402A7F70 (ExQueueWorkItemToPartition.c)
 *     PsReferencePartitionSafe @ 0x1403D4B60 (PsReferencePartitionSafe.c)
 *     MiGetNextAffinityWalker @ 0x140416990 (MiGetNextAffinityWalker.c)
 */

char __fastcall MiLaunchZeroWorkers(__int64 a1)
{
  __int64 v1; // rbp
  __int64 (__fastcall *v3)(__int64); // r13
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v5; // r12
  __int64 v6; // r15
  __int64 v7; // rax
  ULONG_PTR v8; // r14
  unsigned int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 *v12; // rcx
  int v14; // [rsp+50h] [rbp+8h]

  v1 = *(unsigned int *)(a1 + 32);
  v3 = (__int64 (__fastcall *)(__int64))MiZeroHugeRangeWorker;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(_QWORD *)(a1 + 8);
  if ( (*(_DWORD *)(a1 + 16) & 0x800) == 0 )
    v3 = MiZeroInParallelWorker;
  LODWORD(v7) = KeQueryPriorityThread(CurrentThread) + 32;
  v8 = a1 + 168;
  v14 = v7;
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
      LOBYTE(v7) = ExQueueWorkItemToPartition(v8, v14, *(_DWORD *)(a1 + 88), *(_QWORD *)(*(_QWORD *)a1 + 184LL));
      v8 += 128LL;
      --v11;
    }
    while ( v11 );
  }
  *(_DWORD *)(a1 + 16) |= 0x200u;
  return v7;
}
