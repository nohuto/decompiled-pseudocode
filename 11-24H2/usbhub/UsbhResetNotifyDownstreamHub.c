/*
 * XREFs of UsbhResetNotifyDownstreamHub @ 0x140050B64
 * Callers:
 *     Usbh_HRS_Queued @ 0x14004BEAC (Usbh_HRS_Queued.c)
 *     Usbh_HRS_WaitReady @ 0x14004C388 (Usbh_HRS_WaitReady.c)
 *     UsbhResetNotificationIrpCompletion @ 0x1400509A0 (UsbhResetNotificationIrpCompletion.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_q @ 0x14003DEE0 (WPP_RECORDER_SF_q.c)
 *     UsbhSetPdo_FailIo @ 0x140047830 (UsbhSetPdo_FailIo.c)
 */

_DWORD *__fastcall UsbhResetNotifyDownstreamHub(__int64 a1)
{
  unsigned int v2; // edi
  _DWORD *result; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 PortData; // rax
  __int64 v7; // rbp
  _DWORD *v8; // rbx
  __int64 v9; // rax

  v2 = 1;
  result = FdoExt(a1);
  if ( *((_BYTE *)result + 2938) )
  {
    do
    {
      PortData = UsbhGetPortData(a1, (unsigned __int16)v2, v4, v5);
      v7 = *(_QWORD *)(PortData + 392);
      if ( v7 )
      {
        v8 = PdoExt(*(_QWORD *)(PortData + 392));
        if ( *((_BYTE *)v8 + 2740) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_q(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              *((_QWORD *)v8 + 148),
              3u,
              0x18u,
              (__int64)&WPP_88c51487de8b36c95d93828ad72ed338_Traceguids,
              *((_QWORD *)v8 + 148));
          }
          v9 = *((_QWORD *)v8 + 349);
          if ( v9 )
          {
            *(_QWORD *)(v9 + 56) = 1LL;
            *(_DWORD *)(*((_QWORD *)v8 + 349) + 48LL) = 0;
            IofCompleteRequest(*((PIRP *)v8 + 349), 0);
          }
          UsbhSetPdo_FailIo(v7);
          Log(a1, 2, 1380861000, *((unsigned __int8 *)v8 + 2741), v7);
          *((_BYTE *)v8 + 2741) = 0;
        }
      }
      ++v2;
      result = FdoExt(a1);
    }
    while ( v2 <= *((unsigned __int8 *)result + 2938) );
  }
  return result;
}
