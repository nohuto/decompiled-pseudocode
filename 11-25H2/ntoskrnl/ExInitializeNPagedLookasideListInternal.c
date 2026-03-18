/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x140460B30
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x140460AF0 (ExInitializeNPagedLookasideList.c)
 *     VfObjectContextInit @ 0x140B74864 (VfObjectContextInit.c)
 *     VfDeadlockInitialize @ 0x140B87E0C (VfDeadlockInitialize.c)
 *     ViDmaInit @ 0x140B8C048 (ViDmaInit.c)
 *     VfWdInit @ 0x140B8C918 (VfWdInit.c)
 *     ViIovInitialization @ 0x140B94EF4 (ViIovInitialization.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     CcInitializeCacheManager @ 0x140C049F8 (CcInitializeCacheManager.c)
 *     FsRtlInitializeLargeMcbs @ 0x140C07F24 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140C080BC (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeOplockPerf @ 0x140C08254 (FsRtlInitializeOplockPerf.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     PopInitializeIrpWorkers @ 0x140C1F744 (PopInitializeIrpWorkers.c)
 *     VfInitBootDriversLoaded @ 0x140C29F60 (VfInitBootDriversLoaded.c)
 *     WmipInitializeRegistration @ 0x140C2B580 (WmipInitializeRegistration.c)
 *     MiInitNucleus @ 0x140C3E068 (MiInitNucleus.c)
 *     ObInitSystem @ 0x140C4FF98 (ObInitSystem.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     InitializeSListHead @ 0x140460EA0 (InitializeSListHead.c)
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
  v15 = (_QWORD *)qword_140EFA368;
  v16 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_140EFA368 != &ExNPagedLookasideListHead )
    __fastfail(3u);
  *v16 = &ExNPagedLookasideListHead;
  v16[1] = v15;
  *v15 = v16;
  qword_140EFA368 = (__int64)v16;
  KeReleaseSpinLock(&ExNPagedLookasideLock, v14);
}
