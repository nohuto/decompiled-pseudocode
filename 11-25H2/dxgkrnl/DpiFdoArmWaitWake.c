/*
 * XREFs of DpiFdoArmWaitWake @ 0x14024D2C0
 * Callers:
 *     DpiFdoWaitWakePoCompletionWorkItem @ 0x14024D5E0 (DpiFdoWaitWakePoCompletionWorkItem.c)
 *     DpiFdoSetAdapterPowerState @ 0x14040AB28 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     DpiFdoDriverArmWaitWake @ 0x14024D4E0 (DpiFdoDriverArmWaitWake.c)
 *     DpiFdoDriverDisarmWaitWake @ 0x14024D584 (DpiFdoDriverDisarmWaitWake.c)
 */

__int64 __fastcall DpiFdoArmWaitWake(PDEVICE_OBJECT DeviceObject)
{
  PVOID DeviceExtension; // rsi
  bool v3; // zf
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  signed __int32 v7; // eax
  int v8; // eax
  NTSTATUS v9; // eax

  DeviceExtension = DeviceObject->DeviceExtension;
  v3 = *((_BYTE *)DeviceExtension + 2726) == 0;
  *((_BYTE *)DeviceExtension + 2727) = 0;
  if ( v3 )
    return 3221225659LL;
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, DpiFdoArmWaitWake, File, 1u, 0x20u);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)DeviceExtension + 688, 2, 1);
    if ( v7 == 1 )
    {
      v8 = DpiFdoDriverArmWaitWake(DeviceExtension);
      v6 = v8;
      if ( v8 >= 0 )
      {
        v9 = PoRequestPowerIrp(
               DeviceObject,
               0,
               (POWER_STATE)1,
               (PREQUEST_POWER_COMPLETE)DpiFdoWaitWakePoCompletionRoutine,
               0LL,
               0LL);
        v6 = v9;
        if ( v9 >= 0 )
          return 0LL;
        WdLogSingleEntry1(2LL, v9);
        WdLogGlobalForLineNumber = 370;
        DpiFdoDriverDisarmWaitWake(DeviceExtension);
      }
      else
      {
        WdLogSingleEntry1(2LL, v8);
        WdLogGlobalForLineNumber = 337;
      }
    }
    else if ( (v7 & 1) != 0 )
    {
      *((_BYTE *)DeviceExtension + 2727) = 1;
    }
    else
    {
      WdLogSingleEntry1(4LL, DeviceObject);
      v6 = 0;
      WdLogGlobalForLineNumber = 396;
    }
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, DpiFdoArmWaitWake, 0x20u);
  }
  else
  {
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 314;
  }
  return v6;
}
