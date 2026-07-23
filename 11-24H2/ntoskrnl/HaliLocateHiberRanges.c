/*
 * XREFs of HaliLocateHiberRanges @ 0x140B705C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpPciMarkHiberPhase @ 0x14046ACD4 (HalpPciMarkHiberPhase.c)
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     HalpDmaMarkHiberAdapter @ 0x1404C9FDC (HalpDmaMarkHiberAdapter.c)
 *     HalpExtEnvMarkHiberRegions @ 0x1404D055C (HalpExtEnvMarkHiberRegions.c)
 *     HalpTimerMarkHiberPhase @ 0x140538D7C (HalpTimerMarkHiberPhase.c)
 *     HalpAcpiMarkHiberPhase @ 0x14053AF1C (HalpAcpiMarkHiberPhase.c)
 *     Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline @ 0x14054A350 (Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_PrmSaveRestoreS4__private_IsEnabledNoReportingNoInline @ 0x14054A3A4 (Feature_Servicing_PrmSaveRestoreS4__private_IsEnabledNoReportingNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140B4E274 (HalpMmAllocCtxMarkHiberPhase.c)
 *     HalpExtMarkHiberPhase @ 0x140B4F048 (HalpExtMarkHiberPhase.c)
 *     HalpIommuMarkHiberPhase @ 0x140B6DD24 (HalpIommuMarkHiberPhase.c)
 */

void __fastcall HaliLocateHiberRanges(PVOID MemoryMap)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( MemoryMap )
  {
    if ( dword_140FC2F88 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140FC2F90 >> 12),
        (unsigned __int64)(unsigned int)dword_140FC2F88 >> 12,
        0x6D6C6168u);
    if ( dword_140FC3188 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140FC3190 >> 12),
        (unsigned __int64)(unsigned int)dword_140FC3188 >> 12,
        0x6D6C6168u);
    if ( dword_140FC3088 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140FC3090 >> 12),
        (unsigned __int64)(unsigned int)dword_140FC3088 >> 12,
        0x6D6C6168u);
    if ( dword_140FC3288 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140FC3290 >> 12),
        (unsigned __int64)(unsigned int)dword_140FC3288 >> 12,
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
    guard_dispatch_icall_no_overrides(v3, v2);
    if ( (unsigned int)Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline() )
      HalpAcpiMarkHiberPhase(0LL);
    PoSetHiberRange(0LL, 0x10000u, off_140E00A00, 0LL, 0x636C6168u);
    guard_dispatch_icall_no_overrides(v5, v4);
    if ( McMicrocodePatchRecord )
      PoSetHiberRange(0LL, 0x10000u, McMicrocodePatchRecord, (unsigned int)McMicrocodePatchRecordSize, 0x636C6168u);
    HalpTimerMarkHiberPhase(0LL);
    HalpReEnableDiagnosticEventsOnResume = HalpDiagnosticEventsRegistered;
    if ( HalpDiagnosticEventsRegistered )
      HalpDiagnosticEventsRegistered = 0;
  }
}
