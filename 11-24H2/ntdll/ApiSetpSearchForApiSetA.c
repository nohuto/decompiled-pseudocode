/*
 * XREFs of ApiSetpSearchForApiSetA @ 0x180133744
 * Callers:
 *     ApiSetQuerySchemaInfo2 @ 0x180133370 (ApiSetQuerySchemaInfo2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpSearchForApiSetA(_DWORD *a1, unsigned __int8 *a2, unsigned __int16 a3)
{
  unsigned int v3; // edi
  int v4; // ebx
  unsigned __int8 *v5; // rsi
  char *v7; // r10
  __int64 v8; // r11
  char v9; // cl
  __int64 v10; // r11
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  __int64 v14; // r10
  int v16; // r8d
  unsigned __int8 *v17; // r10
  unsigned __int8 v18; // r9
  unsigned __int8 v19; // di

  v3 = 0;
  v4 = a3;
  v5 = a2;
  v7 = (char *)a2;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      v9 = *v7 + 32;
      if ( (unsigned __int8)(*v7 - 65) > 0x19u )
        v9 = *v7;
      ++v7;
      v3 = v9 + a1[6] * v3;
      --v8;
    }
    while ( v8 );
  }
  v10 = 0LL;
  v11 = 0;
  v12 = a1[3] - 1;
  if ( v12 < 0 )
    return v10;
  while ( 1 )
  {
    v13 = (v12 + v11) >> 1;
    v14 = (unsigned int)a1[5] + 8LL * v13;
    if ( v3 >= *(_DWORD *)((char *)a1 + v14) )
      break;
    v12 = v13 - 1;
LABEL_11:
    if ( v11 > v12 )
      return v10;
  }
  if ( v3 > *(_DWORD *)((char *)a1 + v14) )
  {
    v11 = v13 + 1;
    goto LABEL_11;
  }
  v10 = (__int64)&a1[6 * *(_DWORD *)((char *)a1 + v14 + 4)] + (unsigned int)a1[4];
  if ( !v10 )
    return v10;
  v16 = *(_DWORD *)(v10 + 12) >> 1;
  v17 = (unsigned __int8 *)a1 + *(unsigned int *)(v10 + 4);
  if ( !v4 || !v16 )
    return 0LL;
  while ( v16 )
  {
    v18 = *v17;
    v19 = *v5 + 32;
    if ( (unsigned __int8)(*v5 - 65) > 0x19u )
      v19 = *v5;
    if ( (unsigned __int8)(*v17 - 65) <= 0x19u )
      v18 += 32;
    if ( v19 < v18 || v19 > v18 )
      return 0LL;
    ++v5;
    v17 += 2;
    --v16;
    if ( !--v4 )
      return v10;
  }
  return v10;
}
