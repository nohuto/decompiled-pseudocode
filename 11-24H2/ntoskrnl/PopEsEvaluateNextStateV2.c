/*
 * XREFs of PopEsEvaluateNextStateV2 @ 0x140AC9360
 * Callers:
 *     PopEsUpdateState @ 0x1404ECC9C (PopEsUpdateState.c)
 * Callees:
 *     Feature_SustainabilityFixes_Q4__private_IsEnabledDeviceUsageNoInline @ 0x1405D8960 (Feature_SustainabilityFixes_Q4__private_IsEnabledDeviceUsageNoInline.c)
 *     PopEsOverrideSetByGroupPolicy @ 0x140AC94EC (PopEsOverrideSetByGroupPolicy.c)
 */

__int64 __fastcall PopEsEvaluateNextStateV2(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rsi
  unsigned int v5; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  char v10; // bp
  bool v11; // cc
  char v12; // al
  unsigned int v13; // edi
  __int64 result; // rax
  int v15; // eax
  char v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (_DWORD *)a2;
  v5 = 0;
  *(_DWORD *)a2 = 0;
  if ( *(_BYTE *)(a1 + 1) && *(_DWORD *)(a1 + 8) )
  {
    IsEnabledDeviceUsageNoInline = Feature_SustainabilityFixes_Q4__private_IsEnabledDeviceUsageNoInline();
    v7 = 100 * *(_DWORD *)(a1 + 12);
    v8 = *(_DWORD *)(a1 + 8);
    if ( IsEnabledDeviceUsageNoInline )
      v9 = v7 + (v8 >> 1);
    else
      v9 = v8 + v7 - 1;
    a2 = v9 % v8;
    v5 = v9 / v8;
  }
  if ( *(_BYTE *)a1 || v5 > dword_140F0BA90 )
  {
    v10 = 0;
    if ( *(_BYTE *)a1 )
    {
LABEL_12:
      v12 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    v10 = 1;
  }
  v11 = v5 <= 0x14;
  v12 = 1;
  if ( !v11 )
    goto LABEL_12;
LABEL_13:
  v16 = 0;
  PopEsModeGp = 2;
  v13 = v12 != 0 ? 240 : 128;
  if ( (int)PopEsOverrideSetByGroupPolicy(&v16, a2) >= 0 && v16 )
  {
    *v3 = 32;
    result = v13;
    PopEsModeGp = 1;
    return result;
  }
  v15 = PopEsMode;
  if ( !PopEsMode )
  {
    if ( !*(_BYTE *)a1 )
      goto LABEL_27;
    v15 = 2;
    PopEsMode = 2;
  }
  if ( v15 == 1 )
  {
    *v3 = 1;
    return v13;
  }
  if ( v15 == 2 && dword_140F0BA90 && *(_BYTE *)(a1 + 1) && *(_DWORD *)(a1 + 8) && v10 )
  {
    *v3 = 2;
    return v13;
  }
LABEL_27:
  if ( byte_140F0BA94 && dword_140F0BA90 && PopEsBgActivityPolicy == 1 )
  {
    v2 = 240;
    *v3 = 8;
  }
  else if ( PopEsEnabledOnHost )
  {
    *v3 = 16;
    return v13;
  }
  return v2;
}
