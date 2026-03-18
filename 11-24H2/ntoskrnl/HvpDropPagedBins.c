/*
 * XREFs of HvpDropPagedBins @ 0x140A60168
 * Callers:
 *     CmpLoadHiveThread @ 0x1407CB060 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     MmFreeBootRegistry @ 0x1407E725C (MmFreeBootRegistry.c)
 *     CmpReleaseGlobalQuota @ 0x14087EEC0 (CmpReleaseGlobalQuota.c)
 *     HvpMapEntryGetFreeBin @ 0x140883424 (HvpMapEntryGetFreeBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x14098127C (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateNonPagedBin @ 0x140A60388 (HvpAllocateNonPagedBin.c)
 *     HvpFreeBin @ 0x140A6A13C (HvpFreeBin.c)
 *     HvpGetCellMap @ 0x140BB9710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BB9770 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140BB9790 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BB98D0 (HvpGetBinContextInitialize.c)
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
  __int64 v13; // r9
  unsigned int *BinAddress; // r13
  void *v15; // rdi
  int v16; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 FreeBin; // rax
  __int16 v21; // [rsp+70h] [rbp+8h] BYREF
  void *v22; // [rsp+78h] [rbp+10h] BYREF

  v21 = 0;
  HvpGetBinContextInitialize(&v21);
  v3 = *(_DWORD *)(BugCheckParameter2 + 160);
  v4 = (unsigned int)v2;
  v22 = v2;
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
        BinAddress = (unsigned int *)HvpMapEntryGetBinAddress(v9, CellMap, &v21);
        v5 = BinAddress[2];
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x2000000) != 0 )
        {
          v16 = HvpAllocateNonPagedBin(v12, (unsigned int)v5, &v22);
          if ( v16 < 0 )
            goto LABEL_16;
          v15 = v22;
        }
        else
        {
          LOBYTE(v11) = 1;
          v15 = (void *)guard_dispatch_icall_no_overrides((unsigned int)v5, v11, 892489027LL, v13);
          if ( !v15 )
          {
            v16 = -1073741670;
            goto LABEL_10;
          }
        }
        memmove(v15, BinAddress, v5);
        HvpMapEntryReleaseBinAddress(v19, v18, &v21);
        FreeBin = HvpMapEntryGetFreeBin(v10);
        HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v15, v5, v7, 1, FreeBin);
        v4 = 0LL;
        v22 = 0LL;
        CmpReleaseGlobalQuota(v5);
        v7 += v5;
        LODWORD(v2) = 0;
      }
    }
    v16 = (int)v2;
    if ( _InterlockedExchangeAdd(&CmpPreloadedHivesCount, 0xFFFFFFFF) == 1 )
      MmFreeBootRegistry();
    *(_DWORD *)(BugCheckParameter2 + 160) &= ~0x10u;
LABEL_16:
    v4 = (unsigned __int64)v22;
LABEL_10:
    if ( v4 )
      HvpFreeBin(BugCheckParameter2, (unsigned int)v5);
  }
  else
  {
    return (unsigned int)v2;
  }
  return (unsigned int)v16;
}
