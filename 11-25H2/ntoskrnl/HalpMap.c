/*
 * XREFs of HalpMap @ 0x140412738
 * Callers:
 *     HalpPciMapMmConfigPhysicalAddress @ 0x1402834E4 (HalpPciMapMmConfigPhysicalAddress.c)
 *     HalpMapPhysicalMemory64 @ 0x14041270C (HalpMapPhysicalMemory64.c)
 *     HalpAcpiCheckAndMapTable @ 0x140413610 (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x140413928 (HalpAcpiGetRsdt.c)
 *     HalpAcpiAllocateMemory @ 0x14053A890 (HalpAcpiAllocateMemory.c)
 *     HalpAllocateEarlyPages @ 0x140540280 (HalpAllocateEarlyPages.c)
 *     HalpMapEarlyPages @ 0x140540370 (HalpMapEarlyPages.c)
 *     HalpMapPhysicalMemoryWriteThrough64 @ 0x1405403A0 (HalpMapPhysicalMemoryWriteThrough64.c)
 *     HalpMmAllocateMemoryInternal @ 0x1405404A0 (HalpMmAllocateMemoryInternal.c)
 *     HalpPowerWriteResetCommand @ 0x140542254 (HalpPowerWriteResetCommand.c)
 *     HalpInterruptParseMadt @ 0x140554134 (HalpInterruptParseMadt.c)
 *     HalMapIoSpace @ 0x14055D580 (HalMapIoSpace.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x14055FB70 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140C01BA4 (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140C01CA0 (HalpBlkAllocatePageTablePage.c)
 *     HalpBlkInitializePageTables @ 0x140C01E98 (HalpBlkInitializePageTables.c)
 *     HalpSetupAcpiPhase0 @ 0x140C0276C (HalpSetupAcpiPhase0.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140C55764 (HalpAllocPhysicalMemoryEx.c)
 *     HalpAcpiTableCacheInit @ 0x140C55BD8 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpFlushTLB @ 0x1404F281C (HalpFlushTLB.c)
 *     HalpIsHeap64KRegionExecutable @ 0x1405402FC (HalpIsHeap64KRegionExecutable.c)
 *     HalpMmGetPteAddressSafe @ 0x140540604 (HalpMmGetPteAddressSafe.c)
 */

unsigned __int64 __fastcall HalpMap(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v6; // r10
  __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned int v12; // esi
  unsigned __int64 v13; // r14
  _BYTE *PteAddressSafe; // rax
  unsigned __int64 v15; // r14
  unsigned int i; // r15d
  _BYTE *v17; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  bool v22; // zf
  char v23; // r10
  __int64 v24; // rax

  v6 = 1LL;
  if ( a3 > 1 )
    return 0LL;
  if ( a5 > 0x20 )
    return 0LL;
  v9 = 0x100000014LL;
  if ( !_bittest64(&v9, a5) )
    return 0LL;
  v10 = a6;
  if ( a6 )
  {
    if ( a6 >= HalpHeapEnd )
      return 0LL;
  }
  else
  {
    v10 = HalpHeapStart;
  }
LABEL_8:
  v12 = 0;
LABEL_9:
  while ( v12 < a2 )
  {
    v12 = 0;
    v13 = v10;
    while ( v12 < a2 )
    {
      if ( v13 == HalpHeapEnd )
        return 0LL;
      PteAddressSafe = (_BYTE *)HalpMmGetPteAddressSafe(v13);
      if ( !PteAddressSafe )
        return 0LL;
      v13 += 4096LL;
      v6 = 1LL;
      if ( (*PteAddressSafe & 1) != 0 )
      {
        v10 = v13;
        goto LABEL_9;
      }
      ++v12;
    }
    if ( a5 == 32
      && ((unsigned __int8)HalpIsHeap64KRegionExecutable(v10)
       || (unsigned __int8)HalpIsHeap64KRegionExecutable(v10 + (a2 << 12) - 4096)) )
    {
      v10 += 4096LL;
      goto LABEL_8;
    }
    v15 = 0LL;
    for ( i = 0; i < a2; ++i )
    {
      v17 = (_BYTE *)HalpMmGetPteAddressSafe(v10 + (i << 12));
      if ( !v17 )
        return 0LL;
      v6 = 1LL;
      if ( (*v17 & 1) != 0 )
        v15 = v10 + (i << 12);
    }
    if ( v15 )
    {
      v10 = v15 + 4096;
      goto LABEL_8;
    }
  }
  v18 = v10 | a1 & 0xFFF;
  if ( v10 == HalpHeapStart )
    HalpHeapStart = v10 + (a2 << 12);
  if ( v12 )
  {
    v19 = 3LL;
    if ( a5 != 4 )
      v19 = v6;
    v20 = v19 | 0x8000000000000000uLL;
    if ( a5 == 32 )
      v20 = v19;
    v21 = v20 | 0x18;
    v22 = a3 == (_DWORD)v6;
    v23 = a4;
    if ( v22 )
      v21 = v20;
    do
    {
      v24 = v21 | a1 & 0xFFFFFFFFFF000LL;
      a1 += 4096LL;
      v9 = 8 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL;
      *(_QWORD *)v9 = v24;
      if ( a4 )
        __invlpg((void *)v10);
      v10 += 4096LL;
      --v12;
    }
    while ( v12 );
  }
  else
  {
    v23 = a4;
  }
  if ( !v23 )
    HalpFlushTLB(v9);
  return v18;
}
