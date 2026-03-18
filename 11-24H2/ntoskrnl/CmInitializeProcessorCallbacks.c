/*
 * XREFs of CmInitializeProcessorCallbacks @ 0x1407D145C
 * Callers:
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     CmpInitCallbacks @ 0x1407D19C0 (CmpInitCallbacks.c)
 * Callees:
 *     ExInitializeSystemLookasideList @ 0x140B6E3BC (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmInitializeProcessorCallbacks(__int64 a1)
{
  void *Pool2; // rbx
  __int64 result; // rax

  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
    ExInitializeSystemLookasideList((_DWORD)Pool2, 1, 48, 1768115523, 64, (__int64)&ExSystemLookasideListHead);
  else
    Pool2 = &CmpCallbackContextLookasideList;
  *(_QWORD *)(a1 + 2208) = Pool2;
  result = 0LL;
  *(_QWORD *)(a1 + 2216) = &CmpCallbackContextLookasideList;
  return result;
}
