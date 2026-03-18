/*
 * XREFs of VslSecurePoolDestroy @ 0x14058E490
 * Callers:
 *     ExDestroyPool @ 0x140654030 (ExDestroyPool.c)
 *     ExpSecurePoolCreate @ 0x140658620 (ExpSecurePoolCreate.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     Feature_DisableSecurePool__private_IsEnabledDeviceUsageNoInline @ 0x14058CB14 (Feature_DisableSecurePool__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall VslSecurePoolDestroy(__int64 a1)
{
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  if ( (unsigned int)Feature_DisableSecurePool__private_IsEnabledDeviceUsageNoInline() )
    return 3221225659LL;
  memset_0(v3, 0, 0x68uLL);
  v4 = a1;
  return VslpEnterIumSecureMode(2u, 84LL, 0, (__int64)v3);
}
