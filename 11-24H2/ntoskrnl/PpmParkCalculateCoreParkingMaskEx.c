/*
 * XREFs of PpmParkCalculateCoreParkingMaskEx @ 0x1405E1B9C
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1404EDA40 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeAndAffinityEx2 @ 0x1402052E0 (KeAndAffinityEx2.c)
 *     KeOrAffinityEx2 @ 0x1402067F0 (KeOrAffinityEx2.c)
 *     KeAddGroupAffinityEx @ 0x140257100 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x140352980 (KeGetPrcb.c)
 *     KeSubtractAffinityEx2 @ 0x140354F10 (KeSubtractAffinityEx2.c)
 *     KeCountSetBitsAffinityEx @ 0x1403AFC80 (KeCountSetBitsAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x1403B1720 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEmptyAffinityEx @ 0x1403B55D0 (KeIsEmptyAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x1403C9F30 (KeCheckProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14040D4F0 (KeEnumerateNextProcessor.c)
 *     PpmParkComputeDiff @ 0x1404EE290 (PpmParkComputeDiff.c)
 *     KeCpuSetQueryUnparkRecommendationEx @ 0x1405BF94C (KeCpuSetQueryUnparkRecommendationEx.c)
 *     Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline @ 0x1405D2930 (Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmEventLPICoreParking @ 0x1405D9830 (PpmEventLPICoreParking.c)
 *     PpmEventTraceSoftCoreParkingSelectionEx @ 0x1405DF2CC (PpmEventTraceSoftCoreParkingSelectionEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkFindOverUtilizedProcessorsEx @ 0x1405E37EC (PpmParkFindOverUtilizedProcessorsEx.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char PpmParkCalculateCoreParkingMaskEx()
{
  struct _KAFFINITY_EX *v0; // r13
  struct _KAFFINITY_EX *v1; // r12
  size_t v2; // r8
  struct _KAFFINITY_EX *v3; // r15
  struct _KAFFINITY_EX *v4; // r14
  struct _KAFFINITY_EX *v5; // rsi
  struct _KAFFINITY_EX *v6; // rdi
  struct _KAFFINITY_EX *v7; // rbx
  size_t v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // r14d
  unsigned __int64 v15; // rax
  unsigned int v16; // r15d
  unsigned __int16 Size; // dx
  unsigned __int16 *v18; // r15
  __int64 Prcb; // rax
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  bool v22; // cc
  unsigned int v23; // r14d
  bool v24; // zf
  unsigned int v25; // esi
  __int64 v26; // rax
  unsigned __int16 UnparkRecommendation; // ax
  __int64 v28; // rax
  unsigned int v29; // esi
  __int64 v30; // rax
  unsigned int v31; // eax
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // esi
  unsigned __int16 v35; // bx
  unsigned int v36; // r10d
  unsigned int v37; // r8d
  unsigned int v38; // r9d
  __int64 v39; // kr00_8
  int v40; // eax
  __int64 v41; // rcx
  int v42; // r9d
  int v43; // r12d
  unsigned int v44; // eax
  unsigned int v45; // eax
  int v46; // r15d
  char v47; // bl
  char v48; // r13
  struct _KAFFINITY_EX *v49; // rbx
  int v50; // r15d
  unsigned int v51; // eax
  __int64 v52; // rcx
  int v53; // edx
  int v54; // eax
  char v56; // [rsp+50h] [rbp-B0h]
  char v57; // [rsp+68h] [rbp-98h]
  char v58; // [rsp+70h] [rbp-90h]
  int v59; // [rsp+80h] [rbp-80h]
  unsigned int i; // [rsp+84h] [rbp-7Ch]
  __int128 v61; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+98h] [rbp-68h]
  unsigned int v63; // [rsp+A0h] [rbp-60h]
  __int64 *v64; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v65; // [rsp+B0h] [rbp-50h]
  $B38C3B1372D6E954799962D5DD404846 *v66; // [rsp+B8h] [rbp-48h]
  __int64 v67; // [rsp+C0h] [rbp-40h]
  struct _KAFFINITY_EX *v68; // [rsp+C8h] [rbp-38h]
  struct _KAFFINITY_EX *v69; // [rsp+D0h] [rbp-30h]
  struct _KAFFINITY_EX *v70; // [rsp+D8h] [rbp-28h]
  __int64 v71; // [rsp+E0h] [rbp-20h]
  struct _KAFFINITY_EX *v72; // [rsp+E8h] [rbp-18h]
  __int64 v73; // [rsp+F0h] [rbp-10h]
  __int64 v74; // [rsp+F8h] [rbp-8h]
  __int64 v75; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v76; // [rsp+158h] [rbp+58h] BYREF
  int v77; // [rsp+160h] [rbp+60h]
  unsigned int v78; // [rsp+168h] [rbp+68h]

  v61 = 0LL;
  v62 = 0LL;
  v76 = 0;
  LODWORD(v75) = 0;
  if ( PpmIsParkingEnabled )
  {
    v0 = PpmParkPerfCheckAffinities;
    v74 = (__int64)PpmParkPerfCheckAffinities;
    v1 = PpmParkPerfCheckAffinities + 1;
    v2 = 8LL * PpmParkPerfCheckAffinities->Count;
    v3 = PpmParkPerfCheckAffinities + 3;
    v73 = (__int64)&PpmParkPerfCheckAffinities[1];
    v4 = PpmParkPerfCheckAffinities + 4;
    v69 = PpmParkPerfCheckAffinities + 3;
    v5 = PpmParkPerfCheckAffinities + 6;
    v68 = PpmParkPerfCheckAffinities + 4;
    v6 = PpmParkPerfCheckAffinities + 7;
    v72 = PpmParkPerfCheckAffinities + 5;
    v70 = PpmParkPerfCheckAffinities + 6;
    v7 = PpmParkPerfCheckAffinities + 2;
    v71 = (__int64)&PpmParkPerfCheckAffinities[7];
    memset_0(&PpmParkPerfCheckAffinities->8, 0, v2);
    v0->Count = 1;
    memset_0(&v1->8, 0, 8LL * v1->Count);
    v1->Count = 1;
    v8 = 8LL * v7->Count;
    v66 = &v7->8;
    memset_0(&v7->8, 0, v8);
    v7->Count = 1;
    memset_0(&v3->8, 0, 8LL * v3->Count);
    v3->Count = 1;
    memset_0(&v4->8, 0, 8LL * v4->Count);
    v4->Count = 1;
    memset_0(&v0[5].8, 0, 8LL * v0[5].Count);
    v0[5].Count = 1;
    memset_0(&v5->8, 0, 8LL * v5->Count);
    v5->Count = 1;
    memset_0(&v6->8, 0, 8LL * v6->Count);
    v6->Count = 1;
    memset_0(&v0[8].8, 0, 8LL * v0[8].Count);
    v0[8].Count = 1;
    v64 = PpmCurrentProfile[0];
    v65 = 488LL * dword_140F0BA4C;
    v9 = 100 * BYTE4(PpmCurrentProfile[0][v65 / 8 + 22]);
    PpmParkSoftParkCurrentRank = 0;
    PpmParkSoftParkRankListChanged = 0;
    v63 = v9;
    if ( PpmParkNewSoftParkRankList )
      memset_0(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
    v10 = 0;
    for ( i = 0; v10 < PpmParkNumNodes; i = ++v10 )
    {
      v11 = PpmParkNodes + 1288LL * v10;
      v67 = v11;
      if ( (*(_BYTE *)(v11 + 1184) & 1) == 0 )
      {
        KiCopyAffinityEx(
          (struct _KAFFINITY_EX *)(v11 + 576),
          *(_WORD *)(v11 + 578),
          (struct _KAFFINITY_EX *)(v11 + 312));
        v12 = *(unsigned __int16 *)(v11 + 1174);
        v13 = v63;
        *(_WORD *)(v11 + 1244) = 0;
        *(_BYTE *)(v11 + 1246) = 0;
        v14 = *(unsigned __int16 *)(v11 + 1170);
        if ( (unsigned __int16)v14 >= (unsigned __int16)v12 )
          v14 = v12;
        v78 = v14;
        PpmParkFindOverUtilizedProcessorsEx(v11, v13, v3);
        *(_BYTE *)(v11 + 1216) = 0;
        if ( PpmHeteroFavoredCoreRotationTimeoutMs )
        {
          v15 = MEMORY[0xFFFFF78000000008]
              / (10000
               * (unsigned __int64)(unsigned int)PpmHeteroFavoredCoreRotationTimeoutMs);
          *(_QWORD *)(v11 + 1200) = v15;
          if ( v15 != *(_QWORD *)(v11 + 1208) )
          {
            *(_BYTE *)(v11 + 1216) = 1;
            *(_QWORD *)(v11 + 1208) = v15;
          }
        }
        v16 = 0;
        v77 = 0;
        if ( *(_BYTE *)(v11 + 12) )
        {
          while ( 1 )
          {
            Size = v5->Size;
            v18 = (unsigned __int16 *)(*(_QWORD *)(v11 + 1280) + 640LL * v16);
            LODWORD(v75) = 0;
            KiCopyAffinityEx(v5, Size, (struct _KAFFINITY_EX *)(v18 + 20));
            if ( (unsigned int)KeIsEmptyAffinityEx(&v5->Count) )
            {
LABEL_94:
              v10 = i;
              goto LABEL_95;
            }
            LODWORD(v75) = 0x100000;
            if ( (unsigned __int16)PpmParkGranularity <= 1u )
            {
              KiCopyAffinityEx(v0, v0->Size, (struct _KAFFINITY_EX *)(v18 + 152));
            }
            else
            {
              memset_0(&v0->8, 0, 8LL * v0->Count);
              v0->Count = 1;
              LOWORD(v62) = 0;
              *((_QWORD *)&v61 + 1) = *((_QWORD *)v18 + 39);
              *(_QWORD *)&v61 = v18 + 152;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v76, (unsigned __int16 **)&v61) )
              {
                Prcb = KeGetPrcb(v76);
                KeAddGroupAffinityEx(&v0->Count, *(unsigned __int8 *)(Prcb + 208), *(_QWORD *)(Prcb + 36448));
              }
            }
            KeAndAffinityEx2(v0, v5, (__int64)v0);
            if ( !(unsigned int)KeIsEmptyAffinityEx(&v0->Count) )
              LODWORD(v75) = v75 | 0x10000;
            v20 = v14;
            v21 = *v18 - (unsigned int)KeCountSetBitsAffinityEx(&v0->Count);
            v22 = v21 <= v14;
            v23 = 0;
            if ( v22 )
              v20 = v21;
            memset_0(&v1->8, 0, 8LL * v1->Count);
            v24 = KiClockTimerPerCpu == 0;
            v1->Count = 1;
            if ( v24 )
            {
              v25 = KiClockTimerOwner;
              v76 = KiClockTimerOwner;
              if ( (unsigned int)KeCheckProcessorAffinityEx(&v0[6].Count, KiClockTimerOwner) )
              {
                if ( v20 && !(unsigned int)KeCheckProcessorAffinityEx(&v0->Count, v25) )
                {
                  v26 = KeGetPrcb(v25);
                  if ( (unsigned __int16)PpmParkGranularity <= 1u )
                    KeAddProcessorAffinityEx(&v1->Count, v25);
                  else
                    KeAddGroupAffinityEx(&v1->Count, *(unsigned __int8 *)(v26 + 208), *(_QWORD *)(v26 + 36448));
                  LODWORD(v75) = v75 | 0x100;
                  v23 = KeCountSetBitsAffinityEx(&v1->Count);
                }
              }
            }
            memset_0(&v0[2].8, 0, 8LL * v0[2].Count);
            v0[2].Count = 1;
            UnparkRecommendation = KeCpuSetQueryUnparkRecommendationEx(&v0[6].Count, &v0[2].Count);
            v59 = UnparkRecommendation;
            if ( UnparkRecommendation )
            {
              if ( (unsigned __int16)PpmParkGranularity > 1u )
              {
                LOWORD(v62) = 0;
                *((_QWORD *)&v61 + 1) = v66->Bitmap[0];
                *(_QWORD *)&v61 = v0 + 2;
                if ( !(unsigned int)KeEnumerateNextProcessor(&v76, (unsigned __int16 **)&v61) )
                {
                  do
                  {
                    v28 = KeGetPrcb(v76);
                    KeAddGroupAffinityEx(&v0[2].Count, *(unsigned __int8 *)(v28 + 208), *(_QWORD *)(v28 + 36448));
                  }
                  while ( !(unsigned int)KeEnumerateNextProcessor(&v76, (unsigned __int16 **)&v61) );
                  v1 = v0 + 1;
                }
                v59 = KeCountSetBitsAffinityEx(&v0[2].Count);
              }
              *((_QWORD *)&v61 + 1) = v0[2].Bitmap[0];
              LOWORD(v62) = 0;
              *(_QWORD *)&v61 = v0 + 2;
              if ( !(unsigned int)KeEnumerateNextProcessor(&v76, (unsigned __int16 **)&v61) )
              {
                do
                {
                  if ( v23 < v20 )
                  {
                    v29 = v76;
                    if ( !(unsigned int)KeCheckProcessorAffinityEx(&v0->Count, v76) )
                    {
                      v30 = KeGetPrcb(v29);
                      if ( (unsigned __int16)PpmParkGranularity <= 1u )
                        KeAddProcessorAffinityEx(&v1->Count, v29);
                      else
                        KeAddGroupAffinityEx(&v1->Count, *(unsigned __int8 *)(v30 + 208), *(_QWORD *)(v30 + 36448));
                      LODWORD(v75) = v75 | 0x10;
                      v23 = KeCountSetBitsAffinityEx(&v1->Count);
                    }
                  }
                }
                while ( !(unsigned int)KeEnumerateNextProcessor(&v76, (unsigned __int16 **)&v61) );
                v11 = v67;
              }
            }
            v31 = v18[1];
            if ( v23 >= v31 || v23 >= v20 )
            {
              v32 = v75;
            }
            else
            {
              v23 = v20;
              if ( v31 < v20 )
                v23 = v18[1];
              v32 = v75 | 4;
              LODWORD(v75) = v75 | 4;
            }
            v33 = v18[2];
            v34 = v20;
            if ( v20 > v33 && v23 < v20 )
            {
              v34 = v18[2];
              LODWORD(v75) = v32 | 8;
              if ( v33 <= v23 )
                v34 = v23;
            }
            v35 = 0;
            if ( (PpmHeteroHgsContainmentState & 8) != 0 )
              v35 = *(_WORD *)(*(_QWORD *)(v11 + 1272) + 2LL * *(int *)(*(_QWORD *)(v11 + 1272) + 4LL) + 8);
            if ( (unsigned int)Feature_PpmHighPerfSoftParkLatency__private_IsEnabledDeviceUsageNoInline() )
              break;
            v36 = *v18;
            if ( !PpmPerfMaxOverrideEnabled )
            {
              v38 = v18[3];
              if ( (unsigned __int16)v38 >= (unsigned __int16)v36 )
                v38 = *v18;
              v37 = v38;
              if ( PpmCheckLatencyBoostActive )
              {
                v39 = 1374389535LL * (v36 * *((unsigned __int8 *)&v64[v65 / 8 + 17] + (v77 != 0) + 1) + 50);
                goto LABEL_72;
              }
              goto LABEL_74;
            }
            LODWORD(v75) = v75 | 0x40000;
            v37 = v36;
LABEL_81:
            v43 = v23;
            v44 = v37 + v59;
            v18[4] = v37;
            if ( v37 + v59 >= v34 )
              v44 = v34;
            if ( v44 > v23 )
              v43 = v44;
            v78 -= v34;
            v24 = PpmParkSoftParkingEnabled == 0;
            v18[5] = v43;
            if ( v24 )
            {
              LODWORD(v75) = v75 | 0x200000;
              v34 = v43;
            }
            else if ( (PpmHeteroHgsContainmentState & 8) != 0 )
            {
              LODWORD(v75) = v75 | 0x800000;
              v45 = v35;
              if ( v34 < v35 )
                v45 = v34;
              v34 = v45;
            }
            v46 = 0;
            v47 = 0;
            v48 = 0;
            if ( PpmHeteroHgsParkingEnabled )
            {
              v46 = *(unsigned __int16 *)(v11 + 1256);
              v47 = *(_BYTE *)(v11 + 1263);
              v48 = *(_BYTE *)(v11 + 1262);
            }
            KeAndAffinityEx2(v70, v69, (__int64)v68);
            v58 = v47;
            v57 = v48;
            v0 = (struct _KAFFINITY_EX *)v74;
            v49 = (struct _KAFFINITY_EX *)(v74 + 1584);
            PpmParkComputeUnparkMaskEx(
              v11,
              v74 + 1584,
              v11 + 576,
              v74 + 1056,
              v43,
              v34,
              v74,
              v73,
              v72,
              v71,
              (__int64)&v75,
              v11 + 1200,
              v46,
              v57,
              v58,
              v77);
            KeSubtractAffinityEx2(v49, v0 + 5, v0 + 8);
            KeSubtractAffinityEx2(v0 + 8, v0 + 7, v0 + 8);
            KeSubtractAffinityEx2((struct _KAFFINITY_EX *)(v11 + 312), v49, (struct _KAFFINITY_EX *)(v11 + 312));
            KeOrAffinityEx2((struct _KAFFINITY_EX *)(v11 + 312), v0 + 5, (struct _KAFFINITY_EX *)(v11 + 312));
            KeOrAffinityEx2((struct _KAFFINITY_EX *)(v11 + 312), v0 + 7, (struct _KAFFINITY_EX *)(v11 + 312));
            KeSubtractAffinityEx2((struct _KAFFINITY_EX *)(v11 + 840), v0 + 6, (struct _KAFFINITY_EX *)(v11 + 840));
            KeOrAffinityEx2((struct _KAFFINITY_EX *)(v11 + 840), v0 + 7, (struct _KAFFINITY_EX *)(v11 + 840));
            v56 = v46;
            v50 = v77;
            PpmEventTraceSoftCoreParkingSelectionEx(
              v11,
              v77,
              v43,
              v34,
              v23,
              v0,
              &v0[1].Count,
              &v0[4].Count,
              &v0[2].Count,
              v75,
              v56);
            v51 = *(unsigned __int8 *)(v11 + 12);
            v1 = v0 + 1;
            v16 = v50 + 1;
            v77 = v16;
            v14 = v78;
            v5 = v0 + 6;
            if ( v16 >= v51 )
              goto LABEL_94;
          }
          v40 = *v18;
          v38 = v18[3];
          if ( (unsigned __int16)v38 >= (unsigned __int16)v40 )
            v38 = *v18;
          v37 = v38;
          if ( !PpmCheckLatencyBoostActive )
            goto LABEL_74;
          v41 = v77 ? (__int64)v64 + 41 : (__int64)(v64 + 5);
          v39 = 1374389535LL * (v40 * (unsigned int)*(unsigned __int8 *)(v65 + v41 + 97) + 50);
LABEL_72:
          if ( HIDWORD(v39) >> 5 > v38 )
          {
            v37 = HIDWORD(v39) >> 5;
            v42 = v75 | 0x40;
            LODWORD(v75) = v75 | 0x40;
          }
          else
          {
LABEL_74:
            v42 = v75;
          }
          if ( (unsigned __int16)PpmParkGranularity > 1u )
            v37 = (unsigned __int16)PpmParkGranularity
                - 1
                + v37
                - ((unsigned __int16)PpmParkGranularity - 1 + v37) % (unsigned __int16)PpmParkGranularity;
          if ( (PpmHeteroHgsContainmentState & 8) != 0 && v35 && v35 < (unsigned __int16)v37 )
          {
            v37 = v35;
            LODWORD(v75) = v42 | 0x400000;
          }
          goto LABEL_81;
        }
LABEL_95:
        v3 = v0 + 3;
      }
    }
    PpmParkComputeDiff();
    v53 = PpmParkLpiCap != 0;
    if ( PpmParkLpiEngaged != v53 || (v54 = 0, PpmParkLpiCapChanged) )
      v54 = 1;
    PpmParkLpiEngaged = PpmParkLpiCap != 0;
    PpmParkLpiCapChanged = 0;
    if ( v54 )
      PpmEventLPICoreParking(v52, v53);
  }
  return 1;
}
