/*
 * XREFs of ApiSetpResolveHost @ 0x14033F76C
 * Callers:
 *     ApiSetResolveToHost @ 0x14033F63C (ApiSetResolveToHost.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x14033FA28 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x14033FC88 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14033FD78 (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetpResolveHost(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  char v8; // r14
  unsigned __int16 v9; // ax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rcx
  char v15; // al
  unsigned __int16 v16; // r8
  unsigned __int16 v17; // ax
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // r13
  __int64 v21; // rsi
  char v22; // al
  unsigned __int16 v23; // ax
  int v24; // edx
  int v25; // r8d
  int v26; // r9d
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  __int16 v29; // ax
  __int128 v31; // [rsp+30h] [rbp-30h] BYREF
  __int128 v32; // [rsp+40h] [rbp-20h]
  __int64 v33; // [rsp+50h] [rbp-10h]

  v33 = 0LL;
  v8 = 0;
  *(_OWORD *)a7 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, (unsigned __int16)a3, a3, &v31) )
    goto LABEL_24;
  if ( HIDWORD(v31) == 1 )
  {
    v23 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 44, &v31);
    if ( v23 == 0xFFFF )
      goto LABEL_24;
    v12 = *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v24) = 1;
    LOBYTE(v26) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    v27 = a1 + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)v23 - v12 + *(unsigned int *)(a1 + 44);
    LOBYTE(v25) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    if ( *(_DWORD *)v27 != (unsigned int)ApiSetpGetSearchKeyHash((unsigned int)&v31, v24, v25, v26, *(_BYTE *)(a1 + 55)) )
      goto LABEL_24;
    v15 = *(_BYTE *)(v27 + 10);
    v16 = *(_WORD *)(v27 + 4);
    goto LABEL_21;
  }
  if ( HIDWORD(v31) != 2 )
  {
    if ( HIDWORD(v31) != 3 )
      goto LABEL_24;
    v9 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v31);
    if ( v9 == 0xFFFF )
      goto LABEL_24;
    v12 = *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v11) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    LOBYTE(v10) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    v13 = a1 + *(unsigned int *)(a1 + 68) + v9 * (unsigned __int64)*(unsigned __int8 *)(a1 + 76) - v12;
    if ( *(_DWORD *)v13 != (unsigned int)ApiSetpGetSearchKeyHash((unsigned int)&v31, 0, v10, v11, *(_BYTE *)(a1 + 79))
      || (*(_BYTE *)(v13 + 10) & 4) != 0 && (unsigned int)WORD4(v32) > *(unsigned __int8 *)(v13 + 9) )
    {
      goto LABEL_24;
    }
    v14 = *(unsigned int *)(a1 + 44)
        + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v13 + 4)
        - v12;
    goto LABEL_10;
  }
  v8 = 1;
  v17 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v31);
  if ( v17 != 0xFFFF )
  {
    v20 = *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v19) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    LOBYTE(v18) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    v21 = a1 + *(unsigned int *)(a1 + 56) + v17 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64) - v20;
    if ( *(_DWORD *)v21 != (unsigned int)ApiSetpGetSearchKeyHash((unsigned int)&v31, 0, v18, v19, *(_BYTE *)(a1 + 67)) )
    {
      v8 = 0;
      goto LABEL_24;
    }
    v22 = *(_BYTE *)(v21 + 6);
    if ( (v22 & 4) == 0 || (v22 & 2) == 0 && !*(_DWORD *)(v21 + 8) )
    {
      LOWORD(v12) = v20;
      v14 = *(unsigned int *)(a1 + 44)
          + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v21 + 4)
          - v20;
LABEL_10:
      v15 = *(_BYTE *)(v14 + a1 + 10);
      v16 = *(_WORD *)(v14 + a1 + 4);
LABEL_21:
      v8 = 1;
      if ( (v15 & 2) != 0 )
      {
        v28 = *(unsigned int *)(a1 + 92)
            + v16 * (unsigned __int64)*(unsigned __int8 *)(a1 + 100)
            - (unsigned __int16)v12;
        if ( *(_BYTE *)(v28 + a1 + 10) <= *(_BYTE *)(a1 + 3) )
        {
          *(_QWORD *)(a7 + 8) = a1
                              + *(unsigned int *)(a1 + 36)
                              + (unsigned __int64)*(unsigned int *)(v28 + a1 + 4)
                              - (unsigned __int16)v12;
          v29 = 2 * *(_WORD *)(v28 + a1 + 8);
          *(_WORD *)a7 = v29;
          *(_WORD *)(a7 + 2) = v29;
        }
      }
    }
  }
LABEL_24:
  *a6 = v8;
  return 0LL;
}
