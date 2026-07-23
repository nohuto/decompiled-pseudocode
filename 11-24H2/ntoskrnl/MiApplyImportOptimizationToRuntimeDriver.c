/*
 * XREFs of MiApplyImportOptimizationToRuntimeDriver @ 0x140A83AFC
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     RtlImageDirectoryEntryToData @ 0x1402EEB70 (RtlImageDirectoryEntryToData.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14043A2FC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiIsImportOptimizationEnabled @ 0x14049A000 (MiIsImportOptimizationEnabled.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x1404AE650 (MiDoesControlAreaRequireRetpolineFixups.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404C4FE4 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiCaptureRetpolineImportInfo @ 0x140A83CC0 (MiCaptureRetpolineImportInfo.c)
 *     VslCaptureSecureImageIat @ 0x140A9BDA0 (VslCaptureSecureImageIat.c)
 */

__int64 __fastcall MiApplyImportOptimizationToRuntimeDriver(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // r13
  int v5; // r12d
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rdx
  int v9; // ebx
  __int16 *p_SpecialApcDisable; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  char *v14; // rax
  __int64 v15; // r8
  char *v16; // rbx
  void *v17; // rbx
  PVOID v18; // rax
  bool v19; // zf
  ULONG Size; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0LL;
  if ( !MiIsImportOptimizationEnabled()
    || !MiDoesControlAreaRequireRetpolineFixups(v7)
    || *(_QWORD *)(*(_QWORD *)v8 + 32LL) != *(_QWORD *)(a1 + 48) )
  {
    return 0;
  }
  if ( (MiFlags & 0x8000) != 0 )
  {
    p_SpecialApcDisable = &CurrentThread->SpecialApcDisable;
    --CurrentThread->SpecialApcDisable;
    v5 = 1;
    v14 = (char *)KeAbPreAcquire((__int64)&qword_140E2D9E0, 0LL);
    v16 = v14;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D9E0, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140E2D9E0, v14, (__int64)&qword_140E2D9E0);
    if ( v16 )
      v16[10] = 1;
    MiAdjustSecureDriverStateForIatCapture(a1, 1LL, v15);
    v17 = *(void **)(a1 + 48);
    Size = 0;
    v18 = RtlImageDirectoryEntryToData(v17, 1u, 0xCu, &Size);
    if ( v18 )
    {
      v9 = VslCaptureSecureImageIat(v17, v18, Size);
      if ( v9 < 0 )
        goto LABEL_17;
    }
  }
  else
  {
    v6 = (_QWORD *)MiReservePtes((__int64)&qword_140E376A8, 1u);
    if ( !v6 )
      return (unsigned int)-1073741670;
    v9 = MiCaptureRetpolineImportInfo(a1, a2);
    if ( v9 < 0 )
    {
LABEL_19:
      MiReleasePtes((__int64)&qword_140E376A8, v6, 1u);
      return (unsigned int)v9;
    }
    p_SpecialApcDisable = &CurrentThread->SpecialApcDisable;
  }
  MiWalkEntireImage(a2, (__int64)v6, 8u, 0xFFFFFFFF);
  if ( (MiFlags & 0x8000) == 0 )
    MiUpdateImportRelocationsOnDriverPrivatePages(a1, a2, (__int64)v6, v12);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  v9 = 0;
  if ( v5 )
  {
LABEL_17:
    MiAdjustSecureDriverStateForIatCapture(a1, 0LL, v11);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D9E0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D9E0);
    KeAbPostRelease((ULONG_PTR)&qword_140E2D9E0);
    v19 = (*p_SpecialApcDisable)++ == -1;
    if ( v19 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v6 )
    goto LABEL_19;
  return (unsigned int)v9;
}
