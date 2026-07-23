/*
 * XREFs of PopEsOverrideSetByGroupPolicy @ 0x140AC740C
 * Callers:
 *     PopEsEvaluateNextStateV2 @ 0x140AC7298 (PopEsEvaluateNextStateV2.c)
 * Callees:
 *     PopReadRegKeyValue @ 0x1404A667C (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PopEsOverrideSetByGroupPolicy(bool *a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-69h] BYREF
  _OWORD v4[2]; // [rsp+38h] [rbp-61h] BYREF
  int v5; // [rsp+58h] [rbp-41h]
  _OWORD v6[8]; // [rsp+60h] [rbp-39h] BYREF

  v3 = 0;
  v6[0] = *(_OWORD *)L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\Power\\EnergySaver";
  v6[1] = *(_OWORD *)L"y\\Machine\\Software\\Policies\\Microsoft\\Power\\EnergySaver";
  v6[2] = *(_OWORD *)L"e\\Software\\Policies\\Microsoft\\Power\\EnergySaver";
  v6[3] = *(_OWORD *)L"re\\Policies\\Microsoft\\Power\\EnergySaver";
  v6[4] = *(_OWORD *)L"ies\\Microsoft\\Power\\EnergySaver";
  v6[5] = *(_OWORD *)L"osoft\\Power\\EnergySaver";
  v6[6] = *(_OWORD *)L"wer\\EnergySaver";
  v5 = *(_DWORD *)L"r";
  v6[7] = *(_OWORD *)L"gySaver";
  *a1 = 0;
  v4[0] = *(_OWORD *)L"EnableEnergySaver";
  v4[1] = *(_OWORD *)L"ergySaver";
  result = PopReadRegKeyValue((wchar_t *)v6, (const WCHAR *)v4, 4uLL, 4, &v3);
  if ( (int)result >= 0 )
  {
    *a1 = v3 == 1;
    return (unsigned int)result;
  }
  return result;
}
