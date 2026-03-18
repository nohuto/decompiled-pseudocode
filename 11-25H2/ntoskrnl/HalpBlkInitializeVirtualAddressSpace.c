/*
 * XREFs of HalpBlkInitializeVirtualAddressSpace @ 0x140C01F1C
 * Callers:
 *     HalpBlkInitSystem @ 0x140C03428 (HalpBlkInitSystem.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x140411990 (HalpUnmapVirtualAddress.c)
 *     HalpBlkAddVirtualMapping @ 0x140C01A60 (HalpBlkAddVirtualMapping.c)
 *     HalpBlkAllocateShadowCode @ 0x140C01D34 (HalpBlkAllocateShadowCode.c)
 *     HalpBlkAllocateShadowData @ 0x140C01E08 (HalpBlkAllocateShadowData.c)
 *     HalpBlkInitializePageTables @ 0x140C01E98 (HalpBlkInitializePageTables.c)
 */

__int64 HalpBlkInitializeVirtualAddressSpace()
{
  int ShadowCode; // ebx

  ShadowCode = HalpBlkInitializePageTables();
  if ( ShadowCode >= 0 )
  {
    ShadowCode = HalpBlkAllocateShadowCode();
    if ( ShadowCode >= 0 )
    {
      ShadowCode = HalpBlkAllocateShadowData();
      if ( ShadowCode >= 0 )
      {
        ShadowCode = 0;
        if ( !HalpApicX2Mode && !HalpApicUsingMsrs )
        {
          if ( !HalpLocalApic )
          {
            ShadowCode = -1073741810;
            goto LABEL_12;
          }
          ShadowCode = HalpBlkAddVirtualMapping(
                         HalpBlkRootPageTablePa,
                         HalpLocalApicPhysical.QuadPart,
                         HalpLocalApic,
                         0,
                         4);
        }
        if ( ShadowCode >= 0 )
        {
          ShadowCode = HalpBlkAddVirtualMapping(
                         HalpBlkRootPageTablePa,
                         (__int64)HalpLowStubPhysicalAddress,
                         HalpLowStub,
                         1,
                         4);
          if ( ShadowCode >= 0 )
            ShadowCode = HalpBlkAddVirtualMapping(
                           HalpBlkTiledMemoryMapPa,
                           (__int64)HalpLowStubPhysicalAddress,
                           (unsigned __int64)HalpLowStubPhysicalAddress,
                           1,
                           64);
        }
      }
    }
  }
LABEL_12:
  if ( HalpBlkPageTableVaWindow )
  {
    HalpUnmapVirtualAddress(HalpBlkPageTableVaWindow, 1u, 1);
    HalpBlkPageTableVaWindow = 0LL;
  }
  return (unsigned int)ShadowCode;
}
