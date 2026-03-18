/*
 * XREFs of PipLookupGroupName @ 0x140C21358
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     IopInitializeSystemDrivers @ 0x140C629DC (IopInitializeSystemDrivers.c)
 *     PipCheckDependencies @ 0x140C67CF0 (PipCheckDependencies.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     PipCreateEntry @ 0x140C20608 (PipCreateEntry.c)
 */

ULONG_PTR __fastcall PipLookupGroupName(const void **String1, int a2)
{
  __int64 v2; // rbx
  ULONG_PTR result; // rax
  unsigned __int16 v6; // cx
  ULONG_PTR *v7; // r14
  __int64 i; // rbp

  v2 = IopGroupListHead;
  if ( IopGroupListHead )
  {
    v6 = *(_WORD *)String1;
    while ( 1 )
    {
      while ( v6 < *(_WORD *)(v2 + 32) )
      {
        if ( !*(_QWORD *)v2 )
        {
          if ( !a2 )
            return 0LL;
          result = PipCreateEntry(String1);
          *(_QWORD *)v2 = result;
          return result;
        }
        v2 = *(_QWORD *)v2;
      }
      if ( v6 <= *(_WORD *)(v2 + 32) )
        break;
      v7 = (ULONG_PTR *)(v2 + 8);
      v2 = *(_QWORD *)(v2 + 8);
      if ( !v2 )
      {
        if ( !a2 )
          return 0LL;
        result = PipCreateEntry(String1);
        *v7 = result;
        return result;
      }
    }
    if ( RtlEqualUnicodeString((PCUNICODE_STRING)String1, (PCUNICODE_STRING)(v2 + 32), 1u) )
      return v2;
    for ( i = v2; ; i = *(_QWORD *)(i + 16) )
    {
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        break;
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)String1, (PCUNICODE_STRING)(v2 + 32), 1u) )
        return v2;
    }
    if ( a2 )
    {
      result = PipCreateEntry(String1);
      *(_QWORD *)(i + 16) = result;
      return result;
    }
  }
  else if ( a2 )
  {
    result = PipCreateEntry(String1);
    IopGroupListHead = result;
    return result;
  }
  return 0LL;
}
