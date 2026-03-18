/*
 * XREFs of MxPageAlwaysHot @ 0x140C46A48
 * Callers:
 *     MxInitializeFreeNodeDescriptors @ 0x140C419DC (MxInitializeFreeNodeDescriptors.c)
 * Callees:
 *     MiSearchChannelTable @ 0x1402167C8 (MiSearchChannelTable.c)
 */

__int64 __fastcall MxPageAlwaysHot(ULONG_PTR a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !qword_140E2D8E8 )
    return 0LL;
  LOBYTE(v1) = *((_BYTE *)MiSearchChannelTable(a1) + 14) == 0;
  return v1;
}
