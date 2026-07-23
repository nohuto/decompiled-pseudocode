/*
 * XREFs of ApiSetValidateSchemaFormat @ 0x14065E680
 * Callers:
 *     ApiSetComposeSchema @ 0x14065EA7C (ApiSetComposeSchema.c)
 *     ApiSetComposeSchema_V7 @ 0x14065FE98 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1404A8708 (ApiSetpSearchForApiSet.c)
 *     ApiSetValidateSchemaExtensionFormat_V7 @ 0x14065F7F8 (ApiSetValidateSchemaExtensionFormat_V7.c)
 *     ApiSetValidateSchemaFormat_V7 @ 0x14065F930 (ApiSetValidateSchemaFormat_V7.c)
 */

__int64 __fastcall ApiSetValidateSchemaFormat(__int64 a1, unsigned int a2)
{
  unsigned int v5; // r8d
  unsigned __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 i; // r14
  __int64 v9; // rax
  unsigned int *v10; // rsi
  unsigned int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // r12
  int v16; // eax
  unsigned int v17; // r11d
  __int64 j; // rdx
  __int64 v19; // r9
  unsigned int v20; // r10d
  unsigned int v21; // r15d
  unsigned int v22; // eax
  unsigned int v23; // r10d
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // eax

  if ( *(_BYTE *)a1 == 7 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 2) != 0 )
      return ApiSetValidateSchemaExtensionFormat_V7();
    return ApiSetValidateSchemaFormat_V7();
  }
  if ( *(_DWORD *)a1 == 6 )
  {
    if ( *(_DWORD *)(a1 + 16) <= 8u )
    {
LABEL_10:
      if ( a2 >= 0x1C )
      {
        v5 = *(_DWORD *)(a1 + 4);
        if ( v5 <= a2 )
        {
          v6 = 24LL * *(unsigned int *)(a1 + 12);
          if ( v6 > 0xFFFFFFFF )
            return (unsigned int)-1073741675;
          v7 = v6 + 28;
          if ( (unsigned int)v6 >= 0xFFFFFFE4 )
            return (unsigned int)-1073741675;
          if ( v7 <= v5 )
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              v9 = *(unsigned int *)(a1 + 12);
              if ( (unsigned int)i >= (unsigned int)v9 )
                break;
              v10 = (unsigned int *)(a1 + *(unsigned int *)(a1 + 16) + 24 * i);
              v11 = v10[2];
              if ( v11 > 0xFFFF )
                return (unsigned int)-1073741596;
              if ( v10[3] > 0xFFFF )
                return (unsigned int)-1073741596;
              v12 = v10[1];
              if ( (_DWORD)v12 )
              {
                if ( (unsigned int)v12 < v7 )
                  return (unsigned int)-1073741596;
              }
              v13 = v12 + v11;
              if ( v13 < (unsigned int)v12 )
                return (unsigned int)-1073741675;
              if ( v13 > *(_DWORD *)(a1 + 4) )
                return (unsigned int)-1073741596;
              if ( (unsigned int *)ApiSetpSearchForApiSet(
                                     (_DWORD *)a1,
                                     (const WCHAR *)(a1 + v12),
                                     *((_WORD *)v10 + 6) >> 1) != v10 )
                return (unsigned int)-1073741596;
              v14 = v10[4];
              if ( (_DWORD)v14 )
              {
                if ( (unsigned int)v14 < v7 )
                  return (unsigned int)-1073741596;
              }
              v15 = v10[5];
              v16 = 20 * v15;
              if ( (unsigned __int64)(20 * v15) > 0xFFFFFFFF || (int)v14 + v16 < (unsigned int)v14 )
                return (unsigned int)-1073741675;
              v17 = *(_DWORD *)(a1 + 4);
              if ( (int)v14 + v16 > v17 )
                return (unsigned int)-1073741596;
              for ( j = 0LL; (unsigned int)j < (unsigned int)v15; j = (unsigned int)(j + 1) )
              {
                v19 = a1 + v14;
                v20 = *(_DWORD *)(a1 + v14 + 20 * j + 8);
                if ( v20 > 0xFFFF )
                  return (unsigned int)-1073741596;
                v21 = *(_DWORD *)(v19 + 20 * j + 16);
                if ( v21 > 0xFFFF )
                  return (unsigned int)-1073741596;
                v22 = *(_DWORD *)(v19 + 20 * j + 4);
                if ( v22 )
                {
                  if ( v22 < v7 )
                    return (unsigned int)-1073741596;
                }
                v23 = v22 + v20;
                if ( v23 < v22 )
                  return (unsigned int)-1073741675;
                if ( v23 > v17 )
                  return (unsigned int)-1073741596;
                v24 = *(_DWORD *)(v19 + 20 * j + 12);
                if ( v24 )
                {
                  if ( v24 < v7 )
                    return (unsigned int)-1073741596;
                }
                if ( v21 + v24 < v24 )
                  return (unsigned int)-1073741675;
                if ( v21 + v24 > v17 )
                  return (unsigned int)-1073741596;
              }
            }
            v25 = 8 * v9;
            if ( (unsigned __int64)(8 * v9) <= 0xFFFFFFFF )
            {
              v26 = *(_DWORD *)(a1 + 20);
              if ( v26 + v25 >= v26 )
                return *(_DWORD *)(a1 + 4) < v26 + v25 ? 0xC00000E4 : 0;
            }
            return (unsigned int)-1073741675;
          }
        }
      }
      return (unsigned int)-1073741596;
    }
    if ( *(_BYTE *)(a1 + 28) == 7 )
      return ApiSetValidateSchemaFormat_V7();
  }
  if ( *(_DWORD *)a1 > 4u )
    goto LABEL_10;
  return (unsigned int)-1073741637;
}
