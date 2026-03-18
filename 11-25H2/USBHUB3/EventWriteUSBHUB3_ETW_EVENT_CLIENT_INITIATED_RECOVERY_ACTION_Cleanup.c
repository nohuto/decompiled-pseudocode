/*
 * XREFs of EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup @ 0x14001486C
 * Callers:
 *     HUBPDO_EvtDeviceReportedMissing @ 0x140083B00 (HUBPDO_EvtDeviceReportedMissing.c)
 * Callees:
 *     McTemplateK0pqqhhhq_EtwWriteTransfer @ 0x14001D10C (McTemplateK0pqqhhhq_EtwWriteTransfer.c)
 */

__int64 __fastcall EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Cleanup(_WORD *a1, int a2)
{
  _DWORD *v3; // rsi
  _DWORD *v4; // rdi
  __int64 result; // rax

  if ( a1 && *(_QWORD *)a1 )
  {
    v3 = &unk_14006F908;
    v4 = a1 + 1338;
    do
    {
      if ( *v4 > 1u && (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
        result = McTemplateK0pqqhhhq_EtwWriteTransfer(
                   *v4,
                   a2,
                   (int)a1 + 1516,
                   *(_QWORD *)(*(_QWORD *)a1 + 248LL),
                   *v3,
                   v3[1],
                   a1[998],
                   a1[999],
                   a1[1000],
                   (unsigned __int8)*v4 - 1);
      *v4 = 0;
      v3 += 2;
      ++v4;
    }
    while ( (__int64)v3 < (__int64)FwUpdateDeviceDescriptor );
  }
  return result;
}
