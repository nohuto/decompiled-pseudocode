/*
 * XREFs of MiAdvanceFaultList @ 0x14037A740
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14020754C (MiCopyDataPageToImagePage.c)
 *     MiCreateSharedZeroPages @ 0x14023B000 (MiCreateSharedZeroPages.c)
 *     MiDispatchFault @ 0x14023F750 (MiDispatchFault.c)
 *     MiResolvePrivateZeroFault @ 0x1402420D0 (MiResolvePrivateZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x140339828 (MiBuildMdlForMappedFileFault.c)
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 *     MiComputeFaultCluster @ 0x14037A558 (MiComputeFaultCluster.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14045316C (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiAdvanceFaultList(_QWORD *a1)
{
  __int64 v1; // r10
  __int64 v2; // r9
  unsigned __int64 v3; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r9

  v1 = a1[1];
  v2 = a1[3];
  v3 = ((unsigned __int64)(*(_DWORD *)(v1 + 16 * v2) & 0xFFF) + *(_QWORD *)(v1 + 16 * v2 + 8) + 4095LL) >> 12;
  result = a1[4] + 1LL;
  a1[4] = result;
  if ( result == v3 )
  {
    result = a1[2];
    v5 = v2 + 1;
    a1[3] = v5;
    a1[4] = 0LL;
    if ( v5 < result && !*(_QWORD *)(v1 + 16 * v5 + 8) )
      a1[3] = result;
  }
  return result;
}
