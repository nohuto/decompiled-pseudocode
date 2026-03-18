/*
 * XREFs of DxgkInitialPower @ 0x140235B58
 * Callers:
 *     DriverEntry @ 0x140433078 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 DxgkInitialPower()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  OutputBuffer = 0;
  v0 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v1 = v0;
  if ( v0 >= 0 )
  {
    byte_14015DD57 = OutputBuffer;
    if ( OutputBuffer )
    {
      WdLogSingleEntry1(4LL, 0LL);
      WdLogGlobalForLineNumber = 5163;
      v2 = PoRegisterPowerSettingCallback(
             g_pDeviceObject,
             &GUID_MONITOR_POWER_ON,
             DpiMiracastHandlePowerCallback,
             0LL,
             &Handle);
      v1 = v2;
      if ( v2 >= 0 )
      {
        v3 = PoRegisterPowerSettingCallback(
               g_pDeviceObject,
               &GUID_LOW_POWER_EPOCH,
               DpiMiracastHandlePowerCallback,
               0LL,
               &qword_14015E230);
        v1 = v3;
        if ( v3 >= 0 )
        {
          dword_14015E238 = 0;
          byte_14015DD59 = 0;
          qword_14015E2C0 = (__int64)IoAllocateWorkItem(g_pDeviceObject);
          if ( qword_14015E2C0 )
          {
            KeInitializeTimerEx(&Timer, SynchronizationTimer);
            KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)DpiMiracastConnectedStandbyDelayTimerDpc, 0LL);
          }
          else
          {
            v1 = -1073741801;
            WdLogSingleEntry1(6LL, -1073741801LL);
            WdLogGlobalForLineNumber = 5222;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v3);
          WdLogGlobalForLineNumber = 5201;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v2);
        WdLogGlobalForLineNumber = 5180;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v0);
    WdLogGlobalForLineNumber = 5148;
  }
  return v1;
}
