/*
 * XREFs of ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x140661BC4
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x14065FE98 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1404A8708 (ApiSetpSearchForApiSet.c)
 *     ApiSetpGetContractKeyInfo @ 0x140660A78 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x140660D58 (ApiSetpGetExtensionNameKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x140660EA8 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14066111C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetSchemaExpander_InsertContractEntry @ 0x140661578 (ApiSetSchemaExpander_InsertContractEntry.c)
 *     ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x1406615FC (ApiSetSchemaExpander_InsertExtensionNameEntry.c)
 *     ApiSetSchemaExpander_InsertHostEntry @ 0x1406616F8 (ApiSetSchemaExpander_InsertHostEntry.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x1406617A4 (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 */

__int64 __fastcall ApiSetCompose_V7_ProcessV6Extension_Phase1(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int inserted; // ebx
  __int64 v6; // r15
  __int64 v7; // r12
  wchar_t *v8; // rcx
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edx
  _QWORD *v15; // rcx
  __int64 v16; // r13
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // rsi
  __int64 v19; // r13
  unsigned __int16 v20; // ax
  unsigned __int64 v21; // r8
  unsigned int v22; // r10d
  __int64 v23; // r13
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rdx
  int v35; // [rsp+30h] [rbp-50h]
  int v36; // [rsp+34h] [rbp-4Ch]
  int v37; // [rsp+38h] [rbp-48h]
  __int64 v38; // [rsp+40h] [rbp-40h]
  __int64 v39; // [rsp+48h] [rbp-38h]
  __int128 v40; // [rsp+50h] [rbp-30h] BYREF
  __int128 v41; // [rsp+60h] [rbp-20h]
  __int64 v42; // [rsp+70h] [rbp-10h]
  unsigned __int16 v43; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int16 v44; // [rsp+D0h] [rbp+50h] BYREF
  int SearchKeyHash; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  inserted = 0;
  v37 = 0;
  if ( !*(_DWORD *)(a1 + 12) )
    return (unsigned int)inserted;
  while ( 1 )
  {
    v6 = 3 * v2;
    v7 = a1 + *(unsigned int *)(a1 + 16);
    v40 = 0LL;
    v41 = 0LL;
    v8 = (wchar_t *)(a1 + *(unsigned int *)(v7 + 24 * v2 + 4));
    v9 = *(_DWORD *)(v7 + 24 * v2 + 8) >> 1;
    if ( (*(_DWORD *)(v7 + 24 * v2) & 4) == 0 )
      break;
    v42 = 0LL;
    if ( !ApiSetpGetExtensionNameKeyInfo(v8, v9, 1, (__int64)&v40) )
      return (unsigned int)-1073741773;
    if ( (unsigned __int16)ApiSetpSearchForSectionIndex_V7(
                             *(_QWORD *)(a2 + 32),
                             *(_QWORD *)(a2 + 32) + 80LL,
                             (__int64)&v40) != 0xFFFF )
      return (unsigned int)-1073741771;
    inserted = ApiSetSchemaExpander_InsertExtensionNameEntry(a2, (__int64)&v40);
    if ( inserted < 0 )
      return (unsigned int)inserted;
LABEL_29:
    v2 = (unsigned int)(v37 + 1);
    v37 = v2;
    if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 12) )
      return (unsigned int)inserted;
  }
  *(_QWORD *)&v40 = a1 + *(unsigned int *)(v7 + 24 * v2 + 4);
  v10 = *(_QWORD *)(a2 + 32);
  WORD4(v40) = v9;
  WORD1(v41) = v9;
  v42 = 0LL;
  BYTE10(v40) = 1;
  v44 = ApiSetpSearchForSectionIndex_V7(v10, v10 + 92, (__int64)&v40);
  if ( v44 == 0xFFFF )
  {
    inserted = ApiSetSchemaExpander_InsertHostEntry(a2, (__int64)&v40, &v44);
    if ( inserted < 0 )
      return (unsigned int)inserted;
  }
  v11 = 0LL;
  v36 = 0;
  if ( !*(_DWORD *)(v7 + 8 * v6 + 20) )
    goto LABEL_29;
  while ( 1 )
  {
    v12 = 5 * v11;
    v13 = a1 + *(unsigned int *)(v7 + 8 * v6 + 16);
    v42 = 0LL;
    v38 = v12;
    v39 = v13;
    v40 = 0LL;
    v14 = *(_DWORD *)(v13 + 4 * v12 + 16);
    v15 = (_QWORD *)(a1 + *(unsigned int *)(v13 + 4 * v12 + 12));
    v41 = 0LL;
    if ( !ApiSetpGetContractKeyInfo(v15, v14 >> 1, 1, (__int64)&v40) || HIDWORD(v40) != 3 )
      return (unsigned int)-1073741773;
    v16 = *(_QWORD *)(a2 + 32);
    SearchKeyHash = ApiSetpGetSearchKeyHash(
                      (__int64)&v40,
                      1,
                      (*(_BYTE *)(v16 + 2) & 8) != 0,
                      (*(_BYTE *)(v16 + 2) & 0x10) != 0,
                      *(_BYTE *)(v16 + 55));
    v17 = ApiSetpSearchForSectionIndex_V7(v16, v16 + 44, (__int64)&v40);
    v43 = v17;
    if ( v17 == 0xFFFF )
    {
      inserted = ApiSetSchemaExpander_InsertContractEntry(a2, (__int64)&v40, &v43);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v18 = *(_QWORD *)(a2 + 32)
          + v43 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 32) + 52LL)
          - *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 18LL)
          + *(unsigned int *)(*(_QWORD *)(a2 + 32) + 44LL);
      *(_DWORD *)v18 = SearchKeyHash;
    }
    else
    {
      v18 = v17 * (unsigned __int64)*(unsigned __int8 *)(v16 + 52)
          - *(unsigned __int16 *)(v16 + 18)
          + v16
          + *(unsigned int *)(v16 + 44);
      if ( *(_DWORD *)v18 != SearchKeyHash )
        return (unsigned int)-1073741271;
    }
    v19 = *(_QWORD *)(a2 + 32);
    v35 = ApiSetpGetSearchKeyHash(
            (__int64)&v40,
            0,
            (*(_BYTE *)(v19 + 2) & 8) != 0,
            (*(_BYTE *)(v19 + 2) & 0x10) != 0,
            *(_BYTE *)(v19 + 79));
    v20 = ApiSetpSearchForSectionIndex_V7(v19, v19 + 68, (__int64)&v40);
    LOWORD(SearchKeyHash) = v20;
    if ( v20 == 0xFFFF )
    {
      inserted = ApiSetSchemaExpander_InsertSemverContractEntry(a2, (__int64)&v40, &SearchKeyHash);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v21 = *(_QWORD *)(a2 + 32)
          + (unsigned __int16)SearchKeyHash * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 32) + 76LL)
          - *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 18LL)
          + *(unsigned int *)(*(_QWORD *)(a2 + 32) + 68LL);
      *(_DWORD *)v21 = v35;
    }
    else
    {
      v21 = v20 * (unsigned __int64)*(unsigned __int8 *)(v19 + 76)
          - *(unsigned __int16 *)(v19 + 18)
          + v19
          + *(unsigned int *)(v19 + 68);
      if ( *(_DWORD *)v21 != v35 )
        return (unsigned int)-1073741271;
    }
    *(_WORD *)(v21 + 4) = v43;
    if ( (*(_BYTE *)(v21 + 10) & 1) == 0 )
    {
      if ( *(_DWORD *)(v39 + 4 * v38 + 4) )
      {
        v22 = *(_DWORD *)(a2 + 156);
        v23 = v44;
        v24 = v22 + 16;
        v22 >>= 4;
        *(_DWORD *)(a2 + 156) = v24;
        v25 = *(_QWORD *)(a2 + 32);
        v26 = *(unsigned __int16 *)(v25 + 18);
        v27 = v25
            + *(unsigned int *)(v25 + 104)
            + (unsigned __int16)v22 * (unsigned __int64)*(unsigned __int16 *)(v25 + 114)
            - v26;
        v28 = *(unsigned int *)(v25 + 92)
            + *(unsigned __int16 *)(v18 + 4) * (unsigned __int64)*(unsigned __int8 *)(v25 + 100)
            - v26;
        *(_DWORD *)(v27 + 8) = *(_DWORD *)(v28 + v25 + 4);
        *(_WORD *)(v27 + 14) = *(_WORD *)(v28 + v25 + 8);
        v29 = *(_QWORD *)(a2 + 32)
            + v23 * *(unsigned __int8 *)(*(_QWORD *)(a2 + 32) + 100LL)
            - *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 18LL)
            + *(unsigned int *)(*(_QWORD *)(a2 + 32) + 92LL);
        *(_DWORD *)(v27 + 4) = *(_DWORD *)(v29 + 4);
        *(_WORD *)(v27 + 12) = *(_WORD *)(v29 + 8);
        *(_WORD *)v27 = *(_WORD *)(v18 + 6);
        ++*(_WORD *)(v18 + 8);
        *(_WORD *)(v18 + 6) = v22;
      }
      else
      {
        LOWORD(v23) = v44;
      }
      *(_BYTE *)(v18 + 10) |= 2u;
      *(_WORD *)(v18 + 4) = v23;
      if ( *(_BYTE *)(a2 + 16) )
      {
        v30 = ApiSetpSearchForApiSet(*(_DWORD **)(a2 + 40), (const WCHAR *)v40, WORD1(v41));
        if ( v30 )
        {
          v31 = *(_QWORD *)(a2 + 32);
          v32 = *(_QWORD *)(a2 + 40) + *(unsigned int *)(v30 + 16);
          v33 = v31
              + (unsigned __int16)v23 * (unsigned __int64)*(unsigned __int8 *)(v31 + 100)
              - *(unsigned __int16 *)(v31 + 18)
              + *(unsigned int *)(v31 + 92);
          *(_DWORD *)(v32 + 12) = *(_DWORD *)(v33 + 4) + *(_DWORD *)(v31 + 36);
          *(_DWORD *)(v32 + 16) = 2 * *(unsigned __int16 *)(v33 + 8);
        }
      }
    }
    v11 = (unsigned int)(v36 + 1);
    v36 = v11;
    if ( (unsigned int)v11 >= *(_DWORD *)(v7 + 8 * v6 + 20) )
      goto LABEL_29;
  }
}
