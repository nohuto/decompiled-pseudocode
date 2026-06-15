/*
 * XREFs of std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_96bc077b0d5ed2f4f14aec6f3919a807__0_ @ 0x14005EEAC
 * Callers:
 *     ?OnNotifyVolume2@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z @ 0x14003EEFC (-OnNotifyVolume2@CAPOEndpointNotificationsHandler@@AEAAJPEAUAUDIO_VOLUME_NOTIFICATION_BLOCK@@@Z.c)
 * Callees:
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___ @ 0x1400324EC (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___--__Temp.c)
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::shared_ptr_APO_NOTIFICATION_::shared_ptr_APO_NOTIFICATION__APO_NOTIFICATION__lambda_96bc077b0d5ed2f4f14aec6f3919a807__0_(
        _QWORD *a1,
        __int64 a2,
        char a3)
{
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+30h] [rbp-18h]
  _DWORD *v8; // [rsp+50h] [rbp+8h]
  char v9; // [rsp+60h] [rbp+18h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  v9 = a3;
  v6[0] = a2;
  v6[1] = &v9;
  v8 = operator new(0x18uLL);
  *(_OWORD *)v8 = 0LL;
  v8[2] = 1;
  v8[3] = 1;
  *(_QWORD *)v8 = off_14009ED88;
  *((_QWORD *)v8 + 2) = a2;
  *a1 = a2;
  a1[1] = v8;
  v7 = 0;
  std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___((__int64)v6);
  return a1;
}
