/*
 * XREFs of WPP_SF_q_guid__guid_ @ 0x1800C3608
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180020D60 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_q_guid__guid_(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h]
  __int64 v7; // [rsp+98h] [rbp+30h]
  va_list va1; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  v6 = va_arg(va1, _QWORD);
  v7 = va_arg(va1, _QWORD);
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_ea93f1868512325b454513e390c361b8_Traceguids,
           73LL,
           (__int64 *)va,
           8LL,
           v6,
           16LL,
           v7);
}
