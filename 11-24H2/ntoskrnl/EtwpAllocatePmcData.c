/*
 * XREFs of EtwpAllocatePmcData @ 0x1407A7064
 * Callers:
 *     EtwpUpdatePmcEvents @ 0x1407A9378 (EtwpUpdatePmcEvents.c)
 *     EtwpUpdatePmcCounters @ 0x140A9ED3C (EtwpUpdatePmcCounters.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x14033E440 (KeQueryMaximumProcessorCountEx.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
