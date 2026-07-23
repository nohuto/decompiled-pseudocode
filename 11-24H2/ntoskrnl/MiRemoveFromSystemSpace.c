/*
 * XREFs of MiRemoveFromSystemSpace @ 0x140290E7C
 * Callers:
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     IopDeleteIoRing @ 0x140714060 (IopDeleteIoRing.c)
 *     PspDeleteServerSiloGlobals @ 0x140772C14 (PspDeleteServerSiloGlobals.c)
 *     RtlNlsDeleteState @ 0x14077E6D0 (RtlNlsDeleteState.c)
 *     EtwpCoverageSamplerCleanup @ 0x1407B2DD0 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1407B2FC0 (EtwpCoverageSamplerSetBloomFilter.c)
 *     ExInitializeLeapSecondData @ 0x1407B6080 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1407C42B0 (NtMapCMFModule.c)
 *     AlpcViewDestroyProcedure @ 0x140897790 (AlpcViewDestroyProcedure.c)
 *     MiUnmapImageInSystemSpace @ 0x14093E4B4 (MiUnmapImageInSystemSpace.c)
 *     KsepSdbUnmapFromMemory @ 0x140944674 (KsepSdbUnmapFromMemory.c)
 *     KsepSdbMapToMemory @ 0x14094498C (KsepSdbMapToMemory.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140974760 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     CmFcpUnmapSection @ 0x140A2AFE4 (CmFcpUnmapSection.c)
 *     MmUnmapViewInSystemSpace @ 0x140A41A80 (MmUnmapViewInSystemSpace.c)
 *     PspSchedulerSharedDataRegionDelete @ 0x140A58AF0 (PspSchedulerSharedDataRegionDelete.c)
 *     EtwpCoverageEnsureContext @ 0x140ADAD8C (EtwpCoverageEnsureContext.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     MiRemoveMappedPtes @ 0x1402915D0 (MiRemoveMappedPtes.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiLockWorkingSetExclusive @ 0x1403367E0 (MiLockWorkingSetExclusive.c)
 *     MiUnlockControlAreaFileObjectExclusive @ 0x140361160 (MiUnlockControlAreaFileObjectExclusive.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiDereferencePerSessionProtos @ 0x140A18828 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveFromSystemSpace(ULONG_PTR BugCheckParameter1, int a2)
{
  int v2; // r12d
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v5; // r15
  __int64 v6; // rax
  signed __int8 v7; // cf
  __int64 v8; // rbx
  unsigned __int8 v9; // al
  _QWORD *v10; // rbx
  unsigned __int8 v11; // di
  unsigned __int64 v12; // r8
  char *v13; // rsi
  void *v14; // r14
  __int64 v15; // rdi
  struct _KTHREAD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // rcx
  char **v22; // rax
  volatile LONG *v23; // rdi
  KIRQL v24; // al
  ULONG_PTR v25; // rdx
  KIRQL v26; // r14
  unsigned __int64 v27; // r8
  char v28[152]; // [rsp+38h] [rbp-C0h] BYREF

  v2 = a2;
  memset_0(v28, 0, 0x90uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (BugCheckParameter1 & 0x3FFFFFFF) != 0 )
    goto LABEL_2;
  v23 = (volatile LONG *)((char *)&unk_140E362C0 + 16 * (unsigned __int8)(BugCheckParameter1 >> 30));
  v24 = ExAcquireSpinLockExclusive(v23 + 3);
  v10 = *(_QWORD **)v23;
  v26 = v24;
  while ( v10 )
  {
    v27 = v10[11] & 0xFFFFFFFFFFFFF000uLL;
    v25 = v27 + v10[4];
    if ( BugCheckParameter1 < v25 )
    {
      if ( BugCheckParameter1 >= v27 )
        break;
      v10 = (_QWORD *)*v10;
    }
    else
    {
      v10 = (_QWORD *)v10[1];
    }
  }
  if ( v10 )
  {
    RtlAvlRemoveNode(v23, v10);
    --*((_DWORD *)v23 + 2);
  }
  LOBYTE(v25) = v26;
  MiReleaseSpinLockExclusive(v23 + 3, v25);
  if ( !v10 )
  {
LABEL_2:
    --CurrentThread->SpecialApcDisable;
    v6 = KeAbPreAcquire(&qword_140E36080, 0LL, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E36080, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&qword_140E36080, v6, &qword_140E36080);
    if ( v8 )
      *(_BYTE *)(v8 + 10) = 1;
    v9 = MiLockWorkingSetExclusive(&unk_140E37FC0);
    v10 = P;
    v11 = v9;
    while ( v10 )
    {
      v12 = v10[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( BugCheckParameter1 >= v12 + v10[4] )
      {
        v10 = (_QWORD *)v10[1];
      }
      else
      {
        if ( BugCheckParameter1 >= v12 )
          break;
        v10 = (_QWORD *)*v10;
      }
    }
    if ( !v10 )
      KeBugCheckEx(0xD7u, BugCheckParameter1, 1uLL, 0LL, 0LL);
    --dword_140E36090;
    RtlAvlRemoveNode(&P, v10);
    MiUnlockWorkingSetExclusive((__int64)&unk_140E37FC0, v11);
    v13 = (char *)(v10 + 9);
    v14 = (void *)v10[8];
    v15 = *(_QWORD *)v10[6];
    v16 = KeGetCurrentThread();
    --v16->SpecialApcDisable;
    v17 = KeAbPreAcquire(v15 + 104, 0LL, 0LL);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx(v15 + 104, v17, v15 + 104);
    if ( v18 )
      *(_BYTE *)(v18 + 10) = 1;
    if ( (*(_DWORD *)(v15 + 56) & 0x400) == 0 )
    {
      v21 = *(_QWORD *)v13;
      if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 || (v22 = (char **)v10[10], *v22 != v13) )
        __fastfail(3u);
      *v22 = (char *)v21;
      *(_QWORD *)(v21 + 8) = v22;
    }
    MiUnlockControlAreaFileObjectExclusive(v15);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E36080, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E36080);
    KeAbPostRelease((ULONG_PTR)&qword_140E36080);
    v19 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v19 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v2 = a2;
  }
  else
  {
    v14 = (void *)v10[8];
    v15 = *(_QWORD *)v10[6];
  }
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x63536D4Du);
  if ( (v10[7] & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v15 + 92), 0xFFFFFFFF);
  if ( v2 )
    MiRemoveMappedPtes(v10, &unk_140E37FC0);
  if ( *((_DWORD *)v10 + 24) != 0x7FFFF )
    MiDereferencePerSessionProtos(v15);
  v20 = ((v10[4] >> 12) + 15LL) & 0xFFFFFFF0LL;
  if ( (v10[7] & 0x18) == 0x18 )
    MiReleasePtes(&unk_140E35E60, v5, (unsigned int)v20);
  else
    MiReturnSystemVa(v10[11] & 0xFFFFFFFFFFFFF000uLL, (v10[11] & 0xFFFFFFFFFFFFF000uLL) + (v20 << 12));
  ExFreePoolWithTag(v10, 0);
}
