/*
 * XREFs of KiFreeProcessorStateInitializationParameters @ 0x1405B7038
 * Callers:
 *     KiStartDynamicProcessor @ 0x14073B478 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C26D58 (KeStartAllProcessors.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MmFreeIndependentPages @ 0x14039EC60 (MmFreeIndependentPages.c)
 *     KiFreeProcessorStacks @ 0x1405B6F14 (KiFreeProcessorStacks.c)
 *     KiFreeProcessorNumber @ 0x1405BB6B8 (KiFreeProcessorNumber.c)
 *     KeUninitThread @ 0x140A19A98 (KeUninitThread.c)
 */

unsigned __int64 __fastcall KiFreeProcessorStateInitializationParameters(__int64 a1)
{
  void *v1; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rcx

  v1 = *(void **)(a1 + 48);
  if ( v1 )
  {
    KeUninitThread(v1);
    ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  }
  if ( *(_WORD *)(a1 + 32) || *(_BYTE *)(a1 + 34) )
    KiFreeProcessorNumber();
  result = KiFreeProcessorStacks((_QWORD *)a1);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    return MmFreeIndependentPages(v4, *(unsigned int *)(a1 + 16));
  return result;
}
