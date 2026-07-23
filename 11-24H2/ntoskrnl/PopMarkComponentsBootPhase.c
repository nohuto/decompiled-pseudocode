/*
 * XREFs of PopMarkComponentsBootPhase @ 0x140B5F714
 * Callers:
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     MmIsAddressValid @ 0x1402433E0 (MmIsAddressValid.c)
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     VfIsVerifierEnabled @ 0x1404B71A0 (VfIsVerifierEnabled.c)
 *     HvlMarkHiberPhase @ 0x14058663C (HvlMarkHiberPhase.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x1405C6C10 (KeMarkDynamicTracingHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x1405EF6A0 (RtlMarkHiberPhase.c)
 *     VfIsVerifierExtensionEnabled @ 0x14060E7AC (VfIsVerifierExtensionEnabled.c)
 *     DifMarkHiberPhase @ 0x140616EAC (DifMarkHiberPhase.c)
 *     FirstEntrySList @ 0x1406B4820 (FirstEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     BgkResumePrepare @ 0x140B556DC (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140B57380 (KdMarkHiberPhase.c)
 *     KeMarkPcrHiberPhase @ 0x140B57410 (KeMarkPcrHiberPhase.c)
 *     PopSstInvokeNotificationHandlers @ 0x140B5DE00 (PopSstInvokeNotificationHandlers.c)
 *     PopMarkHiberPhase @ 0x140B5FA58 (PopMarkHiberPhase.c)
 *     MiConvertHiberPhasePages @ 0x140B64734 (MiConvertHiberPhasePages.c)
 *     MmMarkHiberPhase @ 0x140B64E88 (MmMarkHiberPhase.c)
 */

void __fastcall PopMarkComponentsBootPhase(char *Address)
{
  PVOID *i; // rbx
  __int64 v3; // rdx
  PSLIST_ENTRY j; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  unsigned int k; // ebx
  PVOID *m; // rbx
  __int64 v9; // rdx
  PVOID *n; // rbx

  if ( !byte_140F0BBC1 )
  {
    PoSetHiberRange(0LL, 0x10000u, PopSaveHiberContext, 0LL, 0x6E72654Bu);
    PoSetHiberRange(0LL, 0x10000u, HalAllocateCrashDumpRegisters, 0LL, 0x6348616Cu);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      PoSetHiberRange(0LL, 0x10000u, i, 0xA0uLL, 0x6E72654Bu);
      if ( MmIsAddressValid(i[12]) )
        PoSetHiberRange(0LL, 0x10000u, i[12], *((unsigned __int16 *)i + 45), 0x6E72654Bu);
      if ( MmIsAddressValid(i[10]) )
        PoSetHiberRange(0LL, 0x10000u, i[10], *((unsigned __int16 *)i + 37), 0x6E72654Bu);
    }
    for ( j = FirstEntrySList(&stru_140E27740); j; j = j->Next )
      KeMarkPcrHiberPhase((size_t *)j[-1].Next);
    guard_dispatch_icall_no_overrides(0LL, v3);
    PopMarkHiberPhase(Address);
    KdMarkHiberPhase();
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      if ( ViTrackIrqlQueue )
        PoSetHiberRange(0LL, 0x10000u, ViTrackIrqlQueue, 56LL * (unsigned int)ViTrackIrqlQueueLength, 0x72696656u);
      if ( (unsigned int)VfIsVerifierExtensionEnabled() && ViFnExtensionHiberFunc )
        PoSetHiberRange(0LL, 0x10000u, ViFnExtensionHiberFunc, 0LL, 0x72696656u);
    }
    DifMarkHiberPhase();
    BgkResumePrepare(0LL);
    RtlMarkHiberPhase();
    HvlMarkHiberPhase();
    v5 = 0LL;
    if ( VslpHiberBootRangeCount )
    {
      v6 = 0LL;
      do
      {
        PoSetHiberRange(
          0LL,
          0x10000u,
          *(PVOID *)(v6 + VslpHiberBootRanges),
          *(_QWORD *)(v6 + VslpHiberBootRanges + 8),
          0x52706B53u);
        ++v5;
        v6 += 16LL;
      }
      while ( v5 < VslpHiberBootRangeCount );
    }
    PoSetHiberRange(0LL, 0x10000u, qword_140F22998, (unsigned __int16)KiMaximumGroups << 8, 0x6467654Bu);
    PoSetHiberRange(0LL, 0x10000u, KiGlobalState, (unsigned int)(4 * KeMaximumProcessors), 0x6467654Bu);
    KeMarkDynamicTracingHiberPhase();
    MmMarkHiberPhase();
    for ( k = 0; k < IopNumTriageDumpDataBlocks; ++k )
      PoSetHiberRange(
        0LL,
        0x10000u,
        (PVOID)IopTriageDumpDataBlocks[2 * k],
        IopTriageDumpDataBlocks[2 * k + 1] - IopTriageDumpDataBlocks[2 * k],
        0x42706D44u);
    for ( m = (PVOID *)PopShutdownNotificationCallbackList; m != &PopShutdownNotificationCallbackList; m = (PVOID *)*m )
    {
      PoSetHiberRange(0LL, 0x10000u, m, 0x28uLL, 0x6E72654Bu);
      guard_dispatch_icall_no_overrides(m[4], v9);
    }
    for ( n = (PVOID *)PopThermal; n != &PopThermal; n = (PVOID *)*n )
      PoSetHiberRange(0LL, 0x10000u, n, 0x420uLL, 0x6D726854u);
    if ( Address[493] )
      PopSstInvokeNotificationHandlers(1u);
    if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
      MiConvertHiberPhasePages(Address + 48);
    Address[2] = 1;
  }
  Address[24] = 1;
}
