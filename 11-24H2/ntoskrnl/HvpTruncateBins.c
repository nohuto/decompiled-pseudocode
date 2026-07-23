/*
 * XREFs of HvpTruncateBins @ 0x140967554
 * Callers:
 *     HvStoreModifiedData @ 0x140966BFC (HvStoreModifiedData.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x1403FE4D0 (ExIsResourceAcquiredExclusiveLite.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmpTestRegistryLockExclusive @ 0x1406669D4 (CmpTestRegistryLockExclusive.c)
 *     HvpMapEntryGetFreeBin @ 0x1408872D4 (HvpMapEntryGetFreeBin.c)
 *     HvFreeHivePartial @ 0x140A46B7C (HvFreeHivePartial.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
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
    if ( dword_140EF6F68 == 1 )
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
