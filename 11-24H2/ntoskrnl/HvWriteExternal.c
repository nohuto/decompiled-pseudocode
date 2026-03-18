/*
 * XREFs of HvWriteExternal @ 0x140A6D050
 * Callers:
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407CE060 (CmSaveMergedKeys.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     CmpDoFileSetSizeEx @ 0x140980EB4 (CmpDoFileSetSizeEx.c)
 *     CmpFileFlush @ 0x140982C0C (CmpFileFlush.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     HvpGetCellMap @ 0x140BB9710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BB9770 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140BB9790 (HvpMapEntryReleaseBinAddress.c)
 *     HvpHeaderCheckSum @ 0x140BB97A0 (HvpHeaderCheckSum.c)
 *     HvpGetBinContextInitialize @ 0x140BB98D0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvWriteExternal(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // edi
  unsigned int v3; // r12d
  int v4; // r11d
  unsigned int v5; // r10d
  __int64 CellMap; // rax
  __int64 v7; // rcx
  unsigned int v8; // r10d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r10d
  int v13; // r14d
  _DWORD *Pool2; // rax
  _DWORD *v15; // r13
  int v16; // ebx
  unsigned int i; // ebx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 BinAddress; // rax
  int v21; // r13d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int128 v25; // [rsp+30h] [rbp-20h] BYREF
  int v26; // [rsp+40h] [rbp-10h]
  __int16 v27; // [rsp+80h] [rbp+30h] BYREF

  v2 = 0;
  v26 = 0;
  v27 = 0;
  v25 = 0LL;
  HvpGetBinContextInitialize(&v27);
  if ( !*(_QWORD *)(BugCheckParameter2 + 1560) )
    return 3221225485LL;
  v3 = *(_DWORD *)(BugCheckParameter2 + 280);
  v4 = CmpDoFileSetSizeEx(BugCheckParameter2, 2LL, v3 + 4096, 0);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = 0;
  while ( v5 < v3 )
  {
    CellMap = HvpGetCellMap(BugCheckParameter2, v5);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v8, 0xCE0uLL);
    v10 = *(unsigned int *)(HvpMapEntryGetBinAddress(v7, CellMap, &v27) + 8);
    if ( (unsigned int)(v10 + v11) > *(_DWORD *)(BugCheckParameter2 + 280) || (v10 & 0xFFF) != 0 )
      return (unsigned int)-1073741492;
    HvpMapEntryReleaseBinAddress(v10, v9, &v27);
  }
  if ( v5 < *(_DWORD *)(BugCheckParameter2 + 280) )
    return (unsigned int)v4;
  v13 = 4096;
  Pool2 = (_DWORD *)ExAllocatePool2(0x108uLL);
  v15 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, *(const void **)(BugCheckParameter2 + 64), 0x1000uLL);
  v15[10] = v3;
  v15[11] = 1;
  v15[127] = HvpHeaderCheckSum(v15);
  *((_QWORD *)&v25 + 1) = v15;
  v26 = 4096;
  v16 = guard_dispatch_icall_no_overrides(BugCheckParameter2, 2LL, &v25, 1LL);
  ExFreePoolWithTag(v15, 0);
  if ( v16 >= 0 )
  {
    for ( i = 0; i < v3; i += v21 )
    {
      v18 = HvpGetCellMap(BugCheckParameter2, i);
      if ( !v18 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, i, 0xD37uLL);
      BinAddress = HvpMapEntryGetBinAddress(v19, v18, &v27);
      v21 = *(_DWORD *)(BinAddress + 8);
      *((_QWORD *)&v25 + 1) = BinAddress;
      LODWORD(v25) = v13;
      v26 = v21;
      if ( (int)guard_dispatch_icall_no_overrides(BugCheckParameter2, 2LL, &v25, 1LL) < 0 )
        return (unsigned int)-1073741491;
      HvpMapEntryReleaseBinAddress(v23, v22, &v27);
      v13 += v21;
    }
    if ( CmpFileFlush(BugCheckParameter2, 2u) < 0 )
      return (unsigned int)-1073741491;
    return v2;
  }
  return 3221225805LL;
}
