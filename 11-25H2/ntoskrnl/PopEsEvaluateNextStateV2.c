/*
 * XREFs of PopEsEvaluateNextStateV2 @ 0x140AC3FC4
 * Callers:
 *     PopEsUpdateState @ 0x1404B8AA0 (PopEsUpdateState.c)
 * Callees:
 *     Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1404F243C (Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SustainabilityFixes_Q4__private_IsEnabledDeviceUsageNoInline @ 0x1405D3EBC (Feature_SustainabilityFixes_Q4__private_IsEnabledDeviceUsageNoInline.c)
 *     PopEsOverrideSetByGroupPolicy @ 0x1406EAC00 (PopEsOverrideSetByGroupPolicy.c)
 */

__int64 __fastcall PopEsEvaluateNextStateV2(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  bool v10; // bp
  char v11; // al
  unsigned int v12; // esi
  __int64 result; // rax
  int v14; // eax
  bool v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v5 = 0;
  *a2 = 0;
  if ( *(_BYTE *)(a1 + 1) && *(_DWORD *)(a1 + 8) )
  {
    IsEnabledDeviceUsageNoInline = Feature_SustainabilityFixes_Q4__private_IsEnabledDeviceUsageNoInline();
    v7 = 100 * *(_DWORD *)(a1 + 12);
    v8 = *(_DWORD *)(a1 + 8);
    if ( IsEnabledDeviceUsageNoInline )
      v9 = v7 + (v8 >> 1);
    else
      v9 = v8 + v7 - 1;
    v5 = v9 / v8;
  }
  if ( *(_BYTE *)a1 )
  {
    v10 = 0;
    goto LABEL_11;
  }
  v10 = v5 <= dword_140F0B750;
  if ( v5 > 0x14 )
  {
LABEL_11:
    v11 = 0;
    goto LABEL_12;
  }
  v11 = 1;
LABEL_12:
  v12 = v11 != 0 ? 240 : 128;
  if ( (unsigned int)Feature_EnergySaver_GroupPolicy__private_IsEnabledDeviceUsageNoInline() )
  {
    v15 = 0;
    PopEsModeGp = 2;
    if ( (int)PopEsOverrideSetByGroupPolicy(&v15) >= 0 && v15 )
    {
      *a2 = 32;
      result = v12;
      PopEsModeGp = 1;
      return result;
    }
  }
  v14 = PopEsMode;
  if ( !PopEsMode )
  {
    if ( !*(_BYTE *)a1 )
      goto LABEL_27;
    v14 = 2;
    PopEsMode = 2;
  }
  if ( v14 == 1 )
  {
    *a2 = 1;
    return v12;
  }
  if ( v14 == 2 && dword_140F0B750 && *(_BYTE *)(a1 + 1) && *(_DWORD *)(a1 + 8) && v10 )
  {
    *a2 = 2;
    return v12;
  }
LABEL_27:
  if ( byte_140F0B754 && dword_140F0B750 && PopEsBgActivityPolicy == 1 )
  {
    v2 = 240;
    *a2 = 8;
  }
  else if ( PopEsEnabledOnHost )
  {
    *a2 = 16;
    return v12;
  }
  return v2;
}
