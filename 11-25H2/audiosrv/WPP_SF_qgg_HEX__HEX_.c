/*
 * XREFs of WPP_SF_qgg_HEX__HEX_ @ 0x1800C4AC0
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180009FC0 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qgg_HEX__HEX_(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+C8h] [rbp+20h]
  __int64 v6; // [rsp+D0h] [rbp+28h] BYREF
  va_list va1; // [rsp+D0h] [rbp+28h]
  va_list va2; // [rsp+D8h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids,
           75LL,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2);
}
