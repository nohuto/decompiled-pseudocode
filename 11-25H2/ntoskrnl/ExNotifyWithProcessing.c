/*
 * XREFs of ExNotifyWithProcessing @ 0x14044C104
 * Callers:
 *     PoNotifySystemTimeSet @ 0x1404CA36C (PoNotifySystemTimeSet.c)
 *     HvlPhase2Initialize @ 0x14057F3D0 (HvlPhase2Initialize.c)
 *     KiDynamicProcessorAddNotification @ 0x1405B86D8 (KiDynamicProcessorAddNotification.c)
 *     ExRebootSystemForRecovery @ 0x140647A6C (ExRebootSystemForRecovery.c)
 *     SepImageVerificationCallbackWorker @ 0x14077F180 (SepImageVerificationCallbackWorker.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140BCDB00 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140C11AF4 (PnpNotifyEarlyLaunchImageLoad.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     PopUmpoMessageCallback @ 0x14044C310 (PopUmpoMessageCallback.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall ExNotifyWithProcessing(__int64 a1, void *a2, void *a3, _QWORD *a4)
{
  _QWORD *v4; // rsi
  KSPIN_LOCK *v8; // r12
  KIRQL v9; // al
  _QWORD *v10; // rbx
  KIRQL v11; // bp
  __int64 v12; // rdx
  void *v13; // rcx
  int v14; // eax
  bool v15; // zf

  if ( a1 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (_QWORD *)*v4 != v4 )
    {
      v8 = (KSPIN_LOCK *)(a1 + 8);
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
      v10 = (_QWORD *)*v4;
      v11 = v9;
      if ( v9 == 2 )
      {
        while ( v10 != v4 )
        {
          if ( a4 && *a4 )
            guard_dispatch_icall_no_overrides(v10[4], a2);
          guard_dispatch_icall_no_overrides(v10[4], a2);
          if ( a4 && a4[1] )
            guard_dispatch_icall_no_overrides(v10[4], a2);
          v10 = (_QWORD *)*v10;
        }
      }
      else
      {
        while ( v10 != v4 )
        {
          if ( !*((_BYTE *)v10 + 44) )
          {
            ++*((_DWORD *)v10 + 10);
            KeReleaseSpinLock(v8, v11);
            if ( a4 && *a4 )
              guard_dispatch_icall_no_overrides(v10[4], a2);
            v13 = (void *)v10[4];
            if ( (CALLBACK_FUNCTION *)v10[3] == PopUmpoMessageCallback )
              PopUmpoMessageCallback(v13, a2, a3);
            else
              guard_dispatch_icall_no_overrides(v13, a2);
            if ( a4 && a4[1] )
              guard_dispatch_icall_no_overrides(v10[4], a2);
            v11 = KeAcquireSpinLockRaiseToDpc(v8);
            v14 = *((_DWORD *)v10 + 10) - 1;
            v15 = *((_BYTE *)v10 + 44) == 0;
            *((_DWORD *)v10 + 10) = v14;
            if ( !v15 && !v14 )
              KeSetEvent(&ExpCallbackEvent, 0, 0);
          }
          v10 = (_QWORD *)*v10;
        }
      }
      KxReleaseSpinLock((volatile signed __int64 *)v8);
      if ( KiIrqlFlags )
      {
        LOBYTE(v12) = v11;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
      }
      __writecr8(v11);
    }
  }
}
