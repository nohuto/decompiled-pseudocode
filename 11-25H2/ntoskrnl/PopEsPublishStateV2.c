/*
 * XREFs of PopEsPublishStateV2 @ 0x140750CF8
 * Callers:
 *     PopEsUpdateState @ 0x1404B8AA0 (PopEsUpdateState.c)
 *     PopEsPublishState @ 0x140750C88 (PopEsPublishState.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409649CC (PopSetPowerSettingValueAcDc.c)
 */

__int64 __fastcall PopEsPublishStateV2(char a1)
{
  int v2; // ecx
  int v4; // [rsp+60h] [rbp+20h] BYREF
  int v5; // [rsp+68h] [rbp+28h] BYREF
  BOOL v6; // [rsp+70h] [rbp+30h] BYREF
  unsigned int v7; // [rsp+78h] [rbp+38h] BYREF
  int v8; // [rsp+7Ch] [rbp+3Ch]

  v4 = 0;
  v8 = -1;
  v7 = ((unsigned __int8)dword_140E6748C << 14) | 1;
  ZwUpdateWnfStateData((__int64)&WNF_SEB_ENERGY_SAVER_STATE_V2, (__int64)&v7);
  v5 = dword_140E6748C;
  ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_STATE_V2, (__int64)&v5);
  if ( a1 )
  {
    v2 = 0;
    if ( dword_140E6748C == 240 )
      v2 = 2;
    v7 = v2 | v7 & 0xFFC03FFD;
    ZwUpdateWnfStateData((__int64)&WNF_PO_ENERGY_SAVER_STATE, (__int64)&v7);
  }
  v6 = dword_140E6748C == 240;
  PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4LL, &v6);
  if ( dword_140E6748C )
  {
    if ( dword_140E6748C == 128 )
    {
      v4 = 1;
    }
    else if ( dword_140E6748C == 240 )
    {
      v4 = 2;
    }
  }
  return PopSetPowerSettingValueAcDc(&GUID_ENERGY_SAVER_STATUS, 4LL, &v4);
}
