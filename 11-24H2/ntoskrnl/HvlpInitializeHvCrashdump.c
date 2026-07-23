/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x140587D1C
 * Callers:
 *     HvlPhase1Initialize @ 0x14057FDE0 (HvlPhase1Initialize.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x1404606D0 (KeRegisterBugCheckReasonCallback.c)
 *     Feature_OfflineDumpRedaction__private_IsEnabledDeviceUsageNoInline @ 0x140586F48 (Feature_OfflineDumpRedaction__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmAllocateMappingAddress @ 0x140A531D0 (MmAllocateMappingAddress.c)
 *     MmAllocateIndependentPages @ 0x140A85350 (MmAllocateIndependentPages.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall HvlpInitializeHvCrashdump(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // edi
  __int64 v3; // r9
  __int64 v4; // r8
  void *IndependentPages; // rax
  _DWORD *v6; // rax
  void *Pool2; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  KIRQL v10; // al
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  KIRQL v13; // al

  v1 = *(_DWORD *)(a1 + 4);
  v2 = -1073741823;
  v3 = *(_QWORD *)(a1 + 16);
  dword_140F8E1D0 = *(_DWORD *)a1;
  qword_140F8E1C8 = *(_QWORD *)(a1 + 8);
  dword_140F8E1B8 = v1;
  qword_140F8E1B0 = v3;
  if ( !v1 || (Address = (PVOID)MmMapIoSpaceEx(v3, (unsigned int)(v1 << 12), 2LL)) != 0LL )
  {
    IndependentPages = (void *)MmAllocateIndependentPages(4096LL, 0xFFFFFFFFLL);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset_0(IndependentPages, 0, 0x1000uLL);
    if ( (unsigned int)Feature_OfflineDumpRedaction__private_IsEnabledDeviceUsageNoInline() )
    {
      HvlpOfflineDumpFeatureEnabled = 1;
      if ( dword_140F8E1D0 )
      {
        v6 = (_DWORD *)MmMapIoSpaceEx(qword_140F8E1C8, (unsigned int)(dword_140F8E1D0 << 12), 2LL);
        qword_140F8E1C0 = v6;
        if ( !v6 )
          goto LABEL_26;
        LODWORD(HvlpCrashDumpAreaSize) = v6[203];
        Pool2 = (void *)ExAllocatePool2(0x40uLL, (unsigned int)HvlpCrashDumpAreaSize, 0x204C5648u);
        *(_QWORD *)&HvlpLocalCrashdumpArea = Pool2;
        if ( !Pool2 )
          goto LABEL_26;
        memset_0(Pool2, 0, (unsigned int)HvlpCrashDumpAreaSize);
      }
    }
    else
    {
      HvlpOfflineDumpFeatureEnabled = 0;
    }
    if ( !VslVsmEnabled )
    {
      CallbackRecord.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &CallbackRecord,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlBugCheckCallbackRoutine,
              KbCallbackSecondaryDumpData,
              (PUCHAR)"HypervisorCrashdumpArea") )
        goto LABEL_26;
      stru_140F8E118.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140F8E118,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_26;
      v8 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x494D4E4Bu);
      v9 = v8;
      if ( v8 )
      {
        v8[2] = 0LL;
        v8[1] = HvlCrashdumpCallbackRoutine;
        v8[3] = v8;
        v10 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
        *v9 = KiNmiCallbackListHead;
        KiNmiCallbackListHead = v9;
        KeReleaseSpinLock(&KiNmiCallbackListLock, v10);
        v8 = (_QWORD *)v9[3];
      }
      *(_QWORD *)&HvlpCrashdumpData = v8;
      qword_140F8E1D8 = MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_140F8E1D8 )
        goto LABEL_26;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_140F8E148.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_140F8E148,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_140F8E118.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_140F8E118,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_140F8E178.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_140F8E178,
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureSkPagesCallbackRoutine,
               KbCallbackAddPages,
               (PUCHAR)"SecureKernelCrashdumpArea2") )
        {
          v11 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x494D4E4Bu);
          v12 = v11;
          if ( v11 )
          {
            v11[2] = 0LL;
            v11[1] = HvlSkCrashdumpCallbackRoutine;
            v11[3] = v11;
            v13 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
            *v12 = KiNmiCallbackListHead;
            KiNmiCallbackListHead = v12;
            KeReleaseSpinLock(&KiNmiCallbackListLock, v13);
            v11 = (_QWORD *)v12[3];
          }
          *(_QWORD *)&HvlpCrashdumpData = v11;
          return 0;
        }
      }
    }
  }
LABEL_26:
  if ( HvlpFallbackScratchPage )
  {
    MmFreeIndependentPages((unsigned __int64)HvlpFallbackScratchPage, 0x1000uLL, v4);
    HvlpFallbackScratchPage = 0LL;
  }
  return v2;
}
