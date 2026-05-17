/*
 * XREFs of LdrpFindLoadedEnclaveModule @ 0x18008BB74
 * Callers:
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D86F0 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18008BA40 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall LdrpFindLoadedEnclaveModule(__int64 a1, unsigned __int16 *a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a1 + 96);
  for ( i = *(_QWORD **)(a1 + 96); i != v3; i = (_QWORD *)*i )
  {
    if ( RtlEqualUnicodeString(a2, i[22], 1) )
    {
      *a3 = i;
      return 0LL;
    }
  }
  return 3221225781LL;
}
