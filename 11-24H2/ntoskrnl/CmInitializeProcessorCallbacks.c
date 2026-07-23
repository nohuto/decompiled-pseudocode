/*
 * XREFs of CmInitializeProcessorCallbacks @ 0x1407D194C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     CmpInitCallbacks @ 0x1407D1EB0 (CmpInitCallbacks.c)
 * Callees:
 *     ExInitializeSystemLookasideList @ 0x140B6FF6C (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmInitializeProcessorCallbacks(__int64 a1)
{
  void *Pool2; // rbx
  __int64 result; // rax

  Pool2 = (void *)ExAllocatePool2(0x40uLL, 0x80uLL, 0x69634D43u);
  if ( Pool2 )
    ExInitializeSystemLookasideList((_DWORD)Pool2, 1, 48, 1768115523, 64, (__int64)&ExSystemLookasideListHead);
  else
    Pool2 = &CmpCallbackContextLookasideList;
  *(_QWORD *)(a1 + 2208) = Pool2;
  result = 0LL;
  *(_QWORD *)(a1 + 2216) = &CmpCallbackContextLookasideList;
  return result;
}
