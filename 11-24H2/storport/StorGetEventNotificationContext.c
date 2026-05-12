/*
 * XREFs of StorGetEventNotificationContext @ 0x14013820C
 * Callers:
 *     StorNotificationFreeCallerContextWorker @ 0x1401387E0 (StorNotificationFreeCallerContextWorker.c)
 *     StorCancelStorageNotificationIrp @ 0x1401B1F64 (StorCancelStorageNotificationIrp.c)
 *     StorDeleteStorageNotification @ 0x1401B2020 (StorDeleteStorageNotification.c)
 *     StorDisableStorageNotification @ 0x1401B2108 (StorDisableStorageNotification.c)
 *     StorEnableStorageNotification @ 0x1401B21D8 (StorEnableStorageNotification.c)
 *     StorGetStorageNotificationInfo @ 0x1401B23B8 (StorGetStorageNotificationInfo.c)
 *     StorProcessNotification @ 0x1401B2620 (StorProcessNotification.c)
 *     StorProcessNotificationWorker @ 0x1401B2E30 (StorProcessNotificationWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorGetEventNotificationContext(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v2 == 1094997074 )
    {
      if ( v2 )
        return *(_QWORD *)(v2 + 6208);
    }
    else if ( *(_DWORD *)v2 == 1314275652 && v2 )
    {
      return *(_QWORD *)(v2 + 1416);
    }
  }
  return result;
}
