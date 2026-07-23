/*
 * XREFs of MiApplyImportOptimizationToRuntimeDriver @ 0x140A8DB7C
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B0468 (MmLoadSystemImageEx.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403FDF58 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     MiIsImportOptimizationEnabled @ 0x1404A0180 (MiIsImportOptimizationEnabled.c)
 *     MiDoesControlAreaRequireRetpolineFixups @ 0x1404B45A0 (MiDoesControlAreaRequireRetpolineFixups.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404CBC10 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiCaptureRetpolineImportInfo @ 0x140A8DD30 (MiCaptureRetpolineImportInfo.c)
 *     VslCaptureSecureImageIat @ 0x140A9AC50 (VslCaptureSecureImageIat.c)
 */

__int64 __fastcall MiApplyImportOptimizationToRuntimeDriver(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // r13
  int v5; // r12d
  unsigned __int64 *v6; // r14
  int v7; // ebx
  __int64 v9; // rdx
  __int16 *p_SpecialApcDisable; // rdi
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 *v14; // rbx
  void *v15; // rbx
  PVOID v16; // rax
  bool v17; // zf
  ULONG Size; // [rsp+60h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = 0LL;
  if ( !MiIsImportOptimizationEnabled()
    || !MiDoesControlAreaRequireRetpolineFixups(a2)
    || *(_QWORD *)(*(_QWORD *)v9 + 32LL) != *(_QWORD *)(a1 + 48) )
  {
    return 0;
  }
  if ( (MiFlags & 0x8000) != 0 )
  {
    p_SpecialApcDisable = &CurrentThread->SpecialApcDisable;
    --CurrentThread->SpecialApcDisable;
    v5 = 1;
    v12 = KeAbPreAcquire((__int64)&qword_140E2D660, 0LL);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D660, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140E2D660, v12, (__int64)&qword_140E2D660);
    if ( v14 )
      *((_BYTE *)v14 + 10) = 1;
    MiAdjustSecureDriverStateForIatCapture(a1, 1, v13);
    v15 = *(void **)(a1 + 48);
    Size = 0;
    v16 = RtlImageDirectoryEntryToData(v15, 1u, 0xCu, &Size);
    if ( v16 )
    {
      v7 = VslCaptureSecureImageIat(v15, v16, Size);
      if ( v7 < 0 )
        goto LABEL_18;
    }
  }
  else
  {
    v6 = (unsigned __int64 *)MiReservePtes((__int64)&qword_140E37328, 1u);
    if ( !v6 )
      return (unsigned int)-1073741670;
    v7 = MiCaptureRetpolineImportInfo(a1, a2);
    if ( v7 < 0 )
      goto LABEL_14;
    p_SpecialApcDisable = &CurrentThread->SpecialApcDisable;
  }
  MiWalkEntireImage(a2, (__int64)v6, 8u, 0xFFFFFFFF);
  if ( (MiFlags & 0x8000) == 0 )
    MiUpdateImportRelocationsOnDriverPrivatePages(a1, a2, (__int64)v6);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  v7 = 0;
  if ( v5 )
  {
LABEL_18:
    MiAdjustSecureDriverStateForIatCapture(a1, 0, v11);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E2D660, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E2D660);
    KeAbPostRelease((ULONG_PTR)&qword_140E2D660);
    v17 = (*p_SpecialApcDisable)++ == -1;
    if ( v17 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v6 )
LABEL_14:
    MiReleasePtes((__int64)&qword_140E37328, v6, 1u);
  return (unsigned int)v7;
}
