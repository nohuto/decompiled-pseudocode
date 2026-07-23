/*
 * XREFs of PopEsPublishSetting @ 0x1406E9D2C
 * Callers:
 *     PopEsWorker @ 0x140AAAEB0 (PopEsWorker.c)
 * Callees:
 *     Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1404F243C (Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 */

NTSTATUS PopEsPublishSetting()
{
  int v0; // ecx
  _DWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  if ( (unsigned int)Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    v0 = PopEsModeGp;
    if ( PopEsReason != 32 )
      v0 = PopEsMode;
    Buffer[0] = v0;
  }
  else
  {
    Buffer[0] = PopEsMode;
  }
  Buffer[2] = (unsigned __int8)byte_140F0B755;
  Buffer[1] = dword_140F0B750;
  return ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_SETTING, Buffer, 0xCu, 0LL, 0LL, 0, 0);
}
