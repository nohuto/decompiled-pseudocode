/*
 * XREFs of EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x140014938
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x140016B00 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtIoInternalDeviceControl @ 0x140018680 (HUBPDO_EvtIoInternalDeviceControl.c)
 *     HUBPDO_ReEnumerationCallback @ 0x14001A0D0 (HUBPDO_ReEnumerationCallback.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F5EC (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pqqhhhq_EtwWriteTransfer @ 0x14001D10C (McTemplateK0pqqhhhq_EtwWriteTransfer.c)
 */

void __fastcall EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper(__int64 a1, int a2, int a3)
{
  __int64 v6; // rbx
  signed __int32 v7; // ecx
  char v8; // al

  if ( !a1 || !*(_QWORD *)a1 )
    return;
  if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(
      a1,
      &USBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION,
      (const GUID *)(a1 + 1516),
      *(_QWORD *)(*(_QWORD *)a1 + 248LL),
      a2,
      a3);
  if ( a2 == 2228227 )
  {
    switch ( a3 )
    {
      case 30:
        v6 = 2676LL;
        break;
      case 48:
        v6 = 2680LL;
        break;
      case 49:
        v6 = 2684LL;
        break;
      default:
        return;
    }
    goto LABEL_17;
  }
  if ( a2 != 2228231 )
  {
    if ( a2 == 2228255 )
    {
      v6 = 2692LL;
      goto LABEL_17;
    }
    if ( a2 != 2232243 )
      return;
  }
  v6 = 2688LL;
LABEL_17:
  v7 = _InterlockedIncrement((volatile signed __int32 *)(v6 + a1));
  if ( v7 == 1 || v7 == 1001 )
  {
    if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
    {
      v8 = -24;
      if ( v7 == 1 )
        v8 = 1;
      McTemplateK0pqqhhhq_EtwWriteTransfer(
        v7,
        a2,
        a1 + 1516,
        *(_QWORD *)(*(_QWORD *)a1 + 248LL),
        a2,
        a3,
        *(_WORD *)(a1 + 1996),
        *(_WORD *)(a1 + 1998),
        *(_WORD *)(a1 + 2000),
        v8);
    }
    _InterlockedExchange((volatile __int32 *)(v6 + a1), 1);
  }
}
