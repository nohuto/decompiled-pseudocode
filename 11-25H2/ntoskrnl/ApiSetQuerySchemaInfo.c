/*
 * XREFs of ApiSetQuerySchemaInfo @ 0x140653AA0
 * Callers:
 *     RtlIsApiSetImplemented @ 0x140776130 (RtlIsApiSetImplemented.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1404AC7B8 (ApiSetpSearchForApiSet.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x140654ACC (ApiSetQuerySchemaInfo_V7.c)
 *     RtlCompareUnicodeString @ 0x140939BB0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo(__int64 a1, unsigned __int16 *a2, bool *a3, bool *a4)
{
  unsigned int v4; // ebx
  bool v6; // zf
  bool v10; // bp
  bool v11; // r12
  __int64 v13; // rcx
  char v14; // r8
  unsigned __int64 v15; // rdx
  WCHAR *v16; // r11
  unsigned int v17; // eax
  _WORD *v18; // rcx
  unsigned int v19; // edx
  unsigned __int16 v20; // r8
  unsigned int v21; // edi
  unsigned int v22; // eax
  unsigned __int16 *v23; // r9
  int v24; // r10d
  int v25; // edx
  __int64 v26; // rax
  unsigned int *v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // r10d
  unsigned int v30; // r9d
  _WORD *v31; // r8
  unsigned __int16 *v32; // r8
  int v33; // r9d
  int v34; // r11d
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF

  v4 = 0;
  v6 = *(_BYTE *)a1 == 7;
  *a3 = 0;
  *a4 = 0;
  v10 = 0;
  v11 = 0;
  if ( v6 || *(_DWORD *)a1 == 6 && *(_DWORD *)(a1 + 16) > 8u && *(_BYTE *)(a1 + 28) == 7 )
    return ApiSetQuerySchemaInfo_V7();
  v13 = *a2;
  v14 = 0;
  if ( (unsigned __int16)v13 >= 8u )
  {
    v15 = **((_QWORD **)a2 + 1) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v15 == 0x2D004900500041LL || v15 == 0x2D005400580045LL )
      v14 = 1;
  }
  v16 = (WCHAR *)*((_QWORD *)a2 + 1);
  if ( v14 )
  {
    v17 = v13;
    v18 = (WCHAR *)((char *)v16 + v13);
    v19 = v17;
    if ( v17 > 1 )
    {
      do
      {
        v19 -= 2;
        --v18;
      }
      while ( *v18 != 45 && v19 > 1 );
    }
    v20 = (unsigned __int16)v19 >> 1;
    if ( (unsigned __int16)v19 >> 1 )
    {
      v21 = 0;
      v22 = (v17 - (unsigned __int16)v19) >> 1;
      if ( v22 )
      {
        if ( *(WCHAR *)((char *)v16 + (unsigned __int16)v19) == 45 )
        {
          v23 = (WCHAR *)((char *)v16 + (unsigned __int16)v19 + 2);
          v24 = v22 - 1;
          if ( v22 != 1 )
          {
            if ( (int)(v22 - 1) <= 0 )
            {
LABEL_26:
              v26 = ApiSetpSearchForApiSet((_DWORD *)a1, v16, v20);
              v27 = (unsigned int *)v26;
              if ( v26 )
              {
                v28 = *(_DWORD *)(v26 + 12);
                v29 = 0;
                v30 = (v27[2] - v28) >> 1;
                if ( v30 )
                {
                  v31 = (_WORD *)(a1 + v27[1] + v28);
                  if ( *v31 == 45 )
                  {
                    v32 = v31 + 1;
                    v33 = v30 - 1;
                    if ( v33 )
                    {
                      while ( v33 > 0 )
                      {
                        v34 = *v32;
                        if ( (unsigned __int16)(v34 - 48) > 9u )
                          goto LABEL_37;
                        ++v32;
                        --v33;
                        v29 = v34 + 2 * (5 * v29 - 24);
                      }
                      if ( v21 <= v29 )
                      {
                        v10 = 1;
                        if ( v27[5] )
                          v11 = *(_DWORD *)(v27[4] + a1 + 16) != 0;
                      }
                    }
                  }
                }
              }
              goto LABEL_37;
            }
            while ( 1 )
            {
              v25 = *v23;
              if ( (unsigned __int16)(v25 - 48) > 9u )
                break;
              ++v23;
              --v24;
              v21 = v25 + 2 * (5 * v21 - 24);
              if ( v24 <= 0 )
                goto LABEL_26;
            }
          }
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = v16;
  if ( (unsigned __int16)v13 >= 0x14u )
  {
    LOWORD(v13) = 20;
    String1.Length = 20;
  }
  else
  {
    String1.Length = v13;
  }
  String1.MaximumLength = v13;
  String2.Buffer = L"schemaext-";
  *(_DWORD *)&String2.Length = 1310740;
  if ( RtlCompareUnicodeString(&String1, &String2, 1u) )
    return (unsigned int)-1073741811;
  v10 = ApiSetpSearchForApiSet((_DWORD *)a1, *((const WCHAR **)a2 + 1), *a2 >> 1) != 0;
  v11 = v10;
LABEL_37:
  *a3 = v10;
  *a4 = v11;
  return v4;
}
