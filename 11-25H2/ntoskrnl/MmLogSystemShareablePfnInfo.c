/*
 * XREFs of MmLogSystemShareablePfnInfo @ 0x1407E8204
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A11A68 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MiGetWorkingSetInfoEx @ 0x1402D437C (MiGetWorkingSetInfoEx.c)
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     MiGetAggregateWorkingSetSize @ 0x140683468 (MiGetAggregateWorkingSetSize.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwLogPfnInfoRundown @ 0x1407A150C (EtwLogPfnInfoRundown.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MmLogSystemShareablePfnInfo(__int64 a1, unsigned int a2)
{
  _QWORD *Pool; // rbx
  unsigned __int64 v5; // r14
  size_t v6; // rbp
  char *AnyMultiplexedVm; // rax
  unsigned __int64 AggregateWorkingSetSize; // rax
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdi
  int i; // esi
  char *v12; // r15
  int WorkingSetInfo; // eax
  __int64 v14; // rcx

  Pool = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  AggregateWorkingSetSize = MiGetAggregateWorkingSetSize((__int64)AnyMultiplexedVm);
  if ( AggregateWorkingSetSize <= v9 )
    v10 = 64LL;
  else
    v10 = AggregateWorkingSetSize - v9 + 64;
  for ( i = 1; i <= 4; ++i )
  {
    v12 = MiGetAnyMultiplexedVm(i);
    if ( v5 >= v10 )
    {
      memset_0(Pool, 0, v6);
    }
    else
    {
      if ( Pool )
        ExFreePoolWithTag(Pool, 0);
      v6 = 32 * v10 + 16;
      Pool = (_QWORD *)MiAllocatePool(0x40uLL, v6, 1299674181);
      if ( !Pool )
        return;
      v5 = v10;
    }
    WorkingSetInfo = MiGetWorkingSetInfoEx((__int64)v12, 0, Pool, v6);
    v14 = Pool[1];
    if ( WorkingSetInfo >= 0 )
    {
      if ( v14 )
        EtwLogPfnInfoRundown(0LL, a1, a2, Pool);
    }
    else
    {
      v10 = v14 + 64;
    }
  }
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
