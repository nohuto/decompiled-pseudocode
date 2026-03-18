/*
 * XREFs of MxPageAlwaysHot @ 0x140C57D28
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x140C52C0C (MxInitializeFreeNodeDescriptors.c)
 * Callees:
 *     MiSearchChannelTable @ 0x14026F0D4 (MiSearchChannelTable.c)
 */

__int64 __fastcall MxPageAlwaysHot(ULONG_PTR a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !qword_140E2DB28 )
    return 0LL;
  LOBYTE(v1) = *((_BYTE *)MiSearchChannelTable(a1) + 14) == 0;
  return v1;
}
