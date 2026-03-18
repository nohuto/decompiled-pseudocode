/*
 * XREFs of PopMarkComponentsBootPhase @ 0x140B4D604
 * Callers:
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 * Callees:
 *     MmIsAddressValid @ 0x1403F6E00 (MmIsAddressValid.c)
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 *     VfIsVerifierEnabled @ 0x1404BD130 (VfIsVerifierEnabled.c)
 *     HvlMarkHiberPhase @ 0x140585CEC (HvlMarkHiberPhase.c)
 *     KeMarkDynamicTracingHiberPhase @ 0x1405C4EB4 (KeMarkDynamicTracingHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x1405E5D10 (RtlMarkHiberPhase.c)
 *     VfIsVerifierExtensionEnabled @ 0x14060422C (VfIsVerifierExtensionEnabled.c)
 *     DifMarkHiberPhase @ 0x14060C92C (DifMarkHiberPhase.c)
 *     FirstEntrySList @ 0x1406A85B0 (FirstEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     BgkResumePrepare @ 0x140B4368C (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x140B45330 (KdMarkHiberPhase.c)
 *     KeMarkPcrHiberPhase @ 0x140B453C0 (KeMarkPcrHiberPhase.c)
 *     PopMarkHiberPhase @ 0x140B4D914 (PopMarkHiberPhase.c)
 *     MiConvertHiberPhasePages @ 0x140B52534 (MiConvertHiberPhasePages.c)
 *     MmMarkHiberPhase @ 0x140B52C88 (MmMarkHiberPhase.c)
 */

void __fastcall PopMarkComponentsBootPhase(char *Address)
{
  unsigned int v1; // ebx
  PVOID *i; // rdi
  PSLIST_ENTRY j; // rdi
  unsigned __int64 v5; // rbp
  __int64 v6; // rdi
  PVOID *k; // rbx
  PVOID *m; // rbx

  v1 = 0;
  if ( !byte_140F0ADA1 )
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
    for ( j = FirstEntrySList(&stru_140E273C0); j; j = j->Next )
      KeMarkPcrHiberPhase((size_t *)j[-1].Next);
    guard_dispatch_icall_no_overrides(0LL);
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
    PoSetHiberRange(0LL, 0x10000u, qword_140F216A8, (unsigned __int16)KiMaximumGroups << 8, 0x6467654Bu);
    PoSetHiberRange(0LL, 0x10000u, KiGlobalState, (unsigned int)(4 * KeMaximumProcessors), 0x6467654Bu);
    KeMarkDynamicTracingHiberPhase();
    MmMarkHiberPhase();
    if ( IopNumTriageDumpDataBlocks )
    {
      do
      {
        PoSetHiberRange(
          0LL,
          0x10000u,
          (PVOID)IopTriageDumpDataBlocks[2 * v1],
          IopTriageDumpDataBlocks[2 * v1 + 1] - IopTriageDumpDataBlocks[2 * v1],
          0x42706D44u);
        ++v1;
      }
      while ( v1 < IopNumTriageDumpDataBlocks );
    }
    for ( k = (PVOID *)PopShutdownNotificationCallbackList; k != &PopShutdownNotificationCallbackList; k = (PVOID *)*k )
    {
      PoSetHiberRange(0LL, 0x10000u, k, 0x28uLL, 0x6E72654Bu);
      guard_dispatch_icall_no_overrides(k[4]);
    }
    for ( m = (PVOID *)PopThermal; m != &PopThermal; m = (PVOID *)*m )
      PoSetHiberRange(0LL, 0x10000u, m, 0x420uLL, 0x6D726854u);
    if ( (PopSimulateHiberBugcheck & 0x100) == 0 )
      MiConvertHiberPhasePages(Address + 48);
    Address[2] = 1;
  }
  Address[24] = 1;
}
