/*
 * XREFs of KiInitializeThreadCycleTable @ 0x140B58720
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     KeGetProcessorNodeNumber @ 0x14042ACE0 (KeGetProcessorNodeNumber.c)
 *     KeGetThreadWorkloadClassCount @ 0x1404F5194 (KeGetThreadWorkloadClassCount.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
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
