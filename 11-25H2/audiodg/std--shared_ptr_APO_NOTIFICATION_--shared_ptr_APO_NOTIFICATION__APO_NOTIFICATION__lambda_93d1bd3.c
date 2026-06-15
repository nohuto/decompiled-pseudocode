/*
 * XREFs of std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_93d1bd3494f7725f046ab0fa90992741__0_ @ 0x1400165C4
 * Callers:
 *     ?QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x140016438 (-QueueInitialVolumeNotification@@YAJW4APO_NOTIFICATION_TYPE@@AEAUAUDIO_ENDPOINT_VOLUME_APO_NOTIF.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_93d1bd3494f7725f046ab0fa90992741__0_(
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
  *(_QWORD *)v5 = off_14009DDE0;
  *((_QWORD *)v5 + 2) = a2;
  *a1 = a2;
  a1[1] = v5;
  return a1;
}
