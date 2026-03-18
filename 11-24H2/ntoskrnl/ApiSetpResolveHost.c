/*
 * XREFs of ApiSetpResolveHost @ 0x140661338
 * Callers:
 *     ApiSetResolveToHost @ 0x14065FD44 (ApiSetResolveToHost.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x140662194 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x1406625C4 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x140662790 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x140662838 (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetpResolveHost(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  unsigned __int16 v8; // ax
  char v9; // r14
  unsigned __int16 v10; // ax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  char v17; // al
  unsigned __int16 v18; // r8
  unsigned __int16 v19; // r9
  unsigned __int16 v20; // r10
  unsigned __int16 v21; // ax
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // r13
  __int64 v25; // rsi
  char v26; // al
  unsigned __int16 v27; // ax
  int v28; // edx
  int v29; // r8d
  int v30; // r9d
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rdx
  __int16 v33; // ax
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdx
  int v38; // [rsp+20h] [rbp-40h]
  __int128 v39; // [rsp+30h] [rbp-30h] BYREF
  __int128 v40; // [rsp+40h] [rbp-20h]
  __int64 v41; // [rsp+50h] [rbp-10h]

  v8 = a3;
  v41 = 0LL;
  LOBYTE(a3) = 1;
  v9 = 0;
  *(_OWORD *)a7 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, v8, a3, &v39) )
    goto LABEL_27;
  if ( HIDWORD(v39) == 1 )
  {
    v27 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 44, &v39);
    if ( v27 == 0xFFFF )
      goto LABEL_27;
    LOBYTE(v28) = 1;
    v13 = *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v30) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    v31 = a1 + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)v27 - v13 + *(unsigned int *)(a1 + 44);
    LOBYTE(v29) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    if ( *(_DWORD *)v31 != (unsigned int)ApiSetpGetSearchKeyHash((unsigned int)&v39, v28, v29, v30, *(_BYTE *)(a1 + 55)) )
      goto LABEL_27;
    v18 = *(_WORD *)(v31 + 8);
    v17 = *(_BYTE *)(v31 + 10);
    v19 = *(_WORD *)(v31 + 4);
    v20 = *(_WORD *)(v31 + 6);
    goto LABEL_21;
  }
  if ( HIDWORD(v39) != 2 )
  {
    if ( HIDWORD(v39) != 3 )
      goto LABEL_27;
    v10 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v39);
    if ( v10 == 0xFFFF )
      goto LABEL_27;
    v13 = *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v12) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    LOBYTE(v11) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    v14 = a1 + *(unsigned int *)(a1 + 68) + v10 * (unsigned __int64)*(unsigned __int8 *)(a1 + 76) - v13;
    if ( *(_DWORD *)v14 != (unsigned int)ApiSetpGetSearchKeyHash((unsigned int)&v39, 0, v11, v12, *(_BYTE *)(a1 + 79))
      || (*(_BYTE *)(v14 + 10) & 4) != 0 && (unsigned int)WORD4(v40) > *(unsigned __int8 *)(v14 + 9) )
    {
      goto LABEL_27;
    }
    v15 = *(unsigned int *)(a1 + 44)
        + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v14 + 4)
        - v13;
    goto LABEL_10;
  }
  v9 = 1;
  v21 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v39);
  if ( v21 != 0xFFFF )
  {
    v24 = *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v23) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    LOBYTE(v22) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    v25 = a1 + *(unsigned int *)(a1 + 56) + v21 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64) - v24;
    if ( *(_DWORD *)v25 != (unsigned int)ApiSetpGetSearchKeyHash((unsigned int)&v39, 0, v22, v23, *(_BYTE *)(a1 + 67)) )
    {
      v9 = 0;
      goto LABEL_27;
    }
    v26 = *(_BYTE *)(v25 + 6);
    if ( (v26 & 4) == 0 || (v26 & 2) == 0 && !*(_DWORD *)(v25 + 8) )
    {
      LOWORD(v13) = v24;
      v15 = *(unsigned int *)(a1 + 44)
          + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v25 + 4)
          - v24;
LABEL_10:
      v16 = a1 + v15;
      v17 = *(_BYTE *)(v16 + 10);
      v18 = *(_WORD *)(v16 + 8);
      v19 = *(_WORD *)(v16 + 4);
      v20 = *(_WORD *)(v16 + 6);
LABEL_21:
      v9 = 1;
      if ( (v17 & 2) != 0 )
      {
        v32 = *(unsigned int *)(a1 + 92)
            + v19 * (unsigned __int64)*(unsigned __int8 *)(a1 + 100)
            - (unsigned __int16)v13;
        if ( *(_BYTE *)(v32 + a1 + 10) <= *(_BYTE *)(a1 + 3) )
        {
          *(_QWORD *)(a7 + 8) = a1
                              + *(unsigned int *)(v32 + a1 + 4)
                              - (unsigned __int64)(unsigned __int16)v13
                              + *(unsigned int *)(a1 + 36);
          v33 = 2 * *(_WORD *)(v32 + a1 + 8);
          *(_WORD *)a7 = v33;
          *(_WORD *)(a7 + 2) = v33;
          if ( a5 )
          {
            if ( v18 )
            {
              LOWORD(v38) = *(_WORD *)a5 >> 1;
              v34 = ApiSetpSearchForHostOverrideIndex_V7(a1, v20, v18, *(_QWORD *)(a5 + 8), v38);
              if ( v34 != 0xFFFF )
              {
                v35 = *(unsigned __int16 *)(a1 + 18);
                v36 = *(unsigned int *)(a1 + 104) + v34 * (unsigned __int64)*(unsigned __int16 *)(a1 + 114) - v35;
                *(_QWORD *)(a7 + 8) = a1 + *(unsigned int *)(v36 + a1 + 8) - v35 + *(unsigned int *)(a1 + 36);
                *(_WORD *)(a7 + 2) = 2 * *(_WORD *)(v36 + a1 + 14);
                *(_WORD *)a7 = 2 * *(_WORD *)(v36 + a1 + 14);
              }
            }
          }
        }
      }
    }
  }
LABEL_27:
  *a6 = v9;
  return 0LL;
}
