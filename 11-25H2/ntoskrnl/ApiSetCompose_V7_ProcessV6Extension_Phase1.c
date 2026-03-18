/*
 * XREFs of ApiSetCompose_V7_ProcessV6Extension_Phase1 @ 0x14065702C
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1406555B4 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1404AC7B8 (ApiSetpSearchForApiSet.c)
 *     ApiSetpGetContractKeyInfo @ 0x1406560E8 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x1406562F4 (ApiSetpGetExtensionNameKeyInfo.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1406565B0 (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetSchemaExpander_InsertContractEntry @ 0x1406569E4 (ApiSetSchemaExpander_InsertContractEntry.c)
 *     ApiSetSchemaExpander_InsertExtensionNameEntry @ 0x140656A68 (ApiSetSchemaExpander_InsertExtensionNameEntry.c)
 *     ApiSetSchemaExpander_InsertHostEntry @ 0x140656B64 (ApiSetSchemaExpander_InsertHostEntry.c)
 *     ApiSetSchemaExpander_InsertSemverContractEntry @ 0x140656C10 (ApiSetSchemaExpander_InsertSemverContractEntry.c)
 */

__int64 __fastcall ApiSetCompose_V7_ProcessV6Extension_Phase1(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int inserted; // ebx
  __int64 v7; // r13
  __int64 v8; // rsi
  unsigned int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  wchar_t *v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  int v17; // edx
  int v18; // r8d
  unsigned __int16 *v19; // r9
  __int64 v20; // r10
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // cx
  __int64 v23; // r14
  unsigned __int16 v24; // ax
  unsigned __int16 v25; // r12
  unsigned __int64 v26; // rsi
  int v27; // r8d
  unsigned __int16 *v28; // r9
  __int64 v29; // r10
  unsigned __int16 v30; // dx
  unsigned __int16 v31; // cx
  __int64 v32; // r14
  unsigned __int16 v33; // ax
  unsigned int v34; // r10d
  __int64 v35; // r14
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r9
  unsigned __int64 v44; // rdx
  int v46; // [rsp+20h] [rbp-40h]
  int v47; // [rsp+24h] [rbp-3Ch]
  __int64 v48; // [rsp+28h] [rbp-38h]
  __int64 v49; // [rsp+30h] [rbp-30h]
  __int64 v50; // [rsp+38h] [rbp-28h]
  __int128 v51; // [rsp+40h] [rbp-20h] BYREF
  __int128 v52; // [rsp+50h] [rbp-10h]
  unsigned __int16 v53; // [rsp+A0h] [rbp+40h] BYREF
  unsigned __int16 v54; // [rsp+B0h] [rbp+50h] BYREF
  int v55; // [rsp+B8h] [rbp+58h]

  v3 = 0LL;
  inserted = 0;
  v47 = 0;
  if ( !*(_DWORD *)(a1 + 12) )
    return (unsigned int)inserted;
  while ( 1 )
  {
    v7 = 3 * v3;
    v8 = a1 + *(unsigned int *)(a1 + 16);
    v50 = v8;
    v51 = 0LL;
    v9 = *(_DWORD *)(v8 + 24 * v3 + 8);
    v10 = *(unsigned int *)(v8 + 24 * v3 + 4);
    v11 = *(_DWORD *)(v8 + 24 * v3);
    v12 = (wchar_t *)(a1 + v10);
    v13 = v9 >> 1;
    v52 = 0LL;
    if ( (v11 & 4) == 0 )
      break;
    if ( !ApiSetpGetExtensionNameKeyInfo(v12, v13, a3, (__int64)&v51) )
      return (unsigned int)-1073741773;
    if ( (unsigned __int16)ApiSetpSearchForSectionIndex_V7(
                             *(_QWORD *)(a2 + 32),
                             *(_QWORD *)(a2 + 32) + 80LL,
                             (__int64)&v51) != 0xFFFF )
      return (unsigned int)-1073741771;
    inserted = ApiSetSchemaExpander_InsertExtensionNameEntry(a2, (__int64)&v51);
    if ( inserted < 0 )
      return (unsigned int)inserted;
LABEL_41:
    v3 = (unsigned int)(v47 + 1);
    v47 = v3;
    if ( (unsigned int)v3 >= *(_DWORD *)(a1 + 12) )
      return (unsigned int)inserted;
  }
  *(_QWORD *)&v51 = v12;
  v14 = *(_QWORD *)(a2 + 32);
  WORD4(v51) = v13;
  WORD1(v52) = v13;
  BYTE10(v51) = 1;
  v53 = ApiSetpSearchForSectionIndex_V7(v14, v14 + 92, (__int64)&v51);
  if ( v53 == 0xFFFF )
  {
    inserted = ApiSetSchemaExpander_InsertHostEntry(a2, (__int64)&v51, &v53);
    if ( inserted < 0 )
      return (unsigned int)inserted;
  }
  v15 = 0LL;
  v46 = 0;
  if ( !*(_DWORD *)(v8 + 8 * v7 + 20) )
    goto LABEL_41;
  while ( 1 )
  {
    v48 = 5 * v15;
    v49 = a1 + *(unsigned int *)(v8 + 8 * v7 + 16);
    v51 = 0LL;
    v16 = (_QWORD *)(a1 + *(unsigned int *)(v49 + 20 * v15 + 12));
    v17 = *(_DWORD *)(v49 + 20 * v15 + 16) >> 1;
    v52 = 0LL;
    if ( !ApiSetpGetContractKeyInfo(v16, v17, 1, (__int64)&v51) || HIDWORD(v51) != 3 )
      return (unsigned int)-1073741773;
    v18 = 0;
    v19 = (unsigned __int16 *)v51;
    v55 = 0;
    if ( WORD2(v52) )
    {
      v20 = WORD2(v52);
      do
      {
        v21 = *v19++;
        v22 = v21 + 32;
        if ( (unsigned __int16)(v21 - 65) > 0x19u )
          v22 = v21;
        v18 = v22 + *(unsigned __int8 *)(*(_QWORD *)(a2 + 32) + 55LL) * v18;
        --v20;
      }
      while ( v20 );
      v55 = v18;
    }
    v23 = *(_QWORD *)(a2 + 32);
    v24 = ApiSetpSearchForSectionIndex_V7(v23, v23 + 44, (__int64)&v51);
    v25 = v24;
    v54 = v24;
    if ( v24 == 0xFFFF )
    {
      inserted = ApiSetSchemaExpander_InsertContractEntry(a2, (__int64)&v51, &v54);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      v25 = v54;
      v26 = *(_QWORD *)(a2 + 32)
          + v54 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 32) + 52LL)
          - *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 18LL)
          + *(unsigned int *)(*(_QWORD *)(a2 + 32) + 44LL);
      *(_DWORD *)v26 = v55;
      v23 = *(_QWORD *)(a2 + 32);
    }
    else
    {
      v26 = v23
          + v24 * (unsigned __int64)*(unsigned __int8 *)(v23 + 52)
          - *(unsigned __int16 *)(v23 + 18)
          + *(unsigned int *)(v23 + 44);
      if ( *(_DWORD *)v26 != v55 )
        return (unsigned int)-1073741271;
    }
    v27 = 0;
    v28 = (unsigned __int16 *)v51;
    v55 = 0;
    if ( WORD1(v52) )
    {
      v29 = WORD1(v52);
      do
      {
        v30 = *v28++;
        v31 = v30 + 32;
        if ( (unsigned __int16)(v30 - 65) > 0x19u )
          v31 = v30;
        v27 = v31 + *(unsigned __int8 *)(v23 + 79) * v27;
        --v29;
      }
      while ( v29 );
      v55 = v27;
    }
    v32 = *(_QWORD *)(a2 + 32);
    v33 = ApiSetpSearchForSectionIndex_V7(v32, v32 + 68, (__int64)&v51);
    v54 = v33;
    if ( v33 == 0xFFFF )
    {
      inserted = ApiSetSchemaExpander_InsertSemverContractEntry(a2, (__int64)&v51, &v54);
      if ( inserted < 0 )
        return (unsigned int)inserted;
      a3 = *(_QWORD *)(a2 + 32)
         + v54 * (unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a2 + 32) + 76LL)
         - *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 18LL)
         + *(unsigned int *)(*(_QWORD *)(a2 + 32) + 68LL);
      *(_DWORD *)a3 = v55;
    }
    else
    {
      a3 = v32
         + v33 * (unsigned __int64)*(unsigned __int8 *)(v32 + 76)
         - *(unsigned __int16 *)(v32 + 18)
         + *(unsigned int *)(v32 + 68);
      if ( *(_DWORD *)a3 != v55 )
        return (unsigned int)-1073741271;
    }
    *(_WORD *)(a3 + 4) = v25;
    if ( (*(_BYTE *)(a3 + 10) & 1) == 0 )
    {
      if ( *(_DWORD *)(v49 + 4 * v48 + 4) )
      {
        v34 = *(_DWORD *)(a2 + 156);
        v35 = v53;
        v36 = v34 + 16;
        v34 >>= 4;
        *(_DWORD *)(a2 + 156) = v36;
        v37 = *(_QWORD *)(a2 + 32);
        v38 = *(unsigned __int16 *)(v37 + 18);
        v39 = v37
            + *(unsigned int *)(v37 + 104)
            + (unsigned __int16)v34 * (unsigned __int64)*(unsigned __int16 *)(v37 + 114)
            - v38;
        v40 = *(unsigned int *)(v37 + 92)
            + *(unsigned __int16 *)(v26 + 4) * (unsigned __int64)*(unsigned __int8 *)(v37 + 100)
            - v38;
        *(_DWORD *)(v39 + 8) = *(_DWORD *)(v40 + v37 + 4);
        *(_WORD *)(v39 + 14) = *(_WORD *)(v40 + v37 + 8);
        a3 = *(_QWORD *)(a2 + 32);
        v41 = a3 + v35 * *(unsigned __int8 *)(a3 + 100) - *(unsigned __int16 *)(a3 + 18) + *(unsigned int *)(a3 + 92);
        *(_DWORD *)(v39 + 4) = *(_DWORD *)(v41 + 4);
        *(_WORD *)(v39 + 12) = *(_WORD *)(v41 + 8);
        *(_WORD *)v39 = *(_WORD *)(v26 + 6);
        ++*(_WORD *)(v26 + 8);
        *(_WORD *)(v26 + 6) = v34;
      }
      else
      {
        LOWORD(v35) = v53;
      }
      *(_BYTE *)(v26 + 10) |= 2u;
      *(_WORD *)(v26 + 4) = v35;
      if ( *(_BYTE *)(a2 + 16) )
      {
        v42 = ApiSetpSearchForApiSet(*(_DWORD **)(a2 + 40), (const WCHAR *)v51, WORD1(v52));
        if ( v42 )
        {
          a3 = *(_QWORD *)(a2 + 32);
          v43 = *(_QWORD *)(a2 + 40) + *(unsigned int *)(v42 + 16);
          v44 = a3
              + (unsigned __int16)v35 * (unsigned __int64)*(unsigned __int8 *)(a3 + 100)
              - *(unsigned __int16 *)(a3 + 18)
              + *(unsigned int *)(a3 + 92);
          *(_DWORD *)(v43 + 12) = *(_DWORD *)(a3 + 36) + *(_DWORD *)(v44 + 4);
          *(_DWORD *)(v43 + 16) = 2 * *(unsigned __int16 *)(v44 + 8);
        }
      }
    }
    v8 = v50;
    v15 = (unsigned int)(v46 + 1);
    v46 = v15;
    if ( (unsigned int)v15 >= *(_DWORD *)(v50 + 8 * v7 + 20) )
      goto LABEL_41;
  }
}
