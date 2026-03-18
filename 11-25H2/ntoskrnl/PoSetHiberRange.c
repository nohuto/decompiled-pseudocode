/*
 * XREFs of PoSetHiberRange @ 0x140472260
 * Callers:
 *     HalpPciMarkHiberPhase @ 0x140472224 (HalpPciMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x1404D0ECC (HalpDmaMarkHiberAdapter.c)
 *     HalpExtEnvMarkHiberRegions @ 0x1404D826C (HalpExtEnvMarkHiberRegions.c)
 *     HalpTimerMarkHiberPhase @ 0x140538D8C (HalpTimerMarkHiberPhase.c)
 *     HalpAcpiMarkHiberPhase @ 0x14053ADEC (HalpAcpiMarkHiberPhase.c)
 *     HalpIommuExtMarkHiberMemory @ 0x14054F8C4 (HalpIommuExtMarkHiberMemory.c)
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x140564D8C (HalpIommuDmarPageTableMarkHiberPhase.c)
 *     HvlDiscardPagesFromHibernation @ 0x140585ADC (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x140585B44 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlMarkHiberPhase @ 0x140585CEC (HvlMarkHiberPhase.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140586424 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x1405864F8 (HvlpMarkHypervisorPagesForHibernation.c)
 *     IoGetDumpHiberRanges @ 0x14058E17C (IoGetDumpHiberRanges.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x1405C4EB4 (KeMarkDynamicTracingHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x1405E5D10 (RtlMarkHiberPhase.c)
 *     DifMarkHiberPhase @ 0x14060C92C (DifMarkHiberPhase.c)
 *     MiMarkKernelPageTablePte @ 0x1406671A0 (MiMarkKernelPageTablePte.c)
 *     VslAllocateSecureHibernateResources @ 0x140703628 (VslAllocateSecureHibernateResources.c)
 *     PopHiberInitializeResources @ 0x140746400 (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x1407DD8A0 (MmMarkHiberRange.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140B3B22C (PopBootLoaderTraceCopyPfnList.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140B3C234 (HalpMmAllocCtxMarkHiberPhase.c)
 *     HalpExtMarkHiberPhase @ 0x140B3D008 (HalpExtMarkHiberPhase.c)
 *     BgkResumePrepare @ 0x140B4368C (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140B45330 (KdMarkHiberPhase.c)
 *     KeMarkPcrHiberPhase @ 0x140B453C0 (KeMarkPcrHiberPhase.c)
 *     PopMarkComponentsBootPhase @ 0x140B4D604 (PopMarkComponentsBootPhase.c)
 *     PopMarkHiberPhase @ 0x140B4D914 (PopMarkHiberPhase.c)
 *     MiMarkHiberNotCachedPte @ 0x140B525D0 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140B52790 (MiMarkNonPagedHiberPhasePte.c)
 *     MmMarkHiberPhase @ 0x140B52C88 (MmMarkHiberPhase.c)
 *     PopBuildMemoryImageHeader @ 0x140B54810 (PopBuildMemoryImageHeader.c)
 *     HalpIommuMarkHiberPhase @ 0x140B5D3A0 (HalpIommuMarkHiberPhase.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140B5F508 (PopCopyFirmwareRuntimeInformationPfnList.c)
 *     HaliLocateHiberRanges @ 0x140B5F660 (HaliLocateHiberRanges.c)
 *     BgMarkHiberPhase @ 0x140BA078C (BgMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402AB2E0 (MmGetPhysicalAddress.c)
 *     PopSetRange @ 0x140472430 (PopSetRange.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     _PopInternalError @ 0x1405C8F30 (_PopInternalError.c)
 *     MmGetSectionRange @ 0x1407D85C0 (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x140B52FFC (MmMarkImageForHiberPhase.c)
 */

void __stdcall PoSetHiberRange(PVOID MemoryMap, ULONG Flags, PVOID Address, ULONG_PTR Length, ULONG Tag)
{
  __int16 v5; // bx
  PVOID v6; // rbp
  ULONG v7; // eax
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // rsi
  ULONG_PTR v10; // r15
  PHYSICAL_ADDRESS v11; // r12
  __int64 v12; // r14
  ULONG_PTR v13; // rbp
  unsigned int v14; // eax
  ULONG_PTR v15[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID v16; // [rsp+80h] [rbp+8h]
  unsigned __int64 v17; // [rsp+90h] [rbp+18h] BYREF

  v17 = (unsigned __int64)Address;
  v16 = MemoryMap;
  v5 = Flags;
  LODWORD(v15[0]) = 0;
  v6 = MemoryMap;
  if ( (KiBugCheckActive & 3) != 0 )
    return;
  if ( !MemoryMap )
  {
    v6 = (PVOID)BugCheckParameter4;
    v16 = (PVOID)BugCheckParameter4;
    if ( !BugCheckParameter4 )
      KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, 0LL, 0LL);
    v14 = *(_DWORD *)(BugCheckParameter4 + 200);
    if ( v14 != 8 )
    {
      if ( v14 != 9 )
        KeBugCheckEx(0xA0u, 0x10BuLL, 0xAuLL, v14, 0LL);
      return;
    }
    if ( (Flags & 0xFFFFBFFF) == 0x10000 && (Length || (Flags & 0x4000) == 0) )
    {
      v7 = Flags & 0x10000;
      goto LABEL_4;
    }
LABEL_19:
    KeBugCheckEx(0xA0u, 0x10CuLL, 0xAuLL, Flags, 0LL);
  }
  v7 = Flags & 0x10000;
  if ( (Flags & 0x10000) != 0 )
    goto LABEL_19;
LABEL_4:
  if ( !Length )
  {
    if ( v7 )
    {
      MmMarkImageForHiberPhase(v17);
      return;
    }
    if ( (int)MmGetSectionRange(v17, &v17, v15) < 0 )
      PopInternalError(0xA1641uLL);
    Length = LODWORD(v15[0]);
  }
  if ( (v5 & 4) != 0 )
    v5 = v5 & 0xFFF9 | 2;
  if ( (v5 & 0x4000) != 0 )
  {
    PopSetRange((ULONG_PTR)v6, Tag);
  }
  else
  {
    v8 = v17 >> 12;
    v9 = (Length + v17 + 4095) >> 12;
    while ( v8 < v9 )
    {
      v15[0] = v8 << 12;
      v10 = v8 + 1;
      v11.QuadPart = (unsigned __int64)MmGetPhysicalAddress((PVOID)(v8 << 12)).QuadPart >> 12;
      v12 = 1LL;
      if ( v8 + 1 < v9 )
      {
        v13 = v15[0];
        do
        {
          if ( v10 + v11.QuadPart - v8 != (unsigned __int64)MmGetPhysicalAddress((PVOID)(v13 + (v12 << 12))).QuadPart >> 12 )
            break;
          ++v12;
          ++v10;
        }
        while ( v10 < v9 );
        v6 = v16;
      }
      PopSetRange((ULONG_PTR)v6, Tag);
      v8 += v12;
    }
  }
}
