/*
 * XREFs of HalpMap @ 0x140460358
 * Callers:
 *     HalpPciMapMmConfigPhysicalAddress @ 0x1403AB340 (HalpPciMapMmConfigPhysicalAddress.c)
 *     HalpAcpiCheckAndMapTable @ 0x14045FE34 (HalpAcpiCheckAndMapTable.c)
 *     HalpAcpiGetRsdt @ 0x14046014C (HalpAcpiGetRsdt.c)
 *     HalpMapPhysicalMemory64 @ 0x14046032C (HalpMapPhysicalMemory64.c)
 *     HalpAcpiAllocateMemory @ 0x14053A9C0 (HalpAcpiAllocateMemory.c)
 *     HalpAllocateEarlyPages @ 0x140540400 (HalpAllocateEarlyPages.c)
 *     HalpMapEarlyPages @ 0x1405404F0 (HalpMapEarlyPages.c)
 *     HalpMapPhysicalMemoryWriteThrough64 @ 0x140540520 (HalpMapPhysicalMemoryWriteThrough64.c)
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     HalpPowerWriteResetCommand @ 0x1405423D4 (HalpPowerWriteResetCommand.c)
 *     HalpInterruptParseMadt @ 0x140554374 (HalpInterruptParseMadt.c)
 *     HalMapIoSpace @ 0x14055DAB0 (HalMapIoSpace.c)
 *     HalpUsbLegacyStopOhciInterrupt @ 0x1405600A0 (HalpUsbLegacyStopOhciInterrupt.c)
 *     HalpBlkAllocateAndShadowMemory @ 0x140C14C34 (HalpBlkAllocateAndShadowMemory.c)
 *     HalpBlkAllocatePageTablePage @ 0x140C14D30 (HalpBlkAllocatePageTablePage.c)
 *     HalpBlkInitializePageTables @ 0x140C14F28 (HalpBlkInitializePageTables.c)
 *     HalpSetupAcpiPhase0 @ 0x140C157FC (HalpSetupAcpiPhase0.c)
 *     HalpAllocPhysicalMemoryEx @ 0x140C69568 (HalpAllocPhysicalMemoryEx.c)
 *     HalpAcpiTableCacheInit @ 0x140C699DC (HalpAcpiTableCacheInit.c)
 * Callees:
 *     HalpFlushTLB @ 0x1404F29C4 (HalpFlushTLB.c)
 *     HalpIsHeap64KRegionExecutable @ 0x14054047C (HalpIsHeap64KRegionExecutable.c)
 *     HalpMmGetPteAddressSafe @ 0x140540784 (HalpMmGetPteAddressSafe.c)
 */

unsigned __int64 __fastcall HalpMap(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v6; // r10
  unsigned int v7; // ebp
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
  bool v21; // zf
  char v22; // r10
  __int64 v23; // rax
  int v24; // [rsp+70h] [rbp+18h]

  v24 = a3;
  v6 = 1LL;
  v7 = a2;
  if ( (unsigned int)a3 > 1 )
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
  while ( v12 < v7 )
  {
    v12 = 0;
    v13 = v10;
    while ( v12 < v7 )
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
       || (unsigned __int8)HalpIsHeap64KRegionExecutable(v10 + (v7 << 12) - 4096)) )
    {
      v10 += 4096LL;
      goto LABEL_8;
    }
    v15 = 0LL;
    for ( i = 0; i < v7; ++i )
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
    HalpHeapStart = v10 + (v7 << 12);
  if ( v12 )
  {
    v19 = 3LL;
    if ( a5 != 4 )
      v19 = v6;
    v20 = v19 | 0x8000000000000000uLL;
    if ( a5 == 32 )
      v20 = v19;
    a2 = v20 | 0x18;
    v21 = v24 == (_DWORD)v6;
    v22 = a4;
    if ( v21 )
      a2 = v20;
    do
    {
      v23 = a2 | a1 & 0xFFFFFFFFFF000LL;
      a3 = 0xFFFFF68000000000uLL;
      a1 += 4096LL;
      v9 = 8 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL;
      *(_QWORD *)v9 = v23;
      if ( a4 )
        __invlpg((void *)v10);
      v10 += 4096LL;
      --v12;
    }
    while ( v12 );
  }
  else
  {
    v22 = a4;
  }
  if ( !v22 )
    HalpFlushTLB(v9, a2, a3);
  return v18;
}
