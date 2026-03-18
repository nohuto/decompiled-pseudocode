/*
 * XREFs of KiAllocateProcessorStateInitializationParameters @ 0x1405B5EB0
 * Callers:
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     KiAllocateProcessorStacks @ 0x1405B5D00 (KiAllocateProcessorStacks.c)
 *     KiAllocateProcessorNumber @ 0x1405BAF4C (KiAllocateProcessorNumber.c)
 *     MmAllocateIndependentPages @ 0x140A88F50 (MmAllocateIndependentPages.c)
 *     KiAllocateIdleThread @ 0x140B5A72C (KiAllocateIdleThread.c)
 */

__int64 __fastcall KiAllocateProcessorStateInitializationParameters(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 IndependentPages; // rax
  __int64 result; // rax

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    IndependentPages = MmAllocateIndependentPages(*(unsigned int *)(a1 + 16), a2);
    *(_QWORD *)(a1 + 8) = IndependentPages;
    if ( !IndependentPages )
      return 3221225495LL;
  }
  KiAllocateProcessorNumber(v2, a1 + 32);
  result = KiAllocateProcessorStacks(a1, v2);
  if ( (int)result >= 0 )
  {
    result = KiAllocateIdleThread(a1 + 48, v2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
