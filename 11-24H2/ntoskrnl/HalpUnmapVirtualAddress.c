/*
 * XREFs of HalpUnmapVirtualAddress @ 0x140478B90
 * Callers:
 *     HalpAcpiGetTableWork @ 0x14047856C (HalpAcpiGetTableWork.c)
 *     HalpAcpiIsCachedTableCompromised @ 0x140478708 (HalpAcpiIsCachedTableCompromised.c)
 *     HalpAcpiGetRsdt @ 0x1404789A4 (HalpAcpiGetRsdt.c)
 *     HalUnmapIoSpace @ 0x14055FF80 (HalUnmapIoSpace.c)
 *     HalpHpetDiscover @ 0x140560868 (HalpHpetDiscover.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x140562470 (HalpUsbLegacyStopOhciInterrupt.c)
 *     WdHwDestroyHardwareRegister @ 0x14056CACC (WdHwDestroyHardwareRegister.c)
 *     HalpIvtLegacyProcessDrhdEntry @ 0x140577968 (HalpIvtLegacyProcessDrhdEntry.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405781C8 (HalpIvtProcessDrhdEntry.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B4E8F8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpCheckLowMemoryPostSleep @ 0x140B6B074 (HalpCheckLowMemoryPostSleep.c)
 *     HalpBlkInitializeVirtualAddressSpace @ 0x140C12FAC (HalpBlkInitializeVirtualAddressSpace.c)
 *     HalpAcpiTableCacheInit @ 0x140C67860 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpFlushTLB @ 0x1404F50C4 (HalpFlushTLB.c)
 */

char *__fastcall HalpUnmapVirtualAddress(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  char *result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // r10
  unsigned __int64 v7; // r9
  _QWORD *v8; // rcx

  result = (char *)((unsigned __int64)(unsigned int)a2 << 12);
  v5 = (unsigned __int64)&result[a1 - 1];
  v6 = (unsigned int)a2;
  if ( a1 >= HalpOriginalHeapStart && v5 >= a1 && v5 <= HalpOriginalHeapEnd )
  {
    v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v8 = (_QWORD *)(8 * ((v7 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL);
    result = (char *)v7;
    if ( (_DWORD)a2 )
    {
      do
      {
        *v8 = 0LL;
        if ( (_BYTE)a3 )
          __invlpg(result);
        result += 4096;
        ++v8;
        --v6;
      }
      while ( v6 );
    }
    if ( !(_BYTE)a3 )
      result = (char *)HalpFlushTLB(v8, a2, a3);
    if ( HalpHeapStart > v7 )
      HalpHeapStart = v7;
  }
  return result;
}
