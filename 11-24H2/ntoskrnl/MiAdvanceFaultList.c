/*
 * XREFs of MiAdvanceFaultList @ 0x1402E5FE0
 * Callers:
 *     MiDispatchFault @ 0x1402142B0 (MiDispatchFault.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MiComputeFaultCluster @ 0x1402E5DF8 (MiComputeFaultCluster.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402E604C (MiBuildMdlForMappedFileFault.c)
 *     MiCreateSharedZeroPages @ 0x1402EED80 (MiCreateSharedZeroPages.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiResolvePrivateZeroFault @ 0x1402FE070 (MiResolvePrivateZeroFault.c)
 *     MiCopyDataPageToImagePage @ 0x1403142D8 (MiCopyDataPageToImagePage.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047FE9C (MiCopyFileOnlyGlobalSubsectionPage.c)
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
