/*
 * XREFs of KeRegisterBugCheckReasonCallback @ 0x140467D20
 * Callers:
 *     SmPrepareForFatalHeapCorruption @ 0x140380700 (SmPrepareForFatalHeapCorruption.c)
 *     HvlPhase1Initialize @ 0x140582A60 (HvlPhase1Initialize.c)
 *     HvlpInitializeHvCrashdump @ 0x14058AA2C (HvlpInitializeHvCrashdump.c)
 *     CarInit @ 0x1406169EC (CarInit.c)
 *     IopInitializeBugCheckDriverData @ 0x140710F18 (IopInitializeBugCheckDriverData.c)
 *     IopInitializeTriageDumpData @ 0x140711420 (IopInitializeTriageDumpData.c)
 *     KiCompleteKernelInit @ 0x140B55C50 (KiCompleteKernelInit.c)
 *     HalpEfiInitialization @ 0x140C0EF64 (HalpEfiInitialization.c)
 *     HalpMiscInitDiscard @ 0x140C0FA24 (HalpMiscInitDiscard.c)
 *     PopRecorderInit @ 0x140C32368 (PopRecorderInit.c)
 *     PopWatchdogInit @ 0x140C32E78 (PopWatchdogInit.c)
 *     PspIumInitialize @ 0x140C35E54 (PspIumInitialize.c)
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 *     SmInitSystem @ 0x140C6694C (SmInitSystem.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x140467E60 (KiCheckForDuplicateBugCheckCallback.c)
 *     KiRegisterBugcheckRecoveryCallback @ 0x140467E94 (KiRegisterBugcheckRecoveryCallback.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckReasonCallback(
        PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
        KBUGCHECK_CALLBACK_REASON Reason,
        PUCHAR Component)
{
  __int64 v5; // rbp
  PKBUGCHECK_REASON_CALLBACK_RECORD v7; // rbx
  BOOLEAN v8; // si
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rdx
  __int64 *v12; // rdi
  struct _LIST_ENTRY *v13; // rax
  struct _LIST_ENTRY *v14; // rax

  v5 = Reason;
  v7 = CallbackRecord;
  v8 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(CallbackRecord) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(CallbackRecord, 15LL);
  }
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  if ( v7->State )
    goto LABEL_4;
  if ( (_DWORD)v5 == 4 || (v12 = (__int64 *)&KeBugCheckReasonCallbackListHead, (_DWORD)v5 == 6) )
    v12 = &KeBugCheckAddRemovePagesCallbackListHead;
  if ( (unsigned __int8)KiCheckForDuplicateBugCheckCallback(v12, v7) )
  {
LABEL_4:
    v8 = 0;
  }
  else
  {
    v7->CallbackRoutine = CallbackRoutine;
    v7->Reason = v5;
    v7->Checksum = (ULONG_PTR)CallbackRoutine + v5 + (_QWORD)Component;
    v7->Component = Component;
    v7->State = 1;
    KiRegisterBugcheckRecoveryCallback(v7);
    if ( (_DWORD)v5 == 7 )
    {
      v14 = (struct _LIST_ENTRY *)v12[1];
      if ( (__int64 *)v14->Flink != v12 )
LABEL_14:
        __fastfail(3u);
      v7->Entry.Flink = (struct _LIST_ENTRY *)v12;
      v7->Entry.Blink = v14;
      v14->Flink = &v7->Entry;
      v12[1] = (__int64)v7;
    }
    else
    {
      v13 = (struct _LIST_ENTRY *)*v12;
      if ( *(__int64 **)(*v12 + 8) != v12 )
        goto LABEL_14;
      v7->Entry.Flink = v13;
      v7->Entry.Blink = (struct _LIST_ENTRY *)v12;
      v13->Blink = &v7->Entry;
      *v12 = (__int64)v7;
    }
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KeBugCheckCallbackLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  }
  __writecr8(CurrentIrql);
  return v8;
}
