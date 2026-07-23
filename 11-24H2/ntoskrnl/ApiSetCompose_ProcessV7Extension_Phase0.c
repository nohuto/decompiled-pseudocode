/*
 * XREFs of ApiSetCompose_ProcessV7Extension_Phase0 @ 0x1406600B0
 * Callers:
 *     ApiSetComposeSchema_V7 @ 0x14065FE98 (ApiSetComposeSchema_V7.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x140660A78 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14066111C (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetCompose_ProcessV7Extension_Phase0(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  bool v5; // cf
  unsigned int v6; // r13d
  __int64 v7; // rsi
  unsigned __int16 v8; // ax
  char v9; // al
  bool v10; // zf
  unsigned __int16 v11; // ax
  unsigned int v12; // r12d
  __int64 i; // rcx
  _WORD *v14; // r15
  __int64 v15; // rax
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+A8h] [rbp+58h]

  v2 = 0;
  if ( *(_WORD *)(a1 + 16) )
  {
    ++*(_WORD *)(a2 + 212);
    *(_DWORD *)(a2 + 216) += 12;
  }
  v5 = *(_WORD *)(a1 + 18) != 0;
  v6 = 0;
  while ( v5 )
  {
    v19 = 0LL;
    v17 = 0LL;
    v20 = a1 + *(unsigned int *)(a1 + 12);
    v18 = 0LL;
    if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(
                             a1 + *(unsigned int *)(v20 + 20LL * v6),
                             *(unsigned __int16 *)(v20 + 20LL * v6 + 8),
                             0LL,
                             &v17)
      || (unsigned int)(HIDWORD(v17) - 2) > 1 )
    {
      return (unsigned int)-1073741773;
    }
    v7 = *(_QWORD *)(a2 + 8);
    if ( HIDWORD(v17) == 2 )
    {
      v8 = ApiSetpSearchForSectionIndex_V7(v7, v7 + 56, &v17);
      if ( v8 == 0xFFFF )
      {
        ++*(_WORD *)(a2 + 176);
        v9 = 0;
        *(_DWORD *)(a2 + 180) += 20;
        ++*(_WORD *)(a2 + 164);
        *(_DWORD *)(a2 + 168) += 20;
      }
      else
      {
        v9 = *(_BYTE *)(*(unsigned int *)(v7 + 56)
                      + v7
                      + v8 * (unsigned __int64)*(unsigned __int8 *)(v7 + 64)
                      - *(unsigned __int16 *)(v7 + 18)
                      + 6) & 1;
      }
      v10 = v9 == 0;
LABEL_14:
      if ( !v10 )
        goto LABEL_22;
      goto LABEL_15;
    }
    v11 = ApiSetpSearchForSectionIndex_V7(v7, v7 + 68, &v17);
    if ( v11 != 0xFFFF )
    {
      v10 = (*(_BYTE *)(*(unsigned int *)(v7 + 68)
                      + v7
                      + v11 * (unsigned __int64)*(unsigned __int8 *)(v7 + 76)
                      - *(unsigned __int16 *)(v7 + 18)
                      + 10) & 1) == 0;
      goto LABEL_14;
    }
    ++*(_WORD *)(a2 + 188);
    *(_DWORD *)(a2 + 192) += 20;
    ++*(_WORD *)(a2 + 164);
    *(_DWORD *)(a2 + 168) += 20;
LABEL_15:
    v12 = 0;
    for ( i = v20; v12 < *(unsigned __int16 *)(v20 + 20LL * v6 + 10); i = v20 )
    {
      v14 = (_WORD *)(a1 + 16LL * v12 + *(unsigned int *)(i + 20LL * v6 + 4));
      v17 = 0LL;
      v19 = 0LL;
      v18 = 0LL;
      v15 = a1 + *(unsigned int *)v14;
      WORD4(v17) = v14[4];
      WORD1(v18) = WORD4(v17);
      *(_QWORD *)&v17 = v15;
      BYTE10(v17) = 1;
      if ( (unsigned __int16)ApiSetpSearchForSectionIndex_V7(v7, v7 + 92, &v17) == 0xFFFF && !v14[6] )
      {
        ++*(_WORD *)(a2 + 200);
        *(_DWORD *)(a2 + 204) += 20;
        *(_DWORD *)(a2 + 232) += 2 * (unsigned __int16)v14[4];
        v14[6] |= 1u;
        v7 = *(_QWORD *)(a2 + 8);
      }
      if ( v14[5] )
      {
        ++*(_WORD *)(a2 + 224);
        *(_DWORD *)(a2 + 228) += 16;
      }
      ++v12;
    }
LABEL_22:
    v5 = ++v6 < *(unsigned __int16 *)(a1 + 18);
  }
  return v2;
}
