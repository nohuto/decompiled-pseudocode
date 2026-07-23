/*
 * XREFs of MiAdvanceFaultList @ 0x140342110
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiResolvePrivateZeroFault @ 0x1403087F0 (MiResolvePrivateZeroFault.c)
 *     MiDispatchFault @ 0x140333520 (MiDispatchFault.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiComputeFaultCluster @ 0x140341F24 (MiComputeFaultCluster.c)
 *     MiCreateSharedZeroPages @ 0x140342A48 (MiCreateSharedZeroPages.c)
 *     MiBuildMdlForMappedFileFault @ 0x140347688 (MiBuildMdlForMappedFileFault.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 *     MiCopyDataPageToImagePage @ 0x1403F1624 (MiCopyDataPageToImagePage.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14047AADC (MiCopyFileOnlyGlobalSubsectionPage.c)
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
