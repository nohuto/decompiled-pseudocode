/*
 * XREFs of HUBSM_LogUnhandledEvent @ 0x14000BCD8
 * Callers:
 *     HUBSM_FindAndSetTargetState @ 0x14000B6C0 (HUBSM_FindAndSetTargetState.c)
 * Callees:
 *     McTemplateK0ppqqqq_EtwWriteTransfer @ 0x14000C5B4 (McTemplateK0ppqqqq_EtwWriteTransfer.c)
 *     WPP_RECORDER_SF_qLL @ 0x14000C664 (WPP_RECORDER_SF_qLL.c)
 *     HUBMISC_DbgBreak @ 0x14002FBE4 (HUBMISC_DbgBreak.c)
 *     MicrosoftTelemetryAssertTriggeredArgsMsgKM @ 0x140042F60 (MicrosoftTelemetryAssertTriggeredArgsMsgKM.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBSM_LogUnhandledEvent(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 v9; // r8
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_14006C1E8);
  v6 = *(unsigned int *)(a1 + 984);
  v7 = v4;
  if ( (_DWORD)v6 == 2000 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLL(*(_QWORD *)(v4 + 64), v4, v5, 11);
    v9 = *(unsigned int *)(a1 + 852);
    v8 = "Unhandled HSM event";
  }
  else
  {
    switch ( (_DWORD)v6 )
    {
      case 0xBB8:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLL(*(_QWORD *)(v4 + 64), v4, v5, 12);
        v8 = "Unhandled PSM20 event";
        break;
      case 0xFA0:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLL(*(_QWORD *)(v4 + 64), v4, v5, 10);
        v8 = "Unhandled DSM event";
        break;
      case 0x1388:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLL(*(_QWORD *)(v4 + 64), v4, v5, 13);
        v8 = "Unhandled PSM30 event";
        break;
      default:
        goto LABEL_19;
    }
    v9 = *(unsigned int *)(a1 + 852);
  }
  MicrosoftTelemetryAssertTriggeredArgsMsgKM(v6, a2, v9, v8);
LABEL_19:
  result = HUBMISC_DbgBreak("Unhandled Event", v7);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    return McTemplateK0ppqqqq_EtwWriteTransfer(
             *(_DWORD *)(a1 + 852) - *(_DWORD *)(a1 + 984),
             (unsigned int)&USBHUB3_ETW_EVENT_UNHANDLED_STATE_MACHINE_EVENT,
             (int)a1 + 1012,
             *(_QWORD *)(a1 + 1032),
             *(_QWORD *)(a1 + 960),
             *(_DWORD *)(a1 + 984),
             **(_DWORD **)(*(_QWORD *)(a1 + 976) + 8LL * (unsigned int)(*(_DWORD *)(a1 + 852) - *(_DWORD *)(a1 + 984))),
             a2,
             0);
  return result;
}
