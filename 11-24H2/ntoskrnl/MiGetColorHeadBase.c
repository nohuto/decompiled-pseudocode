/*
 * XREFs of MiGetColorHeadBase @ 0x140424080
 * Callers:
 *     MiFreeListPageContentsChanged @ 0x140269BA8 (MiFreeListPageContentsChanged.c)
 *     MiGetPerfectColorHeadPage @ 0x1402F59B0 (MiGetPerfectColorHeadPage.c)
 *     MiWalkAllFreeZeroLists @ 0x1404B1468 (MiWalkAllFreeZeroLists.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetColorHeadBase(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // r11
  __int64 v5; // r9

  v4 = a4;
  if ( (unsigned __int8)MmNumberOfChannels > 1u )
    v5 = (a2 >> 8) & 1;
  else
    v5 = 0LL;
  return *(_QWORD *)(a1 + 8 * (v4 + 4 * (v5 + 2 * (a3 + 2 * (((a2 >> 15) & 1) + 10LL * (HIWORD(a2) & 3))))) + 992);
}
