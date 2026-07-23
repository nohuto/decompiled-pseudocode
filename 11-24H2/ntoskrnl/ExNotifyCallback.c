/*
 * XREFs of ExNotifyCallback @ 0x14027DB30
 * Callers:
 *     PnprLockPagesForReplace @ 0x14072DE30 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x14072E73C (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x140752370 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopDispatchAcDcCallback @ 0x1407589E0 (PopDispatchAcDcCallback.c)
 *     PopDispatchCallback @ 0x140758A30 (PopDispatchCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x1407BA62C (SLSendPolicyChangeNotifications.c)
 *     AlpcpCompleteDispatchMessage @ 0x14089A890 (AlpcpCompleteDispatchMessage.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 *     NtNotifyChangeSession @ 0x140A5FDF0 (NtNotifyChangeSession.c)
 *     PopNotifyCallbacksPreSleep @ 0x140AB5630 (PopNotifyCallbacksPreSleep.c)
 *     PopUnlockAfterSleepWorker @ 0x140B69CD0 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140BE1530 (KiFilterFiberContext.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUmpoMessageCallback @ 0x140442A10 (PopUmpoMessageCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  _QWORD *v3; // rdi
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // al
  __int64 v8; // r9
  _QWORD *v9; // rbx
  KIRQL v10; // si
  __int64 v11; // r9
  void *v12; // rcx
  int v13; // eax
  bool v14; // zf

  if ( CallbackObject )
  {
    v3 = (char *)CallbackObject + 16;
    if ( (_QWORD *)*v3 != v3 )
    {
      v6 = (KSPIN_LOCK *)((char *)CallbackObject + 8);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)CallbackObject + 1);
      v9 = (_QWORD *)*v3;
      v10 = v7;
      if ( v7 == 2 )
      {
        while ( v9 != v3 )
        {
          guard_dispatch_icall_no_overrides(v9[4], Argument1, Argument2, v8);
          v9 = (_QWORD *)*v9;
        }
      }
      else
      {
        while ( v9 != v3 )
        {
          if ( !*((_BYTE *)v9 + 44) )
          {
            ++*((_DWORD *)v9 + 10);
            KeReleaseSpinLock(v6, v10);
            v12 = (void *)v9[4];
            if ( (CALLBACK_FUNCTION *)v9[3] == PopUmpoMessageCallback )
              PopUmpoMessageCallback(v12, Argument1, Argument2);
            else
              guard_dispatch_icall_no_overrides(v12, Argument1, Argument2, v11);
            v10 = KeAcquireSpinLockRaiseToDpc(v6);
            v13 = *((_DWORD *)v9 + 10) - 1;
            v14 = *((_BYTE *)v9 + 44) == 0;
            *((_DWORD *)v9 + 10) = v13;
            if ( !v14 && !v13 )
              KeSetEvent(&ExpCallbackEvent, 0, 0);
          }
          v9 = (_QWORD *)*v9;
        }
      }
      KeReleaseSpinLock(v6, v10);
    }
  }
}
