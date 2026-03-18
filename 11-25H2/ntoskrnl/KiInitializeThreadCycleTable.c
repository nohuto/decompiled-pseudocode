/*
 * XREFs of KiInitializeThreadCycleTable @ 0x140B4672C
 * Callers:
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     KeGetProcessorNodeNumber @ 0x14043ACA0 (KeGetProcessorNodeNumber.c)
 *     KeGetThreadWorkloadClassCount @ 0x1404F6168 (KeGetThreadWorkloadClassCount.c)
 *     ExAllocatePool3 @ 0x140B64430 (ExAllocatePool3.c)
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
