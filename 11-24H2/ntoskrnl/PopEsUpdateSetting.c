/*
 * XREFs of PopEsUpdateSetting @ 0x14075D7C8
 * Callers:
 *     PopEsWorker @ 0x140AC95F0 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x1404D9470 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

void PopEsUpdateSetting()
{
  int v0; // ecx
  _DWORD v1[4]; // [rsp+40h] [rbp-28h] BYREF

  v0 = PopEsModeGp;
  v1[2] = (unsigned __int8)byte_140F0BA95;
  if ( PopEsReason != 32 )
    v0 = PopEsMode;
  v1[1] = dword_140F0BA90;
  v1[0] = v0;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_SETTING, (__int64)v1);
  PopTraceEsSetting();
}
