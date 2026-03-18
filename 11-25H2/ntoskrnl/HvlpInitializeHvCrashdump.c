/*
 * XREFs of HvlpInitializeHvCrashdump @ 0x1405873BC
 * Callers:
 *     HvlPhase1Initialize @ 0x14057F2B0 (HvlPhase1Initialize.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x140227210 (MmFreeIndependentPages.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     MmMapIoSpaceEx @ 0x140413F40 (MmMapIoSpaceEx.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140469560 (KeRegisterBugCheckReasonCallback.c)
 *     Feature_OfflineDumpRedaction__private_IsEnabledDeviceUsageNoInline @ 0x1405865E8 (Feature_OfflineDumpRedaction__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     MmAllocateMappingAddress @ 0x140A58930 (MmAllocateMappingAddress.c)
 *     MmAllocateIndependentPages @ 0x140A85070 (MmAllocateIndependentPages.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall HvlpInitializeHvCrashdump(__int64 a1)
{
  int v1; // edx
  unsigned int v2; // edi
  __int64 v3; // r9
  void *IndependentPages; // rax
  _DWORD *v5; // rax
  void *Pool2; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  KIRQL v9; // al
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  KIRQL v12; // al

  v1 = *(_DWORD *)(a1 + 4);
  v2 = -1073741823;
  v3 = *(_QWORD *)(a1 + 16);
  dword_140F8D830 = *(_DWORD *)a1;
  qword_140F8D828 = *(_QWORD *)(a1 + 8);
  dword_140F8D818 = v1;
  qword_140F8D810 = v3;
  if ( !v1 || (Address = (PVOID)MmMapIoSpaceEx(v3, (unsigned int)(v1 << 12), 2u)) != 0LL )
  {
    IndependentPages = (void *)MmAllocateIndependentPages(4096LL, 0xFFFFFFFFLL);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset_0(IndependentPages, 0, 0x1000uLL);
    if ( (unsigned int)Feature_OfflineDumpRedaction__private_IsEnabledDeviceUsageNoInline() )
    {
      HvlpOfflineDumpFeatureEnabled = 1;
      if ( dword_140F8D830 )
      {
        v5 = (_DWORD *)MmMapIoSpaceEx(qword_140F8D828, (unsigned int)(dword_140F8D830 << 12), 2u);
        qword_140F8D820 = v5;
        if ( !v5 )
          goto LABEL_26;
        LODWORD(HvlpCrashDumpAreaSize) = v5[203];
        Pool2 = (void *)ExAllocatePool2(0x40uLL);
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
      stru_140F8D778.State = 0;
      if ( !KeRegisterBugCheckReasonCallback(
              &stru_140F8D778,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2") )
        goto LABEL_26;
      v7 = (_QWORD *)ExAllocatePool2(0x40uLL);
      v8 = v7;
      if ( v7 )
      {
        v7[2] = 0LL;
        v7[1] = HvlCrashdumpCallbackRoutine;
        v7[3] = v7;
        v9 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
        *v8 = KiNmiCallbackListHead;
        KiNmiCallbackListHead = v8;
        KeReleaseSpinLock(&KiNmiCallbackListLock, v9);
        v7 = (_QWORD *)v8[3];
      }
      *(_QWORD *)&HvlpCrashdumpData = v7;
      qword_140F8D838 = MmAllocateMappingAddress(0x1000uLL, 0x204C5648u);
      if ( !qword_140F8D838 )
        goto LABEL_26;
      if ( !VslVsmEnabled )
        return 0;
    }
    stru_140F8D7A8.State = 0;
    if ( KeRegisterBugCheckReasonCallback(
           &stru_140F8D7A8,
           (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlSkBugCheckCallbackRoutine,
           KbCallbackSecondaryDumpData,
           (PUCHAR)"SecureKernelCrashdumpArea") )
    {
      if ( (HvlpFlags & 2) == 0
        || (stru_140F8D778.State = 0,
            KeRegisterBugCheckReasonCallback(
              &stru_140F8D778,
              (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureHvPagesCallbackRoutine,
              KbCallbackAddPages,
              (PUCHAR)"HypervisorCrashdumpArea2")) )
      {
        stru_140F8D7D8.State = 0;
        if ( KeRegisterBugCheckReasonCallback(
               &stru_140F8D7D8,
               (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HvlAddSecureSkPagesCallbackRoutine,
               KbCallbackAddPages,
               (PUCHAR)"SecureKernelCrashdumpArea2") )
        {
          v10 = (_QWORD *)ExAllocatePool2(0x40uLL);
          v11 = v10;
          if ( v10 )
          {
            v10[2] = 0LL;
            v10[1] = HvlSkCrashdumpCallbackRoutine;
            v10[3] = v10;
            v12 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
            *v11 = KiNmiCallbackListHead;
            KiNmiCallbackListHead = v11;
            KeReleaseSpinLock(&KiNmiCallbackListLock, v12);
            v10 = (_QWORD *)v11[3];
          }
          *(_QWORD *)&HvlpCrashdumpData = v10;
          return 0;
        }
      }
    }
  }
LABEL_26:
  if ( HvlpFallbackScratchPage )
  {
    MmFreeIndependentPages((unsigned __int64)HvlpFallbackScratchPage, 0x1000uLL);
    HvlpFallbackScratchPage = 0LL;
  }
  return v2;
}
