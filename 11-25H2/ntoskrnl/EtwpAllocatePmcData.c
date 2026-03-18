/*
 * XREFs of EtwpAllocatePmcData @ 0x140797C94
 * Callers:
 *     EtwpUpdatePmcEvents @ 0x140799FA8 (EtwpUpdatePmcEvents.c)
 *     EtwpUpdatePmcCounters @ 0x140A99C44 (EtwpUpdatePmcCounters.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402BD630 (KeQueryMaximumProcessorCountEx.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocatePmcData(__int64 a1)
{
  __int64 *Pool2; // rbx
  __int64 v4; // rax

  KeQueryMaximumProcessorCountEx(0xFFFFu);
  Pool2 = (__int64 *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return 3221225495LL;
  v4 = ExAllocatePool2(0x40uLL);
  *Pool2 = v4;
  if ( !v4 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225495LL;
  }
  *(_QWORD *)(a1 + 1064) = Pool2;
  return 0LL;
}
