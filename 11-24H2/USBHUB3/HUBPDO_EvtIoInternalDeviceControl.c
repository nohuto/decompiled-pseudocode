/*
 * XREFs of HUBPDO_EvtIoInternalDeviceControl @ 0x140018690
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x140001FE8 (McTemplateK0pq_EtwWriteTransfer.c)
 *     HUBSM_AddEvent @ 0x14000A83C (HUBSM_AddEvent.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x140014988 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBMISC_VerifierDbgBreak @ 0x140034050 (HUBMISC_VerifierDbgBreak.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPDO_EvtIoInternalDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ebx
  int v13; // r8d
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  bool v20; // zf
  __int64 v22; // [rsp+20h] [rbp-50h]
  _OWORD v23[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h]
  GUID ActivityId; // [rsp+58h] [rbp-18h] BYREF

  v24 = 0LL;
  memset(v23, 0, sizeof(v23));
  ActivityId = 0LL;
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v6,
         off_14006C0F8);
  *(_QWORD *)(*(_QWORD *)(v7 + 24) + 464LL) = a2;
  v8 = *(_QWORD *)(v7 + 24);
  if ( (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_14006C1E8)
                  + 4) & 0x1000) != 0 )
  {
    v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
    if ( (!*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
       || (*(int (__fastcall **)(__int64, GUID *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v10, &ActivityId) < 0)
      && EtwActivityIdControl(3u, &ActivityId) >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a2);
      if ( g_IoSetActivityIdIrp )
        g_IoSetActivityIdIrp(v9, &ActivityId);
    }
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    McTemplateK0pq_EtwWriteTransfer(
      v9,
      &USBHUB3_ETW_EVENT_DEVICE_INTERNAL_IOCTL_START,
      &ActivityId,
      *(_QWORD *)(v8 + 24),
      a5);
  if ( a5 != 2228227 )
  {
    if ( a5 == 2228231 || a5 == 2232243 )
    {
      v11 = *(_QWORD *)(v7 + 24);
      if ( (*(_DWORD *)(v11 + 2444) & 0x200) != 0 )
        HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPort", v11 + 512);
      v12 = 4023;
      v13 = 0;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 8LL) + 1424LL) = 10;
      v14 = 2232243;
      goto LABEL_37;
    }
LABEL_25:
    v12 = 1000;
    return HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 512LL, v12);
  }
  LOWORD(v23[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v23);
  v16 = *((_QWORD *)&v23[0] + 1);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    LODWORD(v22) = *(unsigned __int16 *)(*((_QWORD *)&v23[0] + 1) + 2LL);
    McTemplateK0pq_EtwWriteTransfer(v15, &USBHUB3_ETW_EVENT_DEVICE_URB_START, &ActivityId, *(_QWORD *)(v8 + 24), v22);
  }
  if ( *(_WORD *)(v16 + 2) )
  {
    switch ( *(_WORD *)(v16 + 2) )
    {
      case 1:
        goto LABEL_38;
      case 0x1E:
        v19 = *(_QWORD *)(v7 + 24);
        if ( (*(_DWORD *)(v19 + 2444) & 0x100) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v19 + 512);
        v12 = 4027;
        v13 = 30;
        break;
      case 0x30:
        v18 = *(_QWORD *)(v7 + 24);
        if ( (*(_DWORD *)(v18 + 2444) & 0x100) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v18 + 512);
        v12 = 4047;
        v13 = 48;
        break;
      case 0x31:
        v17 = *(_QWORD *)(v7 + 24);
        if ( (*(_DWORD *)(v17 + 2444) & 0x100) != 0 )
          HUBMISC_VerifierDbgBreak("DeviceHwVerifierClientInitiatedResetPipe", v17 + 512);
        v12 = 4043;
        v13 = 49;
        break;
      case 0x35:
      case 0x36:
        v12 = 4019;
        return HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 512LL, v12);
      case 0x3B:
LABEL_38:
        v12 = 4039;
        return HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 512LL, v12);
      default:
        goto LABEL_25;
    }
    v14 = 2228227;
LABEL_37:
    EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(v8, v14, v13);
    return HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 512LL, v12);
  }
  v20 = *(_QWORD *)(v16 + 24) == 0LL;
  *(_QWORD *)(v16 + 8) = *(_QWORD *)(v8 + 24);
  if ( v20 )
  {
    *(_QWORD *)(v16 + 32) = 0LL;
    v12 = 4035;
  }
  else
  {
    v12 = 4031;
  }
  return HUBSM_AddEvent(*(_QWORD *)(v7 + 24) + 512LL, v12);
}
