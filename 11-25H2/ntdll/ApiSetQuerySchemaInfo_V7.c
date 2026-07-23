/*
 * XREFs of ApiSetQuerySchemaInfo_V7 @ 0x180137254
 * Callers:
 *     ApiSetQuerySchemaInfo @ 0x1800EE1B8 (ApiSetQuerySchemaInfo.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     ApiSetpGetContractKeyInfo @ 0x180137A68 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x180137C74 (ApiSetpGetExtensionNameKeyInfo.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x180137EEC (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo_V7(__int64 a1, __int64 a2, bool *a3, bool *a4)
{
  unsigned int v4; // edi
  bool v7; // r12
  unsigned __int16 v8; // cx
  bool v9; // si
  char v10; // r8
  unsigned __int16 v11; // r15
  unsigned __int64 v12; // rdx
  unsigned __int16 *v13; // r13
  const WCHAR *v14; // rcx
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  int v17; // r8d
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  __int64 v20; // r10
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // ax
  int v23; // r9d
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  __int64 v26; // r10
  unsigned __int16 v27; // cx
  __int64 v28; // rcx
  __int128 v30; // [rsp+30h] [rbp-20h] BYREF
  __int128 v31; // [rsp+40h] [rbp-10h]
  bool *v32; // [rsp+A0h] [rbp+50h]

  v32 = a3;
  v4 = 0;
  *a3 = 0;
  *a4 = 0;
  v7 = 0;
  v8 = *(_WORD *)a2;
  v9 = 0;
  v10 = 0;
  v11 = *(_WORD *)a2 >> 1;
  if ( *(_WORD *)a2 >= 8u )
  {
    v12 = **(_QWORD **)(a2 + 8) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v12 == 0x2D004900500041LL || v12 == 0x2D005400580045LL )
      v10 = 1;
  }
  v13 = *(unsigned __int16 **)(a2 + 8);
  if ( v10 )
  {
    LOBYTE(a3) = 1;
    v15 = *(_QWORD *)(a2 + 8);
    v30 = 0LL;
    v31 = 0LL;
    if ( (unsigned __int8)ApiSetpGetContractKeyInfo(v15, v11, a3, &v30) )
    {
      if ( HIDWORD(v30) == 2 )
      {
        v22 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v30);
        if ( v22 == 0xFFFF )
          goto LABEL_34;
        v23 = 0;
        v24 = *(unsigned __int16 *)(a1 + 18);
        v25 = a1 + *(unsigned __int8 *)(a1 + 64) * (unsigned __int64)v22 - v24 + *(unsigned int *)(a1 + 56);
        if ( WORD1(v31) )
        {
          v26 = WORD1(v31);
          do
          {
            v27 = *v13 + 32;
            if ( (unsigned __int16)(*v13 - 65) > 0x19u )
              v27 = *v13;
            ++v13;
            v23 = v27 + *(unsigned __int8 *)(a1 + 67) * v23;
            --v26;
          }
          while ( v26 );
        }
        if ( *(_DWORD *)v25 != v23 )
          goto LABEL_34;
        v28 = *(unsigned int *)(a1 + 44)
            + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v25 + 4)
            - v24;
        if ( (*(_BYTE *)(v28 + a1 + 10) & 2) != 0 )
          v9 = *(_BYTE *)(*(unsigned int *)(a1 + 92)
                        + *(unsigned __int16 *)(v28 + a1 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 100)
                        - v24
                        + a1
                        + 10) <= *(_BYTE *)(a1 + 3);
      }
      else
      {
        if ( HIDWORD(v30) != 3 )
          goto LABEL_34;
        v16 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v30);
        if ( v16 == 0xFFFF )
          goto LABEL_34;
        v17 = 0;
        v18 = *(unsigned __int16 *)(a1 + 18);
        v19 = a1 + *(unsigned __int8 *)(a1 + 76) * (unsigned __int64)v16 - v18 + *(unsigned int *)(a1 + 68);
        if ( WORD1(v31) )
        {
          v20 = WORD1(v31);
          do
          {
            v21 = *v13 + 32;
            if ( (unsigned __int16)(*v13 - 65) > 0x19u )
              v21 = *v13;
            ++v13;
            v17 = v21 + *(unsigned __int8 *)(a1 + 79) * v17;
            --v20;
          }
          while ( v20 );
        }
        if ( *(_DWORD *)v19 != v17 || (unsigned int)WORD4(v31) > *(unsigned __int8 *)(v19 + 9) )
          goto LABEL_34;
        v9 = (*(_BYTE *)(*(unsigned int *)(a1 + 44)
                       + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v19 + 4)
                       - v18
                       + a1
                       + 10) & 2) != 0;
      }
      v7 = 1;
    }
LABEL_34:
    *v32 = v7;
    *a4 = v9;
    return v4;
  }
  if ( v8 >= 0x14u )
    v8 = 20;
  if ( !RtlCompareUnicodeStrings(*(PCWCH *)(a2 + 8), (unsigned __int64)v8 >> 1, L"schemaext-", 0xAuLL, 1u) )
  {
    v14 = *(const WCHAR **)(a2 + 8);
    v30 = 0LL;
    v31 = 0LL;
    if ( (unsigned __int8)ApiSetpGetExtensionNameKeyInfo(v14) )
    {
      v7 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(a1, a1 + 80, &v30) != 0xFFFF;
      v9 = v7;
      goto LABEL_34;
    }
  }
  return (unsigned int)-1073741811;
}
