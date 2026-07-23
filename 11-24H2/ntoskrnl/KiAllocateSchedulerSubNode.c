/*
 * XREFs of KiAllocateSchedulerSubNode @ 0x1405B86DC
 * Callers:
 *     KiAllocateProcessorNumber @ 0x1405B857C (KiAllocateProcessorNumber.c)
 * Callees:
 *     KiInitializeSchedulerSubNode @ 0x1405B8DF4 (KiInitializeSchedulerSubNode.c)
 *     ExAllocatePool3 @ 0x140B76270 (ExAllocatePool3.c)
 */

__int64 __fastcall KiAllocateSchedulerSubNode(__int64 a1)
{
  __int64 v2; // rbx
  __int64 Pool3; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // rcx

  v2 = 0LL;
  Pool3 = ExAllocatePool3(0x48uLL, 1);
  if ( Pool3 )
  {
    v2 = Pool3;
    v4 = Pool3 + 768;
    KiInitializeSchedulerSubNode(Pool3, a1);
    *(_QWORD *)(v2 + 192) = v4;
    v5 = (v4 + 2695) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_BYTE *)(v2 + 185) = 8;
    *(_QWORD *)(v2 + 200) = v5;
    *(_QWORD *)(v2 + 208) = v5 + 512;
  }
  return v2;
}
