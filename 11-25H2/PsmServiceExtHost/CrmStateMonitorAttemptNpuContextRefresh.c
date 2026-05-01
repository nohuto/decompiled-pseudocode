/*
 * XREFs of CrmStateMonitorAttemptNpuContextRefresh @ 0x180079748
 * Callers:
 *     CrmStateMonitorNpuUsageQuery @ 0x18007A05C (CrmStateMonitorNpuUsageQuery.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CrmStateMonitorNpuUsageContextCleanup @ 0x18007A028 (CrmStateMonitorNpuUsageContextCleanup.c)
 *     CrmpDxUtilsContextAllocateState @ 0x18007B170 (CrmpDxUtilsContextAllocateState.c)
 *     CrmpDxUtilsFreeContext @ 0x18007B274 (CrmpDxUtilsFreeContext.c)
 */

__int64 __fastcall CrmStateMonitorAttemptNpuContextRefresh(__int64 a1)
{
  _OWORD *Heap; // rax
  void *v3; // rbx
  unsigned int v4; // ebx
  int State; // esi

  CrmStateMonitorNpuUsageContextCleanup(a1);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  Heap = HampAllocateHeap(0x10uLL);
  v3 = Heap;
  if ( !Heap )
  {
    v4 = -1073741801;
LABEL_8:
    CrmStateMonitorNpuUsageContextCleanup(a1);
    *(_OWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    return v4;
  }
  *Heap = 0LL;
  *(_DWORD *)Heap = 1;
  State = CrmpDxUtilsContextAllocateState(Heap);
  if ( State < 0 )
  {
    CrmpDxUtilsFreeContext(v3);
    v4 = State;
    goto LABEL_8;
  }
  *(_QWORD *)a1 = v3;
  return 0;
}
