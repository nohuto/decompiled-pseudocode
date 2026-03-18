/*
 * XREFs of Interrupter_D0Entry @ 0x140032140
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400382B0 (Controller_WdfEvtDeviceD0Entry.c)
 * Callees:
 *     Controller_IsControllerAccessible @ 0x1400086E0 (Controller_IsControllerAccessible.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x14000BDD4 (Interrupter_InterrupterRegisterIntialize.c)
 *     Interrupter_Initialize @ 0x140034B34 (Interrupter_Initialize.c)
 *     WPP_RECORDER_SF_qL @ 0x14003E154 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall Interrupter_D0Entry(__int64 a1, int a2, char a3)
{
  char v6; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v6 = a2;
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_qL(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      a2,
      9,
      34,
      (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids,
      a1,
      v6);
  }
  if ( Controller_IsControllerAccessible(*(_QWORD *)(a1 + 8)) )
  {
    if ( !a3 )
      Interrupter_Initialize(a1);
    Interrupter_InterrupterRegisterIntialize(a1);
  }
  return 0LL;
}
