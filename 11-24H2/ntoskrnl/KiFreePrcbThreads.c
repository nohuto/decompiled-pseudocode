/*
 * XREFs of KiFreePrcbThreads @ 0x1405B4190
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall KiFreePrcbThreads(__int64 a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax
  void *v4; // rcx

  v2 = *(void **)(a1 + 36480);
  if ( v2 )
    result = ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  v4 = *(void **)(a1 + 14392);
  if ( v4 )
    return ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return result;
}
