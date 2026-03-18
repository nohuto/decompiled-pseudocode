/*
 * XREFs of ExNotifyCallback @ 0x1402EACD0
 * Callers:
 *     PnprLockPagesForReplace @ 0x140723EA0 (PnprLockPagesForReplace.c)
 *     PnprUnlockPagesForReplace @ 0x1407247AC (PnprUnlockPagesForReplace.c)
 *     PopBroadcastLegacyLidSwitchChangeCallback @ 0x140747F60 (PopBroadcastLegacyLidSwitchChangeCallback.c)
 *     PopDispatchAcDcCallback @ 0x14074DD10 (PopDispatchAcDcCallback.c)
 *     PopDispatchCallback @ 0x14074DD60 (PopDispatchCallback.c)
 *     SLSendPolicyChangeNotifications @ 0x1407AAD2C (SLSendPolicyChangeNotifications.c)
 *     AlpcpCompleteDispatchMessage @ 0x1408A9370 (AlpcpCompleteDispatchMessage.c)
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 *     NtNotifyChangeSession @ 0x140A64890 (NtNotifyChangeSession.c)
 *     PopNotifyCallbacksPreSleep @ 0x140AB62D0 (PopNotifyCallbacksPreSleep.c)
 *     PopUnlockAfterSleepWorker @ 0x140B57D60 (PopUnlockAfterSleepWorker.c)
 *     KiFilterFiberContext @ 0x140BCE530 (KiFilterFiberContext.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopUmpoMessageCallback @ 0x14044C310 (PopUmpoMessageCallback.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __stdcall ExNotifyCallback(PVOID CallbackObject, PVOID Argument1, PVOID Argument2)
{
  _QWORD *v3; // rdi
  KSPIN_LOCK *v6; // rbp
  KIRQL v7; // al
  _QWORD *v8; // rbx
  KIRQL v9; // si
  void *v10; // rcx
  int v11; // eax
  bool v12; // zf

  if ( CallbackObject )
  {
    v3 = (char *)CallbackObject + 16;
    if ( (_QWORD *)*v3 != v3 )
    {
      v6 = (KSPIN_LOCK *)((char *)CallbackObject + 8);
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)CallbackObject + 1);
      v8 = (_QWORD *)*v3;
      v9 = v7;
      if ( v7 == 2 )
      {
        while ( v8 != v3 )
        {
          guard_dispatch_icall_no_overrides(v8[4], Argument1);
          v8 = (_QWORD *)*v8;
        }
      }
      else
      {
        while ( v8 != v3 )
        {
          if ( !*((_BYTE *)v8 + 44) )
          {
            ++*((_DWORD *)v8 + 10);
            KeReleaseSpinLock(v6, v9);
            v10 = (void *)v8[4];
            if ( (CALLBACK_FUNCTION *)v8[3] == PopUmpoMessageCallback )
              PopUmpoMessageCallback(v10, Argument1, Argument2);
            else
              guard_dispatch_icall_no_overrides(v10, Argument1);
            v9 = KeAcquireSpinLockRaiseToDpc(v6);
            v11 = *((_DWORD *)v8 + 10) - 1;
            v12 = *((_BYTE *)v8 + 44) == 0;
            *((_DWORD *)v8 + 10) = v11;
            if ( !v12 && !v11 )
              KeSetEvent(&ExpCallbackEvent, 0, 0);
          }
          v8 = (_QWORD *)*v8;
        }
      }
      KeReleaseSpinLock(v6, v9);
    }
  }
}
