/*
 * XREFs of rimDoRimDevChange @ 0x1C0003BFC
 * Callers:
 *     RIMOnPnpNotification @ 0x1C0073820 (RIMOnPnpNotification.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00752D4 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMRemoveDevOfInputType @ 0x1C00B93BC (RIMRemoveDevOfInputType.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1C00BC9DC (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMCreateDev @ 0x1C00C874C (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1C00C8F08 (RIMFreeSpecificDev.c)
 *     RIMVirtCreateDev @ 0x1C0171108 (RIMVirtCreateDev.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0176360 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0178FA8 (RIMIDERemoveInjectionDevice.c)
 *     RIMDoOnPnpNotification @ 0x1C0199BB8 (RIMDoOnPnpNotification.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01A21F8 (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 * Callees:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0003C9C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     rimDoRimDevChangeCallback @ 0x1C0003CDC (rimDoRimDevChangeCallback.c)
 *     RIMHandlePowerDeviceArrival @ 0x1C0005C78 (RIMHandlePowerDeviceArrival.c)
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C01B481C (RIMHandleTTMDeviceRemoval.c)
 */

void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  char v10; // r9
  int v11; // eax
  PDEVICE_OBJECT v12; // r10
  __int16 v13; // cx

  if ( a3 == 1 )
    goto LABEL_7;
  if ( a3 == 2 )
  {
    *(_DWORD *)(a2 + 184) |= 0x40000000u;
    LOBYTE(v6) = 1;
    v7 = RIMHandlePowerDeviceArrival((struct RIMDEV *)a2);
    v10 = v7;
    if ( v7 < 0 )
    {
      v12 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v8) = 0;
      }
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 14;
        goto LABEL_31;
      }
    }
    goto LABEL_8;
  }
  if ( a3 != 3 )
  {
    if ( a3 - 4 > 1 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 140LL);
      LOBYTE(v6) = 0;
      goto LABEL_8;
    }
LABEL_7:
    LOBYTE(v6) = 1;
    goto LABEL_8;
  }
  v6 = (*(_DWORD *)(a2 + 184) & 0x40000000u) >> 30;
  if ( !(unsigned __int8)isChildPartition() )
  {
    if ( *(_BYTE *)SGDGetUserGdiSessionState() )
    {
      v11 = RIMHandleTTMDeviceRemoval(a2);
      v10 = v11;
      if ( v11 < 0 )
      {
        v12 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v8) = 0;
        }
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = 15;
LABEL_31:
          WPP_RECORDER_AND_TRACE_SF_d(
            v12->AttachedDevice,
            v8,
            v9,
            (_DWORD)gRimLog,
            4,
            1,
            v13,
            (__int64)&WPP_772c79a03a0531bfc5b802d15a9024f9_Traceguids,
            v10);
        }
      }
    }
  }
LABEL_8:
  InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)a2, a3);
  if ( (_BYTE)v6 )
    rimDoRimDevChangeCallback(a1, a2, a3);
  if ( a3 == 3 )
    *(_DWORD *)(a2 + 184) &= ~0x40000000u;
}
