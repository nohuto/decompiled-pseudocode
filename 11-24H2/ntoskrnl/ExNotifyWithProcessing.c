/*
 * XREFs of ExNotifyWithProcessing @ 0x14044B6C4
 * Callers:
 *     PoNotifySystemTimeSet @ 0x1404CA740 (PoNotifySystemTimeSet.c)
 *     HvlPhase2Initialize @ 0x140582B80 (HvlPhase2Initialize.c)
 *     KiDynamicProcessorAddNotification @ 0x1405BC578 (KiDynamicProcessorAddNotification.c)
 *     ExRebootSystemForRecovery @ 0x14065396C (ExRebootSystemForRecovery.c)
 *     SepImageVerificationCallbackWorker @ 0x14078E440 (SepImageVerificationCallbackWorker.c)
 *     PnpNotifyEarlyLaunchStatusUpdate @ 0x140BDEB00 (PnpNotifyEarlyLaunchStatusUpdate.c)
 *     PnpNotifyEarlyLaunchImageLoad @ 0x140C22BD4 (PnpNotifyEarlyLaunchImageLoad.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     PopUmpoMessageCallback @ 0x14044B8D0 (PopUmpoMessageCallback.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall ExNotifyWithProcessing(__int64 a1, void *a2, void *a3, _QWORD *a4)
{
  _QWORD *v4; // rsi
  KSPIN_LOCK *v8; // r12
  KIRQL v9; // al
  __int64 v10; // r9
  _QWORD *v11; // rbx
  KIRQL v12; // bp
  __int64 v13; // rdx
  __int64 v14; // r9
  void *v15; // rcx
  int v16; // eax
  bool v17; // zf

  if ( a1 )
  {
    v4 = (_QWORD *)(a1 + 16);
    if ( (_QWORD *)*v4 != v4 )
    {
      v8 = (KSPIN_LOCK *)(a1 + 8);
      v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 8));
      v11 = (_QWORD *)*v4;
      v12 = v9;
      if ( v9 == 2 )
      {
        while ( v11 != v4 )
        {
          if ( a4 && *a4 )
            guard_dispatch_icall_no_overrides(v11[4], a2, a3, a4[2]);
          guard_dispatch_icall_no_overrides(v11[4], a2, a3, v10);
          if ( a4 && a4[1] )
            guard_dispatch_icall_no_overrides(v11[4], a2, a3, a4[2]);
          v11 = (_QWORD *)*v11;
        }
      }
      else
      {
        while ( v11 != v4 )
        {
          if ( !*((_BYTE *)v11 + 44) )
          {
            ++*((_DWORD *)v11 + 10);
            KeReleaseSpinLock(v8, v12);
            if ( a4 && *a4 )
              guard_dispatch_icall_no_overrides(v11[4], a2, a3, a4[2]);
            v15 = (void *)v11[4];
            if ( (CALLBACK_FUNCTION *)v11[3] == PopUmpoMessageCallback )
              PopUmpoMessageCallback(v15, a2, a3);
            else
              guard_dispatch_icall_no_overrides(v15, a2, a3, v14);
            if ( a4 && a4[1] )
              guard_dispatch_icall_no_overrides(v11[4], a2, a3, a4[2]);
            v12 = KeAcquireSpinLockRaiseToDpc(v8);
            v16 = *((_DWORD *)v11 + 10) - 1;
            v17 = *((_BYTE *)v11 + 44) == 0;
            *((_DWORD *)v11 + 10) = v16;
            if ( !v17 && !v16 )
              KeSetEvent(&ExpCallbackEvent, 0, 0);
          }
          v11 = (_QWORD *)*v11;
        }
      }
      KxReleaseSpinLock((volatile signed __int64 *)v8);
      if ( KiIrqlFlags )
      {
        LOBYTE(v13) = v12;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v13);
      }
      __writecr8(v12);
    }
  }
}
