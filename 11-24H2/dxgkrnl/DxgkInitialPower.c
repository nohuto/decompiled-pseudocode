/*
 * XREFs of DxgkInitialPower @ 0x14023C538
 * Callers:
 *     DriverEntry @ 0x140435078 (DriverEntry.c)
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
    byte_140160D17 = OutputBuffer;
    if ( OutputBuffer )
    {
      WdLogSingleEntry1(4LL, 0LL);
      WdLogGlobalForLineNumber = 5168;
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
               &qword_1401611F0);
        v1 = v3;
        if ( v3 >= 0 )
        {
          dword_1401611F8 = 0;
          byte_140160D19 = 0;
          qword_140161280 = (__int64)IoAllocateWorkItem(g_pDeviceObject);
          if ( qword_140161280 )
          {
            KeInitializeTimerEx(&Timer, SynchronizationTimer);
            KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)DpiMiracastConnectedStandbyDelayTimerDpc, 0LL);
          }
          else
          {
            v1 = -1073741801;
            WdLogSingleEntry1(6LL, -1073741801LL);
            WdLogGlobalForLineNumber = 5227;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, v3);
          WdLogGlobalForLineNumber = 5206;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v2);
        WdLogGlobalForLineNumber = 5185;
      }
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, v0);
    WdLogGlobalForLineNumber = 5153;
  }
  return v1;
}
