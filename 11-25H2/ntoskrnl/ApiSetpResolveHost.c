/*
 * XREFs of ApiSetpResolveHost @ 0x1406551AC
 * Callers:
 *     ApiSetResolveToHost @ 0x1404ECC58 (ApiSetResolveToHost.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x1403BA040 (RtlQueryFeatureConfiguration.c)
 *     ApiSetpGetContractKeyInfo @ 0x1406560E8 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x140656508 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x1406565B0 (ApiSetpSearchForSectionIndex_V7.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall ApiSetpResolveHost(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        ULONGLONG a5,
        char *a6,
        __int64 a7)
{
  ULONGLONG v7; // r15
  unsigned __int16 v9; // ax
  unsigned __int16 *v10; // r14
  char v11; // r13
  unsigned __int16 v12; // ax
  __int64 v13; // r15
  int v14; // r9d
  __int64 v15; // r8
  __int64 v16; // r10
  unsigned __int16 v17; // dx
  unsigned __int16 v18; // cx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int16 v21; // r9
  char v22; // al
  unsigned __int16 v23; // r10
  unsigned __int16 v24; // r11
  unsigned __int16 v25; // ax
  int v26; // r8d
  unsigned __int64 v27; // rdi
  __int64 v28; // r9
  unsigned __int16 v29; // dx
  unsigned __int16 v30; // cx
  RTL_FEATURE_ID v31; // ecx
  __int64 v32; // rcx
  unsigned __int16 v33; // ax
  int v34; // r9d
  unsigned __int64 v35; // r8
  __int64 v36; // r10
  unsigned __int16 v37; // dx
  unsigned __int16 v38; // cx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int16 v41; // ax
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  ULONGLONG ChangeStamp; // [rsp+30h] [rbp-50h] BYREF
  __int128 v47; // [rsp+38h] [rbp-48h] BYREF
  __int128 v48; // [rsp+48h] [rbp-38h]
  char *v49; // [rsp+58h] [rbp-28h]
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+60h] [rbp-20h] BYREF

  v7 = a5;
  ChangeStamp = a5;
  v9 = a3;
  v10 = a2;
  v49 = a6;
  LOBYTE(a3) = 1;
  *(_OWORD *)a7 = 0LL;
  v11 = 0;
  v47 = 0LL;
  v48 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, v9, a3, &v47) )
    goto LABEL_43;
  switch ( HIDWORD(v47) )
  {
    case 1:
      v33 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 44, &v47);
      if ( v33 != 0xFFFF )
      {
        v34 = 0;
        v35 = a1
            + v33 * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
            - *(unsigned __int16 *)(a1 + 18)
            + *(unsigned int *)(a1 + 44);
        if ( WORD1(v48) )
        {
          v36 = WORD1(v48);
          do
          {
            v37 = *v10++;
            v38 = v37 + 32;
            if ( (unsigned __int16)(v37 - 65) > 0x19u )
              v38 = v37;
            v34 = v38 + *(unsigned __int8 *)(a1 + 55) * v34;
            --v36;
          }
          while ( v36 );
        }
        if ( *(_DWORD *)v35 == v34 )
        {
          v21 = *(_WORD *)(v35 + 8);
          v22 = *(_BYTE *)(v35 + 10);
          v23 = *(_WORD *)(v35 + 4);
          v24 = *(_WORD *)(v35 + 6);
          goto LABEL_37;
        }
      }
      break;
    case 2:
      v25 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v47);
      if ( v25 != 0xFFFF )
      {
        v26 = 0;
        v27 = a1
            + v25 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64)
            - *(unsigned __int16 *)(a1 + 18)
            + *(unsigned int *)(a1 + 56);
        if ( WORD1(v48) )
        {
          v28 = WORD1(v48);
          do
          {
            v29 = *v10++;
            v30 = v29 + 32;
            if ( (unsigned __int16)(v29 - 65) > 0x19u )
              v30 = v29;
            v26 = v30 + *(unsigned __int8 *)(a1 + 67) * v26;
            --v28;
          }
          while ( v28 );
        }
        if ( *(_DWORD *)v27 == v26 )
        {
          if ( (*(_BYTE *)(v27 + 6) & 4) == 0
            || (v31 = *(_DWORD *)(v27 + 8)) == 0
            || (ChangeStamp = 0LL,
                *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL,
                FeatureConfiguration.VariantPayload = 0,
                !RtlQueryFeatureConfiguration(v31, RtlFeatureConfigurationBoot, &ChangeStamp, &FeatureConfiguration))
            && ChangeStamp
            && FeatureConfiguration.FeatureId == *(_DWORD *)(v27 + 8)
            && (*((_BYTE *)&FeatureConfiguration + 4) & 0x30) == 0x20 )
          {
            v32 = a1
                + *(unsigned int *)(a1 + 44)
                + *(unsigned __int16 *)(v27 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
                - *(unsigned __int16 *)(a1 + 18);
            v21 = *(_WORD *)(v32 + 8);
            v22 = *(_BYTE *)(v32 + 10);
            v23 = *(_WORD *)(v32 + 4);
            v24 = *(_WORD *)(v32 + 6);
            goto LABEL_37;
          }
        }
      }
      break;
    case 3:
      v12 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v47);
      if ( v12 != 0xFFFF )
      {
        v13 = *(unsigned __int16 *)(a1 + 18);
        v14 = 0;
        v15 = a1 + *(unsigned int *)(a1 + 68) + v12 * (unsigned __int64)*(unsigned __int8 *)(a1 + 76) - v13;
        if ( WORD1(v48) )
        {
          v16 = WORD1(v48);
          do
          {
            v17 = *v10++;
            v18 = v17 + 32;
            if ( (unsigned __int16)(v17 - 65) > 0x19u )
              v18 = v17;
            v14 = v18 + *(unsigned __int8 *)(a1 + 79) * v14;
            --v16;
          }
          while ( v16 );
        }
        if ( *(_DWORD *)v15 == v14
          && ((*(_BYTE *)(v15 + 10) & 4) == 0 || (unsigned int)WORD4(v48) <= *(unsigned __int8 *)(v15 + 9)) )
        {
          v19 = *(unsigned int *)(a1 + 44)
              + *(unsigned __int16 *)(v15 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
              - v13;
          v7 = ChangeStamp;
          v20 = a1 + v19;
          v21 = *(_WORD *)(v20 + 8);
          v22 = *(_BYTE *)(v20 + 10);
          v23 = *(_WORD *)(v20 + 4);
          v24 = *(_WORD *)(v20 + 6);
LABEL_37:
          v11 = 1;
          if ( (v22 & 2) != 0 )
          {
            v39 = *(unsigned __int16 *)(a1 + 18);
            v40 = *(unsigned int *)(a1 + 92) + v23 * (unsigned __int64)*(unsigned __int8 *)(a1 + 100) - v39;
            if ( *(_BYTE *)(v40 + a1 + 10) <= *(_BYTE *)(a1 + 3) )
            {
              *(_QWORD *)(a7 + 8) = a1
                                  + *(unsigned int *)(a1 + 36)
                                  + (unsigned __int64)*(unsigned int *)(v40 + a1 + 4)
                                  - v39;
              v41 = 2 * *(_WORD *)(v40 + a1 + 8);
              *(_WORD *)a7 = v41;
              *(_WORD *)(a7 + 2) = v41;
              if ( v7 )
              {
                if ( v21 )
                {
                  v42 = ApiSetpSearchForHostOverrideIndex_V7(a1, v24, v21, *(_QWORD *)(v7 + 8), *(_WORD *)v7 >> 1);
                  if ( v42 != 0xFFFF )
                  {
                    v43 = *(unsigned __int16 *)(a1 + 18);
                    v44 = *(unsigned int *)(a1 + 104) + v42 * (unsigned __int64)*(unsigned __int16 *)(a1 + 114) - v43;
                    *(_QWORD *)(a7 + 8) = a1
                                        + *(unsigned int *)(a1 + 36)
                                        + (unsigned __int64)*(unsigned int *)(v44 + a1 + 8)
                                        - v43;
                    *(_WORD *)(a7 + 2) = 2 * *(_WORD *)(v44 + a1 + 14);
                    *(_WORD *)a7 = 2 * *(_WORD *)(v44 + a1 + 14);
                  }
                }
              }
            }
          }
        }
      }
      break;
  }
LABEL_43:
  *v49 = v11;
  return 0LL;
}
