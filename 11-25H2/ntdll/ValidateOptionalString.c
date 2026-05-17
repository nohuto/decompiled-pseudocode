/*
 * XREFs of ValidateOptionalString @ 0x1800E603C
 * Callers:
 *     RtlCreateProcessParametersInternal @ 0x1800E5B00 (RtlCreateProcessParametersInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateOptionalString(__int64 a1, __int64 a2, __int64 a3)
{
  if ( a1 )
    return ValidateStringParameter(a1, a2, a3);
  else
    return 0LL;
}
