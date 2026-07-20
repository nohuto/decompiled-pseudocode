/*
 * XREFs of ApiSetpResolveHost @ 0x14001990C
 * Callers:
 *     ApiSetResolveToHost @ 0x140008B40 (ApiSetResolveToHost.c)
 * Callees:
 *     ApiSetpIsFeatureEnabled @ 0x140019C94 (ApiSetpIsFeatureEnabled.c)
 *     ApiSetpGetContractKeyInfo @ 0x14001A6F4 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpGetSearchKeyHash @ 0x14001A950 (ApiSetpGetSearchKeyHash.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x14001AA44 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14001AB08 (ApiSetpSearchForSectionIndex_V7.c)
 */

__int64 __fastcall ApiSetpResolveHost(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char *a6, __int64 a7)
{
  char v8; // r15
  unsigned __int16 v9; // ax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // r12
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  unsigned __int16 v15; // r8
  char v16; // al
  unsigned __int16 v17; // r9
  unsigned __int16 v18; // r10
  unsigned __int16 v19; // ax
  int v20; // r8d
  int v21; // r9d
  unsigned __int64 v22; // r14
  char v23; // al
  __int64 v24; // rdx
  unsigned __int16 v25; // ax
  int v26; // edx
  int v27; // r8d
  int v28; // r9d
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rdx
  __int16 v31; // ax
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v36; // [rsp+20h] [rbp-40h]
  __int128 v37; // [rsp+30h] [rbp-30h] BYREF
  __int128 v38; // [rsp+40h] [rbp-20h]
  __int64 v39; // [rsp+50h] [rbp-10h]

  v39 = 0LL;
  *(_OWORD *)a7 = 0LL;
  v8 = 0;
  v37 = 0LL;
  v38 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, (unsigned __int16)a3, a3, &v37) )
    goto LABEL_27;
  if ( HIDWORD(v37) == 1 )
  {
    v25 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 44, &v37);
    if ( v25 == 0xFFFF )
      goto LABEL_27;
    v12 = *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v26) = 1;
    LOBYTE(v28) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    v29 = a1 + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)v25 - v12 + *(unsigned int *)(a1 + 44);
    LOBYTE(v27) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    if ( *(_DWORD *)v29 != (unsigned int)ApiSetpGetSearchKeyHash((unsigned int)&v37, v26, v27, v28, *(_BYTE *)(a1 + 55)) )
      goto LABEL_27;
    v15 = *(_WORD *)(v29 + 8);
    v16 = *(_BYTE *)(v29 + 10);
    v17 = *(_WORD *)(v29 + 4);
    v18 = *(_WORD *)(v29 + 6);
    goto LABEL_21;
  }
  if ( HIDWORD(v37) != 2 )
  {
    if ( HIDWORD(v37) != 3 )
      goto LABEL_27;
    v9 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v37);
    if ( v9 == 0xFFFF )
      goto LABEL_27;
    v12 = *(unsigned __int16 *)(a1 + 18);
    LOBYTE(v11) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    v13 = a1 + *(unsigned __int8 *)(a1 + 76) * (unsigned __int64)v9 - v12 + *(unsigned int *)(a1 + 68);
    LOBYTE(v10) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    if ( *(_DWORD *)v13 != (unsigned int)ApiSetpGetSearchKeyHash((unsigned int)&v37, 0, v10, v11, *(_BYTE *)(a1 + 79))
      || (*(_BYTE *)(v13 + 10) & 4) != 0 && (unsigned int)WORD4(v38) > *(unsigned __int8 *)(v13 + 9) )
    {
      goto LABEL_27;
    }
    v14 = a1
        + *(unsigned int *)(a1 + 44)
        + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v13 + 4)
        - v12;
    v15 = *(_WORD *)(v14 + 8);
    v16 = *(_BYTE *)(v14 + 10);
    v17 = *(_WORD *)(v14 + 4);
    v18 = *(_WORD *)(v14 + 6);
    goto LABEL_21;
  }
  v8 = 1;
  v19 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v37);
  if ( v19 != 0xFFFF )
  {
    LOBYTE(v21) = (*(_BYTE *)(a1 + 2) & 0x10) != 0;
    LOBYTE(v20) = (*(_BYTE *)(a1 + 2) & 8) != 0;
    v22 = a1
        + v19 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64)
        - *(unsigned __int16 *)(a1 + 18)
        + *(unsigned int *)(a1 + 56);
    if ( *(_DWORD *)v22 != (unsigned int)ApiSetpGetSearchKeyHash((unsigned int)&v37, 0, v20, v21, *(_BYTE *)(a1 + 67)) )
    {
      v8 = 0;
      goto LABEL_27;
    }
    v23 = *(_BYTE *)(v22 + 6);
    if ( (v23 & 4) == 0 || (v23 & 2) == 0 && (!*(_DWORD *)(v22 + 8) || (unsigned __int8)ApiSetpIsFeatureEnabled()) )
    {
      LOWORD(v12) = *(_WORD *)(a1 + 18);
      v24 = a1
          + *(unsigned int *)(a1 + 44)
          + *(unsigned __int8 *)(a1 + 52) * (unsigned __int64)*(unsigned __int16 *)(v22 + 4)
          - (unsigned __int16)v12;
      v15 = *(_WORD *)(v24 + 8);
      v16 = *(_BYTE *)(v24 + 10);
      v17 = *(_WORD *)(v24 + 4);
      v18 = *(_WORD *)(v24 + 6);
LABEL_21:
      v8 = 1;
      if ( (v16 & 2) != 0 )
      {
        v30 = *(unsigned int *)(a1 + 92)
            + v17 * (unsigned __int64)*(unsigned __int8 *)(a1 + 100)
            - (unsigned __int16)v12;
        if ( *(_BYTE *)(v30 + a1 + 10) <= *(_BYTE *)(a1 + 3) )
        {
          *(_QWORD *)(a7 + 8) = a1
                              + *(unsigned int *)(v30 + a1 + 4)
                              - (unsigned __int64)(unsigned __int16)v12
                              + *(unsigned int *)(a1 + 36);
          v31 = 2 * *(_WORD *)(v30 + a1 + 8);
          *(_WORD *)a7 = v31;
          *(_WORD *)(a7 + 2) = v31;
          if ( a5 )
          {
            if ( v15 )
            {
              LOWORD(v36) = *(_WORD *)a5 >> 1;
              v32 = ApiSetpSearchForHostOverrideIndex_V7(a1, v18, v15, *(_QWORD *)(a5 + 8), v36);
              if ( v32 != 0xFFFF )
              {
                v33 = *(unsigned __int16 *)(a1 + 18);
                v34 = *(unsigned int *)(a1 + 104) + v32 * (unsigned __int64)*(unsigned __int16 *)(a1 + 114) - v33;
                *(_QWORD *)(a7 + 8) = a1 + *(unsigned int *)(v34 + a1 + 8) - v33 + *(unsigned int *)(a1 + 36);
                *(_WORD *)(a7 + 2) = 2 * *(_WORD *)(v34 + a1 + 14);
                *(_WORD *)a7 = 2 * *(_WORD *)(v34 + a1 + 14);
              }
            }
          }
        }
      }
    }
  }
LABEL_27:
  *a6 = v8;
  return 0LL;
}
