/*
 * XREFs of MiInsertRecursiveTbFlushEntries @ 0x14020EDF8
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x14020E950 (MiDeleteNonPagedPoolPte.c)
 *     MiFlushValidPteFromTb @ 0x14038D900 (MiFlushValidPteFromTb.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiWritePteHighLevel @ 0x140685238 (MiWritePteHighLevel.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 */

__int64 __fastcall MiInsertRecursiveTbFlushEntries(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 result; // rax

  if ( a2 >= 0 )
  {
    v5 = 1LL;
    v6 = (unsigned int)(a2 + 1);
    do
    {
      a3 = a3 << 25 >> 16;
      result = MiInsertTbFlushEntry(a1, a3, v5);
      v5 <<= 9;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
