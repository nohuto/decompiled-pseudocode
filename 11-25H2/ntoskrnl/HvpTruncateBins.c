/*
 * XREFs of HvpTruncateBins @ 0x140882E40
 * Callers:
 *     HvStoreModifiedData @ 0x14088302C (HvStoreModifiedData.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140400BB0 (ExIsResourceAcquiredExclusiveLite.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     HvpMapEntryGetFreeBin @ 0x140881534 (HvpMapEntryGetFreeBin.c)
 *     HvFreeHivePartial @ 0x140A4CAE0 (HvFreeHivePartial.c)
 *     HvpGetCellMap @ 0x140BA97C0 (HvpGetCellMap.c)
 */

char __fastcall HvpTruncateBins(ULONG_PTR BugCheckParameter2)
{
  int *v2; // r14
  int i; // ebx
  int j; // edi
  _BYTE *CellMap; // rax
  unsigned int v6; // r8d
  __int64 FreeBin; // rax

  v2 = (int *)(BugCheckParameter2 + 280);
  for ( i = 0; i < 2; ++i )
  {
    for ( j = *v2; j; j = *(_DWORD *)(FreeBin + 20) )
    {
      CellMap = (_BYTE *)HvpGetCellMap(BugCheckParameter2, (unsigned int)(j + (i << 31) - 4096));
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v6, 0x13CBuLL);
      FreeBin = HvpMapEntryGetFreeBin(CellMap);
      if ( !FreeBin )
        break;
    }
    if ( i
      || (unsigned int)(j + 0x10000) <= *(_DWORD *)(BugCheckParameter2 + 1792)
      && ExIsResourceAcquiredExclusiveLite((PERESOURCE)&CmpRegistryLock) )
    {
      HvFreeHivePartial(BugCheckParameter2);
    }
    v2 += 158;
  }
  return 0;
}
