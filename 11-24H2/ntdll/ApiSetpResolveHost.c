/*
 * XREFs of ApiSetpResolveHost @ 0x180133EAC
 * Callers:
 *     ApiSetResolveToHost @ 0x180070C20 (ApiSetResolveToHost.c)
 *     ApiSetResolveToHostA_V7 @ 0x180133E58 (ApiSetResolveToHostA_V7.c)
 * Callees:
 *     ApiSetpGetContractKeyInfo @ 0x18013423C (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x180134650 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x1801347F4 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x18013489C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetpIsFeatureEnabled @ 0x180134948 (ApiSetpIsFeatureEnabled.c)
 */

__int64 __fastcall ApiSetpResolveHost(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, char *a6, __int64 a7)
{
  unsigned __int16 v8; // r10
  char v9; // r15
  unsigned __int16 v10; // ax
  int v11; // r8d
  int v12; // r9d
  __int64 v13; // r12
  unsigned __int64 v14; // r14
  __int64 v15; // rcx
  unsigned __int16 v16; // r8
  char v17; // al
  unsigned __int16 v18; // r9
  unsigned __int16 v19; // r10
  unsigned __int16 v20; // ax
  int v21; // r8d
  int v22; // r9d
  unsigned __int64 v23; // r14
  char v24; // al
  __int64 v25; // rdx
  unsigned __int16 v26; // ax
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rdx
  __int16 v32; // ax
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v37; // [rsp+20h] [rbp-40h]
  __int128 v38; // [rsp+30h] [rbp-30h] BYREF
  __int128 v39; // [rsp+40h] [rbp-20h]
  __int64 v40; // [rsp+50h] [rbp-10h]

  v8 = a3;
  v40 = 0LL;
  LOBYTE(a3) = a4;
  v9 = 0;
  *(_OWORD *)a7 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, v8, a3, &v38) )
    goto LABEL_27;
  if ( HIDWORD(v38) == 1 )
  {
    v26 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 44, &v38);
    if ( v26 == 0xFFFF )
      goto LABEL_27;
    v13 = *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v27) = 1;
    LOBYTE(v29) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    v30 = a1 + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)v26 - v13 + *(unsigned int *)(a1 + 44);
    LOBYTE(v28) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    if ( *(_DWORD *)v30 != (unsigned int)ApiSetpGetSearchKeyHash((unsigned int)&v38, v27, v28, v29, *(_BYTE *)(a1 + 55)) )
      goto LABEL_27;
    v16 = *(_WORD *)(v30 + 8);
    v17 = *(_BYTE *)(v30 + 10);
    v18 = *(_WORD *)(v30 + 4);
    v19 = *(_WORD *)(v30 + 6);
    goto LABEL_21;
  }
  if ( HIDWORD(v38) != 2 )
  {
    if ( HIDWORD(v38) != 3 )
      goto LABEL_27;
    v10 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v38);
    if ( v10 == 0xFFFF )
      goto LABEL_27;
    v13 = *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v12) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    v14 = a1 + *(unsigned __int8 *)(a1 + 76) * (unsigned __int64)v10 - v13 + *(unsigned int *)(a1 + 68);
    LOBYTE(v11) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    if ( *(_DWORD *)v14 != (unsigned int)ApiSetpGetSearchKeyHash((unsigned int)&v38, 0, v11, v12, *(_BYTE *)(a1 + 79))
      || (*(_BYTE *)(v14 + 10) & 4) != 0 && (unsigned int)WORD4(v39) > *(unsigned __int8 *)(v14 + 9) )
    {
      goto LABEL_27;
    }
    v15 = a1
        + *(unsigned int *)(a1 + 44)
        + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v14 + 4)
        - v13;
    v16 = *(_WORD *)(v15 + 8);
    v17 = *(_BYTE *)(v15 + 10);
    v18 = *(_WORD *)(v15 + 4);
    v19 = *(_WORD *)(v15 + 6);
    goto LABEL_21;
  }
  v9 = 1;
  v20 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v38);
  if ( v20 != 0xFFFF )
  {
    LOBYTE(v22) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    LOBYTE(v21) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    v23 = a1
        + v20 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64)
        - *(unsigned __int16 *)(a1 + 18)
        + *(unsigned int *)(a1 + 56);
    if ( *(_DWORD *)v23 != (unsigned int)ApiSetpGetSearchKeyHash((unsigned int)&v38, 0, v21, v22, *(_BYTE *)(a1 + 67)) )
    {
      v9 = 0;
      goto LABEL_27;
    }
    v24 = *(_BYTE *)(v23 + 6);
    if ( (v24 & 4) == 0 || (v24 & 2) == 0 && (!*(_DWORD *)(v23 + 8) || (unsigned __int8)ApiSetpIsFeatureEnabled()) )
    {
      LOWORD(v13) = *(_WORD *)(a1 + 18);
      v25 = a1
          + *(unsigned int *)(a1 + 44)
          + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v23 + 4)
          - (unsigned __int16)v13;
      v16 = *(_WORD *)(v25 + 8);
      v17 = *(_BYTE *)(v25 + 10);
      v18 = *(_WORD *)(v25 + 4);
      v19 = *(_WORD *)(v25 + 6);
LABEL_21:
      v9 = 1;
      if ( (v17 & 2) != 0 )
      {
        v31 = *(unsigned int *)(a1 + 92)
            + v18 * (unsigned __int64)*(unsigned __int8 *)(a1 + 100)
            - (unsigned __int16)v13;
        if ( *(_BYTE *)(v31 + a1 + 10) <= *(_BYTE *)(a1 + 3) )
        {
          *(_QWORD *)(a7 + 8) = a1
                              + *(unsigned int *)(v31 + a1 + 4)
                              - (unsigned __int64)(unsigned __int16)v13
                              + *(unsigned int *)(a1 + 36);
          v32 = 2 * *(_WORD *)(v31 + a1 + 8);
          *(_WORD *)a7 = v32;
          *(_WORD *)(a7 + 2) = v32;
          if ( a5 )
          {
            if ( v16 )
            {
              LOWORD(v37) = *(_WORD *)a5 >> 1;
              v33 = ApiSetpSearchForHostOverrideIndex_V7(a1, v19, v16, *(_QWORD *)(a5 + 8), v37);
              if ( v33 != 0xFFFF )
              {
                v34 = *(unsigned __int16 *)(a1 + 18);
                v35 = *(unsigned int *)(a1 + 104) + v33 * (unsigned __int64)*(unsigned __int16 *)(a1 + 114) - v34;
                *(_QWORD *)(a7 + 8) = a1 + *(unsigned int *)(v35 + a1 + 8) - v34 + *(unsigned int *)(a1 + 36);
                *(_WORD *)(a7 + 2) = 2 * *(_WORD *)(v35 + a1 + 14);
                *(_WORD *)a7 = 2 * *(_WORD *)(v35 + a1 + 14);
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
