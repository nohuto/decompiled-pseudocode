/*
 * XREFs of Etw_ReportFatalError @ 0x14004F288
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400370B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x140037740 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1400379B0 (Controller_WdfEvtDeviceD0Exit.c)
 *     Controller_WdfEvtPreprocessSetPowerIrp @ 0x140037E90 (Controller_WdfEvtPreprocessSetPowerIrp.c)
 *     XilUsbDevice_QueryAttributesFromTrustlet @ 0x140039560 (XilUsbDevice_QueryAttributesFromTrustlet.c)
 *     Controller_ReportFatalErrorEx @ 0x140041EC0 (Controller_ReportFatalErrorEx.c)
 *     Controller_WdfEvtDeviceFilterRemoveResourceRequirements @ 0x140079B10 (Controller_WdfEvtDeviceFilterRemoveResourceRequirements.c)
 * Callees:
 *     McTemplateK0pzquuqqqqqqsssxqqqxx_EtwWriteTransfer @ 0x14004F8F4 (McTemplateK0pzquuqqqqqqsssxqqqxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Etw_ReportFatalError(__int64 a1, __int64 a2, char a3, int a4, __int64 a5, __int64 a6)
{
  char v6; // bp
  __int64 v9; // rax

  v6 = a4;
  if ( a4 )
  {
    if ( a4 != 4159 )
    {
      v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
             WdfDriverGlobals,
             *(_QWORD *)a2,
             off_14006B240);
      if ( (*(_BYTE *)(a2 + 797) != 1 || (*(_DWORD *)(v9 + 28) & 0x10) == 0)
        && (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 0x40) != 0 )
      {
        McTemplateK0pzquuqqqqqqsssxqqqxx_EtwWriteTransfer(
          a2 + 714,
          a2 + 709,
          a2 + 704,
          *(_QWORD *)(a2 + 8),
          a2 + 244,
          *(_DWORD *)(a2 + 644),
          *(_BYTE *)(a2 + 720),
          *(_BYTE *)(a2 + 721),
          *(_DWORD *)(a2 + 660),
          *(_WORD *)(a2 + 664),
          *(_WORD *)(a2 + 668),
          *(_WORD *)(a2 + 648),
          *(_WORD *)(a2 + 652),
          *(_BYTE *)(a2 + 656),
          a2 + 704,
          a2 + 709,
          a2 + 714,
          *(_QWORD *)(a2 + 728),
          *(_DWORD *)(a2 + 176),
          v6,
          a3,
          a5,
          a6);
      }
    }
  }
}
