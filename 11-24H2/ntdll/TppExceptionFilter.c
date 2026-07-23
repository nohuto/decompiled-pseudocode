/*
 * XREFs of TppExceptionFilter @ 0x18015AB3C
 * Callers:
 *     TppWorkerpInnerExceptionFilter @ 0x18015ACD4 (TppWorkerpInnerExceptionFilter.c)
 *     TppWorkerpOuterExceptionFilter @ 0x18015AD6C (TppWorkerpOuterExceptionFilter.c)
 * Callees:
 *     RtlDecodePointer @ 0x180046E40 (RtlDecodePointer.c)
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
