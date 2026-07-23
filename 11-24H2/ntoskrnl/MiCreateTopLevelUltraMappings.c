/*
 * XREFs of MiCreateTopLevelUltraMappings @ 0x140C5E514
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x14026CB1C (MiMakeZeroedPageTables.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     MiInitializeUltraSpace @ 0x140C5E660 (MiInitializeUltraSpace.c)
 */

__int64 MiCreateTopLevelUltraMappings()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rsi
  unsigned int v2; // edi
  __int64 Pool; // rbp
  __int64 v4; // rsi
  _SLIST_HEADER *v5; // rbx

  v0 = qword_140E38C48;
  v1 = qword_140E38C50;
  v2 = 0;
  if ( !(unsigned int)MiMakeZeroedPageTables(
                        (unsigned int)((unsigned __int64)qword_140E38C48 >> 9) & 0xFFFFFFF8,
                        (((unsigned __int64)qword_140E38C48 >> 9) & 0xFFFFFFF8)
                      + 8 * (((unsigned __int64)qword_140E38C50 >> 12) - 1),
                        6,
                        8) )
    return 0LL;
  if ( !(unsigned int)MiInitializeUltraSpace(&dword_140E36020, v0, v1) )
    return 0LL;
  qword_140E36070 = ((v0 >> 27) & 0x1FFFF8) - 0x90482600000LL;
  qword_140E36078 = (((v0 + v1 - 1) >> 27) & 0x1FFFF8) - 0x90482600000LL;
  Pool = MiAllocatePool(0x48uLL, (unsigned __int64)(unsigned __int16)KeNumberNodes << 9, 538996045);
  if ( !Pool )
    return 0LL;
  if ( KeNumberNodes )
  {
    do
    {
      v4 = 8LL;
      v5 = (_SLIST_HEADER *)(Pool + ((unsigned __int64)v2 << 9));
      do
      {
        InitializeSListHead(v5);
        v5 += 4;
        --v4;
      }
      while ( v4 );
      ++v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
  }
  qword_140E36068 = Pool;
  return 1LL;
}
