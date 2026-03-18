/*
 * XREFs of PoUnregisterPowerSettingCallback @ 0x140A76B70
 * Callers:
 *     SSHSupportUnregisterPowerSettingCallback @ 0x14076796C (SSHSupportUnregisterPowerSettingCallback.c)
 *     TtmCleanupCurrentSession @ 0x140AAD48C (TtmCleanupCurrentSession.c)
 *     PopModernStandbyNotificationInit @ 0x140C33490 (PopModernStandbyNotificationInit.c)
 * Callees:
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404AD028 (PopUnregisterPowerSettingCallback.c)
 */

NTSTATUS __stdcall PoUnregisterPowerSettingCallback(PVOID Handle)
{
  NTSTATUS v1; // edi

  v1 = 0;
  if ( !Handle || *((_DWORD *)Handle + 4) != 1952797520 )
    return -1073741811;
  ExAcquireFastMutex(&PopSettingLock);
  if ( !*((_BYTE *)Handle + 33) && !*((_BYTE *)Handle + 32) && *(PVOID *)Handle != Handle )
  {
    if ( *((_QWORD *)Handle + 3) )
    {
      if ( *((struct _KTHREAD **)Handle + 3) == KeGetCurrentThread() )
      {
        *((_BYTE *)Handle + 32) = 1;
        goto LABEL_8;
      }
      *((_BYTE *)Handle + 33) = 1;
      while ( *((_QWORD *)Handle + 3) )
      {
        KeReleaseGuardedMutex(&PopSettingLock);
        KeWaitForSingleObject(&PopPowerSettingCallbackReturned, Executive, 0, 0, 0LL);
        KeResetEvent(&PopPowerSettingCallbackReturned);
        ExAcquireFastMutex(&PopSettingLock);
      }
      *((_BYTE *)Handle + 33) = 0;
    }
    PopUnregisterPowerSettingCallback(Handle);
    goto LABEL_8;
  }
  v1 = -1073741811;
LABEL_8:
  KeReleaseGuardedMutex(&PopSettingLock);
  return v1;
}
