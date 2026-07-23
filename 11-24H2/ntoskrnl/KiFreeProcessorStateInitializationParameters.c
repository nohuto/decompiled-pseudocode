/*
 * XREFs of KiFreeProcessorStateInitializationParameters @ 0x1405B42F8
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KiFreeProcessorStacks @ 0x1405B41D4 (KiFreeProcessorStacks.c)
 *     KiFreeProcessorNumber @ 0x1405B8CE8 (KiFreeProcessorNumber.c)
 *     KeUninitThread @ 0x140A12C08 (KeUninitThread.c)
 */

__int64 __fastcall KiFreeProcessorStateInitializationParameters(__int64 a1)
{
  void *v1; // rdi
  __int64 result; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rcx

  v1 = *(void **)(a1 + 48);
  if ( v1 )
  {
    KeUninitThread(v1);
    ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  }
  if ( *(_WORD *)(a1 + 32) || *(_BYTE *)(a1 + 34) )
    KiFreeProcessorNumber();
  result = KiFreeProcessorStacks((_QWORD *)a1);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
    return MmFreeIndependentPages(v5, *(unsigned int *)(a1 + 16), v4);
  return result;
}
