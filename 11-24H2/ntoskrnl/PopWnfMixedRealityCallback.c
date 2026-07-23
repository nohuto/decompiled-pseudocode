/*
 * XREFs of PopWnfMixedRealityCallback @ 0x14074B6B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409A2DCC (PopSetPowerSettingValueAcDc.c)
 *     ExQueryWnfStateData @ 0x140A31340 (ExQueryWnfStateData.c)
 */

__int64 __fastcall PopWnfMixedRealityCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v4[8]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v5; // [rsp+30h] [rbp-18h] BYREF

  v3 = 8;
  v1 = ExQueryWnfStateData(a1, v4, &v5, &v3);
  if ( v1 >= 0 )
  {
    if ( v3 >= 8 )
    {
      v3 = (v5 >> 1) & 1;
      PopSetPowerSettingValueAcDc(&GUID_MIXED_REALITY_MODE, 4LL, &v3);
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}
