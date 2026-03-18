/*
 * XREFs of KiInitializeThreadCycleTable @ 0x140B566D0
 * Callers:
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     KeGetProcessorNodeNumber @ 0x140438120 (KeGetProcessorNodeNumber.c)
 *     KeGetThreadWorkloadClassCount @ 0x1404F78B4 (KeGetThreadWorkloadClassCount.c)
 *     ExAllocatePool3 @ 0x140B746D0 (ExAllocatePool3.c)
 */

__int64 __fastcall KiInitializeThreadCycleTable(__int64 a1)
{
  __int64 v2; // rcx
  __int64 Pool3; // rax

  KeGetThreadWorkloadClassCount();
  KeGetProcessorNodeNumber(v2);
  Pool3 = ExAllocatePool3(0x40uLL, 1);
  if ( !Pool3 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 34480) = Pool3;
  return 0LL;
}
