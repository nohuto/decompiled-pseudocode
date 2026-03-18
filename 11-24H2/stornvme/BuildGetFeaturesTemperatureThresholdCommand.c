/*
 * XREFs of BuildGetFeaturesTemperatureThresholdCommand @ 0x14000D690
 * Callers:
 *     QueryTemperatureInfoHealthLogCompletion @ 0x140025E90 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x140026060 (QueryTemperatureThresholdCompletion.c)
 * Callees:
 *     <none>
 */

int __fastcall BuildGetFeaturesTemperatureThresholdCommand(__int64 a1, unsigned __int8 a2, char a3)
{
  int v3; // eax
  unsigned int v4; // r9d
  int result; // eax

  v3 = *(_DWORD *)(a1 + 44);
  *(_BYTE *)a1 = 10;
  *(_BYTE *)(a1 + 40) = 4;
  v4 = (v3 ^ (v3 ^ (a2 << 16)) & 0xF0000) & 0xFFCFFFFF;
  result = v4 | 0x100000;
  if ( a3 )
    v4 |= 0x100000u;
  *(_DWORD *)(a1 + 44) = v4;
  return result;
}
