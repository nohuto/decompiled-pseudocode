/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x14045FB10
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x14045FAD0 (ExInitializeNPagedLookasideList.c)
 *     VfObjectContextInit @ 0x140B84844 (VfObjectContextInit.c)
 *     VfDeadlockInitialize @ 0x140B97DEC (VfDeadlockInitialize.c)
 *     ViDmaInit @ 0x140B9C028 (ViDmaInit.c)
 *     VfWdInit @ 0x140B9C8F8 (VfWdInit.c)
 *     ViIovInitialization @ 0x140BA4ED4 (ViIovInitialization.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     CcInitializeCacheManager @ 0x140C15A88 (CcInitializeCacheManager.c)
 *     FsRtlInitializeLargeMcbs @ 0x140C18FC4 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140C1915C (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeOplockPerf @ 0x140C192F4 (FsRtlInitializeOplockPerf.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     PopInitializeIrpWorkers @ 0x140C30844 (PopInitializeIrpWorkers.c)
 *     VfInitBootDriversLoaded @ 0x140C3B240 (VfInitBootDriversLoaded.c)
 *     WmipInitializeRegistration @ 0x140C3C860 (WmipInitializeRegistration.c)
 *     MiInitNucleus @ 0x140C4F298 (MiInitNucleus.c)
 *     ObInitSystem @ 0x140C612B4 (ObInitSystem.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x14045FE80 (InitializeSListHead.c)
 */

void __fastcall ExInitializeNPagedLookasideListInternal(
        __int64 a1,
        PVOID (__fastcall *a2)(int a1, SIZE_T a2, ULONG a3),
        void (__stdcall *a3)(PVOID P),
        int a4,
        int a5,
        int a6,
        __int16 a7,
        int a8)
{
  PVOID (__fastcall *v12)(int, SIZE_T, ULONG); // rax
  void (__stdcall *v13)(PVOID); // rax
  KIRQL v14; // dl
  _QWORD *v15; // rax
  _QWORD *v16; // rbp

  InitializeSListHead((PSLIST_HEADER)a1);
  *(_WORD *)(a1 + 16) = ExMinimumLookasideDepth;
  *(_DWORD *)(a1 + 40) = a6;
  *(_DWORD *)(a1 + 44) = a5;
  v12 = ExAllocatePoolZero;
  if ( a2 )
    v12 = a2;
  *(_WORD *)(a1 + 18) = 256;
  *(_QWORD *)(a1 + 20) = 0LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 48) = v12;
  v13 = ExFreePool;
  if ( a3 )
    v13 = a3;
  *(_QWORD *)(a1 + 56) = v13;
  *(_QWORD *)(a1 + 80) = 0LL;
  v14 = KeAcquireSpinLockRaiseToDpc(&ExNPagedLookasideLock);
  if ( a8 )
  {
    *(_WORD *)(a1 + 16) = a7;
  }
  else
  {
    if ( ExMinimumLookasideDepth )
      goto LABEL_7;
    *(_WORD *)(a1 + 16) = 0;
  }
  *(_WORD *)(a1 + 18) = -1;
LABEL_7:
  v15 = (_QWORD *)qword_140EFA698;
  v16 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_140EFA698 != &ExNPagedLookasideListHead )
    __fastfail(3u);
  *v16 = &ExNPagedLookasideListHead;
  v16[1] = v15;
  *v15 = v16;
  qword_140EFA698 = (__int64)v16;
  KeReleaseSpinLock(&ExNPagedLookasideLock, v14);
}
