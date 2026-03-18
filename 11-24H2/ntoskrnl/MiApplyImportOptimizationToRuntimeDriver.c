/*
 * XREFs of MiApplyImportOptimizationToRuntimeDriver @ 0x140A8760C
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409C87D8 (MmLoadSystemImageEx.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402C86D0 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlImageDirectoryEntryToData @ 0x14042CAF0 (RtlImageDirectoryEntryToData.c)
 *     MiIsImportOptimizationEnabled @ 0x14049F1D0 (MiIsImportOptimizationEnabled.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x1404B3E40 (MiDoesControlAreaRequireRetpolineFixups.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBB68 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiCaptureRetpolineImportInfo @ 0x140A877D0 (MiCaptureRetpolineImportInfo.c)
 *     VslCaptureSecureImageIat @ 0x140AA0A10 (VslCaptureSecureImageIat.c)
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
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rbx
  unsigned __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  unsigned int v21; // [rsp+60h] [rbp+18h] BYREF

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
    v13 = KeAbPreAcquire((__int64)&qword_140E2D8A0, 0LL);
    v15 = v13;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D8A0, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140E2D8A0, (__int64)v13, (__int64)&qword_140E2D8A0);
    if ( v15 )
      *((_BYTE *)v15 + 10) = 1;
    MiAdjustSecureDriverStateForIatCapture(a1, 1LL, v14);
    v16 = *(_QWORD *)(a1 + 48);
    v21 = 0;
    v17 = RtlImageDirectoryEntryToData(v16, 1, 0xCu, &v21);
    if ( v17 )
    {
      v9 = VslCaptureSecureImageIat(v16, v17, v21);
      if ( v9 < 0 )
        goto LABEL_17;
    }
  }
  else
  {
    v6 = (_QWORD *)MiReservePtes((__int64)&qword_140E37568, 1u);
    if ( !v6 )
      return (unsigned int)-1073741670;
    v9 = MiCaptureRetpolineImportInfo(a1, a2);
    if ( v9 < 0 )
    {
LABEL_19:
      MiReleasePtes((__int64)&qword_140E37568, v6, 1u);
      return (unsigned int)v9;
    }
    p_SpecialApcDisable = &CurrentThread->SpecialApcDisable;
  }
  MiWalkEntireImage(a2, (unsigned __int64)v6, 8u, 0xFFFFFFFF);
  if ( (MiFlags & 0x8000) == 0 )
    MiUpdateImportRelocationsOnDriverPrivatePages(a1, a2, (__int64)v6);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  v9 = 0;
  if ( v5 )
  {
LABEL_17:
    MiAdjustSecureDriverStateForIatCapture(a1, 0LL, v11);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D8A0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D8A0);
    KeAbPostRelease((ULONG_PTR)&qword_140E2D8A0);
    v20 = (*p_SpecialApcDisable)++ == -1;
    if ( v20 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v19, v18);
  }
  if ( v6 )
    goto LABEL_19;
  return (unsigned int)v9;
}
