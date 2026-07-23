/*
 * XREFs of PopFxActivateComponent @ 0x1402AE4EC
 * Callers:
 *     PopFxActivateComponentDependencies @ 0x1402AE240 (PopFxActivateComponentDependencies.c)
 *     PoFxActivateComponent @ 0x1402AE460 (PoFxActivateComponent.c)
 *     PopFxNotifyPreDIrpIssue @ 0x1403A7CC8 (PopFxNotifyPreDIrpIssue.c)
 *     PoFxAddComponentRelation @ 0x1405CD500 (PoFxAddComponentRelation.c)
 *     PoFxAddDeviceRelation @ 0x1405CD770 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CDBB0 (PoFxRemoveComponentRelation.c)
 *     PopFxRegisterDevice @ 0x14074CC80 (PopFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x14074CF20 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponentWorker @ 0x1402AE658 (PopFxActivateComponentWorker.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x1402AE6EC (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1402AE83C (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 */

void __fastcall PopFxActivateComponent(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v5; // di
  int v6; // eax
  struct _KTHREAD *CurrentThread; // rax
  char v10; // bp
  _OWORD *v11; // rbx
  int v12; // eax
  KSPIN_LOCK *v13; // rbx
  KIRQL v14; // al
  _OWORD v15[3]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+60h] [rbp-38h]
  int v17; // [rsp+68h] [rbp-30h]
  int v18; // [rsp+A0h] [rbp+8h] BYREF

  v16 = 0LL;
  v17 = 0;
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 864);
  memset(v15, 0, sizeof(v15));
  if ( (v6 & 1) == 0 )
  {
    if ( (a3 & 6) == 4 )
    {
      CurrentThread = KeGetCurrentThread();
      v10 = 1;
      --CurrentThread->SpecialApcDisable;
    }
    else
    {
      v10 = 0;
    }
    v11 = v15;
    if ( (a3 & 2) != 0 )
      v11 = 0LL;
    v12 = _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
    if ( v12 == 1 )
    {
      if ( KeGetCurrentIrql() < 2u )
        KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 16, a3);
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 88));
      LOBYTE(a3) = a4;
      PopFxActivateComponentWorker(a1, a2, a3, v11);
      if ( KeGetCurrentIrql() < 2u )
      {
        v18 = 16;
        KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread(), &v18);
      }
    }
    else
    {
      if ( v12 < 0 )
      {
LABEL_8:
        if ( v10 )
          KeLeaveGuardedRegion();
        return;
      }
      if ( (v12 & 0x40000000) != 0 && (a3 & 8) == 0 )
      {
        v13 = (KSPIN_LOCK *)(a2 + 128);
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
        KeReleaseSpinLock(v13, v14);
      }
    }
    if ( (v5 & 1) != 0 )
      KeWaitForSingleObject((PVOID)(a2 + 104), Executive, 0, 0, 0LL);
    goto LABEL_8;
  }
}
