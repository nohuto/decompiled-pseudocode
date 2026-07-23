/*
 * XREFs of RtlAddRefActivationContext @ 0x18001E700
 * Callers:
 *     RtlGetActiveActivationContext @ 0x18001DD70 (RtlGetActiveActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x18001E010 (RtlActivateActivationContextEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x18001E96C (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     LdrpAllocateModuleEntry @ 0x18003D080 (LdrpAllocateModuleEntry.c)
 *     RtlFindActivationContextSectionString @ 0x180073890 (RtlFindActivationContextSectionString.c)
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
