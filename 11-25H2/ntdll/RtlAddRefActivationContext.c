/*
 * XREFs of RtlAddRefActivationContext @ 0x180091E70
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x180019910 (RtlFindActivationContextSectionString.c)
 *     LdrpAllocateModuleEntry @ 0x18004F520 (LdrpAllocateModuleEntry.c)
 *     RtlGetActiveActivationContext @ 0x1800914E0 (RtlGetActiveActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x180091780 (RtlActivateActivationContextEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x1800920DC (RtlpFindActivationContextSection_FillOutReturnedData.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlAddRefActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG RefCount; // eax

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && ActivationContext->RefCount != 0x7FFFFFFF )
  {
    do
    {
      if ( ActivationContext->RefCount == 0x7FFFFFFF )
        break;
      RefCount = ActivationContext->RefCount;
    }
    while ( RefCount != _InterlockedCompareExchange(&ActivationContext->RefCount, RefCount + 1, RefCount) );
  }
}
