/*
 * XREFs of PopEsUpdateSetting @ 0x14075C768
 * Callers:
 *     PopEsWorker @ 0x140AC7510 (PopEsWorker.c)
 * Callees:
 *     PopTraceEsSetting @ 0x1404D28C0 (PopTraceEsSetting.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 */

void PopEsUpdateSetting()
{
  int v0; // ecx
  _DWORD Buffer[4]; // [rsp+40h] [rbp-28h] BYREF

  v0 = PopEsModeGp;
  Buffer[2] = (unsigned __int8)byte_140F0B3D5;
  if ( PopEsReason != 32 )
    v0 = PopEsMode;
  Buffer[1] = dword_140F0B3D0;
  Buffer[0] = v0;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_SETTING, Buffer, 0xCu, 0LL, 0LL, 0, 0);
  PopTraceEsSetting();
}
