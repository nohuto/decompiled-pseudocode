/*
 * XREFs of PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1404E5250 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KeSubtractAffinityEx2 @ 0x1402B2C40 (KeSubtractAffinityEx2.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     KeOrAffinityEx2 @ 0x14032DDD0 (KeOrAffinityEx2.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x14039E490 (KeCountSetBitsAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmParkComputeDiff @ 0x1404E5A28 (PpmParkComputeDiff.c)
 *     KeCpuSetQueryUnparkRecommendationEx @ 0x1405BCF7C (KeCpuSetQueryUnparkRecommendationEx.c)
 *     PpmEventLPICoreParking @ 0x1405D6B4C (PpmEventLPICoreParking.c)
 *     PpmEventTraceSoftCoreParkingSelectionEx @ 0x1405DC3F8 (PpmEventTraceSoftCoreParkingSelectionEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkFindOverUtilizedProcessorsEx @ 0x1405E0D74 (PpmParkFindOverUtilizedProcessorsEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char PpmParkCalculateCoreParkingMaskEx()
{
  struct _KAFFINITY_EX *v0; // r12
  struct _KAFFINITY_EX *v1; // r13
  struct _KAFFINITY_EX *v2; // rbx
  struct _KAFFINITY_EX *v3; // r15
  struct _KAFFINITY_EX *v4; // rsi
  struct _KAFFINITY_EX *v5; // r14
  struct _KAFFINITY_EX *v6; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rdi
  unsigned int v9; // eax
  unsigned int v10; // esi
  unsigned __int64 v11; // rax
  unsigned int v12; // r15d
  unsigned __int16 Size; // dx
  unsigned __int16 *v14; // r15
  __int64 Prcb; // rax
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  unsigned int v18; // r14d
  bool v19; // zf
  unsigned int v20; // esi
  __int64 v21; // rax
  unsigned __int16 UnparkRecommendation; // ax
  __int64 v23; // rax
  unsigned int v24; // esi
  __int64 v25; // rax
  unsigned int v26; // eax
  int v27; // r8d
  unsigned int v28; // eax
  unsigned int v29; // esi
  unsigned __int16 v30; // r11
  int v31; // ebx
  unsigned int v32; // r10d
  int v33; // r13d
  unsigned int v34; // r9d
  int v35; // r13d
  unsigned int v36; // eax
  unsigned int v37; // eax
  int v38; // r15d
  char v39; // bl
  int v40; // r15d
  unsigned int v41; // eax
  __int64 v42; // rcx
  int v43; // edx
  int v44; // eax
  char v46; // [rsp+50h] [rbp-59h]
  unsigned int v47; // [rsp+80h] [rbp-29h]
  unsigned int i; // [rsp+84h] [rbp-25h]
  unsigned int v49; // [rsp+88h] [rbp-21h]
  $B38C3B1372D6E954799962D5DD404846 *v50; // [rsp+90h] [rbp-19h]
  __int64 v51; // [rsp+98h] [rbp-11h]
  __int64 *v52; // [rsp+A0h] [rbp-9h]
  __int128 v53; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v54; // [rsp+B8h] [rbp+Fh]
  int v55; // [rsp+110h] [rbp+67h]
  char v56; // [rsp+110h] [rbp+67h]
  __int64 v57; // [rsp+118h] [rbp+6Fh] BYREF
  unsigned int v58; // [rsp+120h] [rbp+77h] BYREF
  int v59; // [rsp+128h] [rbp+7Fh]

  v53 = 0LL;
  v54 = 0LL;
  v58 = 0;
  LODWORD(v57) = 0;
  if ( PpmIsParkingEnabled )
  {
    v0 = PpmParkPerfCheckAffinities;
    v1 = PpmParkPerfCheckAffinities + 1;
    v2 = PpmParkPerfCheckAffinities + 2;
    v3 = PpmParkPerfCheckAffinities + 3;
    v4 = PpmParkPerfCheckAffinities + 4;
    v5 = PpmParkPerfCheckAffinities + 6;
    v6 = PpmParkPerfCheckAffinities + 7;
    memset_0(&PpmParkPerfCheckAffinities->8, 0, 8LL * PpmParkPerfCheckAffinities->Count);
    v0->Count = 1;
    memset_0(&v1->8, 0, 8LL * v1->Count);
    v1->Count = 1;
    v50 = &v2->8;
    memset_0(&v2->8, 0, 8LL * v2->Count);
    v2->Count = 1;
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
    PpmParkSoftParkCurrentRank = 0;
    PpmParkSoftParkRankListChanged = 0;
    v52 = &PpmCurrentProfile[0][61 * dword_140F0B38C];
    v49 = 100 * *((unsigned __int8 *)v52 + 180);
    if ( PpmParkNewSoftParkRankList )
      memset_0(PpmParkNewSoftParkRankList, 255, 4LL * (unsigned int)KeMaximumProcessors);
    v7 = 0;
    for ( i = 0; v7 < PpmParkNumNodes; i = v7 )
    {
      v8 = PpmParkNodes + 1296LL * v7;
      v51 = v8;
      if ( (*(_BYTE *)(v8 + 1184) & 1) == 0 )
      {
        KiCopyAffinityEx((struct _KAFFINITY_EX *)(v8 + 576), *(_WORD *)(v8 + 578), (struct _KAFFINITY_EX *)(v8 + 312));
        v9 = *(unsigned __int16 *)(v8 + 1174);
        *(_WORD *)(v8 + 1252) = 0;
        *(_BYTE *)(v8 + 1254) = 0;
        v10 = *(unsigned __int16 *)(v8 + 1170);
        if ( (unsigned __int16)v10 >= (unsigned __int16)v9 )
          v10 = v9;
        v47 = v10;
        PpmParkFindOverUtilizedProcessorsEx(v8, v49, v3);
        *(_BYTE *)(v8 + 1224) = 0;
        if ( PpmHeteroFavoredCoreRotationTimeoutMs )
        {
          v11 = MEMORY[0xFFFFF78000000008]
              / (10000
               * (unsigned __int64)(unsigned int)PpmHeteroFavoredCoreRotationTimeoutMs);
          *(_QWORD *)(v8 + 1208) = v11;
          if ( v11 != *(_QWORD *)(v8 + 1216) )
          {
            *(_BYTE *)(v8 + 1224) = 1;
            *(_QWORD *)(v8 + 1216) = v11;
          }
        }
        v12 = 0;
        v59 = 0;
        if ( *(_BYTE *)(v8 + 12) )
        {
          do
          {
            Size = v5->Size;
            v14 = (unsigned __int16 *)(*(_QWORD *)(v8 + 1288) + 640LL * v12);
            LODWORD(v57) = 0;
            KiCopyAffinityEx(v5, Size, (struct _KAFFINITY_EX *)(v14 + 20));
            if ( (unsigned int)KeIsEmptyAffinityEx(&v5->Count) )
              break;
            LODWORD(v57) = 0x100000;
            if ( (unsigned __int16)PpmParkGranularity <= 1u )
            {
              KiCopyAffinityEx(v0, v0->Size, (struct _KAFFINITY_EX *)(v14 + 152));
            }
            else
            {
              memset_0(&v0->8, 0, 8LL * v0->Count);
              v0->Count = 1;
              LOWORD(v54) = 0;
              *((_QWORD *)&v53 + 1) = *((_QWORD *)v14 + 39);
              *(_QWORD *)&v53 = v14 + 152;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v53) )
              {
                Prcb = KeGetPrcb(v58);
                KeAddGroupAffinityEx(&v0->Count, *(unsigned __int8 *)(Prcb + 208), *(_QWORD *)(Prcb + 36448));
              }
            }
            KeAndAffinityEx2(v0, v5, (__int64)v0);
            if ( !(unsigned int)KeIsEmptyAffinityEx(&v0->Count) )
              LODWORD(v57) = v57 | 0x10000;
            v16 = v10;
            v17 = *v14 - (unsigned int)KeCountSetBitsAffinityEx(&v0->Count);
            if ( v17 <= v10 )
              v16 = v17;
            v18 = 0;
            memset_0(&v1->8, 0, 8LL * v1->Count);
            v19 = KiClockTimerPerCpu == 0;
            v1->Count = 1;
            if ( v19 )
            {
              v20 = KiClockTimerOwner;
              v58 = KiClockTimerOwner;
              if ( (unsigned int)KeCheckProcessorAffinityEx(&v0[6].Count, KiClockTimerOwner) )
              {
                if ( v16 && !(unsigned int)KeCheckProcessorAffinityEx(&v0->Count, v20) )
                {
                  v21 = KeGetPrcb(v20);
                  if ( (unsigned __int16)PpmParkGranularity <= 1u )
                    KeAddProcessorAffinityEx(&v1->Count, v20);
                  else
                    KeAddGroupAffinityEx(&v1->Count, *(unsigned __int8 *)(v21 + 208), *(_QWORD *)(v21 + 36448));
                  LODWORD(v57) = v57 | 0x100;
                  v18 = KeCountSetBitsAffinityEx(&v1->Count);
                }
              }
            }
            memset_0(&v0[2].8, 0, 8LL * v0[2].Count);
            v0[2].Count = 1;
            UnparkRecommendation = KeCpuSetQueryUnparkRecommendationEx(&v0[6].Count, &v0[2].Count);
            v55 = UnparkRecommendation;
            if ( UnparkRecommendation )
            {
              if ( (unsigned __int16)PpmParkGranularity > 1u )
              {
                LOWORD(v54) = 0;
                *((_QWORD *)&v53 + 1) = v50->Bitmap[0];
                *(_QWORD *)&v53 = v0 + 2;
                if ( !(unsigned int)KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v53) )
                {
                  do
                  {
                    v23 = KeGetPrcb(v58);
                    KeAddGroupAffinityEx(&v0[2].Count, *(unsigned __int8 *)(v23 + 208), *(_QWORD *)(v23 + 36448));
                  }
                  while ( !(unsigned int)KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v53) );
                  v1 = v0 + 1;
                }
                v55 = KeCountSetBitsAffinityEx(&v0[2].Count);
              }
              *((_QWORD *)&v53 + 1) = v0[2].Bitmap[0];
              LOWORD(v54) = 0;
              *(_QWORD *)&v53 = v0 + 2;
              if ( !(unsigned int)KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v53) )
              {
                do
                {
                  if ( v18 < v16 )
                  {
                    v24 = v58;
                    if ( !(unsigned int)KeCheckProcessorAffinityEx(&v0->Count, v58) )
                    {
                      v25 = KeGetPrcb(v24);
                      if ( (unsigned __int16)PpmParkGranularity <= 1u )
                        KeAddProcessorAffinityEx(&v1->Count, v24);
                      else
                        KeAddGroupAffinityEx(&v1->Count, *(unsigned __int8 *)(v25 + 208), *(_QWORD *)(v25 + 36448));
                      LODWORD(v57) = v57 | 0x10;
                      v18 = KeCountSetBitsAffinityEx(&v1->Count);
                    }
                  }
                }
                while ( !(unsigned int)KeEnumerateNextProcessor(&v58, (unsigned __int16 **)&v53) );
                v8 = v51;
              }
            }
            v26 = v14[1];
            if ( v18 >= v26 || v18 >= v16 )
            {
              v27 = v57;
            }
            else
            {
              v18 = v16;
              if ( v26 < v16 )
                v18 = v14[1];
              v27 = v57 | 4;
              LODWORD(v57) = v57 | 4;
            }
            v28 = v14[2];
            v29 = v16;
            if ( v16 > v28 && v18 < v16 )
            {
              v27 |= 8u;
              v29 = v14[2];
              LODWORD(v57) = v27;
              if ( v28 <= v18 )
                v29 = v18;
            }
            v30 = 0;
            v31 = PpmHeteroHgsContainmentState & 8;
            if ( (PpmHeteroHgsContainmentState & 8) != 0 )
              v30 = *(_WORD *)(*(_QWORD *)(v8 + 1280) + 2LL * *(int *)(*(_QWORD *)(v8 + 1280) + 4LL) + 8);
            v32 = v14[3];
            v33 = *v14;
            if ( (unsigned __int16)v32 >= (unsigned __int16)v33 )
              v32 = *v14;
            v34 = v32;
            if ( PpmCheckLatencyBoostActive
              && (v33 * (unsigned int)*((unsigned __int8 *)v52 + (v59 != 0) + 137) + 50) / 0x64 > v32 )
            {
              v27 |= 0x40u;
              v34 = (v33 * (unsigned int)*((unsigned __int8 *)v52 + (v59 != 0) + 137) + 50) / 0x64;
              LODWORD(v57) = v27;
            }
            if ( (unsigned __int16)PpmParkGranularity > 1u )
              v34 = (unsigned __int16)PpmParkGranularity
                  - 1
                  + v34
                  - ((unsigned __int16)PpmParkGranularity - 1 + v34) % (unsigned __int16)PpmParkGranularity;
            if ( (PpmHeteroHgsContainmentState & 8) != 0 && v30 && v30 < (unsigned __int16)v34 )
            {
              v34 = v30;
              LODWORD(v57) = v27 | 0x400000;
            }
            v35 = v18;
            v36 = v34 + v55;
            v14[4] = v34;
            if ( v34 + v55 >= v29 )
              v36 = v29;
            if ( v36 > v18 )
              v35 = v36;
            v47 -= v29;
            v19 = PpmParkSoftParkingEnabled == 0;
            v14[5] = v35;
            if ( v19 )
            {
              LODWORD(v57) = v57 | 0x200000;
              v29 = v35;
            }
            else if ( v31 )
            {
              LODWORD(v57) = v57 | 0x800000;
              v37 = v30;
              if ( v29 < v30 )
                v37 = v29;
              v29 = v37;
            }
            v38 = 0;
            v39 = 0;
            v56 = 0;
            if ( PpmHeteroHgsParkingEnabled )
            {
              v38 = *(unsigned __int16 *)(v8 + 1264);
              v39 = *(_BYTE *)(v8 + 1271);
              v56 = *(_BYTE *)(v8 + 1270);
            }
            KeAndAffinityEx2(v0 + 6, v0 + 3, (__int64)&v0[4]);
            PpmParkComputeUnparkMaskEx(
              v8,
              (_DWORD)v0 + 1584,
              v8 + 576,
              (_DWORD)v0 + 1056,
              v35,
              v29,
              (__int64)v0,
              (__int64)&v0[1],
              v0 + 5,
              (__int64)&v0[7],
              (__int64)&v57,
              v8 + 1208,
              v38,
              v56,
              v39,
              v59);
            KeSubtractAffinityEx2(v0 + 6, v0 + 5, v0 + 8);
            KeSubtractAffinityEx2(v0 + 8, v0 + 7, v0 + 8);
            KeSubtractAffinityEx2((struct _KAFFINITY_EX *)(v8 + 312), v0 + 6, (struct _KAFFINITY_EX *)(v8 + 312));
            KeOrAffinityEx2((struct _KAFFINITY_EX *)(v8 + 312), v0 + 5, (struct _KAFFINITY_EX *)(v8 + 312));
            KeOrAffinityEx2((struct _KAFFINITY_EX *)(v8 + 312), v0 + 7, (struct _KAFFINITY_EX *)(v8 + 312));
            KeSubtractAffinityEx2((struct _KAFFINITY_EX *)(v8 + 840), v0 + 6, (struct _KAFFINITY_EX *)(v8 + 840));
            KeOrAffinityEx2((struct _KAFFINITY_EX *)(v8 + 840), v0 + 7, (struct _KAFFINITY_EX *)(v8 + 840));
            v46 = v38;
            v40 = v59;
            PpmEventTraceSoftCoreParkingSelectionEx(
              v8,
              v59,
              v35,
              v29,
              v18,
              v0,
              &v0[1].Count,
              &v0[4].Count,
              &v0[2].Count,
              v57,
              v46);
            v41 = *(unsigned __int8 *)(v8 + 12);
            v1 = v0 + 1;
            v12 = v40 + 1;
            v59 = v12;
            v10 = v47;
            v5 = v0 + 6;
          }
          while ( v12 < v41 );
          v7 = i;
        }
        v3 = v0 + 3;
      }
      ++v7;
    }
    PpmParkComputeDiff();
    v43 = PpmParkLpiCap != 0;
    if ( PpmParkLpiEngaged != v43 || (v44 = 0, PpmParkLpiCapChanged) )
      v44 = 1;
    PpmParkLpiEngaged = PpmParkLpiCap != 0;
    PpmParkLpiCapChanged = 0;
    if ( v44 )
      PpmEventLPICoreParking(v42, v43);
  }
  return 1;
}
