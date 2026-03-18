/*
 * XREFs of PopFxActivateComponent @ 0x140203D5C
 * Callers:
 *     PoFxActivateComponent @ 0x140203CD0 (PoFxActivateComponent.c)
 *     PopFxActivateComponentWorker @ 0x140349BD0 (PopFxActivateComponentWorker.c)
 *     PopFxNotifyPreDIrpIssue @ 0x140443630 (PopFxNotifyPreDIrpIssue.c)
 *     PoFxAddComponentRelation @ 0x1405CB690 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x1405CB900 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CBD40 (PoFxRemoveComponentRelation.c)
 *     PopFxRegisterDevice @ 0x140742880 (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140742B20 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140204644 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x140204704 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KeLeaveGuardedRegion @ 0x140320910 (KeLeaveGuardedRegion.c)
 *     PopFxActivateComponentWorker @ 0x140349BD0 (PopFxActivateComponentWorker.c)
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
