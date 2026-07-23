/*
 * XREFs of ApiSetCompose_V7_ProcessV6Extension_Phase0 @ 0x1406619D0
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x14065FE98 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x140660A78 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14066111C (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetCompose_V7_ProcessV6Extension_Phase0(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v5; // r12d
  __int64 v6; // r15
  unsigned int v7; // r13d
  unsigned int v8; // r13d
  __int64 v9; // rax
  unsigned int v10; // r13d
  unsigned __int16 v11; // ax
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+90h] [rbp+40h]
  __int64 v17; // [rsp+A8h] [rbp+58h]

  v2 = 0;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 12) )
  {
    while ( 1 )
    {
      v6 = a1 + *(unsigned int *)(a1 + 16);
      if ( (*(_DWORD *)(v6 + 24LL * v5) & 4) == 0 )
        break;
      ++*(_WORD *)(a2 + 212);
      *(_DWORD *)(a2 + 216) += 12;
LABEL_14:
      if ( ++v5 >= *(_DWORD *)(a1 + 12) )
        return v2;
    }
    v7 = *(_DWORD *)(v6 + 24LL * v5 + 8);
    v15 = 0LL;
    v8 = v7 >> 1;
    v13 = a1 + (unsigned __int64)*(unsigned int *)(v6 + 24LL * v5 + 4);
    v9 = *(_QWORD *)(a2 + 8);
    BYTE10(v13) = 1;
    v14 = 0LL;
    WORD4(v13) = v8;
    WORD1(v14) = v8;
    v16 = v9;
    if ( (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v9, v9 + 92, (__int64)&v13) == 0xFFFF )
    {
      ++*(_WORD *)(a2 + 200);
      *(_DWORD *)(a2 + 204) += 20;
      *(_DWORD *)(a2 + 232) += 2 * (unsigned __int16)v8;
    }
    v10 = 0;
    if ( !*(_DWORD *)(v6 + 24LL * v5 + 20) )
      goto LABEL_14;
    while ( 1 )
    {
      v15 = 0LL;
      v13 = 0LL;
      v17 = a1 + *(unsigned int *)(v6 + 24LL * v5 + 16);
      v14 = 0LL;
      if ( !ApiSetpGetContractKeyInfo(
              (_QWORD *)(a1 + *(unsigned int *)(v17 + 20LL * v10 + 12)),
              *(_DWORD *)(v17 + 20LL * v10 + 16) >> 1,
              1,
              (__int64)&v13) )
        return (unsigned int)-1073741773;
      v11 = ApiSetpSearchForSectionIndex_V7(v16, v16 + 68, (__int64)&v13);
      if ( v11 == 0xFFFF )
        break;
      if ( (*(_BYTE *)(*(unsigned int *)(v16 + 68)
                     + v16
                     + v11 * (unsigned __int64)*(unsigned __int8 *)(v16 + 76)
                     - *(unsigned __int16 *)(v16 + 18)
                     + 10) & 1) == 0 )
        goto LABEL_11;
LABEL_13:
      if ( ++v10 >= *(_DWORD *)(v6 + 24LL * v5 + 20) )
        goto LABEL_14;
    }
    *(_DWORD *)(a2 + 192) += 20;
    ++*(_WORD *)(a2 + 188);
    ++*(_WORD *)(a2 + 164);
    *(_DWORD *)(a2 + 168) += 20;
LABEL_11:
    if ( *(_DWORD *)(v17 + 20LL * v10 + 4) )
    {
      ++*(_WORD *)(a2 + 224);
      *(_DWORD *)(a2 + 228) += 16;
    }
    goto LABEL_13;
  }
  return v2;
}
