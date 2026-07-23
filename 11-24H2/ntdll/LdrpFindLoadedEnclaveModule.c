/*
 * XREFs of LdrpFindLoadedEnclaveModule @ 0x1800A7634
 * Callers:
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D3A60 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800A7500 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall LdrpFindLoadedEnclaveModule(__int64 a1, _UNICODE_STRING *a2, __int64 **a3)
{
  __int64 *v3; // rdi
  __int64 *i; // rbx

  v3 = (__int64 *)(a1 + 96);
  for ( i = *(__int64 **)(a1 + 96); i != v3; i = (__int64 *)*i )
  {
    if ( RtlEqualUnicodeString(a2, (PUNICODE_STRING)i[22], 1u) )
    {
      *a3 = i;
      return 0LL;
    }
  }
  return 3221225781LL;
}
