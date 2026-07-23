/*
 * XREFs of ExNotifyWithProcessing @ 0x140442804
 * Callers:
 *     PoNotifySystemTimeSet @ 0x1404C3C60 (PoNotifySystemTimeSet.c)
 *     HvlPhase2Initialize @ 0x14057FF00 (HvlPhase2Initialize.c)
 *     KiDynamicProcessorAddNotification @ 0x1405B9BA8 (KiDynamicProcessorAddNotification.c)
 *     ExRebootSystemForRecovery @ 0x1406520CC (ExRebootSystemForRecovery.c)
 *     SepImageVerificationCallbackWorker @ 0x14078E370 (SepImageVerificationCallbackWorker.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140BE0B00 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140C24C04 (PnpNotifyEarlyLaunchImageLoad.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUmpoMessageCallback @ 0x140442A10 (PopUmpoMessageCallback.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
