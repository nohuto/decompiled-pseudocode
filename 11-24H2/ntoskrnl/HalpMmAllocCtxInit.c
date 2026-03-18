/*
 * XREFs of HalpMmAllocCtxInit @ 0x140542BFC
 * Callers:
 *     HalpMmInitSystem @ 0x140B4D7D0 (HalpMmInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *HalpMmAllocCtxInit()
{
  __int64 *result; // rax

  qword_140FC2B30 = 0LL;
  result = &HalpNPPoolAllocCtx;
  qword_140FC2B28 = (__int64)&HalpNPPoolAllocCtx;
  HalpNPPoolAllocCtx = (__int64)&HalpNPPoolAllocCtx;
  return result;
}
