/*
 * XREFs of TppExceptionFilter @ 0x18015DCDC
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x18015DE74 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18015DF0C (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     RtlDecodePointer @ 0x180075450 (RtlDecodePointer.c)
 */

LONG __fastcall TppExceptionFilter(_EXCEPTION_POINTERS *a1)
{
  __int64 (__fastcall *v2)(_EXCEPTION_POINTERS *); // rax

  v2 = (__int64 (__fastcall *)(_EXCEPTION_POINTERS *))RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( v2 )
    return v2(a1);
  else
    return RtlUnhandledExceptionFilter2(a1, (ULONG)&Flags);
}
