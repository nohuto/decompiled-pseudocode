/*
 * XREFs of W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x140278B1C
 * Callers:
 *     W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___ @ 0x140210448 (W32AttachToSessionAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe___.c)
 * Callees:
 *     ?DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z @ 0x140278C80 (-DeviceCDROMNotifyWorker@@YAJPEAU_TARGET_DEVICE_CUSTOM_NOTIFICATION@@PEAU_CDROM_NOTIFY@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall W32AttachToProcessAndExecute__lambda_82531b96f4d8e0c7a8ac13a418b054fe_(
        PRKPROCESS PROCESS,
        __int64 a2)
{
  int v4; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v4 = PsAcquireProcessExitSynchronization(PROCESS);
  if ( v4 >= 0 )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    v4 = DeviceCDROMNotifyWorker(*(struct _TARGET_DEVICE_CUSTOM_NOTIFICATION **)a2, *(struct _CDROM_NOTIFY **)(a2 + 8));
    KeUnstackDetachProcess(&ApcState);
    PsReleaseProcessExitSynchronization(PROCESS);
  }
  return (unsigned int)v4;
}
