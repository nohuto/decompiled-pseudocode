/*
 * XREFs of VmInitializeProcessor @ 0x140B7054C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     VmInitSystem @ 0x140BE0898 (VmInitSystem.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     KeGetProcessorNodeNumber @ 0x14042ACE0 (KeGetProcessorNodeNumber.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

__int64 __fastcall VmInitializeProcessor(__int64 a1)
{
  __int64 Pool3; // rax

  KeGetProcessorNodeNumber(a1);
  Pool3 = ExAllocatePool3(0x40uLL, 1);
  *(_QWORD *)(a1 + 35664) = Pool3;
  return Pool3 == 0 ? 0xC000009A : 0;
}
