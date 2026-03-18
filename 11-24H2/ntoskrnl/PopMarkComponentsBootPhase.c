/*
 * XREFs of PopMarkComponentsBootPhase @ 0x140B5D694
 * Callers:
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     MmIsAddressValid @ 0x1403FF300 (MmIsAddressValid.c)
 *     VfIsVerifierEnabled @ 0x1404BC290 (VfIsVerifierEnabled.c)
 *     HvlMarkHiberPhase @ 0x14058935C (HvlMarkHiberPhase.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x1405C94E0 (KeMarkDynamicTracingHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x1405F2060 (RtlMarkHiberPhase.c)
 *     VfIsVerifierExtensionEnabled @ 0x1406101EC (VfIsVerifierExtensionEnabled.c)
 *     DifMarkHiberPhase @ 0x1406188EC (DifMarkHiberPhase.c)
 *     FirstEntrySList @ 0x1406B3880 (FirstEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     BgkResumePrepare @ 0x140B5368C (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140B55330 (KdMarkHiberPhase.c)
 *     KeMarkPcrHiberPhase @ 0x140B553C0 (KeMarkPcrHiberPhase.c)
 *     PopSstInvokeNotificationHandlers @ 0x140B5BD90 (PopSstInvokeNotificationHandlers.c)
 *     PopMarkHiberPhase @ 0x140B5D9D8 (PopMarkHiberPhase.c)
 *     MiConvertHiberPhasePages @ 0x140B62664 (MiConvertHiberPhasePages.c)
 *     MmMarkHiberPhase @ 0x140B62DB8 (MmMarkHiberPhase.c)
 */

void __fastcall PopMarkComponentsBootPhase(char *Address)
{
  PVOID *i; // rbx
  __int64 v3; // rdx
  PSLIST_ENTRY j; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int k; // ebx
  PVOID *m; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID *n; // rbx
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF

  v17 = 0LL;
  if ( !byte_140F0AD81 )
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
    for ( j = FirstEntrySList(&stru_140E27600); j; j = j->Next )
      KeMarkPcrHiberPhase((size_t *)j[-1].Next);
    guard_dispatch_icall_no_overrides(0LL, v3, v5, v6);
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
    v7 = 0LL;
    if ( VslpHiberBootRangeCount )
    {
      v8 = 0LL;
      do
      {
        PoSetHiberRange(
          0LL,
          0x10000u,
          *(PVOID *)(v8 + VslpHiberBootRanges),
          *(_QWORD *)(v8 + VslpHiberBootRanges + 8),
          0x52706B53u);
        ++v7;
        v8 += 16LL;
      }
      while ( v7 < VslpHiberBootRangeCount );
    }
    PoSetHiberRange(0LL, 0x10000u, qword_140F21E78, (unsigned __int16)KiMaximumGroups << 8, 0x6467654Bu);
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
      guard_dispatch_icall_no_overrides(m[4], v13, v14, v15);
    }
    for ( n = (PVOID *)PopThermal; n != &PopThermal; n = (PVOID *)*n )
      PoSetHiberRange(0LL, 0x10000u, n, 0x420uLL, 0x6D726854u);
    if ( Address[489] )
    {
      *(_QWORD *)&v17 = Address;
      *((_QWORD *)&v17 + 1) = PopHiberNotificationMarkBootPhaseCallback;
      PopSstInvokeNotificationHandlers(1u, (__int64)&v17, v9, v10);
    }
    if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
      MiConvertHiberPhasePages(Address + 48);
    Address[2] = 1;
  }
  Address[24] = 1;
}
