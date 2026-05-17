/*
 * XREFs of RtlpInitUnicodeStringUsingBuffer @ 0x1800DF090
 * Callers:
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlLcidToLocaleName @ 0x1800A75A0 (RtlLcidToLocaleName.c)
 *     RtlpGetCustomCultureDataFromFile @ 0x180147BF0 (RtlpGetCustomCultureDataFromFile.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180082430 (RtlCreateUnicodeString.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpInitUnicodeStringUsingBuffer(char a1, const wchar_t *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v5; // rdi
  __int16 v6; // bx

  if ( a1 )
  {
    if ( RtlCreateUnicodeString(a4, a2) )
      return 0LL;
    return 3221225495LL;
  }
  else
  {
    if ( a3 < 0x55 )
    {
      v5 = 2LL * a3;
      if ( *(unsigned __int16 *)(a4 + 2) > v5 )
      {
        v6 = 2 * a3;
        memmove(*(void **)(a4 + 8), a2, (unsigned __int16)(2 * a3));
        *(_WORD *)(v5 + *(_QWORD *)(a4 + 8)) = 0;
        *(_WORD *)a4 = v6;
        return 0LL;
      }
    }
    return 3221225507LL;
  }
}
