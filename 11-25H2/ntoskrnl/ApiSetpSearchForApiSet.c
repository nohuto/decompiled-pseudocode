/*
 * XREFs of ApiSetpSearchForApiSet @ 0x1404AC7B8
 * Callers:
 *     ApiSetResolveToHost @ 0x1404ECC58 (ApiSetResolveToHost.c)
 *     ApiSetQuerySchemaInfo @ 0x140653AA0 (ApiSetQuerySchemaInfo.c)
 *     ApiSetValidateSchemaFormat @ 0x140653D04 (ApiSetValidateSchemaFormat.c)
 *     ApiSetComposeSchema @ 0x1406540FC (ApiSetComposeSchema.c)
 *     ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x14065702C (ApiSetCompose_V7_ProcessV6Extension_Phase1.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1408694A0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  SIZE_T v3; // rsi
  unsigned int v6; // r10d
  const WCHAR *v7; // r11
  __int64 v8; // rbx
  WCHAR v9; // dx
  __int64 v10; // rbx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  char *v14; // rdi

  v3 = a3;
  v6 = 0;
  v7 = a2;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      v9 = *v7;
      if ( (unsigned __int16)(*v7 - 65) <= 0x19u )
        v9 += 32;
      ++v7;
      v6 = v6 * a1[6] + v9;
      --v8;
    }
    while ( v8 );
  }
  v10 = 0LL;
  v11 = a1[3] - 1;
  v12 = 0;
  while ( v12 <= v11 )
  {
    v13 = (v12 + v11) >> 1;
    v14 = (char *)a1 + (unsigned int)a1[5];
    if ( v6 >= *(_DWORD *)&v14[8 * v13] )
    {
      if ( v6 <= *(_DWORD *)&v14[8 * v13] )
      {
        v10 = (__int64)&a1[6 * *(unsigned int *)&v14[8 * v13 + 4]] + (unsigned int)a1[4];
        if ( v10
          && RtlCompareUnicodeStrings(
               a2,
               v3,
               (PCWCH)((char *)a1 + *(unsigned int *)(v10 + 4)),
               *(_DWORD *)(v10 + 12) >> 1,
               1u) )
        {
          return 0LL;
        }
        return v10;
      }
      v12 = v13 + 1;
    }
    else
    {
      v11 = v13 - 1;
    }
  }
  return v10;
}
