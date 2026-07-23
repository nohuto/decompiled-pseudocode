/*
 * XREFs of RtlxRemoveInvertedFunctionTable @ 0x180033170
 * Callers:
 *     RtlRemoveInvertedFunctionTable @ 0x180033134 (RtlRemoveInvertedFunctionTable.c)
 * Callees:
 *     RtlpRemoveInvertedFunctionTableEntry @ 0x1800329C8 (RtlpRemoveInvertedFunctionTableEntry.c)
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 */

void __fastcall RtlxRemoveInvertedFunctionTable(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _QWORD *i; // rax
  __int64 v4; // rcx

  v2 = (unsigned int)(LdrpInvertedFunctionTables[0] - 1);
  if ( LdrpInvertedFunctionTables[0] != 1 )
  {
    for ( i = (_QWORD *)&xmmword_1801E6440 + 3 * v2 + 1; a2 != *i; i -= 3 )
    {
      LODWORD(v2) = v2 - 1;
      if ( !(_DWORD)v2 )
        return;
    }
    LdrProtectMrdata(0LL);
    RtlpRemoveInvertedFunctionTableEntry(v4, v2);
    LdrProtectMrdata(1LL);
  }
}
