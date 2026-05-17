/*
 * XREFs of ApiSetQuerySchemaInfo_V7 @ 0x180135950
 * Callers:
 *     ApiSetQuerySchemaInfo @ 0x180118F7C (ApiSetQuerySchemaInfo.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 *     ApiSetpGetContractKeyInfo @ 0x18013600C (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x1801362F8 (ApiSetpGetExtensionNameKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x180136420 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x18013666C (ApiSetpSearchForSectionIndex_V7.c)
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
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r12
  unsigned __int64 v21; // r15
  unsigned __int16 v22; // ax
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // r15
  unsigned __int64 v26; // r12
  __int64 v27; // rcx
  __int128 v29; // [rsp+30h] [rbp-30h] BYREF
  __int128 v30; // [rsp+40h] [rbp-20h]
  __int64 v31; // [rsp+50h] [rbp-10h]
  bool *v32; // [rsp+A0h] [rbp+40h]

  v32 = a3;
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
    v16 = *(_QWORD *)(a2 + 8);
    LOBYTE(a3) = 1;
    v31 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    if ( (unsigned __int8)ApiSetpGetContractKeyInfo(v16, v11, a3, &v29) )
    {
      if ( HIDWORD(v29) == 2 )
      {
        v22 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v29);
        if ( v22 == 0xFFFF )
          goto LABEL_24;
        v25 = *(unsigned __int16 *)(a1 + 18);
        LOBYTE(v24) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
        v26 = a1 + *(unsigned __int8 *)(a1 + 64) * (unsigned __int64)v22 - v25 + *(unsigned int *)(a1 + 56);
        LOBYTE(v23) = (*(_BYTE *)(a1 + 2) & 8) != 0;
        if ( *(_DWORD *)v26 != (unsigned int)ApiSetpGetSearchKeyHash(
                                               (unsigned int)&v29,
                                               0,
                                               v23,
                                               v24,
                                               *(_BYTE *)(a1 + 67)) )
          goto LABEL_24;
        v27 = *(unsigned int *)(a1 + 44)
            + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v26 + 4)
            - v25;
        if ( (*(_BYTE *)(v27 + a1 + 10) & 2) != 0 )
          v10 = *(_BYTE *)(*(unsigned int *)(a1 + 92)
                         + *(unsigned __int8 *)(a1 + 100) * (unsigned __int64)*(unsigned __int16 *)(v27 + a1 + 4)
                         - v25
                         + a1
                         + 10) <= *(_BYTE *)(a1 + 3);
      }
      else
      {
        if ( HIDWORD(v29) != 3 )
          goto LABEL_24;
        v17 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v29);
        if ( v17 == 0xFFFF )
          goto LABEL_24;
        v20 = *(unsigned __int16 *)(a1 + 18);
        LOBYTE(v19) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
        v21 = a1 + *(unsigned __int8 *)(a1 + 76) * (unsigned __int64)v17 - v20 + *(unsigned int *)(a1 + 68);
        LOBYTE(v18) = (*(_BYTE *)(a1 + 2) & 8) != 0;
        if ( *(_DWORD *)v21 != (unsigned int)ApiSetpGetSearchKeyHash(
                                               (unsigned int)&v29,
                                               0,
                                               v18,
                                               v19,
                                               *(_BYTE *)(a1 + 79))
          || (unsigned int)WORD4(v30) > *(unsigned __int8 *)(v21 + 9) )
        {
          goto LABEL_24;
        }
        v10 = (*(_BYTE *)(*(unsigned int *)(a1 + 44)
                        + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v21 + 4)
                        - v20
                        + a1
                        + 10) & 2) != 0;
      }
      v9 = 1;
    }
LABEL_24:
    *v32 = v9;
    *a4 = v10;
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
    v29 = 0LL;
    v30 = 0LL;
    if ( (unsigned __int8)ApiSetpGetExtensionNameKeyInfo(v15, v11, v14, &v29) )
    {
      v9 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(a1, a1 + 80, &v29) != 0xFFFF;
      v10 = v9;
      goto LABEL_24;
    }
  }
  return (unsigned int)-1073741811;
}
