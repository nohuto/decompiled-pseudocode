/*
 * XREFs of DeviceSlot_D0Entry @ 0x140019D70
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400370B0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     DeviceSlot_Initialize @ 0x140019DCC (DeviceSlot_Initialize.c)
 *     WPP_RECORDER_SF_qd @ 0x140019E0C (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall DeviceSlot_D0Entry(__int64 a1, int a2)
{
  char v4; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      a2,
      10,
      13,
      (__int64)&WPP_89cd3fece2b53994e2caa5355f1e1bb0_Traceguids,
      a1,
      v4);
  }
  return DeviceSlot_Initialize(a1);
}
