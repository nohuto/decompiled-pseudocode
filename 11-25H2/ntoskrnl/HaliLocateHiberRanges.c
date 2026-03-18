/*
 * XREFs of HaliLocateHiberRanges @ 0x140B5F660
 * Callers:
 *     <none>
 * Callees:
 *     HalpPciMarkHiberPhase @ 0x140472224 (HalpPciMarkHiberPhase.c)
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 *     HalpDmaMarkHiberAdapter @ 0x1404D0ECC (HalpDmaMarkHiberAdapter.c)
 *     HalpExtEnvMarkHiberRegions @ 0x1404D826C (HalpExtEnvMarkHiberRegions.c)
 *     HalpTimerMarkHiberPhase @ 0x140538D8C (HalpTimerMarkHiberPhase.c)
 *     HalpAcpiMarkHiberPhase @ 0x14053ADEC (HalpAcpiMarkHiberPhase.c)
 *     Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline @ 0x14054A1A0 (Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_PrmSaveRestoreS4__private_IsEnabledNoReportingNoInline @ 0x14054A1F4 (Feature_Servicing_PrmSaveRestoreS4__private_IsEnabledNoReportingNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140B3C234 (HalpMmAllocCtxMarkHiberPhase.c)
 *     HalpExtMarkHiberPhase @ 0x140B3D008 (HalpExtMarkHiberPhase.c)
 *     HalpIommuMarkHiberPhase @ 0x140B5D3A0 (HalpIommuMarkHiberPhase.c)
 */

void __fastcall HaliLocateHiberRanges(PVOID MemoryMap)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( MemoryMap )
  {
    if ( dword_140FC2580 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140FC2588 >> 12),
        (unsigned __int64)(unsigned int)dword_140FC2580 >> 12,
        0x6D6C6168u);
    if ( dword_140FC2760 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140FC2768 >> 12),
        (unsigned __int64)(unsigned int)dword_140FC2760 >> 12,
        0x6D6C6168u);
    if ( dword_140FC2660 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140FC2668 >> 12),
        (unsigned __int64)(unsigned int)dword_140FC2660 >> 12,
        0x6D6C6168u);
    if ( dword_140FC2840 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140FC2848 >> 12),
        (unsigned __int64)(unsigned int)dword_140FC2840 >> 12,
        0x6D6C6168u);
    if ( !(unsigned int)Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline() )
    {
      if ( (unsigned int)Feature_Servicing_PrmSaveRestoreS4__private_IsEnabledNoReportingNoInline() )
        HalpAcpiMarkHiberPhase(MemoryMap);
    }
    HalpPciMarkHiberPhase(MemoryMap);
    HalpIommuMarkHiberPhase(MemoryMap);
    HalpExtEnvMarkHiberRegions(MemoryMap);
    HalpDmaMarkHiberAdapter(MemoryMap);
  }
  else
  {
    HalpMmAllocCtxMarkHiberPhase();
    HalpDmaMarkHiberAdapter(0LL);
    HalpIommuMarkHiberPhase(0LL);
    HalpExtEnvMarkHiberRegions(0LL);
    PoSetHiberRange(0LL, 0x10000u, HalpCR3Root, 0x1000uLL, 0x746C6168u);
    PoSetHiberRange(0LL, 0x10000u, HaliLocateHiberRanges, 0LL, 0x746C6168u);
    HalpExtMarkHiberPhase();
    if ( HalpMceErrorSource )
      PoSetHiberRange(0LL, 0x10000u, HalpMceErrorSource, 0x3CCuLL, 0x746C6168u);
    if ( HalpCmcErrorSource )
      PoSetHiberRange(0LL, 0x10000u, HalpCmcErrorSource, 0x3CCuLL, 0x746C6168u);
    PshedMarkHiberPhase();
    PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(PmAcpiDispatchTable + 8), 0LL, 0x636C6168u);
    guard_dispatch_icall_no_overrides(v2);
    if ( (unsigned int)Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline() )
      HalpAcpiMarkHiberPhase(0LL);
    PoSetHiberRange(0LL, 0x10000u, off_140E00A00, 0LL, 0x636C6168u);
    guard_dispatch_icall_no_overrides(v3);
    if ( McMicrocodePatchRecord )
      PoSetHiberRange(0LL, 0x10000u, McMicrocodePatchRecord, (unsigned int)McMicrocodePatchRecordSize, 0x636C6168u);
    HalpTimerMarkHiberPhase(0LL);
    HalpReEnableDiagnosticEventsOnResume = HalpDiagnosticEventsRegistered;
    if ( HalpDiagnosticEventsRegistered )
      HalpDiagnosticEventsRegistered = 0;
  }
}
