/*
 * XREFs of VmInitializeProcessor @ 0x140B6E698
 * Callers:
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     VmInitSystem @ 0x140BDE898 (VmInitSystem.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     KeGetProcessorNodeNumber @ 0x140438120 (KeGetProcessorNodeNumber.c)
 *     ExAllocatePool3 @ 0x140B746D0 (ExAllocatePool3.c)
 */

__int64 __fastcall VmInitializeProcessor(__int64 a1)
{
  __int64 Pool3; // rax

  KeGetProcessorNodeNumber(a1);
  Pool3 = ExAllocatePool3(0x40uLL, 1);
  *(_QWORD *)(a1 + 35664) = Pool3;
  return Pool3 == 0 ? 0xC000009A : 0;
}
