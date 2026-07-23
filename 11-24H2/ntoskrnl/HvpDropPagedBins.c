/*
 * XREFs of HvpDropPagedBins @ 0x140A586B8
 * Callers:
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MmFreeBootRegistry @ 0x1407E782C (MmFreeBootRegistry.c)
 *     CmpReleaseGlobalQuota @ 0x140882D70 (CmpReleaseGlobalQuota.c)
 *     HvpMapEntryGetFreeBin @ 0x1408872D4 (HvpMapEntryGetFreeBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x140969A8C (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateNonPagedBin @ 0x140A588D8 (HvpAllocateNonPagedBin.c)
 *     HvpFreeBin @ 0x140A634EC (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BBB770 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140BBB790 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BBB8D0 (HvpGetBinContextInitialize.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int *BinAddress; // r13
  void *v14; // rdi
  int v15; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 FreeBin; // rax
  __int16 v20; // [rsp+70h] [rbp+8h] BYREF
  void *v21; // [rsp+78h] [rbp+10h] BYREF

  v20 = 0;
  HvpGetBinContextInitialize(&v20);
  v3 = *(_DWORD *)(BugCheckParameter2 + 160);
  v4 = (unsigned int)v2;
  v21 = v2;
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
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x149CuLL);
        if ( (*(_BYTE *)(CellMap + 8) & 8) != 0 )
          break;
        BinAddress = (unsigned int *)HvpMapEntryGetBinAddress(v9, CellMap, &v20);
        v5 = BinAddress[2];
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x2000000) != 0 )
        {
          v15 = HvpAllocateNonPagedBin(v12, (unsigned int)v5, &v21);
          if ( v15 < 0 )
            goto LABEL_16;
          v14 = v21;
        }
        else
        {
          LOBYTE(v11) = 1;
          v14 = (void *)guard_dispatch_icall_no_overrides((unsigned int)v5, v11);
          if ( !v14 )
          {
            v15 = -1073741670;
            goto LABEL_10;
          }
        }
        memmove(v14, BinAddress, v5);
        HvpMapEntryReleaseBinAddress(v18, v17, &v20);
        FreeBin = HvpMapEntryGetFreeBin(v10);
        HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v14, v5, v7, 1, FreeBin);
        v4 = 0LL;
        v21 = 0LL;
        CmpReleaseGlobalQuota(v5);
        v7 += v5;
        LODWORD(v2) = 0;
      }
    }
    v15 = (int)v2;
    if ( _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
      MmFreeBootRegistry();
    *(_DWORD *)(BugCheckParameter2 + 160) &= ~0x10u;
LABEL_16:
    v4 = (unsigned __int64)v21;
LABEL_10:
    if ( v4 )
      HvpFreeBin(BugCheckParameter2, (unsigned int)v5);
  }
  else
  {
    return (unsigned int)v2;
  }
  return (unsigned int)v15;
}
