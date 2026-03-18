/*
 * XREFs of ApiSetCompose_V7_ProcessV6Extension_Phase0 @ 0x140656E3C
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x1406555B4 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x1406560E8 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1406565B0 (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetCompose_V7_ProcessV6Extension_Phase0(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v5; // r15d
  __int64 v6; // r14
  __int64 v7; // r13
  unsigned int v8; // r12d
  __int64 v9; // rax
  unsigned int v10; // r12d
  unsigned int v11; // r12d
  unsigned __int16 v12; // ax
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int128 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+90h] [rbp+18h]

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
    v7 = *(_QWORD *)(a2 + 8);
    v8 = *(_DWORD *)(v6 + 24LL * v5 + 8);
    v9 = *(unsigned int *)(v6 + 24LL * v5 + 4);
    *((_QWORD *)&v14 + 1) = 0x10000LL;
    v10 = v8 >> 1;
    v15 = 0LL;
    *(_QWORD *)&v14 = a1 + v9;
    WORD4(v14) = v10;
    WORD1(v15) = v10;
    if ( (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v7, v7 + 92, (__int64)&v14) == 0xFFFF )
    {
      ++*(_WORD *)(a2 + 200);
      *(_DWORD *)(a2 + 204) += 20;
      *(_DWORD *)(a2 + 232) += 2 * (unsigned __int16)v10;
    }
    v11 = 0;
    if ( !*(_DWORD *)(v6 + 24LL * v5 + 20) )
      goto LABEL_14;
    while ( 1 )
    {
      v14 = 0LL;
      v16 = a1 + *(unsigned int *)(v6 + 24LL * v5 + 16);
      v15 = 0LL;
      if ( !ApiSetpGetContractKeyInfo(
              (_QWORD *)(a1 + *(unsigned int *)(v16 + 20LL * v11 + 12)),
              *(_DWORD *)(v16 + 20LL * v11 + 16) >> 1,
              1,
              (__int64)&v14) )
        return (unsigned int)-1073741773;
      v12 = ApiSetpSearchForSectionIndex_V7(v7, v7 + 68, (__int64)&v14);
      if ( v12 == 0xFFFF )
        break;
      if ( (*(_BYTE *)(*(unsigned int *)(v7 + 68)
                     + v12 * (unsigned __int64)*(unsigned __int8 *)(v7 + 76)
                     - *(unsigned __int16 *)(v7 + 18)
                     + v7
                     + 10) & 1) == 0 )
        goto LABEL_11;
LABEL_13:
      if ( ++v11 >= *(_DWORD *)(v6 + 24LL * v5 + 20) )
        goto LABEL_14;
    }
    ++*(_WORD *)(a2 + 188);
    *(_DWORD *)(a2 + 192) += 20;
    ++*(_WORD *)(a2 + 164);
    *(_DWORD *)(a2 + 168) += 20;
LABEL_11:
    if ( *(_DWORD *)(v16 + 20LL * v11 + 4) )
    {
      ++*(_WORD *)(a2 + 224);
      *(_DWORD *)(a2 + 228) += 16;
    }
    goto LABEL_13;
  }
  return v2;
}
