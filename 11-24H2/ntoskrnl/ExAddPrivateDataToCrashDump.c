/*
 * XREFs of ExAddPrivateDataToCrashDump @ 0x140653D7C
 * Callers:
 *     IopLiveDumpAddPoolTrackTables @ 0x140597F30 (IopLiveDumpAddPoolTrackTables.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405A03BC (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MmAddRangeToCrashDump @ 0x140677990 (MmAddRangeToCrashDump.c)
 */

__int64 __fastcall ExAddPrivateDataToCrashDump(__int64 a1)
{
  unsigned int v1; // esi
  void **v2; // rdi
  unsigned int i; // ebx
  int v5; // eax

  v1 = 0;
  v2 = &ExPoolTagTables;
  for ( i = 0; i < 0x800; ++i )
  {
    if ( *v2 )
    {
      v5 = MmAddRangeToCrashDump(a1, *v2, 80 * PoolTrackTableSize);
      if ( v5 < 0 )
      {
        v1 = v5;
        if ( v5 == -1073741789 )
          break;
      }
    }
    ++v2;
  }
  return v1;
}
