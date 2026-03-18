/*
 * XREFs of MiRemoveFromSystemSpace @ 0x14026086C
 * Callers:
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     IopDeleteIoRing @ 0x1407164D0 (IopDeleteIoRing.c)
 *     PspDeleteServerSiloGlobals @ 0x1407729F4 (PspDeleteServerSiloGlobals.c)
 *     RtlNlsDeleteState @ 0x14077E7A0 (RtlNlsDeleteState.c)
 *     EtwpCoverageSamplerCleanup @ 0x1407B2980 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1407B2B70 (EtwpCoverageSamplerSetBloomFilter.c)
 *     ExInitializeLeapSecondData @ 0x1407B5C30 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1407C3080 (NtMapCMFModule.c)
 *     AlpcViewDestroyProcedure @ 0x1408E49A0 (AlpcViewDestroyProcedure.c)
 *     MiUnmapImageInSystemSpace @ 0x1408F560C (MiUnmapImageInSystemSpace.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1408F6F24 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     EtwpCoverageEnsureContext @ 0x140903F90 (EtwpCoverageEnsureContext.c)
 *     KsepSdbUnmapFromMemory @ 0x14095CBB4 (KsepSdbUnmapFromMemory.c)
 *     KsepSdbMapToMemory @ 0x14095CECC (KsepSdbMapToMemory.c)
 *     CmFcpUnmapSection @ 0x140A35AC8 (CmFcpUnmapSection.c)
 *     MmUnmapViewInSystemSpace @ 0x140A4AE00 (MmUnmapViewInSystemSpace.c)
 *     PspSchedulerSharedDataRegionDelete @ 0x140A605A0 (PspSchedulerSharedDataRegionDelete.c)
 * Callees:
 *     MiLockWorkingSetExclusive @ 0x14020D480 (MiLockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x140218550 (MiUnlockWorkingSetExclusive.c)
 *     MiReturnSystemVa @ 0x1402429F4 (MiReturnSystemVa.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     MiRemoveMappedPtes @ 0x140260FC0 (MiRemoveMappedPtes.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockControlAreaFileObjectExclusive @ 0x1402B9A20 (MiUnlockControlAreaFileObjectExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiDereferencePerSessionProtos @ 0x140A24458 (MiDereferencePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rcx
  char **v26; // rax
  volatile LONG *v27; // rdi
  KIRQL v28; // al
  ULONG_PTR v29; // rdx
  KIRQL v30; // r14
  unsigned __int64 v31; // r8
  char v32[152]; // [rsp+38h] [rbp-C0h] BYREF

  v2 = a2;
  memset_0(v32, 0, 0x90uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (BugCheckParameter1 & 0x3FFFFFFF) != 0 )
    goto LABEL_2;
  v27 = (volatile LONG *)((char *)&unk_140E36180 + 16 * (unsigned __int8)(BugCheckParameter1 >> 30));
  v28 = ExAcquireSpinLockExclusive(v27 + 3);
  v10 = *(_QWORD **)v27;
  v30 = v28;
  while ( v10 )
  {
    v31 = v10[11] & 0xFFFFFFFFFFFFF000uLL;
    v29 = v31 + v10[4];
    if ( BugCheckParameter1 < v29 )
    {
      if ( BugCheckParameter1 >= v31 )
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
    RtlAvlRemoveNode(v27, v10);
    --*((_DWORD *)v27 + 2);
  }
  LOBYTE(v29) = v30;
  MiReleaseSpinLockExclusive(v27 + 3, v29);
  if ( !v10 )
  {
LABEL_2:
    --CurrentThread->SpecialApcDisable;
    v6 = KeAbPreAcquire(&qword_140E35F40, 0LL, 0LL);
    v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E35F40, 0LL);
    v8 = v6;
    if ( v7 )
      ExfAcquirePushLockExclusiveEx(&qword_140E35F40, v6, &qword_140E35F40);
    if ( v8 )
      *(_BYTE *)(v8 + 10) = 1;
    v9 = MiLockWorkingSetExclusive((__int64)&unk_140E37E80);
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
    --dword_140E35F50;
    RtlAvlRemoveNode(&P, v10);
    MiUnlockWorkingSetExclusive((__int64)&unk_140E37E80, v11);
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
      v25 = *(_QWORD *)v13;
      if ( *(char **)(*(_QWORD *)v13 + 8LL) != v13 || (v26 = (char **)v10[10], *v26 != v13) )
        __fastfail(3u);
      *v26 = (char *)v25;
      *(_QWORD *)(v25 + 8) = v26;
    }
    MiUnlockControlAreaFileObjectExclusive(v15);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E35F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E35F40);
    KeAbPostRelease((ULONG_PTR)&qword_140E35F40);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v20, v19, v21, v22);
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
    MiRemoveMappedPtes(v10, &unk_140E37E80);
  if ( *((_DWORD *)v10 + 24) != 0x7FFFF )
    MiDereferencePerSessionProtos(v15);
  v24 = ((v10[4] >> 12) + 15LL) & 0xFFFFFFF0LL;
  if ( (v10[7] & 0x18) == 0x18 )
    MiReleasePtes(&unk_140E35D20, v5, (unsigned int)v24);
  else
    MiReturnSystemVa(v10[11] & 0xFFFFFFFFFFFFF000uLL, (v10[11] & 0xFFFFFFFFFFFFF000uLL) + (v24 << 12), 12);
  ExFreePoolWithTag(v10, 0);
}
