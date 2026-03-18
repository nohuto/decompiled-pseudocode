/*
 * XREFs of PopFxActivateComponent @ 0x1403B61EC
 * Callers:
 *     PopFxNotifyPreDIrpIssue @ 0x1403765BC (PopFxNotifyPreDIrpIssue.c)
 *     PopFxActivateComponentDependencies @ 0x1403B5F40 (PopFxActivateComponentDependencies.c)
 *     PoFxActivateComponent @ 0x1403B6160 (PoFxActivateComponent.c)
 *     PoFxAddComponentRelation @ 0x1405CFDE0 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x1405D0050 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405D0490 (PoFxRemoveComponentRelation.c)
 *     PopFxRegisterDevice @ 0x14074E950 (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14074EBF0 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopFxActivateComponentWorker @ 0x1403B6358 (PopFxActivateComponentWorker.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1403B6408 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403B6558 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 */

void __fastcall PopFxActivateComponent(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  char v7; // bp
  int v8; // eax
  KSPIN_LOCK *v9; // rbx
  KIRQL v10; // al
  int v11; // [rsp+A0h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(BugCheckParameter2 + 864) & 1) == 0 )
  {
    if ( (a3 & 6) == 4 )
    {
      CurrentThread = KeGetCurrentThread();
      v7 = 1;
      --CurrentThread->SpecialApcDisable;
    }
    else
    {
      v7 = 0;
    }
    v8 = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    if ( v8 == 1 )
    {
      if ( KeGetCurrentIrql() < 2u )
        KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 16, a3);
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      PopFxActivateComponentWorker(BugCheckParameter2);
      if ( KeGetCurrentIrql() < 2u )
      {
        v11 = 16;
        KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v11);
      }
    }
    else
    {
      if ( v8 < 0 )
      {
LABEL_6:
        if ( v7 )
          KeLeaveGuardedRegion();
        return;
      }
      if ( (v8 & 0x40000000) != 0 && (a3 & 8) == 0 )
      {
        v9 = (KSPIN_LOCK *)(a2 + 128);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
        KeReleaseSpinLock(v9, v10);
      }
    }
    if ( (a3 & 1) != 0 )
      KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
    goto LABEL_6;
  }
}
