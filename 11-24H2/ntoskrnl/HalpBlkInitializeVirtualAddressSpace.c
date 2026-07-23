/*
 * XREFs of HalpBlkInitializeVirtualAddressSpace @ 0x140C14FAC
 * Callers:
 *     HalpBlkInitSystem @ 0x140C164B8 (HalpBlkInitSystem.c)
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x1404605A0 (HalpUnmapVirtualAddress.c)
 *     HalpBlkAddVirtualMapping @ 0x140C14AF0 (HalpBlkAddVirtualMapping.c)
 *     HalpBlkAllocateShadowCode @ 0x140C14DC4 (HalpBlkAllocateShadowCode.c)
 *     HalpBlkAllocateShadowData @ 0x140C14E98 (HalpBlkAllocateShadowData.c)
 *     HalpBlkInitializePageTables @ 0x140C14F28 (HalpBlkInitializePageTables.c)
 */

__int64 HalpBlkInitializeVirtualAddressSpace()
{
  int ShadowCode; // ebx
  __int64 v1; // r8

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
          v1 = HalpLocalApic;
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
    LOBYTE(v1) = 1;
    HalpUnmapVirtualAddress(HalpBlkPageTableVaWindow, 1LL, v1);
    HalpBlkPageTableVaWindow = 0LL;
  }
  return (unsigned int)ShadowCode;
}
