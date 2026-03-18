/*
 * XREFs of DriverEntry @ 0x140010540
 * Callers:
 *     GsDriverEntry @ 0x1400104D0 (GsDriverEntry.c)
 * Callees:
 *     WPP_SF_ @ 0x140004620 (WPP_SF_.c)
 *     WPP_SF_D @ 0x140004704 (WPP_SF_D.c)
 *     WPP_SF_Zd @ 0x140004854 (WPP_SF_Zd.c)
 *     WPP_SF_Zq @ 0x1400048E8 (WPP_SF_Zq.c)
 *     WPP_SF_d @ 0x140004960 (WPP_SF_d.c)
 *     memset @ 0x140005DC0 (memset.c)
 *     WppLoadTracingSupport @ 0x14000D010 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x14000D160 (WppInitKm.c)
 *     CsTerminate @ 0x14000D470 (CsTerminate.c)
 *     CiNdisOpenDevice @ 0x14000DCA8 (CiNdisOpenDevice.c)
 *     CiSystemTerminate @ 0x14000DD5C (CiSystemTerminate.c)
 *     CiConfigInitialize @ 0x140010010 (CiConfigInitialize.c)
 *     wil_InitializeFeatureStaging @ 0x140010A54 (wil_InitializeFeatureStaging.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int SystemInformation; // ebx
  size_t v4; // rdi
  void *Pool2; // rax
  PCLIENT_ID ClientId; // [rsp+20h] [rbp-68h]
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v9[2]; // [rsp+58h] [rbp-30h] BYREF
  __int64 (__fastcall **v10)(); // [rsp+60h] [rbp-28h]
  __int64 *v11; // [rsp+68h] [rbp-20h]
  _DRIVER_OBJECT *v12; // [rsp+70h] [rbp-18h]
  void *ThreadHandle; // [rsp+A0h] [rbp+18h] BYREF

  wil_InitializeFeatureStaging(DriverObject, RegistryPath);
  WPP_MAIN_CB.Timer = (PIO_TIMER)1;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (struct _DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_MmcssTrace;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm();
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = &WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
  WPP_MAIN_CB.Dpc.DeferredContext = &WPP_MAIN_CB.Dpc.DeferredRoutine;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&WPP_MAIN_CB.Dpc.DeferredRoutine;
  WPP_MAIN_CB.Dpc.SystemArgument2 = &WPP_MAIN_CB.Dpc.SystemArgument1;
  WPP_MAIN_CB.Dpc.SystemArgument1 = &WPP_MAIN_CB.Dpc.SystemArgument1;
  SystemInformation = EtwRegister(&MMCSS_ETW_PROVIDER, (PETWENABLECALLBACK)CiLogControlCallback, 0LL, &CiLoggerContext);
  if ( SystemInformation >= 0 )
  {
    SystemInformation = ZwQuerySystemInformation(SystemBasicInformation, &CiSystemBasicInfo, 0x40u, 0LL);
    v4 = 24LL * byte_14000A318;
    Pool2 = (void *)ExAllocatePool2(64LL, v4, 1953658433LL);
    CiLastIdleStats = (__int64)Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, v4);
      if ( SystemInformation >= 0 )
      {
        SystemInformation = CiConfigInitialize();
        if ( SystemInformation >= 0 )
        {
          SystemInformation = PsSetCreateThreadNotifyRoutine((PCREATE_THREAD_NOTIFY_ROUTINE)CiThreadNotification);
          if ( SystemInformation < 0 )
          {
            if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
              WPP_SF_d(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                0xAu,
                (__int64)&WPP_29026e0d014631895ac1404d49971dec_Traceguids,
                SystemInformation);
          }
          else
          {
            CiThreadCallbackRegistered = 1;
          }
          if ( SystemInformation >= 0 )
          {
            v9[0] = 65545;
            v10 = &CiKernelCalloutTable;
            v9[1] = 0x10000;
            v11 = &CiKernelInterface;
            v12 = DriverObject;
            SystemInformation = ExRegisterExtension(&CiKernelExtensionRegistration, 65537LL, v9);
            if ( SystemInformation >= 0 )
            {
              memset(&Event, 0, sizeof(Event));
              ThreadHandle = 0LL;
              HIDWORD(WPP_MAIN_CB.SecurityDescriptor) = *(&WPP_MAIN_CB.ActiveThreadCount + 1)
                                                      * CiSystemResponsiveness
                                                      / 0x64;
              LODWORD(WPP_MAIN_CB.SecurityDescriptor) = *(&WPP_MAIN_CB.ActiveThreadCount + 1)
                                                      - *(&WPP_MAIN_CB.ActiveThreadCount + 1)
                                                      * CiSystemResponsiveness
                                                      / 0x64;
              *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels = ExAllocateTimer(0LL, 0LL, 12LL);
              if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
              {
                WPP_MAIN_CB.Queue.Wcb.DeviceContext = 0LL;
                *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = -1LL;
                CiProcessorIdleHistoryBits = 0;
                KeInitializeEvent(&Event, NotificationEvent, 0);
                SystemInformation = PsCreateSystemThread(
                                      &ThreadHandle,
                                      0x1FFFFFu,
                                      0LL,
                                      0LL,
                                      0LL,
                                      (PKSTART_ROUTINE)CiSchedulerThreadFunction,
                                      &Event);
                if ( SystemInformation < 0 )
                {
                  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
                    WPP_SF_(
                      (__int64)WPP_GLOBAL_Control->AttachedDevice,
                      0xBu,
                      (__int64)&WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
                }
                else
                {
                  ZwClose(ThreadHandle);
                  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                  DriverObject->FastIoDispatch = (PFAST_IO_DISPATCH)&CiFastIoDispatch;
                  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)CiDispatchCreate;
                  DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)CiDispatchCleanup;
                  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)CiDispatchClose;
                  DriverObject->DriverUnload = (PDRIVER_UNLOAD)CiDriverUnload;
                  SystemInformation = IoCreateDevice(
                                        DriverObject,
                                        0,
                                        (PUNICODE_STRING)0x140012020LL,
                                        0x22u,
                                        0x20000u,
                                        0,
                                        &CiDeviceObject);
                  if ( SystemInformation >= 0 )
                  {
                    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                      WPP_SF_Zq((__int64)WPP_GLOBAL_Control->AttachedDevice);
                  }
                  else if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
                  {
                    LODWORD(ClientId) = SystemInformation;
                    WPP_SF_Zd(
                      (__int64)WPP_GLOBAL_Control->AttachedDevice,
                      0x14u,
                      (__int64)&WPP_8f5427380d7633b566e62dbddd286985_Traceguids,
                      (const wchar_t *)0x140012020LL,
                      ClientId);
                  }
                }
              }
              else
              {
                if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
                  WPP_SF_(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    0xAu,
                    (__int64)&WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
                SystemInformation = -1073741801;
              }
            }
          }
        }
      }
      else
      {
        CiSystemTerminate();
      }
    }
    else
    {
      SystemInformation = -1073741801;
      CiSystemTerminate();
    }
  }
  else if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_D((__int64)WPP_GLOBAL_Control->AttachedDevice);
  }
  if ( LODWORD(WPP_MAIN_CB.Dpc.DpcData) != -1 && CiSystemResponsiveness != 100 )
  {
    CiNdisThrottleWorkItem = IoAllocateWorkItem(CiDeviceObject);
    if ( CiNdisThrottleWorkItem )
      CiNdisOpenDevice();
  }
  if ( SystemInformation < 0 )
  {
    CsTerminate();
    if ( g_wil_details_featureChangeNotification )
    {
      RtlUnregisterFeatureConfigurationChangeNotification();
      g_wil_details_featureChangeNotification = 0LL;
    }
    if ( g_wil_details_featureUsageProvider )
    {
      RtlUnregisterFeatureUsageProvider();
      g_wil_details_featureUsageProvider = 0LL;
    }
    g_wil_details_isFeatureStagingInitialized = 0;
  }
  return SystemInformation;
}
