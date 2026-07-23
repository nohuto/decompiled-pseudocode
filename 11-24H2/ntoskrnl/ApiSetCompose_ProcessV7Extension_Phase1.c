/*
 * XREFs of ApiSetCompose_ProcessV7Extension_Phase1 @ 0x14066031C
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x14065FE98 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpSearchForApiSetA @ 0x14065E89C (ApiSetpSearchForApiSetA.c)
 *     ApiSetpGetContractKeyInfo @ 0x140660A78 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x140660EA8 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14066111C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetSchemaExpander_InsertContractEntry @ 0x140661578 (ApiSetSchemaExpander_InsertContractEntry.c)
 *     ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x1406615FC (ApiSetSchemaExpander_InsertExtensionNameEntry.c)
 *     ApiSetSchemaExpander_InsertGroupContractEntry @ 0x140661674 (ApiSetSchemaExpander_InsertGroupContractEntry.c)
 *     ApiSetSchemaExpander_InsertHostEntry @ 0x1406616F8 (ApiSetSchemaExpander_InsertHostEntry.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x1406617A4 (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 */

__int64 __fastcall ApiSetCompose_ProcessV7Extension_Phase1(__int64 a1, __int64 a2)
{
  __int16 v3; // cx
  int inserted; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // ecx
  __int64 v9; // r13
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v13; // r15d
  __int64 v14; // rsi
  int v15; // r9d
  __int64 v16; // r12
  int v17; // r8d
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  char v22; // r9
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  char v29; // al
  __int64 v30; // rcx
  __int16 v31; // r8
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rsi
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rcx
  unsigned __int16 v39; // ax
  unsigned int *v40; // r15
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int16 v43; // r10
  __int64 v44; // r8
  unsigned int v45; // r11d
  char v46; // r15
  unsigned int v47; // eax
  unsigned int v48; // r11d
  __int64 v49; // rdx
  __int64 v50; // r9
  __int64 v51; // rcx
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned __int64 v56; // rdx
  int v58; // [rsp+30h] [rbp-40h]
  unsigned __int16 i; // [rsp+30h] [rbp-40h]
  unsigned int v60; // [rsp+34h] [rbp-3Ch]
  __int64 v61; // [rsp+38h] [rbp-38h]
  __int64 v62; // [rsp+38h] [rbp-38h]
  __int64 v63; // [rsp+40h] [rbp-30h]
  __int128 v64; // [rsp+48h] [rbp-28h] BYREF
  __int128 v65; // [rsp+58h] [rbp-18h]
  __int64 v66; // [rsp+68h] [rbp-8h]
  unsigned __int16 v67; // [rsp+B0h] [rbp+40h] BYREF
  int SearchKeyHash; // [rsp+C0h] [rbp+50h]
  __int16 v69; // [rsp+C8h] [rbp+58h]

  v3 = *(_WORD *)(a1 + 16);
  inserted = 0;
  if ( !v3 )
  {
LABEL_5:
    v8 = 0;
    v60 = 0;
    if ( !*(_WORD *)(a1 + 18) )
      return (unsigned int)inserted;
    while ( 1 )
    {
      v66 = 0LL;
      v64 = 0LL;
      v9 = 5LL * v8;
      v61 = a1 + *(unsigned int *)(a1 + 12);
      v65 = 0LL;
      if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(
                               a1 + *(unsigned int *)(v61 + 20LL * v8),
                               *(unsigned __int16 *)(v61 + 20LL * v8 + 8),
                               0LL,
                               &v64) )
        return (unsigned int)-1073741773;
      v13 = HIDWORD(v64);
      if ( (unsigned int)(HIDWORD(v64) - 2) > 1 )
        return (unsigned int)-1073741773;
      v14 = *(_QWORD *)(a2 + 32);
      LOBYTE(v10) = 1;
      LOBYTE(v12) = (*(_BYTE *)(v14 + 2) & 0x10) != 0;
      LOBYTE(v11) = (*(_BYTE *)(v14 + 2) & 8) != 0;
      SearchKeyHash = ApiSetpGetSearchKeyHash((unsigned int)&v64, v10, v11, v12, *(_BYTE *)(v14 + 55));
      v16 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v14, v14 + 44, &v64);
      v67 = v16;
      if ( (_WORD)v16 == 0xFFFF )
      {
        inserted = ApiSetSchemaExpander_InsertContractEntry(a2, &v64, &v67);
        if ( inserted < 0 )
          return (unsigned int)inserted;
        v18 = *(_QWORD *)(a2 + 32);
        LOWORD(v16) = v67;
        v13 = HIDWORD(v64);
        v19 = *(unsigned int *)(v18 + 44);
        v20 = v18 + v67 * (unsigned __int64)*(unsigned __int8 *)(v18 + 52) - *(unsigned __int16 *)(v18 + 18);
        v17 = SearchKeyHash;
        *(_DWORD *)(v19 + v20) = SearchKeyHash;
      }
      else
      {
        v17 = SearchKeyHash;
        if ( *(_DWORD *)(*(unsigned int *)(v14 + 44)
                       + v14
                       + v16 * *(unsigned __int8 *)(v14 + 52)
                       - *(unsigned __int16 *)(v14 + 18)) != SearchKeyHash )
          return (unsigned int)-1073741271;
      }
      v21 = *(_QWORD *)(a2 + 32);
      LOWORD(SearchKeyHash) = -1;
      v69 = -1;
      v22 = *(_BYTE *)(v21 + 2);
      LOBYTE(v17) = (v22 & 8) != 0;
      LOBYTE(v15) = (v22 & 0x10) != 0;
      if ( v13 == 2 )
      {
        v58 = ApiSetpGetSearchKeyHash((unsigned int)&v64, 0, v17, v15, *(_BYTE *)(v21 + 67));
        v23 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v21, v21 + 56, &v64);
        v67 = v23;
        if ( (_WORD)v23 == 0xFFFF )
        {
          inserted = ApiSetSchemaExpander_InsertGroupContractEntry(a2, &v64, &v67);
          if ( inserted < 0 )
            return (unsigned int)inserted;
          v24 = *(_QWORD *)(a2 + 32);
          v25 = *(unsigned __int8 *)(v24 + 64);
          v26 = *(unsigned int *)(v24 + 56);
LABEL_17:
          LOWORD(v23) = v67;
          v13 = HIDWORD(v64);
          *(_DWORD *)(v26 + v24 + v67 * v25 - *(unsigned __int16 *)(v24 + 18)) = v58;
LABEL_26:
          v35 = *(_QWORD *)(a2 + 32);
          v36 = v61;
          if ( v13 == 2 )
          {
            v37 = *(unsigned int *)(v35 + 56)
                + (unsigned __int16)v23 * (unsigned __int64)*(unsigned __int8 *)(v35 + 64)
                - *(unsigned __int16 *)(v35 + 18);
            *(_WORD *)(v37 + v35 + 4) = v16;
            *(_DWORD *)(v37 + v35 + 8) = *(_DWORD *)(v61 + 4 * v9 + 12);
          }
          else
          {
            v38 = *(unsigned int *)(v35 + 68)
                + (unsigned __int16)v23 * (unsigned __int64)*(unsigned __int8 *)(v35 + 76)
                - *(unsigned __int16 *)(v35 + 18);
            *(_WORD *)(v38 + v35 + 4) = v16;
            if ( (*(_BYTE *)(v61 + 4 * v9 + 17) & 4) != 0 )
              *(_BYTE *)(v38 + v35 + 10) |= 4u;
          }
          v62 = 0LL;
          if ( *(_BYTE *)(a2 + 16) && v13 == 3 )
            v62 = ApiSetpSearchForApiSetA(*(_DWORD **)(a2 + 40), (unsigned __int8 *)v64, WORD1(v65));
          v39 = 0;
          for ( i = 0; v39 < *(_WORD *)(v36 + 4 * v9 + 10); i = v39 )
          {
            v40 = (unsigned int *)(a1 + 16LL * v39 + *(unsigned int *)(v36 + 4 * v9 + 4));
            v64 = 0LL;
            v66 = 0LL;
            v65 = 0LL;
            v41 = *v40;
            WORD4(v64) = *((_WORD *)v40 + 4);
            WORD1(v65) = WORD4(v64);
            v42 = *(_QWORD *)(a2 + 32);
            *(_QWORD *)&v64 = a1 + v41;
            BYTE10(v64) = 1;
            v63 = v42;
            v67 = ApiSetpSearchForSectionIndex_V7(v42, v42 + 92, &v64);
            v43 = v67;
            if ( v67 == 0xFFFF )
            {
              inserted = ApiSetSchemaExpander_InsertHostEntry(a2, &v64, &v67);
              if ( inserted < 0 )
                return (unsigned int)inserted;
              v44 = *(_QWORD *)(a2 + 32);
              v43 = v67;
            }
            else
            {
              v44 = v63;
            }
            if ( *((_WORD *)v40 + 5) )
            {
              v45 = *(_DWORD *)(a2 + 156);
              v46 = 1;
              v47 = v45 + 16;
              v48 = v45 >> 4;
              *(_DWORD *)(a2 + 156) = v47;
              v49 = *(unsigned __int16 *)(v44 + 18);
              v50 = v44
                  + *(unsigned int *)(v44 + 104)
                  + (unsigned __int16)v48 * (unsigned __int64)*(unsigned __int16 *)(v44 + 114)
                  - v49;
              v51 = *(unsigned int *)(v44 + 92)
                  + (unsigned __int16)SearchKeyHash * (unsigned __int64)*(unsigned __int8 *)(v44 + 100)
                  - v49;
              *(_DWORD *)(v50 + 8) = *(_DWORD *)(v51 + v44 + 4);
              *(_WORD *)(v50 + 14) = *(_WORD *)(v51 + v44 + 8);
              v52 = *(_QWORD *)(a2 + 32)
                  + v43 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 32) + 100LL)
                  - *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 18LL)
                  + *(unsigned int *)(*(_QWORD *)(a2 + 32) + 92LL);
              *(_DWORD *)(v50 + 4) = *(_DWORD *)(v52 + 4);
              *(_WORD *)(v50 + 12) = *(_WORD *)(v52 + 8);
              *(_WORD *)v50 = v69;
            }
            else
            {
              v46 = 0;
              LOWORD(v48) = -1;
            }
            v53 = *(_QWORD *)(a2 + 32)
                + (unsigned __int16)v16 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 32) + 52LL)
                - *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 18LL)
                + *(unsigned int *)(*(_QWORD *)(a2 + 32) + 44LL);
            *(_BYTE *)(v53 + 10) |= 2u;
            *(_WORD *)(v53 + 4) = v43;
            if ( v46 )
            {
              *(_WORD *)(v53 + 6) = v48;
              ++*(_WORD *)(v53 + 8);
            }
            if ( v62 )
            {
              v54 = *(_QWORD *)(a2 + 32);
              v55 = *(_QWORD *)(a2 + 40) + *(unsigned int *)(v62 + 16);
              v56 = v54
                  + v43 * (unsigned __int64)*(unsigned __int8 *)(v54 + 100)
                  - *(unsigned __int16 *)(v54 + 18)
                  + *(unsigned int *)(v54 + 92);
              *(_DWORD *)(v55 + 12) = *(_DWORD *)(v56 + 4) + *(_DWORD *)(v54 + 36);
              *(_DWORD *)(v55 + 16) = 2 * *(unsigned __int16 *)(v56 + 8);
            }
            v39 = i + 1;
          }
          goto LABEL_46;
        }
        v27 = *(unsigned __int16 *)(v21 + 18);
        v28 = v21 + *(unsigned __int8 *)(v21 + 64) * v23 - v27 + *(unsigned int *)(v21 + 56);
        if ( *(_DWORD *)v28 != v58 )
          return (unsigned int)-1073741271;
        v29 = *(_BYTE *)(v28 + 6);
        v30 = *(unsigned int *)(v21 + 44)
            + *(unsigned __int16 *)(v28 + 4) * (unsigned __int64)*(unsigned __int8 *)(v21 + 52)
            - v27;
        v31 = *(_WORD *)(v30 + v21 + 4);
        v69 = *(_WORD *)(v30 + v21 + 6);
        LOWORD(SearchKeyHash) = v31;
      }
      else
      {
        v58 = ApiSetpGetSearchKeyHash((unsigned int)&v64, 0, v17, v15, *(_BYTE *)(v21 + 79));
        v23 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v21, v21 + 68, &v64);
        v67 = v23;
        if ( (_WORD)v23 == 0xFFFF )
        {
          inserted = ApiSetSchemaExpander_InsertSemverContractEntry(a2, &v64, &v67);
          if ( inserted < 0 )
            return (unsigned int)inserted;
          v24 = *(_QWORD *)(a2 + 32);
          v25 = *(unsigned __int8 *)(v24 + 76);
          v26 = *(unsigned int *)(v24 + 68);
          goto LABEL_17;
        }
        v32 = *(unsigned __int16 *)(v21 + 18);
        v33 = v21 + *(unsigned __int8 *)(v21 + 76) * v23 - v32 + *(unsigned int *)(v21 + 68);
        if ( *(_DWORD *)v33 != v58 )
          return (unsigned int)-1073741271;
        v34 = *(unsigned int *)(v21 + 44)
            + *(unsigned __int16 *)(v33 + 4) * (unsigned __int64)*(unsigned __int8 *)(v21 + 52)
            - v32;
        LOWORD(SearchKeyHash) = *(_WORD *)(v34 + v21 + 4);
        v69 = *(_WORD *)(v34 + v21 + 6);
        v29 = *(_BYTE *)(v33 + 10);
      }
      if ( (v29 & 1) == 0 )
        goto LABEL_26;
LABEL_46:
      v8 = v60 + 1;
      v60 = v8;
      if ( v8 >= *(unsigned __int16 *)(a1 + 18) )
        return (unsigned int)inserted;
    }
  }
  v66 = 0LL;
  v6 = *(unsigned int *)(a1 + 8);
  v64 = 0LL;
  WORD4(v64) = v3;
  v65 = 0LL;
  WORD1(v65) = v3;
  v7 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)&v64 = a1 + v6;
  BYTE10(v64) = 0;
  if ( (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v7, v7 + 80, &v64) == 0xFFFF )
  {
    inserted = ApiSetSchemaExpander_InsertExtensionNameEntry(a2, &v64);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    goto LABEL_5;
  }
  return (unsigned int)-1073741771;
}
