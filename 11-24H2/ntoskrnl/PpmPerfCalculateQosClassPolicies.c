/*
 * XREFs of PpmPerfCalculateQosClassPolicies @ 0x140472694
 * Callers:
 *     PpmPerfUpdateDomainPolicy @ 0x140AC40C8 (PpmPerfUpdateDomainPolicy.c)
 * Callees:
 *     PpmGetPerfPolicyClass @ 0x1403A2FAC (PpmGetPerfPolicyClass.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     PpmEventQosClassPolicy @ 0x140A56B24 (PpmEventQosClassPolicy.c)
 */

char __fastcall PpmPerfCalculateQosClassPolicies(__int64 a1)
{
  unsigned __int8 PerfPolicyClass; // al
  int v3; // ecx
  __int64 v4; // r12
  char v5; // r13
  __int64 v6; // rax
  __int128 *v7; // r14
  __int64 v8; // r8
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 *v16; // r9
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  int v19; // esi
  __int128 v20; // xmm1
  __m128i v21; // xmm2
  __m128i v22; // xmm1
  __int64 v23; // rax
  unsigned __int64 v24; // r11
  unsigned int v25; // ebx
  unsigned int v26; // edi
  unsigned int v27; // esi
  int v28; // ecx
  unsigned int v29; // r10d
  char v30; // al
  bool v31; // al
  char v32; // r8
  __int64 v33; // rbx
  SIZE_T v34; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  unsigned int v37; // ebx
  unsigned int v38; // edx
  unsigned int v39; // edi
  _WORD *v40; // rsi
  __int64 v42; // rdi
  __int64 v43; // rbx
  SIZE_T v44; // rax
  __int128 v45; // xmm1
  char v46; // al
  unsigned int v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // ecx
  int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // [rsp+28h] [rbp-39h]
  char v54; // [rsp+2Ch] [rbp-35h]
  char v55; // [rsp+30h] [rbp-31h]
  unsigned int i; // [rsp+34h] [rbp-2Dh]
  unsigned int v57; // [rsp+38h] [rbp-29h]
  int v58; // [rsp+3Ch] [rbp-25h]
  __int64 v59; // [rsp+40h] [rbp-21h]
  __int128 Source2; // [rsp+48h] [rbp-19h] BYREF
  __int128 v61; // [rsp+58h] [rbp-9h]
  __m128 v62; // [rsp+68h] [rbp+7h]
  __m128i v63; // [rsp+78h] [rbp+17h]

  PerfPolicyClass = PpmGetPerfPolicyClass(*(_BYTE **)(a1 + 16));
  v3 = dword_140F0B38C;
  v4 = PerfPolicyClass;
  v53 = 0;
  v55 = 0;
  v5 = 0;
  v6 = 0LL;
  v54 = 0;
  v59 = 0LL;
  v7 = 0LL;
  v58 = dword_140F0B38C;
  for ( i = 0; i < 7; ++i )
  {
    v8 = (unsigned int)PpmQosClassesOrdered[2 * v6];
    v57 = v8;
    v9 = PpmQosClassesOrdered[2 * v6];
    Source2 = 0LL;
    v61 = 0LL;
    if ( !(_DWORD)v8 )
    {
LABEL_11:
      v16 = &PpmCurrentProfile[0][61 * dword_140F0B38C + 5];
      goto LABEL_12;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v15 = PpmEntryLevelPerfProfile;
      v7 = (__int128 *)(a1 + 536);
      goto LABEL_9;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v15 = PpmBackgroundProfile;
      v7 = (__int128 *)(a1 + 568);
      goto LABEL_9;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v15 = PpmMultimediaQosProfile;
      v7 = (__int128 *)(a1 + 536);
LABEL_9:
      if ( v15 )
        v16 = (__int64 *)(v15 + 488LL * v3 + 40);
      else
        v16 = 0LL;
      goto LABEL_12;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 != 1 )
          goto LABEL_11;
        v15 = PpmUtilityQosProfile;
        v7 = (__int128 *)(a1 + 600);
      }
      else
      {
        v15 = PpmEcoQosProfile;
        v7 = (__int128 *)(a1 + 728);
      }
      goto LABEL_9;
    }
    v7 = (__int128 *)(a1 + 536);
    if ( !PpmMultimediaQosProfile )
    {
      v16 = 0LL;
LABEL_92:
      v17 = 0LL;
      v18 = 0LL;
      goto LABEL_14;
    }
    v16 = (__int64 *)((char *)&unk_140F06CC8 + 488 * v3);
LABEL_12:
    if ( !v16 )
      goto LABEL_92;
    v17 = *(__m128 *)v16;
    v18 = *(__m128 *)&v16[2 * v4];
LABEL_14:
    v62 = v18;
    v63 = (__m128i)v17;
    if ( !v7 )
      goto LABEL_35;
    v19 = 0;
    if ( !PopHeteroSystem )
      v19 = 64;
    v20 = v7[1];
    Source2 = *v7;
    v61 = v20;
    if ( PpmPerfQosGroupPolicyDisable )
      v19 |= 0x100u;
    if ( !PpmPerfSchedulerDirectedPerfStatesSupported )
      v19 |= 0x80u;
    if ( v16 )
    {
      v21 = (__m128i)_mm_and_ps(v17, (__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyClassAgnosticQosSettingsMask));
      if ( !(v21.m128i_i64[0] | _mm_srli_si128(v21, 8).m128i_u64[0]) )
      {
        v22 = (__m128i)_mm_and_ps((__m128)_mm_loadu_si128((const __m128i *)&PpmPolicyClassSpecificQosSettingsMask), v18);
        if ( !(v22.m128i_i64[0] | _mm_srli_si128(v22, 8).m128i_u64[0]) )
          v19 |= 4u;
      }
    }
    else
    {
      v19 |= 2u;
    }
    v23 = *(__int64 *)((char *)PpmCurrentProfile[0] + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data1;
    if ( !v23 )
      v23 = *(__int64 *)((char *)PpmCurrentProfile[0] + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_LATENCY.Data4;
    if ( !v23 )
      v19 |= 0x20u;
    if ( PpmPerfMaxOverrideEnabled )
      v19 |= 0x10u;
    if ( PpmPerfQosDisableRefcount )
      v19 |= 1u;
    if ( !v19 )
    {
LABEL_35:
      if ( (_DWORD)v8 == 3 )
      {
        v24 = PpmPolicyClassSpecificQosSettingsMask;
        v7 = 0LL;
        v63 = _mm_loadu_si128((const __m128i *)&PpmPolicyClassAgnosticQosSettingsMask);
      }
      else
      {
        v24 = v62.m128_u64[0];
        if ( v7 && (v62.m128_i8[0] >= 0 || *(_DWORD *)v7 <= (unsigned int)*((unsigned __int8 *)v16 + v4 + 44)) )
        {
          v25 = Source2;
LABEL_38:
          if ( (v24 & 0x40) == 0 || *((_DWORD *)v7 + 2) <= (unsigned int)*((unsigned __int8 *)v16 + v4 + 42) )
          {
            v26 = DWORD2(Source2);
            goto LABEL_40;
          }
LABEL_147:
          v26 = *((unsigned __int8 *)v16 + v4 + 42);
          DWORD2(Source2) = v26;
LABEL_40:
          if ( !PpmPerfEppViaPerfControl )
          {
            v27 = v61;
            goto LABEL_44;
          }
          if ( !v7 || (v24 & 0x200000000LL) != 0 && *((_DWORD *)v7 + 4) < *((_DWORD *)v16 + v4 + 20) )
          {
            v27 = *((_DWORD *)v16 + v4 + 20);
            LODWORD(v61) = v27;
            if ( !v7 )
              goto LABEL_107;
          }
          else
          {
            v27 = v61;
          }
          if ( (v24 & 0x8000) == 0 || *((_BYTE *)v7 + 24) >= *((_BYTE *)v16 + v4 + 95) )
          {
LABEL_44:
            if ( PpmFrequencyOverride )
            {
              v52 = (unsigned int)(100 * PpmFrequencyOverride + (*(_DWORD *)(a1 + 448) >> 1)) / *(_DWORD *)(a1 + 448);
              if ( v52 < v25 )
                v25 = (unsigned int)(100 * PpmFrequencyOverride + (*(_DWORD *)(a1 + 448) >> 1)) / *(_DWORD *)(a1 + 448);
              LODWORD(Source2) = v25;
              if ( v52 < v26 )
                v26 = v52;
              DWORD2(Source2) = v26;
            }
            v28 = *((_DWORD *)v16 + v4 + 15);
            v29 = *(_DWORD *)(a1 + 452);
            if ( v28 && (unsigned int)(100 * v28 + (*(_DWORD *)(a1 + 448) >> 1)) / *(_DWORD *)(a1 + 448) < v29 )
              v29 = (unsigned int)(100 * v28 + (*(_DWORD *)(a1 + 448) >> 1)) / *(_DWORD *)(a1 + 448);
            if ( v7 && ((v24 & 0x2000000000LL) == 0 || *((_DWORD *)v7 + 1) <= v29) )
              v29 = DWORD1(Source2);
            else
              DWORD1(Source2) = v29;
            if ( PpmPerfAutonomousActivityWindowViaPerfControl )
            {
              if ( v7 && (v63.m128i_i64[0] & 0x400000000LL) == 0 )
              {
LABEL_51:
                if ( (v63.m128i_i16[0] & 0x400) == 0 || !*((_BYTE *)v7 + 22) || *((_DWORD *)v16 + 18) )
                {
LABEL_55:
                  if ( (v24 & 0x4000) == 0 || *((_BYTE *)v7 + 23) <= *((_BYTE *)v16 + v4 + 93) )
                  {
LABEL_58:
                    if ( (v24 & 0x4000000000000LL) == 0
                      || *((_DWORD *)v7 + 7) <= (unsigned int)*((unsigned __int8 *)v16 + v4 + 175) )
                    {
LABEL_59:
                      v30 = *((_BYTE *)v16 + 32);
                      v31 = v30 == 1 || v30 == 2 && *(_BYTE *)(a1 + 492);
                      if ( !v7 || (v63.m128i_i16[0] & 0x800) != 0 )
                        BYTE5(v61) = v31;
                      if ( *(_BYTE *)(a1 + 521) == 2 )
                      {
                        v32 = 0;
                      }
                      else if ( !*((_BYTE *)v16 + 92) || (v32 = 0, !*(_BYTE *)(a1 + 520)) )
                      {
                        v32 = 1;
                      }
                      if ( !v7 || (v63.m128i_i64[0] & 0x800000000LL) != 0 )
                      {
                        v46 = v55;
                        if ( v32 )
                          v46 = 1;
                        BYTE4(v61) = v32;
                        v55 = v46;
                      }
                      if ( v25 < v26 )
                        v25 = v26;
                      LODWORD(Source2) = v25;
                      if ( v29 < v26 )
                        v29 = v26;
                      DWORD1(Source2) = v29;
                      if ( v57 == 4 )
                      {
                        v47 = *(unsigned __int8 *)(a1 + 655);
                        v48 = v29;
                        if ( v25 < v29 )
                          v48 = v25;
                        if ( v48 < v47 )
                        {
                          v49 = v29;
                          if ( v25 < v29 )
                            v49 = v25;
                        }
                        else
                        {
                          v49 = *(unsigned __int8 *)(a1 + 655);
                        }
                        if ( v26 <= v49 )
                        {
                          v50 = v29;
                          if ( v25 < v29 )
                            v50 = v25;
                          if ( v50 < v47 )
                          {
                            if ( v25 < v29 )
                              v29 = v25;
                            DWORD2(Source2) = v29;
                          }
                          else
                          {
                            DWORD2(Source2) = *(unsigned __int8 *)(a1 + 655);
                          }
                        }
                        if ( PpmPerfEppViaPerfControl )
                        {
                          if ( v27 >= *(unsigned __int8 *)(a1 + 656) )
                            v27 = *(unsigned __int8 *)(a1 + 656);
                          LODWORD(v61) = v27;
                        }
                      }
                      if ( !v32 )
                        goto LABEL_74;
                      v51 = PpmHeteroQosBias[v57];
                      if ( v51 == 1 )
                      {
LABEL_150:
                        BYTE9(v61) = 1;
                        goto LABEL_75;
                      }
                      if ( v51 == 3 )
                      {
                        if ( *(_BYTE *)(a1 + 300) )
                          goto LABEL_150;
                      }
                      else if ( v51 == 2 && !*(_BYTE *)(a1 + 300) )
                      {
                        goto LABEL_150;
                      }
LABEL_74:
                      BYTE9(v61) = 0;
LABEL_75:
                      v33 = 32LL * v57;
                      v34 = RtlCompareMemory((const void *)(v33 + a1 + 536), &Source2, 0x20uLL);
                      v5 = v54;
                      v35 = Source2;
                      if ( v34 != 32 )
                        v5 = 1;
                      *(_DWORD *)(a1 + 4LL * v57 + 760) = 0;
                      v36 = v61;
                      v54 = v5;
                      *(_OWORD *)(v33 + a1 + 536) = v35;
                      *(_OWORD *)(v33 + a1 + 552) = v36;
                      v37 = 0;
                      if ( v7 && RtlCompareMemory(v7, &Source2, 0x20uLL) == 32 )
                      {
                        v38 = v53;
                        *(_DWORD *)(a1 + 4LL * v57 + 760) = 8;
                      }
                      else
                      {
                        v38 = ++v53;
                      }
                      goto LABEL_79;
                    }
LABEL_141:
                    HIDWORD(v61) = *((unsigned __int8 *)v16 + v4 + 175);
                    goto LABEL_59;
                  }
LABEL_57:
                  BYTE7(v61) = *((_BYTE *)v16 + v4 + 93);
                  if ( !v7 )
                    goto LABEL_141;
                  goto LABEL_58;
                }
LABEL_54:
                BYTE6(v61) = *((_BYTE *)v16 + 72);
                if ( !v7 )
                  goto LABEL_57;
                goto LABEL_55;
              }
              HIDWORD(Source2) = *((_DWORD *)v16 + 22);
            }
            if ( !v7 )
              goto LABEL_54;
            goto LABEL_51;
          }
LABEL_107:
          BYTE8(v61) = *((_BYTE *)v16 + v4 + 95);
          goto LABEL_44;
        }
      }
      v25 = *((unsigned __int8 *)v16 + v4 + 44);
      LODWORD(Source2) = v25;
      if ( !v7 )
        goto LABEL_147;
      goto LABEL_38;
    }
    v42 = v8;
    v43 = 32 * v8;
    v44 = RtlCompareMemory((const void *)(32 * v8 + a1 + 536), &Source2, 0x20uLL);
    v38 = v53;
    v45 = v61;
    *(_OWORD *)(v43 + a1 + 536) = Source2;
    if ( v44 == 32 )
      v5 = 1;
    *(_OWORD *)(v43 + a1 + 552) = v45;
    *(_DWORD *)(a1 + 4 * v42 + 760) = v19;
    v37 = 0;
    v54 = v5;
LABEL_79:
    v3 = v58;
    v6 = ++v59;
  }
  v39 = 0;
  v40 = (_WORD *)(a1 + 788);
  *(_BYTE *)(a1 + 802) = v38 > 1;
  *(_BYTE *)(a1 + 522) = v55;
  do
  {
    *v40 = 0;
    do
    {
      if ( v39 == v37
        || RtlCompareMemory((const void *)(a1 + 32LL * v39 + 536), (const void *)(a1 + 32LL * v37 + 536), 0x20uLL) == 32 )
      {
        *v40 |= 1 << v37;
      }
      ++v37;
    }
    while ( v37 < 7 );
    ++v39;
    v37 = 0;
    ++v40;
  }
  while ( v39 < 7 );
  PpmEventQosClassPolicy(a1, 0LL);
  return v5;
}
