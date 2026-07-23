/*
 * XREFs of ApiSetpResolveHost @ 0x180137594
 * Callers:
 *     ApiSetResolveToHost @ 0x180016CA0 (ApiSetResolveToHost.c)
 *     ApiSetResolveToHostA_V7 @ 0x180137548 (ApiSetResolveToHostA_V7.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x18009F560 (RtlQueryFeatureConfiguration.c)
 *     ApiSetpGetContractKeyInfo @ 0x180137A68 (ApiSetpGetContractKeyInfo.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x180137E44 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     ApiSetpSearchForSectionIndex_V7 @ 0x180137EEC (ApiSetpSearchForSectionIndex_V7.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall ApiSetpResolveHost(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        char a4,
        ULONGLONG a5,
        char *a6,
        __int64 a7)
{
  ULONGLONG v7; // r15
  unsigned __int16 v9; // ax
  unsigned __int16 *v10; // rsi
  char v12; // di
  unsigned __int16 v13; // ax
  __int64 v14; // r15
  int v15; // r10d
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int16 v18; // cx
  __int64 v19; // r11
  char v20; // cl
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned __int16 v23; // r8
  char v24; // al
  unsigned __int16 v25; // r10
  unsigned __int16 v26; // r9
  unsigned __int16 v27; // ax
  int v28; // r9d
  unsigned __int64 v29; // rdi
  __int64 v30; // rdx
  unsigned __int16 v31; // cx
  __int64 v32; // r10
  char v33; // cl
  RTL_FEATURE_ID v34; // ecx
  __int64 v35; // rcx
  unsigned __int16 v36; // ax
  int v37; // r10d
  unsigned __int64 v38; // r9
  __int64 v39; // rdx
  unsigned __int16 v40; // cx
  __int64 v41; // r11
  char v42; // cl
  __int64 v43; // r11
  __int64 v44; // rdx
  __int16 v45; // ax
  unsigned int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // r8
  ULONGLONG ChangeStamp; // [rsp+38h] [rbp-49h] BYREF
  __int128 v51; // [rsp+40h] [rbp-41h] BYREF
  __int128 v52; // [rsp+50h] [rbp-31h]
  char *v53; // [rsp+60h] [rbp-21h]
  _RTL_FEATURE_CONFIGURATION FeatureConfiguration; // [rsp+68h] [rbp-19h] BYREF

  v7 = a5;
  v9 = a3;
  v10 = a2;
  v53 = a6;
  ChangeStamp = a5;
  v12 = 0;
  LOBYTE(a3) = a4;
  *(_OWORD *)a7 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( !(unsigned __int8)ApiSetpGetContractKeyInfo(a2, v9, a3, &v51) )
    goto LABEL_66;
  if ( HIDWORD(v51) == 1 )
  {
    v36 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 44, &v51);
    if ( v36 == 0xFFFF )
      goto LABEL_66;
    v37 = 0;
    v38 = a1
        + v36 * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
        - *(unsigned __int16 *)(a1 + 18)
        + *(unsigned int *)(a1 + 44);
    if ( a4 )
    {
      if ( WORD1(v52) )
      {
        v39 = WORD1(v52);
        do
        {
          v40 = *v10 + 32;
          if ( (unsigned __int16)(*v10 - 65) > 0x19u )
            v40 = *v10;
          ++v10;
          v37 = v40 + *(unsigned __int8 *)(a1 + 55) * v37;
          --v39;
        }
        while ( v39 );
      }
    }
    else if ( WORD1(v52) )
    {
      v41 = WORD1(v52);
      do
      {
        v42 = *(_BYTE *)v10 + 32;
        if ( (unsigned __int8)(*(_BYTE *)v10 - 65) > 0x19u )
          v42 = *(_BYTE *)v10;
        v10 = (unsigned __int16 *)((char *)v10 + 1);
        v37 = v42 + *(unsigned __int8 *)(a1 + 55) * v37;
        --v41;
      }
      while ( v41 );
    }
    if ( *(_DWORD *)v38 == v37 )
    {
      v23 = *(_WORD *)(v38 + 8);
      v24 = *(_BYTE *)(v38 + 10);
      v25 = *(_WORD *)(v38 + 4);
      v26 = *(_WORD *)(v38 + 6);
      goto LABEL_58;
    }
LABEL_65:
    v12 = 0;
    goto LABEL_66;
  }
  if ( HIDWORD(v51) == 2 )
  {
    v27 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 56, &v51);
    if ( v27 == 0xFFFF )
      goto LABEL_66;
    v28 = 0;
    v29 = a1
        + v27 * (unsigned __int64)*(unsigned __int8 *)(a1 + 64)
        - *(unsigned __int16 *)(a1 + 18)
        + *(unsigned int *)(a1 + 56);
    if ( a4 )
    {
      if ( WORD1(v52) )
      {
        v30 = WORD1(v52);
        do
        {
          v31 = *v10 + 32;
          if ( (unsigned __int16)(*v10 - 65) > 0x19u )
            v31 = *v10;
          ++v10;
          v28 = v31 + *(unsigned __int8 *)(a1 + 67) * v28;
          --v30;
        }
        while ( v30 );
      }
    }
    else if ( WORD1(v52) )
    {
      v32 = WORD1(v52);
      do
      {
        v33 = *(_BYTE *)v10 + 32;
        if ( (unsigned __int8)(*(_BYTE *)v10 - 65) > 0x19u )
          v33 = *(_BYTE *)v10;
        v10 = (unsigned __int16 *)((char *)v10 + 1);
        v28 = v33 + *(unsigned __int8 *)(a1 + 67) * v28;
        --v32;
      }
      while ( v32 );
    }
    if ( *(_DWORD *)v29 == v28 )
    {
      if ( (*(_BYTE *)(v29 + 6) & 4) != 0 )
      {
        v34 = *(_DWORD *)(v29 + 8);
        if ( v34 )
        {
          ChangeStamp = 0LL;
          *(_QWORD *)&FeatureConfiguration.FeatureId = 0LL;
          FeatureConfiguration.VariantPayload = 0;
          if ( RtlQueryFeatureConfiguration(v34, RtlFeatureConfigurationBoot, &ChangeStamp, &FeatureConfiguration)
            || !ChangeStamp
            || FeatureConfiguration.FeatureId != *(_DWORD *)(v29 + 8)
            || (FeatureConfiguration.Flags & 0x30) != 0x20 )
          {
            v12 = 0;
            goto LABEL_66;
          }
        }
      }
      v35 = a1
          + *(unsigned int *)(a1 + 44)
          + *(unsigned __int16 *)(v29 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
          - *(unsigned __int16 *)(a1 + 18);
      v23 = *(_WORD *)(v35 + 8);
      v24 = *(_BYTE *)(v35 + 10);
      v25 = *(_WORD *)(v35 + 4);
      v26 = *(_WORD *)(v35 + 6);
      goto LABEL_58;
    }
    goto LABEL_65;
  }
  if ( HIDWORD(v51) != 3 )
    goto LABEL_66;
  v13 = ApiSetpSearchForSectionIndex_V7(a1, a1 + 68, &v51);
  if ( v13 == 0xFFFF )
    goto LABEL_66;
  v14 = *(unsigned __int16 *)(a1 + 18);
  v15 = 0;
  v16 = a1 + *(unsigned int *)(a1 + 68) + v13 * (unsigned __int64)*(unsigned __int8 *)(a1 + 76) - v14;
  if ( a4 )
  {
    if ( WORD1(v52) )
    {
      v17 = WORD1(v52);
      do
      {
        v18 = *v10 + 32;
        if ( (unsigned __int16)(*v10 - 65) > 0x19u )
          v18 = *v10;
        ++v10;
        v15 = v18 + *(unsigned __int8 *)(a1 + 79) * v15;
        --v17;
      }
      while ( v17 );
    }
  }
  else if ( WORD1(v52) )
  {
    v19 = WORD1(v52);
    do
    {
      v20 = *(_BYTE *)v10 + 32;
      if ( (unsigned __int8)(*(_BYTE *)v10 - 65) > 0x19u )
        v20 = *(_BYTE *)v10;
      v10 = (unsigned __int16 *)((char *)v10 + 1);
      v15 = v20 + *(unsigned __int8 *)(a1 + 79) * v15;
      --v19;
    }
    while ( v19 );
  }
  if ( *(_DWORD *)v16 != v15
    || (*(_BYTE *)(v16 + 10) & 4) != 0 && (unsigned int)WORD4(v52) > *(unsigned __int8 *)(v16 + 9) )
  {
    goto LABEL_65;
  }
  v21 = *(unsigned int *)(a1 + 44)
      + *(unsigned __int16 *)(v16 + 4) * (unsigned __int64)*(unsigned __int8 *)(a1 + 52)
      - v14;
  v7 = ChangeStamp;
  v22 = a1 + v21;
  v23 = *(_WORD *)(v22 + 8);
  v24 = *(_BYTE *)(v22 + 10);
  v25 = *(_WORD *)(v22 + 4);
  v26 = *(_WORD *)(v22 + 6);
LABEL_58:
  v12 = 1;
  if ( (v24 & 2) != 0 )
  {
    v43 = *(unsigned __int16 *)(a1 + 18);
    v44 = *(unsigned int *)(a1 + 92) + v25 * (unsigned __int64)*(unsigned __int8 *)(a1 + 100) - v43;
    if ( *(_BYTE *)(v44 + a1 + 10) <= *(_BYTE *)(a1 + 3) )
    {
      *(_QWORD *)(a7 + 8) = a1 + *(unsigned int *)(a1 + 36) + (unsigned __int64)*(unsigned int *)(v44 + a1 + 4) - v43;
      v45 = 2 * *(_WORD *)(v44 + a1 + 8);
      *(_WORD *)a7 = v45;
      *(_WORD *)(a7 + 2) = v45;
      if ( v7 )
      {
        if ( v23 )
        {
          v46 = ApiSetpSearchForHostOverrideIndex_V7(a1, v26, v23, *(_QWORD *)(v7 + 8), *(_WORD *)v7 >> 1);
          if ( v46 != 0xFFFF )
          {
            v47 = *(unsigned __int16 *)(a1 + 18);
            v48 = *(unsigned int *)(a1 + 104) + v46 * (unsigned __int64)*(unsigned __int16 *)(a1 + 114) - v47;
            *(_QWORD *)(a7 + 8) = a1
                                + *(unsigned int *)(a1 + 36)
                                + (unsigned __int64)*(unsigned int *)(v48 + a1 + 8)
                                - v47;
            *(_WORD *)(a7 + 2) = 2 * *(_WORD *)(v48 + a1 + 14);
            *(_WORD *)a7 = 2 * *(_WORD *)(v48 + a1 + 14);
          }
        }
      }
    }
  }
LABEL_66:
  *v53 = v12;
  return 0LL;
}
