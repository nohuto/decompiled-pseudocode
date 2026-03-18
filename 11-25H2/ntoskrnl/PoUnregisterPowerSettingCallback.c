/*
 * XREFs of PoUnregisterPowerSettingCallback @ 0x140A74AA0
 * Callers:
 *     SSHSupportUnregisterPowerSettingCallback @ 0x140757FAC (SSHSupportUnregisterPowerSettingCallback.c)
 *     TtmCleanupCurrentSession @ 0x140AA7F5C (TtmCleanupCurrentSession.c)
 *     PopModernStandbyNotificationInit @ 0x140C2227C (PopModernStandbyNotificationInit.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404ABCAC (PopUnregisterPowerSettingCallback.c)
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
