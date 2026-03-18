/*
 * XREFs of ApiSetCompose_ProcessV7Extension_Phase1 @ 0x140655A2C
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1406555B4 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpSearchForApiSetA @ 0x140653F1C (ApiSetpSearchForApiSetA.c)
 *     ApiSetpGetContractKeyInfo @ 0x1406560E8 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1406565B0 (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetSchemaExpander_InsertContractEntry @ 0x1406569E4 (ApiSetSchemaExpander_InsertContractEntry.c)
 *     ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x140656A68 (ApiSetSchemaExpander_InsertExtensionNameEntry.c)
 *     ApiSetSchemaExpander_InsertGroupContractEntry @ 0x140656AE0 (ApiSetSchemaExpander_InsertGroupContractEntry.c)
 *     ApiSetSchemaExpander_InsertHostEntry @ 0x140656B64 (ApiSetSchemaExpander_InsertHostEntry.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x140656C10 (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 */

__int64 __fastcall ApiSetCompose_ProcessV7Extension_Phase1(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int16 v5; // cx
  int inserted; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ecx
  int v10; // r13d
  int v11; // r9d
  char *v12; // r12
  char *v13; // r10
  __int64 v14; // r11
  char v15; // cl
  int v16; // edx
  __int64 v17; // rsi
  unsigned __int16 v18; // ax
  char *v19; // r9
  int v20; // r12d
  __int64 v21; // r10
  char v22; // cl
  __int64 v23; // rsi
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rcx
  __int64 v32; // r10
  char v33; // cl
  __int64 v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rsi
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rcx
  unsigned __int16 i; // r12
  unsigned int *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int16 v48; // r10
  unsigned int v49; // r11d
  char v50; // si
  unsigned int v51; // eax
  unsigned int v52; // r11d
  __int64 v53; // r8
  __int64 v54; // rdx
  unsigned __int64 v55; // r9
  __int64 v56; // rcx
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // r8
  __int64 v59; // r9
  unsigned __int64 v60; // rdx
  __int16 v62; // [rsp+20h] [rbp-40h]
  unsigned int v63; // [rsp+24h] [rbp-3Ch]
  __int64 v64; // [rsp+28h] [rbp-38h]
  __int64 v65; // [rsp+30h] [rbp-30h]
  __int128 v66; // [rsp+38h] [rbp-28h] BYREF
  __int128 v67; // [rsp+48h] [rbp-18h]
  int v68; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int16 v69; // [rsp+B0h] [rbp+50h] BYREF
  unsigned __int16 v70; // [rsp+B8h] [rbp+58h]

  v2 = (_QWORD *)(a2 + 32);
  v5 = *(_WORD *)(a1 + 16);
  inserted = 0;
  if ( !v5 )
  {
LABEL_5:
    v9 = 0;
    v63 = 0;
    if ( !*(_WORD *)(a1 + 18) )
      return (unsigned int)inserted;
    while ( 1 )
    {
      v66 = 0LL;
      v65 = 5LL * v9;
      v64 = a1 + *(unsigned int *)(a1 + 12);
      v67 = 0LL;
      if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(
                               a1 + *(unsigned int *)(v64 + 20LL * v9),
                               *(unsigned __int16 *)(v64 + 20LL * v9 + 8),
                               0LL,
                               &v66) )
        return (unsigned int)-1073741773;
      v10 = HIDWORD(v66);
      if ( (unsigned int)(HIDWORD(v66) - 2) > 1 )
        return (unsigned int)-1073741773;
      v11 = 0;
      v12 = (char *)v66;
      v68 = 0;
      v13 = (char *)v66;
      if ( WORD2(v67) )
      {
        v14 = WORD2(v67);
        do
        {
          v15 = *v13 + 32;
          if ( (unsigned __int8)(*v13 - 65) > 0x19u )
            v15 = *v13;
          ++v13;
          v16 = v11 * *(unsigned __int8 *)(*v2 + 55LL) + v15;
          v11 = v16;
          --v14;
        }
        while ( v14 );
        v10 = HIDWORD(v66);
        v68 = v16;
      }
      v17 = *v2;
      v18 = ApiSetpSearchForSectionIndex_V7(*v2, *v2 + 44LL, &v66);
      v69 = v18;
      if ( v18 == 0xFFFF )
      {
        inserted = ApiSetSchemaExpander_InsertContractEntry(a2, &v66, &v69);
        if ( inserted < 0 )
          return (unsigned int)inserted;
        v10 = HIDWORD(v66);
        v12 = (char *)v66;
        *(_DWORD *)(*(unsigned int *)(*v2 + 44LL)
                  + *v2
                  + v69 * (unsigned __int64)*(unsigned __int8 *)(*v2 + 52LL)
                  - *(unsigned __int16 *)(*v2 + 18LL)) = v68;
      }
      else if ( *(_DWORD *)(*(unsigned int *)(v17 + 44)
                          + v17
                          + v18 * (unsigned __int64)*(unsigned __int8 *)(v17 + 52)
                          - *(unsigned __int16 *)(v17 + 18)) != v68 )
      {
        return (unsigned int)-1073741271;
      }
      v70 = -1;
      v19 = v12;
      v62 = -1;
      v20 = 0;
      if ( v10 == 2 )
      {
        if ( WORD1(v67) )
        {
          v21 = WORD1(v67);
          do
          {
            v22 = *v19 + 32;
            if ( (unsigned __int8)(*v19 - 65) > 0x19u )
              v22 = *v19;
            ++v19;
            v20 = v22 + *(unsigned __int8 *)(*v2 + 67LL) * v20;
            --v21;
          }
          while ( v21 );
          v10 = HIDWORD(v66);
        }
        v23 = *v2;
        v24 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(*v2, *v2 + 56LL, &v66);
        LOWORD(v68) = v24;
        if ( (_WORD)v24 == 0xFFFF )
        {
          inserted = ApiSetSchemaExpander_InsertGroupContractEntry(a2, &v66, &v68);
          if ( inserted < 0 )
            return (unsigned int)inserted;
          v25 = *v2;
          v26 = *(unsigned __int8 *)(*v2 + 64LL);
          v27 = *(unsigned int *)(*v2 + 56LL);
LABEL_29:
          LOWORD(v24) = v68;
          v10 = HIDWORD(v66);
          *(_DWORD *)(v27 + v25 + (unsigned __int16)v68 * v26 - *(unsigned __int16 *)(v25 + 18)) = v20;
LABEL_44:
          v38 = *v2;
          v39 = v65;
          if ( v10 == 2 )
          {
            v40 = *(unsigned int *)(v38 + 56)
                + (unsigned __int16)v24 * (unsigned __int64)*(unsigned __int8 *)(v38 + 64)
                - *(unsigned __int16 *)(v38 + 18);
            *(_WORD *)(v40 + v38 + 4) = v69;
            *(_DWORD *)(v40 + v38 + 8) = *(_DWORD *)(v64 + 4 * v65 + 12);
          }
          else
          {
            v41 = *(unsigned int *)(v38 + 68)
                + (unsigned __int16)v24 * (unsigned __int64)*(unsigned __int8 *)(v38 + 76)
                - *(unsigned __int16 *)(v38 + 18);
            *(_WORD *)(v41 + v38 + 4) = v69;
            if ( (*(_BYTE *)(v64 + 4 * v65 + 17) & 4) != 0 )
              *(_BYTE *)(v41 + v38 + 10) |= 4u;
          }
          if ( *(_BYTE *)(a2 + 16) && v10 == 3 )
            v42 = ApiSetpSearchForApiSetA(*(_DWORD **)(a2 + 40), (unsigned __int8 *)v66, WORD1(v67));
          else
            v42 = 0LL;
          v43 = v64;
          for ( i = 0; i < *(_WORD *)(v64 + 4 * v65 + 10); v39 = v65 )
          {
            v45 = (unsigned int *)(a1 + 16LL * i + *(unsigned int *)(v43 + 4 * v39 + 4));
            v66 = 0LL;
            BYTE10(v66) = 1;
            v67 = 0LL;
            v46 = *v45;
            WORD4(v66) = *((_WORD *)v45 + 4);
            WORD1(v67) = WORD4(v66);
            v47 = *v2;
            *(_QWORD *)&v66 = a1 + v46;
            v48 = ApiSetpSearchForSectionIndex_V7(v47, v47 + 92, &v66);
            LOWORD(v68) = v48;
            if ( v48 == 0xFFFF )
            {
              inserted = ApiSetSchemaExpander_InsertHostEntry(a2, &v66, &v68);
              if ( inserted < 0 )
                return (unsigned int)inserted;
              v48 = v68;
            }
            if ( *((_WORD *)v45 + 5) )
            {
              v49 = *(_DWORD *)(a2 + 156);
              v50 = 1;
              v51 = v49 + 16;
              v52 = v49 >> 4;
              *(_DWORD *)(a2 + 156) = v51;
              v53 = *v2;
              v54 = *(unsigned __int16 *)(*v2 + 18LL);
              v55 = *v2
                  + *(unsigned int *)(*v2 + 104LL)
                  + (unsigned __int16)v52 * (unsigned __int64)*(unsigned __int16 *)(*v2 + 114LL)
                  - v54;
              v56 = *(unsigned int *)(*v2 + 92LL) + v70 * (unsigned __int64)*(unsigned __int8 *)(*v2 + 100LL) - v54;
              *(_DWORD *)(v55 + 8) = *(_DWORD *)(v56 + *v2 + 4);
              *(_WORD *)(v55 + 14) = *(_WORD *)(v56 + v53 + 8);
              v57 = *v2
                  + v48 * (unsigned __int64)*(unsigned __int8 *)(*v2 + 100LL)
                  - *(unsigned __int16 *)(*v2 + 18LL)
                  + *(unsigned int *)(*v2 + 92LL);
              *(_DWORD *)(v55 + 4) = *(_DWORD *)(v57 + 4);
              *(_WORD *)(v55 + 12) = *(_WORD *)(v57 + 8);
              *(_WORD *)v55 = v62;
            }
            else
            {
              v50 = 0;
              LOWORD(v52) = -1;
            }
            v58 = *v2
                + v69 * (unsigned __int64)*(unsigned __int8 *)(*v2 + 52LL)
                - *(unsigned __int16 *)(*v2 + 18LL)
                + *(unsigned int *)(*v2 + 44LL);
            *(_BYTE *)(v58 + 10) |= 2u;
            *(_WORD *)(v58 + 4) = v48;
            if ( v50 )
            {
              ++*(_WORD *)(v58 + 8);
              *(_WORD *)(v58 + 6) = v52;
            }
            if ( v42 )
            {
              v59 = *(_QWORD *)(a2 + 40) + *(unsigned int *)(v42 + 16);
              v60 = *v2
                  + v48 * (unsigned __int64)*(unsigned __int8 *)(*v2 + 100LL)
                  - *(unsigned __int16 *)(*v2 + 18LL)
                  + *(unsigned int *)(*v2 + 92LL);
              *(_DWORD *)(v59 + 12) = *(_DWORD *)(v60 + 4) + *(_DWORD *)(*v2 + 36LL);
              *(_DWORD *)(v59 + 16) = 2 * *(unsigned __int16 *)(v60 + 8);
            }
            v43 = v64;
            ++i;
          }
          goto LABEL_64;
        }
        v28 = *(unsigned __int16 *)(v23 + 18);
        v29 = v23 + *(unsigned __int8 *)(v23 + 64) * v24 - v28 + *(unsigned int *)(v23 + 56);
        if ( *(_DWORD *)v29 != v20 )
          return (unsigned int)-1073741271;
        v30 = *(_BYTE *)(v29 + 6);
        v31 = *(unsigned int *)(v23 + 44)
            + *(unsigned __int16 *)(v29 + 4) * (unsigned __int64)*(unsigned __int8 *)(v23 + 52)
            - v28;
        v62 = *(_WORD *)(v31 + v23 + 6);
        v70 = *(_WORD *)(v31 + v23 + 4);
      }
      else
      {
        if ( WORD1(v67) )
        {
          v32 = WORD1(v67);
          do
          {
            v33 = *v19 + 32;
            if ( (unsigned __int8)(*v19 - 65) > 0x19u )
              v33 = *v19;
            ++v19;
            v20 = v33 + *(unsigned __int8 *)(*v2 + 79LL) * v20;
            --v32;
          }
          while ( v32 );
          v10 = HIDWORD(v66);
        }
        v34 = *v2;
        v24 = (unsigned __int16)ApiSetpSearchForSectionIndex_V7(*v2, *v2 + 68LL, &v66);
        LOWORD(v68) = v24;
        if ( (_WORD)v24 == 0xFFFF )
        {
          inserted = ApiSetSchemaExpander_InsertSemverContractEntry(a2, &v66, &v68);
          if ( inserted < 0 )
            return (unsigned int)inserted;
          v25 = *v2;
          v26 = *(unsigned __int8 *)(*v2 + 76LL);
          v27 = *(unsigned int *)(*v2 + 68LL);
          goto LABEL_29;
        }
        v35 = *(unsigned __int16 *)(v34 + 18);
        v36 = v34 + *(unsigned __int8 *)(v34 + 76) * v24 - v35 + *(unsigned int *)(v34 + 68);
        if ( *(_DWORD *)v36 != v20 )
          return (unsigned int)-1073741271;
        v37 = *(unsigned int *)(v34 + 44)
            + *(unsigned __int16 *)(v36 + 4) * (unsigned __int64)*(unsigned __int8 *)(v34 + 52)
            - v35;
        v70 = *(_WORD *)(v37 + v34 + 4);
        v62 = *(_WORD *)(v37 + v34 + 6);
        v30 = *(_BYTE *)(v36 + 10);
      }
      if ( (v30 & 1) == 0 )
        goto LABEL_44;
LABEL_64:
      v9 = v63 + 1;
      v63 = v9;
      if ( v9 >= *(unsigned __int16 *)(a1 + 18) )
        return (unsigned int)inserted;
    }
  }
  v7 = a1 + *(unsigned int *)(a1 + 8);
  v66 = 0LL;
  WORD4(v66) = v5;
  v67 = 0LL;
  WORD1(v67) = v5;
  v8 = *v2;
  *(_QWORD *)&v66 = v7;
  BYTE10(v66) = 0;
  if ( (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v8, v8 + 80, &v66) == 0xFFFF )
  {
    inserted = ApiSetSchemaExpander_InsertExtensionNameEntry(a2, &v66);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    goto LABEL_5;
  }
  return (unsigned int)-1073741771;
}
