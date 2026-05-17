/*
 * XREFs of RtlpRemoveInvertedFunctionTableEntry @ 0x1800F5C84
 * Callers:
 *     RtlxRemoveInvertedFunctionTable @ 0x180024AD0 (RtlxRemoveInvertedFunctionTable.c)
 * Callees:
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpRemoveInvertedFunctionTableEntry(__int64 a1, int a2)
{
  int v2; // eax
  __int64 result; // rax

  _InterlockedIncrement(&dword_1801E9428);
  v2 = LdrpInvertedFunctionTables[0];
  if ( LdrpInvertedFunctionTables[0] != 2 )
  {
    memmove(
      &LdrpInvertedFunctionTables[4 * a2 + 4 + 2 * a2],
      &LdrpInvertedFunctionTables[4 * (a2 + 1) + 4 + 2 * (a2 + 1)],
      24LL * (unsigned int)(LdrpInvertedFunctionTables[0] - a2 - 1));
    v2 = LdrpInvertedFunctionTables[0];
  }
  result = (unsigned int)(v2 - 1);
  LdrpInvertedFunctionTables[0] = result;
  _InterlockedIncrement(&dword_1801E9428);
  return result;
}
