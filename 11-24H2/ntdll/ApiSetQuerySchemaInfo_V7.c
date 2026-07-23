/*
 * XREFs of ApiSetQuerySchemaInfo_V7 @ 0x180133B80
 * Callers:
 *     ApiSetQuerySchemaInfo @ 0x1801140BC (ApiSetQuerySchemaInfo.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18008EE30 (RtlCompareUnicodeStrings.c)
 *     ApiSetpGetContractKeyInfo @ 0x18013423C (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x180134528 (ApiSetpGetExtensionNameKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x180134650 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x18013489C (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo_V7(__int64 a1, __int64 a2, bool *a3, bool *a4)
{
  unsigned int v4; // edi
  unsigned __int16 v8; // cx
  bool v9; // r14
  bool v10; // si
  unsigned __int16 v11; // r12
  char v12; // r8
  unsigned __int64 v13; // rdx
  const WCHAR *v14; // rcx
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r12
  unsigned __int64 v20; // r15
  unsigned __int16 v21; // ax
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // r15
  unsigned __int64 v25; // r12
  __int64 v26; // rcx
  __int128 v28; // [rsp+30h] [rbp-30h] BYREF
  __int128 v29; // [rsp+40h] [rbp-20h]
  __int64 v30; // [rsp+50h] [rbp-10h]
  bool *v31; // [rsp+A0h] [rbp+40h]

  v31 = a3;
  v4 = 0;
  *a3 = 0;
  *a4 = 0;
  v8 = *(_WORD *)a2;
  v9 = 0;
  v10 = 0;
  v11 = *(_WORD *)a2 >> 1;
  v12 = 0;
  if ( *(_WORD *)a2 >= 8u )
  {
    v13 = **(_QWORD **)(a2 + 8) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v13 == 0x2D004900500041LL || v13 == 0x2D005400580045LL )
      v12 = 1;
  }
  if ( v12 )
  {
    v15 = *(_QWORD *)(a2 + 8);
    LOBYTE(a3) = 1;
    v30 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    if ( (unsigned __int8)ApiSetpGetContractKeyInfo(v15, v11, a3, &v28) )
    {
      if ( HIDWORD(v28) == 2 )
      {
        v21 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v28);
        if ( v21 == 0xFFFF )
          goto LABEL_24;
        v24 = *(unsigned __int16 *)(a1 + 18);
        LOBYTE(v23) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
        v25 = a1 + *(unsigned __int8 *)(a1 + 64) * (unsigned __int64)v21 - v24 + *(unsigned int *)(a1 + 56);
        LOBYTE(v22) = (*(_BYTE *)(a1 + 2) & 8) != 0;
        if ( *(_DWORD *)v25 != (unsigned int)ApiSetpGetSearchKeyHash(
                                               (unsigned int)&v28,
                                               0,
                                               v22,
                                               v23,
                                               *(_BYTE *)(a1 + 67)) )
          goto LABEL_24;
        v26 = *(unsigned int *)(a1 + 44)
            + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v25 + 4)
            - v24;
        if ( (*(_BYTE *)(v26 + a1 + 10) & 2) != 0 )
          v10 = *(_BYTE *)(*(unsigned int *)(a1 + 92)
                         + *(unsigned __int8 *)(a1 + 100) * (unsigned __int64)*(unsigned __int16 *)(v26 + a1 + 4)
                         - v24
                         + a1
                         + 10) <= *(_BYTE *)(a1 + 3);
      }
      else
      {
        if ( HIDWORD(v28) != 3 )
          goto LABEL_24;
        v16 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v28);
        if ( v16 == 0xFFFF )
          goto LABEL_24;
        v19 = *(unsigned __int16 *)(a1 + 18);
        LOBYTE(v18) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
        v20 = a1 + *(unsigned __int8 *)(a1 + 76) * (unsigned __int64)v16 - v19 + *(unsigned int *)(a1 + 68);
        LOBYTE(v17) = (*(_BYTE *)(a1 + 2) & 8) != 0;
        if ( *(_DWORD *)v20 != (unsigned int)ApiSetpGetSearchKeyHash(
                                               (unsigned int)&v28,
                                               0,
                                               v17,
                                               v18,
                                               *(_BYTE *)(a1 + 79))
          || (unsigned int)WORD4(v29) > *(unsigned __int8 *)(v20 + 9) )
        {
          goto LABEL_24;
        }
        v10 = (*(_BYTE *)(*(unsigned int *)(a1 + 44)
                        + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v20 + 4)
                        - v19
                        + a1
                        + 10) & 2) != 0;
      }
      v9 = 1;
    }
LABEL_24:
    *v31 = v9;
    *a4 = v10;
    return v4;
  }
  if ( v8 >= 0x14u )
    v8 = 20;
  if ( !RtlCompareUnicodeStrings(*(PCWCH *)(a2 + 8), (unsigned __int64)v8 >> 1, L"schemaext-", 0xAuLL, 1u) )
  {
    v14 = *(const WCHAR **)(a2 + 8);
    v30 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    if ( (unsigned __int8)ApiSetpGetExtensionNameKeyInfo(v14) )
    {
      v9 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(a1, a1 + 80, &v28) != 0xFFFF;
      v10 = v9;
      goto LABEL_24;
    }
  }
  return (unsigned int)-1073741811;
}
