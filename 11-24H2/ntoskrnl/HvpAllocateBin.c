/*
 * XREFs of HvpAllocateBin @ 0x140A58878
 * Callers:
 *     HvpAddDummyBinToHive @ 0x1407DFF8C (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1407E0050 (HvpMapHiveImage.c)
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14096A820 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HvpAllocateNonPagedBin @ 0x140A588D8 (HvpAllocateNonPagedBin.c)
 */

__int64 __fastcall HvpAllocateBin(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx

  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    return (unsigned int)HvpAllocateNonPagedBin(a1, a2, a5);
  }
  else
  {
    v5 = 0;
    v6 = (unsigned int)a2;
    LOBYTE(a2) = a3 == 0;
    v7 = guard_dispatch_icall_no_overrides(v6, a2);
    if ( v7 )
      *a5 = v7;
    else
      return (unsigned int)-1073741670;
  }
  return v5;
}
