/*
 * XREFs of Controller_ExecuteHSICDisconnectInU3Workaround @ 0x140081AFC
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1400382B0 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x140038BB0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 *     Controller_IsSecureDevice @ 0x140034338 (Controller_IsSecureDevice.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1400768C8 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 *     Controller_ExecuteDSM @ 0x140081BA8 (Controller_ExecuteDSM.c)
 */

void __fastcall Controller_ExecuteHSICDisconnectInU3Workaround(__int64 a1, char a2)
{
  char v4; // dl

  if ( _bittest64((const signed __int64 *)(a1 + 736), 0x3Cu) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a1 + 72),
        4,
        4,
        272,
        (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
        *(_QWORD *)a1);
    if ( Controller_IsSecureDevice(a1) )
      Controller_ExecuteHSICDisconnectInU3WorkaroundDirect(a1, v4);
    else
      Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_RTD3, 6 - (unsigned int)(a2 != 0));
  }
}
