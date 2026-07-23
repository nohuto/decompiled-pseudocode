/*
 * XREFs of ApiSetQuerySchemaInfo @ 0x1801140BC
 * Callers:
 *     ApiSetQueryApiSetPresenceEx @ 0x1800EC180 (ApiSetQueryApiSetPresenceEx.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18008EE30 (RtlCompareUnicodeStrings.c)
 *     ApiSetpSearchForApiSet @ 0x1800B8390 (ApiSetpSearchForApiSet.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x180133B80 (ApiSetQuerySchemaInfo_V7.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo(__int64 a1, unsigned __int16 *a2, bool *a3, bool *a4)
{
  unsigned int v4; // ebx
  bool v9; // bp
  bool v10; // r12
  __int64 v12; // rcx
  char v13; // r8
  unsigned __int64 v14; // rdx
  unsigned __int16 *v15; // r11
  unsigned int v16; // eax
  _WORD *v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // edi
  unsigned int v20; // eax
  _WORD *v21; // r9
  int v22; // r10d
  int v23; // eax
  unsigned int *v24; // rax
  unsigned int *v25; // rdx
  unsigned int v26; // r10d
  unsigned int v27; // r9d
  _WORD *v28; // r8
  _WORD *v29; // r8
  int v30; // r9d
  int v31; // eax

  v4 = 0;
  *a3 = 0;
  *a4 = 0;
  v9 = 0;
  v10 = 0;
  if ( *(_BYTE *)a1 == 7 || *(_DWORD *)a1 == 6 && *(_DWORD *)(a1 + 16) > 8u && *(_BYTE *)(a1 + 28) == 7 )
    return ApiSetQuerySchemaInfo_V7();
  v12 = *a2;
  v13 = 0;
  if ( (unsigned __int16)v12 >= 8u )
  {
    v14 = **((_QWORD **)a2 + 1) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v14 == 0x2D004900500041LL || v14 == 0x2D005400580045LL )
      v13 = 1;
  }
  v15 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
  if ( v13 )
  {
    v16 = v12;
    v17 = (unsigned __int16 *)((char *)v15 + v12);
    v18 = v16;
    if ( v16 > 1 )
    {
      do
      {
        v18 -= 2;
        --v17;
      }
      while ( *v17 != 45 && v18 > 1 );
    }
    if ( (unsigned __int16)v18 >> 1 )
    {
      v19 = 0;
      v20 = (v16 - (unsigned __int16)v18) >> 1;
      if ( v20 )
      {
        if ( *(unsigned __int16 *)((char *)v15 + (unsigned __int16)v18) == 45 )
        {
          v21 = (unsigned __int16 *)((char *)v15 + (unsigned __int16)v18 + 2);
          v22 = v20 - 1;
          if ( v20 != 1 )
          {
            if ( (int)(v20 - 1) <= 0 )
            {
LABEL_25:
              v24 = (unsigned int *)ApiSetpSearchForApiSet((_DWORD *)a1, v15, (unsigned __int16)v18 >> 1);
              v25 = v24;
              if ( v24 )
              {
                v26 = 0;
                v27 = (v24[2] - v24[3]) >> 1;
                if ( v27 )
                {
                  v28 = (_WORD *)(a1 + v24[1] + v24[3]);
                  if ( *v28 == 45 )
                  {
                    v29 = v28 + 1;
                    v30 = v27 - 1;
                    if ( v30 )
                    {
                      while ( v30 > 0 )
                      {
                        if ( (unsigned __int16)(*v29 - 48) > 9u )
                          goto LABEL_36;
                        v31 = (unsigned __int16)*v29++;
                        --v30;
                        v26 = v31 + 2 * (5 * v26 - 24);
                      }
                      if ( v19 <= v26 )
                      {
                        v9 = 1;
                        if ( v25[5] )
                          v10 = *(_DWORD *)(v25[4] + a1 + 16) != 0;
                      }
                    }
                  }
                }
              }
              goto LABEL_36;
            }
            while ( (unsigned __int16)(*v21 - 48) <= 9u )
            {
              v23 = (unsigned __int16)*v21++;
              --v22;
              v19 = v23 + 2 * (5 * v19 - 24);
              if ( v22 <= 0 )
                goto LABEL_25;
            }
          }
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  if ( (unsigned __int16)v12 >= 0x14u )
    LOWORD(v12) = 20;
  if ( RtlCompareUnicodeStrings(
         *((PCWCH *)a2 + 1),
         (unsigned __int64)(unsigned __int16)v12 >> 1,
         L"schemaext-",
         0xAuLL,
         1u) )
  {
    return (unsigned int)-1073741811;
  }
  v9 = ApiSetpSearchForApiSet((_DWORD *)a1, *((unsigned __int16 **)a2 + 1), *a2 >> 1) != 0;
  v10 = v9;
LABEL_36:
  *a3 = v9;
  *a4 = v10;
  return v4;
}
