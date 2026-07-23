/*
 * XREFs of ApiSetValidateSchemaElements_V7 @ 0x14065F738
 * Callers:
 *     ApiSetValidateSchemaFormat_V7 @ 0x14065F930 (ApiSetValidateSchemaFormat_V7.c)
 *     ApiSetComposeSchema_V7 @ 0x14065FE98 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetValidateSchemaElements_V7(__int64 a1)
{
  unsigned int v1; // r10d
  unsigned int v2; // edx
  unsigned int v4; // r9d
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r11
  unsigned int v10; // edi
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // ecx

  v1 = *(unsigned __int16 *)(a1 + 48);
  v2 = 0;
  v4 = 0;
  if ( *(_WORD *)(a1 + 48) )
  {
    v5 = *(unsigned __int16 *)(a1 + 18);
    v6 = *(unsigned __int8 *)(a1 + 52);
    v7 = *(unsigned int *)(a1 + 44);
    while ( 1 )
    {
      v8 = v7 + v6 * v4 - v5;
      if ( (*(_BYTE *)(v8 + a1 + 10) & 2) != 0 )
      {
        if ( *(unsigned __int16 *)(v8 + a1 + 4) > *(unsigned __int16 *)(a1 + 96) - 1 )
          break;
        v9 = *(unsigned int *)(a1 + 92);
        v10 = *(_DWORD *)(a1 + 40);
        v11 = a1 + *(unsigned __int8 *)(a1 + 100) * (unsigned __int64)*(unsigned __int16 *)(v8 + a1 + 4) - v5;
        v12 = *(_DWORD *)(v9 + v11 + 4);
        if ( v12 > v10 )
          break;
        v13 = v12 + 2 * *(unsigned __int16 *)(v9 + v11 + 8);
        if ( v13 < v12 )
          return v2;
        if ( v13 > v10 )
          break;
      }
      if ( ++v4 >= v1 )
        return v2;
    }
    return (unsigned int)-1073741596;
  }
  return v2;
}
