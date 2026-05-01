/*
 * XREFs of ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180029420
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180006EE4 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x1800243C0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180028750 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029290 (-HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180035CA4 (-HampDepGroupProcessDonations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     RmpActivityImportanceMergeVectors @ 0x180028280 (RmpActivityImportanceMergeVectors.c)
 *     ?HampSessionGetLogoffInProgress@@YAEPEAU_HAM_SESSION@@@Z @ 0x18002AD70 (-HampSessionGetLogoffInProgress@@YAEPEAU_HAM_SESSION@@@Z.c)
 *     ?HampUserGetLogoffInProgress@@YAEPEAU_HAM_USER@@@Z @ 0x18002AE60 (-HampUserGetLogoffInProgress@@YAEPEAU_HAM_USER@@@Z.c)
 *     ?HampHostSnapshotPackageDebugState@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180037A0C (-HampHostSnapshotPackageDebugState@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z @ 0x18005A820 (-HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ServicingNormalPri@@@details@wil@@QEAA_NXZ @ 0x18007EBC4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ServicingNormalPri@@@details@wil@.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180084C38 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

void __fastcall HampHostComputeStaticEnforcementSettings(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        struct _RM_COMMIT_THRESHOLDS *a3,
        struct _RM_COMMIT_THRESHOLDS *a4,
        struct _HAM_ACTIVITY **a5)
{
  int *v5; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v6; // r13
  struct _HAM_ACTIVITY *v7; // r10
  char *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  bool v11; // zf
  struct _RM_HAM_ACTIVITY_HOST *v12; // rbx
  char *v13; // rbx
  unsigned int v14; // r11d
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r14
  struct _RM_HAM_ACTIVITY_HOST *v19; // r8
  __int64 v20; // r13
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  char v26; // di
  unsigned int v27; // ecx
  struct _RM_ENFORCEMENT_SETTINGS *v28; // r9
  int v29; // ecx
  char v30; // al
  unsigned int v31; // ecx
  unsigned int v32; // edx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  char v37; // al
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rbx
  int v41; // ecx
  DWORD v42; // edi
  _QWORD *Value; // rbx
  unsigned __int64 v44; // rdi
  int v45; // ebx
  __int64 *v46; // rax
  __int64 v47; // rdx
  struct _RM_ENFORCEMENT_SETTINGS *v48; // rdi
  __int64 v49; // rcx
  int v50; // edx
  int v51; // eax
  int v52; // edx
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  _BYTE *v56; // r9
  char v57; // al
  __int64 v58; // rcx
  char v59; // r8
  char v60; // dl
  char v61; // al
  struct _HAM_ACTIVITY *v62; // r9
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // r8
  __m128i v67; // xmm1
  unsigned int v68; // eax
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // kr00_8
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // kr20_8
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // kr30_8
  __int64 v78; // rcx
  __int64 v79; // rax
  __m128i v80; // xmm1
  unsigned __int64 v81; // rax
  unsigned __int64 v82; // rax
  __m128i v83; // xmm1
  unsigned __int64 v84; // rcx
  __int128 v85; // xmm2
  __int64 v86; // rdx
  __int64 v87; // rax
  bool v88; // cc
  struct _RM_COMMIT_THRESHOLDS *v89; // rax
  struct _RM_COMMIT_THRESHOLDS *v90; // rax
  __m128i v91; // xmm0
  unsigned __int16 v92; // [rsp+20h] [rbp-58h]
  int v93; // [rsp+24h] [rbp-54h]
  int v94; // [rsp+28h] [rbp-50h] BYREF
  struct _HAM_ACTIVITY *v95; // [rsp+30h] [rbp-48h]
  _BYTE *v96; // [rsp+38h] [rbp-40h]
  unsigned __int64 v97; // [rsp+40h] [rbp-38h]
  __int128 v98; // [rsp+48h] [rbp-30h]
  __m128i v99; // [rsp+58h] [rbp-20h]
  struct _RM_HAM_ACTIVITY_HOST *v100; // [rsp+C0h] [rbp+48h] BYREF
  struct _RM_ENFORCEMENT_SETTINGS *v101; // [rsp+C8h] [rbp+50h] BYREF
  struct _RM_COMMIT_THRESHOLDS *v102; // [rsp+D0h] [rbp+58h]
  struct _RM_COMMIT_THRESHOLDS *v103; // [rsp+D8h] [rbp+60h]

  v103 = a4;
  v102 = a3;
  v101 = a2;
  v100 = a1;
  v5 = (int *)((char *)a2 + 24);
  v94 = 0;
  v6 = a1;
  v92 = 1;
  *(_OWORD *)a2 = 0LL;
  v7 = 0LL;
  v95 = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 6) = 1;
  v8 = (char *)a1 + 792;
  v9 = *((_QWORD *)a1 + 99);
  v93 = 0;
  v98 = 0LL;
  v10 = *(_QWORD *)(v9 + 88);
  v99 = 0LL;
  v11 = *((_DWORD *)v6 + 140) == 2;
  v97 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
      - 392;
  *v5 = !v11;
  v96 = (_BYTE *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                         + 120)
                             + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                - 2132);
  v12 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v6 + 76);
  if ( v12 == (struct _RM_HAM_ACTIVITY_HOST *)((char *)v6 + 608) || (v13 = (char *)v12 - 96) == 0LL )
  {
    v17 = *((_QWORD *)&v98 + 1);
    v18 = v98;
    v15 = v99.m128i_u64[1];
    v16 = v99.m128i_i64[0];
    goto LABEL_76;
  }
  v14 = 1;
  v15 = v99.m128i_u64[1];
  v16 = v99.m128i_i64[0];
  v17 = *((_QWORD *)&v98 + 1);
  v18 = v98;
  v19 = v100;
  while ( 1 )
  {
    v20 = *((_QWORD *)v13 + 64);
    if ( v20 == *((_QWORD *)v19 + 102) || !v20 && v13[562] == 2 && (unsigned __int8)v13[563] >= 5u )
    {
      ++v93;
      if ( (v13[480] & 0x20) != 0 )
      {
        if ( !v7 || (int)HampActCompareForMaxCommit((struct _HAM_ACTIVITY *)v13, v7, 0) > 0 )
          v95 = (struct _HAM_ACTIVITY *)v13;
      }
      else
      {
        v21 = *((_QWORD *)v13 + 58);
        v22 = *((_QWORD *)v13 + 57);
        v23 = *((_QWORD *)v13 + 56);
        v24 = *((_QWORD *)v13 + 55);
        if ( v21 == -1LL || v15 == -1LL || (v15 += v21, v15 < v21) )
          v15 = -1LL;
        if ( v22 == -1LL || v16 == -1LL || (v16 += v22, v16 < v22) )
          v16 = -1LL;
        if ( v23 == -1LL || v17 == -1LL || (v17 += v23, v17 < v23) )
          v17 = -1LL;
        if ( v24 == -1LL || v18 == -1LL )
        {
          v18 = -1LL;
        }
        else
        {
          v25 = v24 + v18;
          v18 = -1LL;
          if ( v25 >= v24 )
            v18 = v25;
        }
      }
    }
    v26 = v13[562];
    if ( v26 != 3 && (v26 != 2 || (unsigned __int8)v13[563] < 3u) )
    {
      v19 = v100;
      if ( v20 != *((_QWORD *)v100 + 102) )
        goto LABEL_44;
    }
    v27 = *((_DWORD *)v13 + 106);
    if ( (v27 & 1) != 0 )
      v14 = RmpActivityImportanceMergeVectors(v27, v14);
    if ( v26 != 3 && (v26 != 2 || (unsigned __int8)v13[563] < 3u) )
    {
      v19 = v100;
LABEL_44:
      v28 = v101;
      goto LABEL_45;
    }
    v28 = v101;
    v19 = v100;
    v29 = *((_DWORD *)v13 + 120) & 3;
    if ( v29 <= *((_DWORD *)v101 + 6) )
      v29 = *((_DWORD *)v101 + 6);
    *((_DWORD *)v101 + 6) = v29;
LABEL_45:
    v30 = v13[562];
    if ( v30 == 3 || v30 == 2 && (unsigned __int8)v13[563] >= 5u )
      *((_BYTE *)v28 + 28) = *((_BYTE *)v28 + 28) & 0xFE ^ (*((_BYTE *)v28 + 28) & 1 | ((*((_DWORD *)v13 + 120) & 8) != 0));
    if ( (*v96 & 0x10) != 0 )
    {
      if ( (*((_DWORD *)v13 + 28) & 0x10000) != 0 )
      {
        v31 = *((unsigned __int16 *)v13 + 212);
        if ( (v31 & 0x40) != 0 )
        {
          v32 = 4;
LABEL_63:
          v37 = v13[562];
          if ( v37 != 3
            && (v37 != 2 || (unsigned __int8)v13[563] < 5u)
            && *((_QWORD *)v13 + 64) == *((_QWORD *)v19 + 102) )
          {
            v32 = v32 != 0;
          }
          if ( ((*((unsigned __int8 *)v28 + 28) >> 4) & 7u) > v32 )
            LOBYTE(v32) = (*((_BYTE *)v28 + 28) >> 4) & 7;
          *((_BYTE *)v28 + 28) = (16 * v32) | *((_BYTE *)v28 + 28) & 0x8F;
          goto LABEL_71;
        }
        v33 = (v31 >> 1) & 7;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 && (v35 = v34 - 1) != 0 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              if ( v36 == 1 )
                v32 = 3;
              else
                v32 = 6;
            }
            else
            {
              v32 = 2;
            }
          }
          else
          {
            v32 = 1;
          }
          goto LABEL_63;
        }
      }
      v32 = 0;
      goto LABEL_63;
    }
LABEL_71:
    v38 = *((_QWORD *)v13 + 12);
    v39 = *((_QWORD *)v13 + 10);
    v13 = 0LL;
    if ( v38 != v39 + 608 )
      v13 = (char *)(v38 - 96);
    if ( !v13 )
      break;
    v7 = v95;
  }
  v6 = v100;
  v5 = (int *)((char *)v28 + 24);
  v92 = v14;
  v8 = (char *)v100 + 792;
LABEL_76:
  v40 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 88LL) + 88LL);
  if ( HampSessionGetLogoffInProgress(*(struct _HAM_SESSION **)(v40 + 160))
    || HampUserGetLogoffInProgress((struct _HAM_USER *)v40) )
  {
    v41 = 1;
    if ( *v5 > 1 )
      v41 = *v5;
    *v5 = v41;
  }
  v42 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v42) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x400uLL;
    ++Value[11];
  }
  v44 = v97;
  RtlAcquireSRWLockShared(v97);
  v45 = *(_DWORD *)(v97 + 668);
  if ( HampLockTrackerId != -1 )
  {
    v46 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v47 = *v46;
    if ( (*v46 & 0x400) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v11 = v46[11]-- == 1;
    if ( v11 )
      *v46 = v47 & 0xFFFFFFFFFFFFFBFFuLL;
  }
  RtlReleaseSRWLockShared(v44);
  if ( v45 )
  {
    RmHamHostGetCurrentState(v6, (union _RM_OPTIMIZATION_STATE *)&v94, 0LL);
    v48 = v101;
    if ( (v94 & 0x100) != 0 )
    {
      v49 = 1216LL;
      if ( v6 )
        v49 = (__int64)v6 + 1152;
      v50 = *(_DWORD *)v49;
      if ( *(_DWORD *)v49 <= *((_DWORD *)v101 + 6) )
        v50 = *((_DWORD *)v101 + 6);
      *((_DWORD *)v101 + 6) = v50;
    }
    else
    {
      v51 = *((_DWORD *)v101 + 6);
      if ( v51 < 1 )
        v51 = 1;
      *((_DWORD *)v101 + 6) = v51;
    }
  }
  else
  {
    v48 = v101;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ServicingNormalPri>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ServicingNormalPri>::GetImpl'::`2'::impl) )
  {
    v52 = 0;
    if ( (*((_QWORD *)v6 + 83) & 0x30000LL) != 0 )
      v52 = *((_DWORD *)v6 + 166) & 0xFF00;
    if ( v52 == 1024 || v52 == 1536 || v52 == 4096 || v52 == 4352 || v52 == 6400 )
    {
      v53 = *((_DWORD *)v48 + 6);
      if ( v53 < 1 )
        v53 = 1;
      *((_DWORD *)v48 + 6) = v53;
    }
  }
  if ( (v92 & 0xC0) == 0xC0 )
    v54 = 2;
  else
    v54 = (v92 & 0xEu) >= 8 && (v92 & 0x30u) >= 0x20;
  v55 = *((_DWORD *)v48 + 6);
  if ( v55 <= v54 )
  {
    if ( (v92 & 0xC0) == 0xC0 )
      v55 = 2;
    else
      v55 = (v92 & 0xEu) >= 8 && (v92 & 0x30u) >= 0x20;
  }
  *((_DWORD *)v48 + 6) = v55;
  v56 = (char *)v48 + 28;
  *((_BYTE *)v48 + 28) ^= (*((_BYTE *)v48 + 28) ^ (2 * (v92 >> 7))) & 2;
  if ( (v92 & 0x100) == 0
    || (LODWORD(v101) = 0,
        LODWORD(v100) = 0,
        RmHamHostGetCurrentState(v6, (union _RM_OPTIMIZATION_STATE *)&v101, (union _RM_OPTIMIZATION_STATE *)&v100),
        v56 = (char *)v48 + 28,
        ((unsigned __int8)v101 & 0x10) != 0)
    || ((unsigned __int8)v100 & 0x10) != 0 )
  {
    v57 = 0;
  }
  else
  {
    v57 = 8;
  }
  v58 = 1220LL;
  v59 = v57 | *((_BYTE *)v48 + 28) & 0xF7;
  *((_BYTE *)v48 + 28) = v59;
  v60 = v59;
  if ( v6 )
    v58 = (__int64)v6 + 1156;
  if ( (*(_BYTE *)v58 & 8) != 0 && (*((_QWORD *)v6 + 83) & 0x2000000000000LL) != 0 )
  {
    v60 = v59 | 8;
    *v56 = v59 | 8;
  }
  if ( (v92 & 0x400) == 0 || (*((_QWORD *)v6 + 83) & 0x4000000000000LL) != 0 )
    v61 = 0;
  else
    v61 = 4;
  *v56 = v61 | v60 & 0xFB;
  v62 = v95;
  if ( v95 )
  {
    v63 = *((_QWORD *)v95 + 58);
    v64 = *((_QWORD *)v95 + 57);
    v65 = *((_QWORD *)v95 + 56);
    v66 = *((_QWORD *)v95 + 55);
    if ( v63 == -1LL || v15 == -1LL || (v15 += v63, v15 < v63) )
      v15 = -1LL;
    if ( v64 == -1LL || v16 == -1LL || (v16 += v64, v16 < v64) )
      v16 = -1LL;
    if ( v65 == -1LL || v17 == -1LL || (v17 += v65, v17 < v65) )
      v17 = -1LL;
    if ( v66 == -1LL || v18 == -1LL || (v18 += v66, v18 < v66) )
      v18 = -1LL;
  }
  if ( !v93 )
  {
    v15 = *((_QWORD *)v6 + 114);
    v67 = *(__m128i *)((char *)v6 + 904);
    v17 = *((_QWORD *)v6 + 112);
    v18 = *((_QWORD *)v6 + 111);
    v98 = *(_OWORD *)((char *)v6 + 888);
    v99 = v67;
    v16 = v67.m128i_i64[0];
  }
  if ( (*v96 & 0x20) != 0 )
  {
    v68 = HampHostSnapshotPackageDebugState(v6);
    v62 = v95;
    if ( v68 )
    {
      v15 = -1LL;
      v16 = -1LL;
      v17 = -1LL;
      v18 = -1LL;
    }
  }
  v69 = *((_QWORD *)v6 + 120);
  if ( v16 < v69 )
  {
    if ( v16 )
    {
      if ( is_mul_ok(v69, 0x400uLL) )
      {
        v70 = v69 * (unsigned __int128)0x400uLL / v16;
        v71 = v70;
        if ( v70 )
        {
          if ( v15 == -1LL || v70 == -1LL )
          {
            v15 = -1LL;
          }
          else
          {
            v73 = v15;
            v72 = v15 * v70;
            v15 = -1LL;
            if ( is_mul_ok(v73, v69 * (unsigned __int128)0x400uLL / v16) )
              v15 = v72;
          }
          if ( v17 == -1LL || v71 == -1LL )
          {
            v17 = -1LL;
          }
          else
          {
            v75 = v17;
            v74 = v17 * v71;
            v17 = -1LL;
            if ( is_mul_ok(v75, v71) )
              v17 = v74;
          }
          if ( v18 == -1LL || v71 == -1LL )
          {
            v18 = -1LL;
          }
          else
          {
            v77 = v18;
            v76 = v18 * v71;
            v18 = -1LL;
            if ( is_mul_ok(v77, v71) )
              v18 = v76;
          }
          if ( v15 != -1LL )
            v15 >>= 10;
          if ( v17 != -1LL )
            v17 >>= 10;
          if ( v18 != -1LL )
            v18 >>= 10;
          v16 = *((_QWORD *)v6 + 120);
          if ( v15 <= v69 )
            v15 = *((_QWORD *)v6 + 120);
        }
      }
    }
  }
  v78 = *((_QWORD *)v6 + 76);
  if ( (struct _RM_HAM_ACTIVITY_HOST *)v78 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)v6 + 608)
    && v78 != 96
    && (*(_DWORD *)(v78 + 16) & 0x80000) != 0 )
  {
    v79 = *(_QWORD *)(v78 - 96 + 72);
    v15 = *(_QWORD *)(v79 + 96);
    v80 = *(__m128i *)(v79 + 88);
    v17 = *(_QWORD *)(v79 + 80);
    v18 = *(_QWORD *)(v79 + 72);
    v98 = *(_OWORD *)(v79 + 72);
    v99 = v80;
    v16 = v80.m128i_i64[0];
  }
  v81 = *((_QWORD *)v6 + 121);
  if ( v15 != -1LL )
  {
    if ( v15 < v81 )
      v15 = 0LL;
    else
      v15 -= v81;
  }
  if ( v16 != -1LL )
  {
    if ( v16 < v81 )
      v16 = 0LL;
    else
      v16 -= v81;
  }
  if ( v17 != -1LL )
  {
    if ( v17 < v81 )
      v17 = 0LL;
    else
      v17 -= v81;
  }
  if ( v18 != -1LL )
  {
    if ( v18 < v81 )
      v18 = 0LL;
    else
      v18 -= v81;
  }
  v82 = *((_QWORD *)v6 + 122);
  if ( v15 == -1LL )
  {
    v99.m128i_i64[1] = -1LL;
  }
  else if ( v15 < v82 )
  {
    v15 = 0LL;
    v99.m128i_i64[1] = 0LL;
  }
  else
  {
    v15 -= v82;
    v99.m128i_i64[1] = v15;
  }
  if ( v16 == -1LL )
  {
    v99.m128i_i64[0] = -1LL;
  }
  else if ( v16 < v82 )
  {
    v99.m128i_i64[0] = 0LL;
  }
  else
  {
    v99.m128i_i64[0] = v16 - v82;
  }
  if ( v17 == -1LL )
  {
    *((_QWORD *)&v98 + 1) = -1LL;
  }
  else if ( v17 < v82 )
  {
    *((_QWORD *)&v98 + 1) = 0LL;
  }
  else
  {
    *((_QWORD *)&v98 + 1) = v17 - v82;
  }
  if ( v18 == -1LL )
  {
    *(_QWORD *)&v98 = -1LL;
  }
  else if ( v18 < v82 )
  {
    *(_QWORD *)&v98 = 0LL;
  }
  else
  {
    *(_QWORD *)&v98 = v18 - v82;
  }
  v83 = v99;
  v84 = *((_QWORD *)v6 + 109);
  v85 = v98;
  v86 = _mm_srli_si128(v99, 8).m128i_u64[0];
  if ( v15 <= *((_QWORD *)v6 + 108) )
    v86 = *((_QWORD *)v6 + 108);
  v87 = v99.m128i_i64[0];
  v88 = v99.m128i_i64[0] <= v84;
  v99.m128i_i64[1] = v86;
  *((_QWORD *)v48 + 2) = v86;
  if ( v88 )
    v87 = v84;
  v99.m128i_i64[0] = v87;
  v89 = v102;
  if ( v102 )
  {
    *(_OWORD *)v102 = v85;
    *((__m128i *)v89 + 1) = v83;
  }
  v90 = v103;
  if ( v103 )
  {
    v91 = v99;
    *(_OWORD *)v103 = v85;
    *((__m128i *)v90 + 1) = v91;
  }
  if ( a5 )
    *a5 = v62;
}
