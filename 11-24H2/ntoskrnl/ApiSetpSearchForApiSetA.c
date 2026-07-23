/*
 * XREFs of ApiSetpSearchForApiSetA @ 0x14065E89C
 * Callers:
 *     ApiSetQuerySchemaInfo2 @ 0x14065E23C (ApiSetQuerySchemaInfo2.c)
 *     ApiSetCompose_ProcessV7Extension_Phase1 @ 0x14066031C (ApiSetCompose_ProcessV7Extension_Phase1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSetA(_DWORD *a1, unsigned __int8 *a2, unsigned __int16 a3)
{
  unsigned int v3; // edi
  int v4; // ebx
  unsigned __int8 *v5; // rsi
  char *v7; // r10
  int v8; // ebp
  __int64 v9; // r11
  char v10; // cl
  __int64 v11; // r11
  int v12; // r8d
  int v13; // ecx
  int v14; // edx
  __int64 v15; // r10
  int v17; // r8d
  unsigned __int8 *v18; // r10
  unsigned __int8 v19; // r9
  unsigned __int8 v20; // di

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v7 = (char *)a2;
  if ( a3 )
  {
    v8 = a1[6];
    v9 = a3;
    do
    {
      v10 = *v7 + 32;
      if ( (unsigned __int8)(*v7 - 65) > 0x19u )
        v10 = *v7;
      ++v7;
      v3 = v10 + v8 * v3;
      --v9;
    }
    while ( v9 );
  }
  v11 = 0LL;
  v12 = 0;
  v13 = a1[3] - 1;
  if ( v13 < 0 )
    return v11;
  while ( 1 )
  {
    v14 = (v13 + v12) >> 1;
    v15 = (unsigned int)a1[5] + 8LL * v14;
    if ( v3 >= *(_DWORD *)((char *)a1 + v15) )
      break;
    v13 = v14 - 1;
LABEL_11:
    if ( v12 > v13 )
      return v11;
  }
  if ( v3 > *(_DWORD *)((char *)a1 + v15) )
  {
    v12 = v14 + 1;
    goto LABEL_11;
  }
  v11 = (__int64)&a1[6 * *(_DWORD *)((char *)a1 + v15 + 4)] + (unsigned int)a1[4];
  if ( !v11 )
    return v11;
  v17 = *(_DWORD *)(v11 + 12) >> 1;
  v18 = (unsigned __int8 *)a1 + *(unsigned int *)(v11 + 4);
  if ( !v4 || !v17 )
    return 0LL;
  while ( v17 )
  {
    v19 = *v18;
    v20 = *v5 + 32;
    if ( (unsigned __int8)(*v5 - 65) > 0x19u )
      v20 = *v5;
    if ( (unsigned __int8)(*v18 - 65) <= 0x19u )
      v19 += 32;
    if ( v20 < v19 || v20 > v19 )
      return 0LL;
    ++v5;
    v18 += 2;
    --v17;
    if ( !--v4 )
      return v11;
  }
  return v11;
}
