/*
 * XREFs of ExInitializeNPagedLookasideListInternal @ 0x1404549D0
 * Callers:
 *     ExInitializeNPagedLookasideList @ 0x140454990 (ExInitializeNPagedLookasideList.c)
 *     VfObjectContextInit @ 0x140B86844 (VfObjectContextInit.c)
 *     VfDeadlockInitialize @ 0x140B99DEC (VfDeadlockInitialize.c)
 *     ViDmaInit @ 0x140B9E028 (ViDmaInit.c)
 *     VfWdInit @ 0x140B9E8F8 (VfWdInit.c)
 *     ViIovInitialization @ 0x140BA6ED4 (ViIovInitialization.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     CcInitializeCacheManager @ 0x140C17A88 (CcInitializeCacheManager.c)
 *     FsRtlInitializeLargeMcbs @ 0x140C1AFB8 (FsRtlInitializeLargeMcbs.c)
 *     FsRtlInitializeFileLocks @ 0x140C1B150 (FsRtlInitializeFileLocks.c)
 *     FsRtlInitializeOplockPerf @ 0x140C1B2E8 (FsRtlInitializeOplockPerf.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     PopInitializeIrpWorkers @ 0x140C32964 (PopInitializeIrpWorkers.c)
 *     VfInitBootDriversLoaded @ 0x140C3D398 (VfInitBootDriversLoaded.c)
 *     WmipInitializeRegistration @ 0x140C3E9B8 (WmipInitializeRegistration.c)
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 *     ObInitSystem @ 0x140C63408 (ObInitSystem.c)
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
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
  v15 = (_QWORD *)qword_140EFA9C8;
  v16 = (_QWORD *)(a1 + 64);
  if ( *(__int64 **)qword_140EFA9C8 != &ExNPagedLookasideListHead )
    __fastfail(3u);
  *v16 = &ExNPagedLookasideListHead;
  v16[1] = v15;
  *v15 = v16;
  qword_140EFA9C8 = (__int64)v16;
  KeReleaseSpinLock(&ExNPagedLookasideLock, v14);
}
