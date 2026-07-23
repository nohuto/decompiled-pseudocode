/*
 * XREFs of KiAllocateLocalSharedReadyQueue @ 0x1405B2E04
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

__int64 __fastcall KiAllocateLocalSharedReadyQueue(__int64 a1)
{
  __int64 Pool3; // rcx
  __int64 result; // rax

  Pool3 = ExAllocatePool3(0x48uLL, 1);
  result = 0LL;
  if ( !Pool3 )
    return 3221225626LL;
  *(_QWORD *)(a1 + 37888) = Pool3;
  return result;
}
