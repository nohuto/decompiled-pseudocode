/*
 * XREFs of HalpUnmapVirtualAddress @ 0x140411990
 * Callers:
 *     HalpAcpiGetTableWork @ 0x1404131DC (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140413378 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetRsdt @ 0x140413928 (HalpAcpiGetRsdt.c)
 *     HalUnmapIoSpace @ 0x14055D680 (HalUnmapIoSpace.c)
 *     HalpHpetDiscover @ 0x14055DF68 (HalpHpetDiscover.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14055FB70 (HalpUsbLegacyStopOhciInterrupt.c)
 *     WdHwDestroyHardwareRegister @ 0x1405697CC (WdHwDestroyHardwareRegister.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140574668 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x140574EC8 (HalpIvtProcessDrhdEntry.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B3E8F8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpCheckLowMemoryPostSleep @ 0x140B5B574 (HalpCheckLowMemoryPostSleep.c)
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140C01F1C (HalpBlkInitializeVirtualAddressSpace.c)
 *     HalpAcpiTableCacheInit @ 0x140C55BD8 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpFlushTLB @ 0x1404F281C (HalpFlushTLB.c)
 */

char *__fastcall HalpUnmapVirtualAddress(unsigned __int64 a1, unsigned int a2, char a3)
{
  char *result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r10
  unsigned __int64 v7; // r9
  _QWORD *v8; // rcx

  result = (char *)((unsigned __int64)a2 << 12);
  v5 = (unsigned __int64)&result[a1 - 1];
  v6 = a2;
  if ( a1 >= HalpOriginalHeapStart && v5 >= a1 && v5 <= HalpOriginalHeapEnd )
  {
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v8 = (_QWORD *)(8 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
    result = (char *)v7;
    if ( a2 )
    {
      do
      {
        *v8 = 0LL;
        if ( a3 )
          __invlpg(result);
        result += 4096;
        ++v8;
        --v6;
      }
      while ( v6 );
    }
    if ( !a3 )
      result = (char *)HalpFlushTLB(v8);
    if ( HalpHeapStart > v7 )
      HalpHeapStart = v7;
  }
  return result;
}
