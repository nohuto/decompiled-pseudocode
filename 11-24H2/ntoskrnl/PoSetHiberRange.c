/*
 * XREFs of PoSetHiberRange @ 0x14046AD10
 * Callers:
 *     HalpPciMarkHiberPhase @ 0x14046ACD4 (HalpPciMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x1404C9FDC (HalpDmaMarkHiberAdapter.c)
 *     HalpExtEnvMarkHiberRegions @ 0x1404D055C (HalpExtEnvMarkHiberRegions.c)
 *     HalpTimerMarkHiberPhase @ 0x140538D7C (HalpTimerMarkHiberPhase.c)
 *     HalpAcpiMarkHiberPhase @ 0x14053AF1C (HalpAcpiMarkHiberPhase.c)
 *     HalpIommuExtMarkHiberMemory @ 0x14054FB04 (HalpIommuExtMarkHiberMemory.c)
 *     HalpIommuDmarPageTableMarkHiberPhase @ 0x14056544C (HalpIommuDmarPageTableMarkHiberPhase.c)
 *     HvlDiscardPagesFromHibernation @ 0x14058642C (HvlDiscardPagesFromHibernation.c)
 *     HvlDiscardSecurePagesFromHibernation @ 0x140586494 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlMarkHiberPhase @ 0x14058663C (HvlMarkHiberPhase.c)
 *     HvlpMarkHvlPagesForHibernation @ 0x140586D84 (HvlpMarkHvlPagesForHibernation.c)
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140586E58 (HvlpMarkHypervisorPagesForHibernation.c)
 *     IoGetDumpHiberRanges @ 0x14058E9CC (IoGetDumpHiberRanges.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x1405C6C10 (KeMarkDynamicTracingHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x1405EF6A0 (RtlMarkHiberPhase.c)
 *     DifMarkHiberPhase @ 0x140616EAC (DifMarkHiberPhase.c)
 *     MiMarkKernelPageTablePte @ 0x140673E20 (MiMarkKernelPageTablePte.c)
 *     VslAllocateSecureHibernateResources @ 0x14070D098 (VslAllocateSecureHibernateResources.c)
 *     PopHiberInitializeResources @ 0x1407507DC (PopHiberInitializeResources.c)
 *     MmMarkHiberRange @ 0x1407EDD10 (MmMarkHiberRange.c)
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x140B4D26C (PopBootLoaderTraceCopyPfnList.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140B4E274 (HalpMmAllocCtxMarkHiberPhase.c)
 *     HalpExtMarkHiberPhase @ 0x140B4F048 (HalpExtMarkHiberPhase.c)
 *     BgkResumePrepare @ 0x140B556DC (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140B57380 (KdMarkHiberPhase.c)
 *     KeMarkPcrHiberPhase @ 0x140B57410 (KeMarkPcrHiberPhase.c)
 *     PopSstInvokeNotificationHandlers @ 0x140B5DE00 (PopSstInvokeNotificationHandlers.c)
 *     PopHiberNotificationDiscardMemoryCallback @ 0x140B5F2B0 (PopHiberNotificationDiscardMemoryCallback.c)
 *     PopHiberNotificationDiscardPhysicalMemoryCallback @ 0x140B5F2E0 (PopHiberNotificationDiscardPhysicalMemoryCallback.c)
 *     PopHiberNotificationMarkBootPhaseCallback @ 0x140B5F310 (PopHiberNotificationMarkBootPhaseCallback.c)
 *     PopMarkComponentsBootPhase @ 0x140B5F714 (PopMarkComponentsBootPhase.c)
 *     PopMarkHiberPhase @ 0x140B5FA58 (PopMarkHiberPhase.c)
 *     MiMarkHiberNotCachedPte @ 0x140B647D0 (MiMarkHiberNotCachedPte.c)
 *     MiMarkNonPagedHiberPhasePte @ 0x140B64990 (MiMarkNonPagedHiberPhasePte.c)
 *     MmMarkHiberPhase @ 0x140B64E88 (MmMarkHiberPhase.c)
 *     PopBuildMemoryImageHeader @ 0x140B66A30 (PopBuildMemoryImageHeader.c)
 *     HalpIommuMarkHiberPhase @ 0x140B6DD24 (HalpIommuMarkHiberPhase.c)
 *     PopCopyFirmwareRuntimeInformationPfnList @ 0x140B70468 (PopCopyFirmwareRuntimeInformationPfnList.c)
 *     HaliLocateHiberRanges @ 0x140B705C0 (HaliLocateHiberRanges.c)
 *     BgMarkHiberPhase @ 0x140BB278C (BgMarkHiberPhase.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     PopSetRange @ 0x14046AEE0 (PopSetRange.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     _PopInternalError @ 0x1405CABB0 (_PopInternalError.c)
 *     MmGetSectionRange @ 0x1407E8A50 (MmGetSectionRange.c)
 *     MmMarkImageForHiberPhase @ 0x140B651FC (MmMarkImageForHiberPhase.c)
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
      PopInternalError(0xA166EuLL);
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
