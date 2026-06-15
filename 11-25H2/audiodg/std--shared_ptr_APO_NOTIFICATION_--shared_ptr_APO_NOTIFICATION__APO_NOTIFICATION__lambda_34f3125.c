/*
 * XREFs of std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_34f3125d2a5da0aa5cf71fc88976a66f__0_ @ 0x14003F23C
 * Callers:
 *     ?OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003F054 (-OnNotifyVolume@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_34f3125d2a5da0aa5cf71fc88976a66f__0_(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *v5; // [rsp+50h] [rbp+8h]

  *a1 = 0LL;
  a1[1] = 0LL;
  v5 = operator new(0x18uLL);
  *(_OWORD *)v5 = 0LL;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = off_14009E088;
  *((_QWORD *)v5 + 2) = a2;
  *a1 = a2;
  a1[1] = v5;
  return a1;
}
