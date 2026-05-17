/*
 * XREFs of TppExceptionFilter @ 0x18015DCDC
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x18015DE74 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18015DF0C (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     RtlDecodePointer @ 0x180075450 (RtlDecodePointer.c)
 */

__int64 __fastcall TppExceptionFilter(const void **a1)
{
  __int64 (__fastcall *v2)(const void **); // rax

  v2 = (__int64 (__fastcall *)(const void **))RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( v2 )
    return v2(a1);
  else
    return RtlUnhandledExceptionFilter2(a1);
}
