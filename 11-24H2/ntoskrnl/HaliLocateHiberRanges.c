/*
 * XREFs of HaliLocateHiberRanges @ 0x140B6E700
 * Callers:
 *     <none>
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     HalpPciMarkHiberPhase @ 0x1404BB254 (HalpPciMarkHiberPhase.c)
 *     HalpDmaMarkHiberAdapter @ 0x1404D0F9C (HalpDmaMarkHiberAdapter.c)
 *     HalpExtEnvMarkHiberRegions @ 0x1404D710C (HalpExtEnvMarkHiberRegions.c)
 *     HalpTimerMarkHiberPhase @ 0x14053B53C (HalpTimerMarkHiberPhase.c)
 *     HalpAcpiMarkHiberPhase @ 0x14053D61C (HalpAcpiMarkHiberPhase.c)
 *     Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline @ 0x14054CA90 (Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_PrmSaveRestoreS4__private_IsEnabledNoReportingNoInline @ 0x14054CAE4 (Feature_Servicing_PrmSaveRestoreS4__private_IsEnabledNoReportingNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140B4C234 (HalpMmAllocCtxMarkHiberPhase.c)
 *     HalpExtMarkHiberPhase @ 0x140B4D008 (HalpExtMarkHiberPhase.c)
 *     HalpIommuMarkHiberPhase @ 0x140B6C480 (HalpIommuMarkHiberPhase.c)
 */

void __fastcall HaliLocateHiberRanges(PVOID MemoryMap, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9

  if ( MemoryMap )
  {
    if ( dword_140FC2D28 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140FC2D30 >> 12),
        (unsigned __int64)(unsigned int)dword_140FC2D28 >> 12,
        0x6D6C6168u);
    if ( dword_140FC2F28 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)((unsigned __int64)(unsigned int)qword_140FC2F30 >> 12),
        (unsigned __int64)(unsigned int)dword_140FC2F28 >> 12,
        0x6D6C6168u);
    if ( dword_140FC2E28 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140FC2E30 >> 12),
        (unsigned __int64)(unsigned int)dword_140FC2E28 >> 12,
        0x6D6C6168u);
    if ( dword_140FC3028 )
      PoSetHiberRange(
        MemoryMap,
        0xC000u,
        (PVOID)(qword_140FC3030 >> 12),
        (unsigned __int64)(unsigned int)dword_140FC3028 >> 12,
        0x6D6C6168u);
    if ( !(unsigned int)Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline(
                          (__int64)MemoryMap,
                          a2,
                          a3,
                          a4) )
    {
      if ( (unsigned int)Feature_Servicing_PrmSaveRestoreS4__private_IsEnabledNoReportingNoInline(v6, v5, v7, v8) )
        HalpAcpiMarkHiberPhase(MemoryMap);
    }
    HalpPciMarkHiberPhase(MemoryMap);
    HalpIommuMarkHiberPhase(MemoryMap, v9, v10, v11);
    HalpExtEnvMarkHiberRegions(MemoryMap);
    HalpDmaMarkHiberAdapter(MemoryMap);
  }
  else
  {
    HalpMmAllocCtxMarkHiberPhase();
    HalpDmaMarkHiberAdapter(0LL);
    HalpIommuMarkHiberPhase(0LL, v12, v13, v14);
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
    guard_dispatch_icall_no_overrides(v16, v15, v17, v18);
    if ( (unsigned int)Feature_Servicing_PrmBootPhaseRestore__private_IsEnabledNoReportingNoInline(v20, v19, v21, v22) )
      HalpAcpiMarkHiberPhase(0LL);
    PoSetHiberRange(0LL, 0x10000u, off_140E00A00, 0LL, 0x636C6168u);
    guard_dispatch_icall_no_overrides(v24, v23, v25, v26);
    if ( McMicrocodePatchRecord )
      PoSetHiberRange(0LL, 0x10000u, McMicrocodePatchRecord, (unsigned int)McMicrocodePatchRecordSize, 0x636C6168u);
    HalpTimerMarkHiberPhase(0LL);
    HalpReEnableDiagnosticEventsOnResume = HalpDiagnosticEventsRegistered;
    if ( HalpDiagnosticEventsRegistered )
      HalpDiagnosticEventsRegistered = 0;
  }
}
