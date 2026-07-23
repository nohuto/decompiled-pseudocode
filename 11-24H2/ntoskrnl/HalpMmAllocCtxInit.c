/*
 * XREFs of HalpMmAllocCtxInit @ 0x14054054C
 * Callers:
 *     HalpMmInitSystem @ 0x140B4F820 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  qword_140FC2150 = 0LL;
  result = &HalpNPPoolAllocCtx;
  qword_140FC2148 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
