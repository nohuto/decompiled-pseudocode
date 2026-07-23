/*
 * XREFs of PopEsEvaluateNextStateV2 @ 0x140AC7298
 * Callers:
 *     PopEsUpdateState @ 0x1404E43DC (PopEsUpdateState.c)
 * Callees:
 *     PopEsOverrideSetByGroupPolicy @ 0x140AC740C (PopEsOverrideSetByGroupPolicy.c)
 */

__int64 __fastcall PopEsEvaluateNextStateV2(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  _DWORD *v3; // rdi
  unsigned int v5; // eax
  unsigned int v6; // r8d
  int v7; // ecx
  char v8; // bp
  bool v9; // cc
  char v10; // al
  unsigned int v11; // esi
  __int64 result; // rax
  int v13; // eax
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (_DWORD *)a2;
  v5 = 0;
  *(_DWORD *)a2 = 0;
  if ( *(_BYTE *)(a1 + 1) )
  {
    v6 = *(_DWORD *)(a1 + 8);
    if ( v6 )
    {
      v7 = 100 * *(_DWORD *)(a1 + 12);
      a2 = (v7 + (v6 >> 1)) % v6;
      v5 = (v7 + (v6 >> 1)) / v6;
    }
  }
  if ( *(_BYTE *)a1 || v5 > dword_140F0B3D0 )
  {
    v8 = 0;
    if ( *(_BYTE *)a1 )
    {
LABEL_9:
      v10 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    v8 = 1;
  }
  v9 = v5 <= 0x14;
  v10 = 1;
  if ( !v9 )
    goto LABEL_9;
LABEL_10:
  v14 = 0;
  PopEsModeGp = 2;
  v11 = v10 != 0 ? 240 : 128;
  if ( (int)PopEsOverrideSetByGroupPolicy(&v14, a2) >= 0 && v14 )
  {
    *v3 = 32;
    result = v11;
    PopEsModeGp = 1;
    return result;
  }
  v13 = PopEsMode;
  if ( !PopEsMode )
  {
    if ( !*(_BYTE *)a1 )
      goto LABEL_24;
    v13 = 2;
    PopEsMode = 2;
  }
  if ( v13 == 1 )
  {
    *v3 = 1;
    return v11;
  }
  if ( v13 == 2 && dword_140F0B3D0 && *(_BYTE *)(a1 + 1) && *(_DWORD *)(a1 + 8) && v8 )
  {
    *v3 = 2;
    return v11;
  }
LABEL_24:
  if ( byte_140F0B3D4 && dword_140F0B3D0 && PopEsBgActivityPolicy == 1 )
  {
    v2 = 240;
    *v3 = 8;
  }
  else if ( PopEsEnabledOnHost )
  {
    *v3 = 16;
    return v11;
  }
  return v2;
}
