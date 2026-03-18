/*
 * XREFs of HalpMmAllocCtxInit @ 0x1405403CC
 * Callers:
 *     HalpMmInitSystem @ 0x140B3D7D0 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  qword_140FC1750 = 0LL;
  result = &HalpNPPoolAllocCtx;
  qword_140FC1748 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
