/*
 * XREFs of rimDoRimDevChange @ 0x14005B4D0
 * Callers:
 *     RIMIDERemoveInjectionDevice @ 0x14005B144 (RIMIDERemoveInjectionDevice.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x14005CA04 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMOnPnpNotification @ 0x140061480 (RIMOnPnpNotification.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x1400C6E18 (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMDoOnPnpNotification @ 0x1401127D0 (RIMDoOnPnpNotification.c)
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 *     RIMCreateDev @ 0x1401D15BC (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1401D1E88 (RIMFreeSpecificDev.c)
 *     RIMRemoveDevOfInputType @ 0x1401D24A8 (RIMRemoveDevOfInputType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1401D65E0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     RIMHandlePowerDeviceArrival @ 0x14005432C (RIMHandlePowerDeviceArrival.c)
 *     RIMHandlePowerDeviceRemoval @ 0x140054580 (RIMHandlePowerDeviceRemoval.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     rimDoRimDevChangeCallback @ 0x14006919C (rimDoRimDevChangeCallback.c)
 *     RIMUpdateDeviceForInputMode @ 0x1400B0C70 (RIMUpdateDeviceForInputMode.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x14017A974 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  int v7; // r15d
  CTouchProcessor **v8; // rcx
  char v9; // bp
  bool v10; // r14
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r9
  int v14; // r15d
  CTouchProcessor **v15; // rcx
  __int16 v16; // [rsp+30h] [rbp-48h]
  char v17; // [rsp+40h] [rbp-38h]

  switch ( a3 )
  {
    case 1u:
LABEL_26:
      LOBYTE(v6) = 1;
      break;
    case 2u:
      *(_DWORD *)(a2 + 168) |= 0x40000000u;
      LOBYTE(v6) = 1;
      v14 = RIMHandlePowerDeviceArrival((struct RIMDEV *)a2);
      if ( v14 < 0 )
      {
        v15 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (v15 = (CTouchProcessor **)*((unsigned int *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v15 & 1) == 0)
          || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v9 = 0;
        }
        v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = v14;
          v13 = *(_QWORD *)(W32GetUserSessionState(v15) + 19392);
          v16 = 14;
          goto LABEL_25;
        }
      }
      break;
    case 3u:
      v6 = (*(_DWORD *)(a2 + 168) & 0x40000000u) >> 30;
      v7 = RIMHandlePowerDeviceRemoval(a2);
      if ( v7 < 0 )
      {
        v8 = &WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (v8 = (CTouchProcessor **)*((unsigned int *)WPP_GLOBAL_Control + 11), ((unsigned __int8)v8 & 1) == 0)
          || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v9 = 0;
        }
        v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = v7;
          v13 = *(_QWORD *)(W32GetUserSessionState(v8) + 19392);
          v16 = 15;
LABEL_25:
          LOBYTE(v12) = v10;
          LOBYTE(v11) = v9;
          WPP_RECORDER_AND_TRACE_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v11,
            v12,
            v13,
            4,
            1,
            v16,
            (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids,
            v17);
        }
      }
      break;
    default:
      if ( a3 != 4 )
      {
        if ( a3 == 5 )
        {
          LOBYTE(v6) = 1;
          RIMUpdateDeviceForInputMode((struct RIMDEV *)a2);
          break;
        }
        if ( a3 != 6 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 145LL);
          LOBYTE(v6) = 0;
          break;
        }
      }
      goto LABEL_26;
  }
  InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)a2, a3);
  if ( (_BYTE)v6 )
    rimDoRimDevChangeCallback(a1, a2, a3);
  if ( a3 == 3 )
    *(_DWORD *)(a2 + 168) &= ~0x40000000u;
}
