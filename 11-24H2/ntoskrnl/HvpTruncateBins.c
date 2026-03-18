/*
 * XREFs of HvpTruncateBins @ 0x14097ED44
 * Callers:
 *     HvStoreModifiedData @ 0x14097E3EC (HvStoreModifiedData.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140403710 (ExIsResourceAcquiredExclusiveLite.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     CmpTestRegistryLockExclusive @ 0x1406680E4 (CmpTestRegistryLockExclusive.c)
 *     HvpMapEntryGetFreeBin @ 0x140883424 (HvpMapEntryGetFreeBin.c)
 *     HvFreeHivePartial @ 0x140A4FDCC (HvFreeHivePartial.c)
 *     HvpGetCellMap @ 0x140BB9710 (HvpGetCellMap.c)
 */

char __fastcall HvpTruncateBins(ULONG_PTR BugCheckParameter2)
{
  int *v2; // r14
  int i; // ebx
  int v4; // edi
  int v5; // r8d
  _BYTE *CellMap; // rax
  unsigned int v7; // r10d
  __int64 FreeBin; // rax
  char IsResourceAcquiredExclusiveLite; // al

  v2 = (int *)(BugCheckParameter2 + 280);
  for ( i = 0; i < 2; ++i )
  {
    v4 = *v2;
    if ( *v2 )
    {
      v5 = i << 31;
      do
      {
        CellMap = (_BYTE *)HvpGetCellMap(BugCheckParameter2, (unsigned int)(v5 + v4 - 4096));
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x13CBuLL);
        FreeBin = HvpMapEntryGetFreeBin(CellMap);
        if ( !FreeBin )
          break;
        v4 = *(_DWORD *)(FreeBin + 20);
      }
      while ( v4 );
    }
    if ( dword_140EF6D28 == 1 )
    {
      if ( !i )
      {
        if ( (unsigned int)(v4 + 0x10000) > *(_DWORD *)(BugCheckParameter2 + 1792) )
          goto LABEL_16;
        IsResourceAcquiredExclusiveLite = CmpTestRegistryLockExclusive();
        goto LABEL_14;
      }
    }
    else if ( !i )
    {
      if ( (unsigned int)(v4 + 0x10000) > *(_DWORD *)(BugCheckParameter2 + 1792) )
        goto LABEL_16;
      IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(CmpRegistryLock);
LABEL_14:
      if ( !IsResourceAcquiredExclusiveLite )
        goto LABEL_16;
    }
    HvFreeHivePartial(BugCheckParameter2);
LABEL_16:
    v2 += 158;
  }
  return 0;
}
