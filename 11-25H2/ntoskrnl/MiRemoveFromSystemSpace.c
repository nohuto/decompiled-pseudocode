/*
 * XREFs of MiRemoveFromSystemSpace @ 0x1402A8BCC
 * Callers:
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     IopDeleteIoRing @ 0x14070A3D0 (IopDeleteIoRing.c)
 *     PspDeleteServerSiloGlobals @ 0x14076302C (PspDeleteServerSiloGlobals.c)
 *     RtlNlsDeleteState @ 0x14076F550 (RtlNlsDeleteState.c)
 *     EtwpCoverageSamplerCleanup @ 0x1407A35B0 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1407A37A0 (EtwpCoverageSamplerSetBloomFilter.c)
 *     ExInitializeLeapSecondData @ 0x1407A6790 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1407B4B70 (NtMapCMFModule.c)
 *     KsepSdbUnmapFromMemory @ 0x14082ABC4 (KsepSdbUnmapFromMemory.c)
 *     KsepSdbMapToMemory @ 0x14082B4A8 (KsepSdbMapToMemory.c)
 *     AlpcViewDestroyProcedure @ 0x1408B3AF0 (AlpcViewDestroyProcedure.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1409417A8 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiUnmapImageInSystemSpace @ 0x140944164 (MiUnmapImageInSystemSpace.c)
 *     CmFcpUnmapSection @ 0x140A30204 (CmFcpUnmapSection.c)
 *     MmUnmapViewInSystemSpace @ 0x140A483D0 (MmUnmapViewInSystemSpace.c)
 *     EtwpCoverageEnsureContext @ 0x140A57F04 (EtwpCoverageEnsureContext.c)
 *     PspSchedulerSharedDataRegionDelete @ 0x140A5FA20 (PspSchedulerSharedDataRegionDelete.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x140211FE0 (MiLockWorkingSetExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x1402A8F20 (RtlAvlRemoveNode.c)
 *     MiRemoveMappedPtes @ 0x1402A9320 (MiRemoveMappedPtes.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 *     MiUnlockControlAreaFileObjectExclusive @ 0x14031FF90 (MiUnlockControlAreaFileObjectExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MiDereferencePerSessionProtos @ 0x140A1D1D8 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveFromSystemSpace(ULONG_PTR BugCheckParameter1, int a2)
{
  int v2; // r12d
  struct _KTHREAD *CurrentThread; // r13
  ULONG_PTR v5; // r15
  __int64 *v6; // rax
  signed __int8 v7; // cf
  __int64 *v8; // rbx
  char v9; // al
  _QWORD *v10; // rbx
  char v11; // di
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  char *v14; // rsi
  void *v15; // r14
  __int64 v16; // rdi
  struct _KTHREAD *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  char **v28; // rax
  volatile LONG *v29; // rdi
  KIRQL v30; // al
  ULONG_PTR v31; // rdx
  KIRQL v32; // r14
  unsigned __int64 v33; // r8
  char v34[152]; // [rsp+38h] [rbp-C0h] BYREF

  v2 = a2;
  memset_0(v34, 0, 0x90uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (BugCheckParameter1 & 0x3FFFFFFF) != 0 )
    goto LABEL_2;
  v29 = (volatile LONG *)((char *)&unk_140E35F40 + 16 * (unsigned __int8)(BugCheckParameter1 >> 30));
  v30 = ExAcquireSpinLockExclusive(v29 + 3);
  v10 = *(_QWORD **)v29;
  v32 = v30;
  while ( v10 )
  {
    v33 = v10[11] & 0xFFFFFFFFFFFFF000uLL;
    v31 = v33 + v10[4];
    if ( BugCheckParameter1 < v31 )
    {
      if ( BugCheckParameter1 >= v33 )
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
    RtlAvlRemoveNode(v29, v10);
    --*((_DWORD *)v29 + 2);
  }
  LOBYTE(v31) = v32;
  MiReleaseSpinLockExclusive(v29 + 3, v31);
  if ( !v10 )
  {
LABEL_2:
    --CurrentThread->SpecialApcDisable;
    v6 = KeAbPreAcquire((__int64)&qword_140E35D00, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E35D00, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&qword_140E35D00, v6, (__int64)&qword_140E35D00);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    v9 = MiLockWorkingSetExclusive((__int64)&unk_140E37C40);
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
    --dword_140E35D10;
    RtlAvlRemoveNode(&P, v10);
    LOBYTE(v13) = v11;
    MiUnlockWorkingSetExclusive(&unk_140E37C40, v13);
    v14 = (char *)(v10 + 9);
    v15 = (void *)v10[8];
    v16 = *(_QWORD *)v10[6];
    v17 = KeGetCurrentThread();
    --v17->SpecialApcDisable;
    v18 = KeAbPreAcquire(v16 + 104, 0LL);
    v19 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 104), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v16 + 104), v18, v16 + 104);
    if ( v19 )
      *((_BYTE *)v19 + 10) = 1;
    if ( (*(_DWORD *)(v16 + 56) & 0x400) == 0 )
    {
      v27 = *(_QWORD *)v14;
      if ( *(char **)(*(_QWORD *)v14 + 8LL) != v14 || (v28 = (char **)v10[10], *v28 != v14) )
        __fastfail(3u);
      *v28 = (char *)v27;
      *(_QWORD *)(v27 + 8) = v28;
    }
    MiUnlockControlAreaFileObjectExclusive(v16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E35D00, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140E35D00);
    KeAbPostRelease((ULONG_PTR)&qword_140E35D00);
    v24 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v24 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v21, v20, v22, v23);
    v2 = a2;
  }
  else
  {
    v15 = (void *)v10[8];
    v16 = *(_QWORD *)v10[6];
  }
  if ( v15 )
    ObfDereferenceObjectWithTag(v15, 0x63536D4Du);
  if ( (v10[7] & 1) != 0 )
    _InterlockedAdd((volatile signed __int32 *)(v16 + 92), 0xFFFFFFFF);
  if ( v2 )
    MiRemoveMappedPtes(v10, &unk_140E37C40);
  v25 = *((unsigned int *)v10 + 24);
  if ( (_DWORD)v25 != 0x7FFFF )
    MiDereferencePerSessionProtos(v16, v25);
  v26 = ((v10[4] >> 12) + 15LL) & 0xFFFFFFF0LL;
  if ( (v10[7] & 0x18) == 0x18 )
    MiReleasePtes(&unk_140E35AE0, v5, (unsigned int)v26);
  else
    MiReturnSystemVa(v10[11] & 0xFFFFFFFFFFFFF000uLL, (v10[11] & 0xFFFFFFFFFFFFF000uLL) + (v26 << 12), 12LL);
  ExFreePoolWithTag(v10, 0);
}
