/*
 * XREFs of RtlAddRefActivationContext @ 0x18003E480
 * Callers:
 *     LdrpAllocateModuleEntry @ 0x180010680 (LdrpAllocateModuleEntry.c)
 *     RtlGetActiveActivationContext @ 0x18003DAF0 (RtlGetActiveActivationContext.c)
 *     RtlActivateActivationContextEx @ 0x18003DD90 (RtlActivateActivationContextEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x18003E6EC (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     RtlFindActivationContextSectionString @ 0x18005DCB0 (RtlFindActivationContextSectionString.c)
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
