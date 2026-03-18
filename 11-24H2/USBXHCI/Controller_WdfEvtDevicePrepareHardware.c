/*
 * XREFs of Controller_WdfEvtDevicePrepareHardware @ 0x140079BE0
 * Callers:
 *     <none>
 * Callees:
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x14002C6F8 (WPP_RECORDER_SF_q.c)
 *     Controller_IsSecureDevice @ 0x1400328B8 (Controller_IsSecureDevice.c)
 *     Controller_AllocateIrqlTrackingArray @ 0x14003F8D4 (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_ClearHSIIWorkaround @ 0x14003FA90 (Controller_ClearHSIIWorkaround.c)
 *     Controller_DeallocateIrqlTrackingArray @ 0x14003FB18 (Controller_DeallocateIrqlTrackingArray.c)
 *     Controller_ReportFatalErrorEx @ 0x140041EC0 (Controller_ReportFatalErrorEx.c)
 *     Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline @ 0x140043EA8 (Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlUnicodeStringPrintf @ 0x14004450C (RtlUnicodeStringPrintf.c)
 *     XilDeviceSlot_PrepareHardware @ 0x1400463D0 (XilDeviceSlot_PrepareHardware.c)
 *     SleepstudyHelper_GenerateGuid @ 0x140058944 (SleepstudyHelper_GenerateGuid.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     Command_PrepareHardware @ 0x140074580 (Command_PrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x14007C5D0 (Interrupter_PrepareHardware.c)
 *     Register_PrepareHardware @ 0x14007DABC (Register_PrepareHardware.c)
 *     RootHub_PrepareHardware @ 0x14007E080 (RootHub_PrepareHardware.c)
 *     DmaEnabler_Create @ 0x14007F34C (DmaEnabler_Create.c)
 *     SecureDmaEnabler_Create @ 0x14007F5E4 (SecureDmaEnabler_Create.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x1400805F4 (SleepstudyHelper_RegisterComponentEx.c)
 *     CommonBuffer_Create @ 0x1400823EC (CommonBuffer_Create.c)
 */

__int64 __fastcall Controller_WdfEvtDevicePrepareHardware(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  int v6; // edx
  char IsSecureDevice; // r12
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v12; // rsi
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rbx
  NTSTATUS v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  int v19; // edx
  int v20; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  GUID v23; // [rsp+50h] [rbp-B0h] BYREF
  GUID v24; // [rsp+60h] [rbp-A0h] BYREF
  GUID v25; // [rsp+70h] [rbp-90h] BYREF
  GUID v26; // [rsp+80h] [rbp-80h] BYREF
  char v27; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&v23.Data1 = a2;
  DestinationString.Buffer = (wchar_t *)&v27;
  *(_QWORD *)&DestinationString.Length = 0x2000000LL;
  v26 = 0LL;
  v25 = 0LL;
  v5 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_14006B240)
                 + 8);
  IsSecureDevice = Controller_IsSecureDevice(v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(v5 + 72), v6, 4, 47, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, a1);
  }
  if ( *(_DWORD *)(v5 + 1272) != KeQueryActiveProcessorCountEx(0xFFFFu) )
  {
    Controller_DeallocateIrqlTrackingArray(v5);
    Controller_AllocateIrqlTrackingArray(v5);
  }
  v8 = *(_QWORD *)(v5 + 88);
  *(_DWORD *)(v5 + 820) = 0;
  v9 = Register_PrepareHardware(v8, a3);
  v11 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(*(_QWORD *)(v5 + 72), 2, 4, 48, (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids, v9);
    v12 = 1LL;
    goto LABEL_54;
  }
  v12 = 2LL;
  if ( !IsSecureDevice )
    goto LABEL_60;
  v10 = v5 + 104;
  if ( !*(_QWORD *)(v5 + 104) )
  {
    v11 = SecureDmaEnabler_Create(v5);
    if ( v11 < 0 )
      goto LABEL_54;
  }
  if ( *(_DWORD *)(v5 + 1008) == 2 )
  {
LABEL_60:
    if ( !*(_QWORD *)(v5 + 96) )
    {
      v11 = DmaEnabler_Create(a1, v5);
      if ( v11 < 0 )
      {
        v12 = 3LL;
LABEL_54:
        DbgPrint("USBXHCI: Controller enumeration failure in WdfEvtDevicePrepareHardware\n");
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 1;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v5 + 72),
            v20,
            4,
            52,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
            v11);
        }
        Controller_ReportFatalErrorEx(v5, 32, 4137, v12, v11, 0LL, 0LL, 0LL);
        return (unsigned int)v11;
      }
    }
  }
  v13 = *(_DWORD *)(v5 + 1008);
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( *(_QWORD *)(v5 + 120) )
        goto LABEL_28;
      LOBYTE(v10) = 1;
      goto LABEL_26;
    }
    if ( v14 != 1 )
    {
      Debug_FreAssertMsg(
        (__int64)"Unexpected DMA mode",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
        1531);
      v11 = -1073741630;
      v12 = 0LL;
      goto LABEL_54;
    }
  }
  if ( *(_QWORD *)(v5 + 120) )
    goto LABEL_28;
  v10 = 0LL;
LABEL_26:
  v11 = CommonBuffer_Create(v5, v10);
  if ( v11 < 0 )
  {
    v12 = 4LL;
    goto LABEL_54;
  }
LABEL_28:
  v11 = Interrupter_PrepareHardware(*(_QWORD *)(v5 + 128), *(_QWORD *)&v23.Data1, a3);
  if ( v11 < 0 )
  {
    v12 = 5LL;
    goto LABEL_54;
  }
  v11 = XilDeviceSlot_PrepareHardware(*(_QWORD *)(v5 + 136));
  if ( v11 < 0 )
  {
    v12 = 6LL;
    goto LABEL_54;
  }
  v11 = Command_PrepareHardware(*(_QWORD *)(v5 + 144));
  if ( v11 < 0 )
  {
    v12 = 7LL;
    goto LABEL_54;
  }
  v11 = RootHub_PrepareHardware(*(_QWORD *)(v5 + 152));
  if ( v11 < 0 )
  {
    v12 = 13LL;
    goto LABEL_54;
  }
  if ( *(_DWORD *)(v5 + 864) && *(_QWORD *)(g_WdfDriverUsbXhciContext + 32) )
  {
    v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01033 + 264))(WdfDriverGlobals, a1);
    SleepstudyHelper_GenerateGuid(0LL, v15, &v26);
    SleepstudyHelper_GenerateGuid(7LL, v15 + 336, &v25);
    v16 = RtlUnicodeStringPrintf(
            &DestinationString,
            L"USBXHCI Selective Suspend Disabled/ Unsupported: Reason code: %d",
            *(unsigned int *)(v5 + 864));
    v11 = v16;
    if ( v16 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 72),
          v17,
          4,
          49,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v16);
      }
      v12 = 12LL;
      goto LABEL_54;
    }
    v23 = v25;
    v18 = *(_QWORD *)(g_WdfDriverUsbXhciContext + 32);
    v24 = v26;
    v11 = SleepstudyHelper_RegisterComponentEx(
            v18,
            (unsigned int)&v24,
            (unsigned int)&v23,
            (unsigned int)&DestinationString,
            v5 + 1248);
    if ( (unsigned int)Feature_SPR_HardenInClient__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v11 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v5 + 72),
            3,
            4,
            50,
            (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
            v11);
        *(_QWORD *)(v5 + 1248) = 0LL;
        v11 = 0;
      }
    }
    else if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = 2;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v5 + 72),
          v19,
          4,
          51,
          (__int64)&WPP_aa3f12a561783a7e2659a97375f632db_Traceguids,
          v11);
      }
      v12 = 8LL;
      goto LABEL_54;
    }
  }
  if ( (*(_DWORD *)(v5 + 744) & 0x100000LL) != 0 )
    Controller_ClearHSIIWorkaround(v5);
  return (unsigned int)v11;
}
