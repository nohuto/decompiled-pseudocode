/*
 * XREFs of HvpAllocateBin @ 0x1409F7114
 * Callers:
 *     HvpAddDummyBinToHive @ 0x1407D0164 (HvpAddDummyBinToHive.c)
 *     HvpMapHiveImage @ 0x1407D0228 (HvpMapHiveImage.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1408820A0 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HvpAllocateNonPagedBin @ 0x1409F8730 (HvpAllocateNonPagedBin.c)
 */

__int64 __fastcall HvpAllocateBin(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx

  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    return (unsigned int)HvpAllocateNonPagedBin(a1, a2, a5);
  }
  else
  {
    v5 = 0;
    v6 = guard_dispatch_icall_no_overrides((unsigned int)a2);
    if ( v6 )
      *a5 = v6;
    else
      return (unsigned int)-1073741670;
  }
  return v5;
}
