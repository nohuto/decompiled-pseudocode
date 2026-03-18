/*
 * XREFs of KiFreeProcessorStateInitializationParameters @ 0x1405B3168
 * Callers:
 *     KiStartDynamicProcessor @ 0x14072F1E8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C15CC8 (KeStartAllProcessors.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140227210 (MmFreeIndependentPages.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiFreeProcessorStacks @ 0x1405B3044 (KiFreeProcessorStacks.c)
 *     KiFreeProcessorNumber @ 0x1405B7814 (KiFreeProcessorNumber.c)
 *     KeUninitThread @ 0x1408F42C0 (KeUninitThread.c)
 */

__int64 __fastcall KiFreeProcessorStateInitializationParameters(__int64 a1)
{
  void *v1; // rdi
  __int64 result; // rax
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
