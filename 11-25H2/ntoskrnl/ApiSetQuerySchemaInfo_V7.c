/*
 * XREFs of ApiSetQuerySchemaInfo_V7 @ 0x140654ACC
 * Callers:
 *     ApiSetQuerySchemaInfo @ 0x140653AA0 (ApiSetQuerySchemaInfo.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x1406560E8 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x1406562F4 (ApiSetpGetExtensionNameKeyInfo.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1406565B0 (ApiSetpSearchForSectionIndex_V7.c)
 *     RtlCompareUnicodeString @ 0x140939BB0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo_V7(__int64 a1, __int64 a2, bool *a3, bool *a4)
{
  unsigned int v4; // ebx
  unsigned __int16 v6; // cx
  unsigned __int16 v8; // r15
  bool v9; // r13
  bool v10; // si
  char v11; // r8
  unsigned __int64 v12; // rdx
  wchar_t *v13; // r12
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  int v18; // r9d
  __int64 v19; // r10
  unsigned __int64 v20; // r8
  __int64 v21; // r11
  unsigned __int16 v22; // dx
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // ax
  int v25; // r10d
  __int64 v26; // r9
  unsigned __int64 v27; // r8
  __int64 v28; // r11
  wchar_t v29; // dx
  wchar_t v30; // cx
  __int64 v31; // rcx
  UNICODE_STRING String1; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-40h] BYREF
  __int128 v35; // [rsp+40h] [rbp-30h]
  _OWORD v36[2]; // [rsp+50h] [rbp-20h] BYREF
  bool *v37; // [rsp+C0h] [rbp+50h]

  v37 = a3;
  v4 = 0;
  v6 = *(_WORD *)a2;
  *a3 = 0;
  v8 = v6 >> 1;
  v9 = 0;
  *a4 = 0;
  v10 = 0;
  v11 = 0;
  if ( v6 >= 8u )
  {
    v12 = **(_QWORD **)(a2 + 8) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v12 == 0x2D004900500041LL || v12 == 0x2D005400580045LL )
      v11 = 1;
  }
  v13 = *(wchar_t **)(a2 + 8);
  if ( v11 )
  {
    LOBYTE(a3) = 1;
    v16 = *(_QWORD *)(a2 + 8);
    String2 = 0LL;
    v35 = 0LL;
    if ( (unsigned __int8)ApiSetpGetContractKeyInfo(v16, v8, a3, &String2) )
    {
      if ( HIDWORD(String2.Buffer) == 2 )
      {
        v24 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &String2);
        if ( v24 == 0xFFFF )
          goto LABEL_35;
        v25 = 0;
        v26 = *(unsigned __int16 *)(a1 + 18);
        v27 = a1 + *(unsigned __int8 *)(a1 + 64) * (unsigned __int64)v24 - v26 + *(unsigned int *)(a1 + 56);
        if ( WORD1(v35) )
        {
          v28 = WORD1(v35);
          do
          {
            v29 = *v13++;
            v30 = v29 + 32;
            if ( (unsigned __int16)(v29 - 65) > 0x19u )
              v30 = v29;
            v25 = v30 + *(unsigned __int8 *)(a1 + 67) * v25;
            --v28;
          }
          while ( v28 );
        }
        if ( *(_DWORD *)v27 != v25 )
          goto LABEL_35;
        v31 = *(unsigned int *)(a1 + 44)
            + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v27 + 4)
            - v26;
        if ( (*(_BYTE *)(v31 + a1 + 10) & 2) != 0 )
          v10 = *(_BYTE *)(*(unsigned int *)(a1 + 92)
                         + *(unsigned __int16 *)(v31 + a1 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 100)
                         - v26
                         + a1
                         + 10) <= *(_BYTE *)(a1 + 3);
      }
      else
      {
        if ( HIDWORD(String2.Buffer) != 3 )
          goto LABEL_35;
        v17 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &String2);
        if ( v17 == 0xFFFF )
          goto LABEL_35;
        v18 = 0;
        v19 = *(unsigned __int16 *)(a1 + 18);
        v20 = a1 + *(unsigned __int8 *)(a1 + 76) * (unsigned __int64)v17 - v19 + *(unsigned int *)(a1 + 68);
        if ( WORD1(v35) )
        {
          v21 = WORD1(v35);
          do
          {
            v22 = *v13++;
            v23 = v22 + 32;
            if ( (unsigned __int16)(v22 - 65) > 0x19u )
              v23 = v22;
            v18 = v23 + *(unsigned __int8 *)(a1 + 79) * v18;
            --v21;
          }
          while ( v21 );
        }
        if ( *(_DWORD *)v20 != v18 || (unsigned int)WORD4(v35) > *(unsigned __int8 *)(v20 + 9) )
          goto LABEL_35;
        v10 = (*(_BYTE *)(*(unsigned int *)(a1 + 44)
                        + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v20 + 4)
                        - v19
                        + a1
                        + 10) & 2) != 0;
      }
      v9 = 1;
    }
LABEL_35:
    *v37 = v9;
    *a4 = v10;
    return v4;
  }
  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  *(_QWORD *)&String1.Length = 0LL;
  String1.Buffer = v13;
  if ( v6 >= 0x14u )
  {
    v6 = 20;
    String1.Length = 20;
  }
  else
  {
    String1.Length = v6;
  }
  String1.MaximumLength = v6;
  String2.Buffer = L"schemaext-";
  *(_DWORD *)&String2.Length = 1310740;
  if ( !RtlCompareUnicodeString(&String1, &String2, 1u) )
  {
    v15 = *(_QWORD *)(a2 + 8);
    memset(v36, 0, sizeof(v36));
    if ( (unsigned __int8)ApiSetpGetExtensionNameKeyInfo(v15, v8, v14, v36, *(_QWORD *)&String1.Length, String1.Buffer) )
    {
      v9 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(a1, a1 + 80, v36) != 0xFFFF;
      v10 = v9;
      goto LABEL_35;
    }
  }
  return (unsigned int)-1073741811;
}
