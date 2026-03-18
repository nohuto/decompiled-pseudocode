/*
 * XREFs of MiNotifyUserOfLostData @ 0x140666988
 * Callers:
 *     MiDeleteCachedSubsection @ 0x14033F8B4 (MiDeleteCachedSubsection.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ObFastReferenceObjectLocked @ 0x140439B8C (ObFastReferenceObjectLocked.c)
 */

__int64 __fastcall MiNotifyUserOfLostData(__int64 a1, int a2)
{
  int v4; // ebx
  KIRQL v5; // al
  int v6; // r8d
  __int64 Pool; // rax
  __int64 v8; // rbx

  v4 = 0;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = *(_DWORD *)(a1 + 56);
  if ( (v6 & 0x800) == 0 )
  {
    v4 = 1;
    *(_DWORD *)(a1 + 56) = v6 | 0x800;
  }
  MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), v5);
  if ( !v4 )
    return 0LL;
  Pool = MiAllocatePool(0x40uLL, 0x38uLL, 1885629773);
  v8 = Pool;
  if ( !Pool )
    return 0LL;
  *(_DWORD *)(Pool + 40) = a2;
  *(_QWORD *)(Pool + 32) = ObFastReferenceObjectLocked((_QWORD *)(a1 + 64), 0x63536D4Du);
  *(_BYTE *)(v8 + 48) = 1;
  *(_QWORD *)v8 = 0LL;
  *(_QWORD *)(v8 + 16) = MiLdwPopupWorker;
  *(_QWORD *)(v8 + 24) = v8;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)v8, DelayedWorkQueue);
  return 1LL;
}
