/*
 * XREFs of ApiSetValidateSchemaFormat @ 0x140653D04
 * Callers:
 *     ApiSetComposeSchema @ 0x1406540FC (ApiSetComposeSchema.c)
 *     ApiSetComposeSchema_V7 @ 0x1406555B4 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1404AC7B8 (ApiSetpSearchForApiSet.c)
 *     ApiSetValidateSchemaExtensionFormat_V7 @ 0x140654E8C (ApiSetValidateSchemaExtensionFormat_V7.c)
 *     ApiSetValidateSchemaFormat_V7 @ 0x140654FC4 (ApiSetValidateSchemaFormat_V7.c)
 */

__int64 __fastcall ApiSetValidateSchemaFormat(__int64 a1, unsigned int a2)
{
  unsigned int v5; // r8d
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 i; // r14
  unsigned int *v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // r10
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r15
  _DWORD *v18; // rax
  unsigned int v19; // r9d
  unsigned int v20; // esi
  unsigned int v21; // ecx
  unsigned int v22; // r9d
  unsigned int v23; // eax
  unsigned __int64 v24; // rcx
  unsigned int v25; // eax

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
          v6 = *(unsigned int *)(a1 + 12);
          if ( (unsigned __int64)(24 * v6) > 0xFFFFFFFF )
            return (unsigned int)-1073741675;
          v7 = 24 * v6 + 28;
          if ( v7 < 0x1C )
            return (unsigned int)-1073741675;
          if ( v7 <= v5 )
          {
            for ( i = 0LL; (unsigned int)i < (unsigned int)v6; i = (unsigned int)(i + 1) )
            {
              v9 = (unsigned int *)(a1 + *(unsigned int *)(a1 + 16) + 24 * i);
              v10 = v9[2];
              if ( v10 > 0xFFFF )
                return (unsigned int)-1073741596;
              if ( v9[3] > 0xFFFF )
                return (unsigned int)-1073741596;
              v11 = v9[1];
              if ( (_DWORD)v11 )
              {
                if ( (unsigned int)v11 < v7 )
                  return (unsigned int)-1073741596;
              }
              v12 = v11 + v10;
              if ( v12 < (unsigned int)v11 )
                return (unsigned int)-1073741675;
              if ( v12 > v5 )
                return (unsigned int)-1073741596;
              if ( (unsigned int *)ApiSetpSearchForApiSet(
                                     (_DWORD *)a1,
                                     (const WCHAR *)(a1 + v11),
                                     *((_WORD *)v9 + 6) >> 1) != v9 )
                return (unsigned int)-1073741596;
              v13 = v9[4];
              if ( v13 )
              {
                if ( v13 < v7 )
                  return (unsigned int)-1073741596;
              }
              v14 = v9[5];
              v15 = 20 * v14;
              if ( (unsigned __int64)(20 * v14) > 0xFFFFFFFF || v13 + v15 < v13 )
                return (unsigned int)-1073741675;
              v5 = *(_DWORD *)(a1 + 4);
              if ( v13 + v15 > v5 )
                return (unsigned int)-1073741596;
              v16 = 0LL;
              if ( (_DWORD)v14 )
              {
                v17 = v9[4];
                do
                {
                  v18 = (_DWORD *)(a1 + v17 + 20 * v16);
                  v19 = v18[2];
                  if ( v19 > 0xFFFF )
                    return (unsigned int)-1073741596;
                  v20 = v18[4];
                  if ( v20 > 0xFFFF )
                    return (unsigned int)-1073741596;
                  v21 = v18[1];
                  if ( v21 )
                  {
                    if ( v21 < v7 )
                      return (unsigned int)-1073741596;
                  }
                  v22 = v21 + v19;
                  if ( v22 < v21 )
                    return (unsigned int)-1073741675;
                  if ( v22 > v5 )
                    return (unsigned int)-1073741596;
                  v23 = v18[3];
                  if ( v23 )
                  {
                    if ( v23 < v7 )
                      return (unsigned int)-1073741596;
                  }
                  if ( v20 + v23 < v23 )
                    return (unsigned int)-1073741675;
                  if ( v20 + v23 > v5 )
                    return (unsigned int)-1073741596;
                  v16 = (unsigned int)(v16 + 1);
                }
                while ( (unsigned int)v16 < (unsigned int)v14 );
              }
              LODWORD(v6) = *(_DWORD *)(a1 + 12);
            }
            v24 = 8LL * (unsigned int)v6;
            if ( v24 <= 0xFFFFFFFF )
            {
              v25 = *(_DWORD *)(a1 + 20);
              if ( v25 + (unsigned int)v24 >= v25 )
                return v5 < v25 + (unsigned int)v24 ? 0xC00000E4 : 0;
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
