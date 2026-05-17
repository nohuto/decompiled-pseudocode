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

void __fastcall RtlAddRefActivationContext(volatile signed __int32 *a1)
{
  signed __int32 v1; // eax

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && *a1 != 0x7FFFFFFF )
  {
    do
    {
      if ( *a1 == 0x7FFFFFFF )
        break;
      v1 = *a1;
    }
    while ( v1 != _InterlockedCompareExchange(a1, v1 + 1, v1) );
  }
}
