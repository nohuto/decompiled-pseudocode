/*
 * XREFs of TtmpStopCallout @ 0x140769BE4
 * Callers:
 *     TtmiSessionDeviceListWorker @ 0x140768C60 (TtmiSessionDeviceListWorker.c)
 *     TtmpCallAssignedToTerminal @ 0x140768F30 (TtmpCallAssignedToTerminal.c)
 *     TtmpCallSetBuiltinPanelState @ 0x140768FCC (TtmpCallSetBuiltinPanelState.c)
 *     TtmpCallSetDisplayState @ 0x14076904C (TtmpCallSetDisplayState.c)
 *     TtmpCallSetInputMode @ 0x1407690FC (TtmpCallSetInputMode.c)
 *     TtmpUpdatePrimaryDisplayWnf @ 0x140769CAC (TtmpUpdatePrimaryDisplayWnf.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     TtmpAcquireSessionLock @ 0x1406F53C8 (TtmpAcquireSessionLock.c)
 *     TtmpGetCalloutTagFromCalloutType @ 0x140769560 (TtmpGetCalloutTagFromCalloutType.c)
 *     TtmiLogCalloutStop @ 0x14076BFD4 (TtmiLogCalloutStop.c)
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 */

BOOLEAN __fastcall TtmpStopCallout(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  int CalloutTagFromCalloutType; // eax
  __int64 v7; // r10
  int InputBuffer; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+38h] [rbp-60h]
  char v11; // [rsp+88h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 24);
  v4 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 32);
  if ( v3 )
  {
    memset_0(&InputBuffer, 0, 0x60uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    InputBuffer = 21;
    v11 = 1;
    v10 = v3;
    NtPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
  }
  CalloutTagFromCalloutType = TtmpGetCalloutTagFromCalloutType(*(_DWORD *)(a1 + 16));
  TtmiLogCalloutStop(
    *(_DWORD *)(v7 + 16),
    *(_DWORD *)(v7 + 72),
    *(_QWORD *)(v7 + 24),
    CalloutTagFromCalloutType,
    a2,
    v4);
  return TtmpAcquireSessionLock();
}
