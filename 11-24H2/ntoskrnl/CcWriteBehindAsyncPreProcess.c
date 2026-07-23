/*
 * XREFs of CcWriteBehindAsyncPreProcess @ 0x14057B84C
 * Callers:
 *     CcAsyncLazywriteWorkerMulti @ 0x1404C0AEC (CcAsyncLazywriteWorkerMulti.c)
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140277180 (ExAllocatePoolWithTagFromNode.c)
 *     CcWriteBehindPreProcess @ 0x14027A224 (CcWriteBehindPreProcess.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcWriteBehindAsyncPreProcess(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v7; // ebx
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rcx
  ULONG_PTR v9; // r9
  void *PoolWithTagFromNode; // rax
  int v11; // eax
  unsigned int v12; // ebx

  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v7 = *(_DWORD *)(v3 + 256);
    memset_0((void *)v3, 0, 0x110uLL);
    *(_DWORD *)(v3 + 256) = v7;
  }
  else
  {
    SchedulerSubNode = KeGetCurrentPrcb()->SchedulerSubNode;
    v9 = SchedulerSubNode->Affinity.Reserved[0];
    LODWORD(v9) = v9 | 0x80000000;
    PoolWithTagFromNode = (void *)ExAllocatePoolWithTagFromNode((__int64)SchedulerSubNode, 0x110uLL, 0x42576343uLL, v9);
    v3 = (__int64)PoolWithTagFromNode;
    if ( !PoolWithTagFromNode )
    {
      *(_DWORD *)a2 = -1073741670;
      return 0LL;
    }
    memset_0(PoolWithTagFromNode, 0, 0x110uLL);
    *(_QWORD *)(a1 + 16) = v3;
  }
  *(_QWORD *)(a2 + 8) = a1;
  *(_WORD *)(v3 + 136) = 0;
  *(_QWORD *)(v3 + 112) = a2;
  *(_QWORD *)(v3 + 264) = a1;
  *(_BYTE *)(v3 + 139) = 0;
  v11 = CcWriteBehindPreProcess(v3);
  v12 = v11;
  if ( !v11 )
  {
    *(_DWORD *)(v3 + 104) = 1;
    *(_QWORD *)(v3 + 96) = &CcNoDelay;
    *(_QWORD *)(v3 + 72) = a3;
    return 0LL;
  }
  DbgPrintEx(
    0x7Fu,
    3u,
    "[%04x:%04x]CcWriteBehindAsyncPreProcess: WBPreProcess FAILED (%lx): PVCM:%p(vid:%2lx)\n",
    LODWORD(KeGetCurrentThread()[1].CycleTime),
    KeGetCurrentThread()[1].CurrentRunTime,
    v11,
    *(const void **)(a1 + 144),
    *(_DWORD *)(*(_QWORD *)(a1 + 144) + 24LL));
  if ( v12 == 2 )
  {
    ExFreePoolWithTag((PVOID)v3, 0x42576343u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return v12;
}
