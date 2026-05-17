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
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  int v18; // r8d
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  __int64 v21; // r10
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // ax
  int v24; // r9d
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // r10
  unsigned __int16 v28; // cx
  __int64 v29; // rcx
  __int128 v31; // [rsp+30h] [rbp-20h] BYREF
  __int128 v32; // [rsp+40h] [rbp-10h]
  bool *v33; // [rsp+A0h] [rbp+50h]

  v33 = a3;
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
    v16 = *(_QWORD *)(a2 + 8);
    v31 = 0LL;
    v32 = 0LL;
    if ( (unsigned __int8)ApiSetpGetContractKeyInfo(v16, v11, a3, &v31) )
    {
      if ( HIDWORD(v31) == 2 )
      {
        v23 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v31);
        if ( v23 == 0xFFFF )
          goto LABEL_34;
        v24 = 0;
        v25 = *(unsigned __int16 *)(a1 + 18);
        v26 = a1 + *(unsigned __int8 *)(a1 + 64) * (unsigned __int64)v23 - v25 + *(unsigned int *)(a1 + 56);
        if ( WORD1(v32) )
        {
          v27 = WORD1(v32);
          do
          {
            v28 = *v13 + 32;
            if ( (unsigned __int16)(*v13 - 65) > 0x19u )
              v28 = *v13;
            ++v13;
            v24 = v28 + *(unsigned __int8 *)(a1 + 67) * v24;
            --v27;
          }
          while ( v27 );
        }
        if ( *(_DWORD *)v26 != v24 )
          goto LABEL_34;
        v29 = *(unsigned int *)(a1 + 44)
            + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v26 + 4)
            - v25;
        if ( (*(_BYTE *)(v29 + a1 + 10) & 2) != 0 )
          v9 = *(_BYTE *)(*(unsigned int *)(a1 + 92)
                        + *(unsigned __int16 *)(v29 + a1 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 100)
                        - v25
                        + a1
                        + 10) <= *(_BYTE *)(a1 + 3);
      }
      else
      {
        if ( HIDWORD(v31) != 3 )
          goto LABEL_34;
        v17 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v31);
        if ( v17 == 0xFFFF )
          goto LABEL_34;
        v18 = 0;
        v19 = *(unsigned __int16 *)(a1 + 18);
        v20 = a1 + *(unsigned __int8 *)(a1 + 76) * (unsigned __int64)v17 - v19 + *(unsigned int *)(a1 + 68);
        if ( WORD1(v32) )
        {
          v21 = WORD1(v32);
          do
          {
            v22 = *v13 + 32;
            if ( (unsigned __int16)(*v13 - 65) > 0x19u )
              v22 = *v13;
            ++v13;
            v18 = v22 + *(unsigned __int8 *)(a1 + 79) * v18;
            --v21;
          }
          while ( v21 );
        }
        if ( *(_DWORD *)v20 != v18 || (unsigned int)WORD4(v32) > *(unsigned __int8 *)(v20 + 9) )
          goto LABEL_34;
        v9 = (*(_BYTE *)(*(unsigned int *)(a1 + 44)
                       + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v20 + 4)
                       - v19
                       + a1
                       + 10) & 2) != 0;
      }
      v7 = 1;
    }
LABEL_34:
    *v33 = v7;
    *a4 = v9;
    return v4;
  }
  if ( v8 >= 0x14u )
    v8 = 20;
  if ( !(unsigned int)RtlCompareUnicodeStrings(
                        *(unsigned __int16 **)(a2 + 8),
                        (unsigned __int64)v8 >> 1,
                        L"schemaext-",
                        0xAuLL,
                        1) )
  {
    v15 = *(_QWORD *)(a2 + 8);
    LOBYTE(v14) = 1;
    v31 = 0LL;
    v32 = 0LL;
    if ( (unsigned __int8)ApiSetpGetExtensionNameKeyInfo(v15, v11, v14, &v31) )
    {
      v7 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(a1, a1 + 80, &v31) != 0xFFFF;
      v9 = v7;
      goto LABEL_34;
    }
  }
  return (unsigned int)-1073741811;
}
