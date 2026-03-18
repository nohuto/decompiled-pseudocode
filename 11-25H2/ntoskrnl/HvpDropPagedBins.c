/*
 * XREFs of HvpDropPagedBins @ 0x1409F6F54
 * Callers:
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MmFreeBootRegistry @ 0x1407D73A4 (MmFreeBootRegistry.c)
 *     CmpReleaseGlobalQuota @ 0x14087E2C0 (CmpReleaseGlobalQuota.c)
 *     HvpMapEntryGetFreeBin @ 0x140881534 (HvpMapEntryGetFreeBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1409F8650 (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateNonPagedBin @ 0x1409F8730 (HvpAllocateNonPagedBin.c)
 *     HvpFreeBin @ 0x140A674FC (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x140BA97C0 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BA9820 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140BA9840 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BA99C0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpDropPagedBins(ULONG_PTR BugCheckParameter2)
{
  void *v2; // r8
  int v3; // eax
  unsigned __int64 v4; // rsi
  size_t v5; // r14
  unsigned int v6; // r12d
  unsigned int v7; // ebp
  __int64 CellMap; // rax
  __int64 v9; // rcx
  _BYTE *v10; // r15
  __int64 v11; // rcx
  unsigned int *BinAddress; // r13
  void *v13; // rdi
  int v14; // edi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 FreeBin; // rax
  __int16 v19; // [rsp+70h] [rbp+8h] BYREF
  void *v20; // [rsp+78h] [rbp+10h] BYREF

  v19 = 0;
  HvpGetBinContextInitialize(&v19);
  v3 = *(_DWORD *)(BugCheckParameter2 + 160);
  v4 = (unsigned int)v2;
  v20 = v2;
  LODWORD(v5) = (_DWORD)v2;
  if ( (v3 & 0x10) != 0 )
  {
    v6 = *(_DWORD *)(BugCheckParameter2 + 280);
    if ( v6 )
    {
      v7 = (unsigned int)v2;
      while ( v7 < v6 )
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, v7);
        v10 = (_BYTE *)CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x1493uLL);
        if ( (*(_BYTE *)(CellMap + 8) & 8) != 0 )
          break;
        BinAddress = (unsigned int *)HvpMapEntryGetBinAddress(v9, CellMap, &v19);
        v5 = BinAddress[2];
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x2000000) != 0 )
        {
          v14 = HvpAllocateNonPagedBin(v11, (unsigned int)v5, &v20);
          if ( v14 < 0 )
            goto LABEL_16;
          v13 = v20;
        }
        else
        {
          v13 = (void *)guard_dispatch_icall_no_overrides((unsigned int)v5);
          if ( !v13 )
          {
            v14 = -1073741670;
            goto LABEL_10;
          }
        }
        memmove(v13, BinAddress, v5);
        HvpMapEntryReleaseBinAddress(v17, v16, &v19);
        FreeBin = HvpMapEntryGetFreeBin(v10);
        HvpPointMapEntriesToBuffer(BugCheckParameter2, 1, FreeBin);
        v4 = 0LL;
        v20 = 0LL;
        CmpReleaseGlobalQuota(v5);
        v7 += v5;
        LODWORD(v2) = 0;
      }
    }
    v14 = (int)v2;
    if ( _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
      MmFreeBootRegistry();
    *(_DWORD *)(BugCheckParameter2 + 160) &= ~0x10u;
LABEL_16:
    v4 = (unsigned __int64)v20;
LABEL_10:
    if ( v4 )
      HvpFreeBin(BugCheckParameter2, (unsigned int)v5);
  }
  else
  {
    return (unsigned int)v2;
  }
  return (unsigned int)v14;
}
