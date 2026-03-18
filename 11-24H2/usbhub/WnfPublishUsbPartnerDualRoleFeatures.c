/*
 * XREFs of WnfPublishUsbPartnerDualRoleFeatures @ 0x14005FBF0
 * Callers:
 *     UsbhSetupDevice @ 0x1400280C8 (UsbhSetupDevice.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x14005CC70 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x14005CF30 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

__int64 __fastcall WnfPublishUsbPartnerDualRoleFeatures(__int64 a1, char a2, int a3)
{
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  char v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+49h] [rbp-1Fh]

  v4 = a1;
  v5 = a2;
  v6 = a3;
  return ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v4, 13LL, 0LL, 0LL, 0, 0);
}
