/*
 * XREFs of PpmParkComputeUnparkMaskEx @ 0x1405DFACC
 * Callers:
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeSubtractAffinityEx2 @ 0x1402B2C40 (KeSubtractAffinityEx2.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14032ADF0 (KeFindFirstSetRightAffinityEx.c)
 *     ?KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14032C760 (-KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     KeOrAffinityEx2 @ 0x14032DDD0 (KeOrAffinityEx2.c)
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14032DF20 (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x14039E490 (KeCountSetBitsAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403A4D10 (KeRemoveProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmEventHeteroFavoredCoreRotationChange @ 0x1404696E0 (PpmEventHeteroFavoredCoreRotationChange.c)
 *     KeGetTopologySiblingAffinityForProcessor @ 0x1404DE1EC (KeGetTopologySiblingAffinityForProcessor.c)
 *     PpmEventParkNodePreferenceEx @ 0x1405DAF00 (PpmEventParkNodePreferenceEx.c)
 *     PpmEventTraceCoreParkingSelectionEx @ 0x1405DB6A0 (PpmEventTraceCoreParkingSelectionEx.c)
 *     PpmHeteroRestrictToFavoredClassEx @ 0x1405DE400 (PpmHeteroRestrictToFavoredClassEx.c)
 *     PpmParkBuildTopologyCandidatesEx @ 0x1405DF150 (PpmParkBuildTopologyCandidatesEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall PpmParkComputeUnparkMaskEx(
        __int64 a1,
        struct _KAFFINITY_EX *a2,
        struct _KAFFINITY_EX *a3,
        struct _KAFFINITY_EX *a4,
        unsigned int a5,
        unsigned int a6,
        struct _KAFFINITY_EX *a7,
        struct _KAFFINITY_EX *a8,
        struct _KAFFINITY_EX *a9,
        struct _KAFFINITY_EX *a10,
        _DWORD *a11,
        __int64 a12,
        int a13,
        char a14,
        char a15,
        int a16)
{
  struct _KAFFINITY_EX *v17; // r13
  _DWORD *v19; // r15
  __int64 *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  struct _KAFFINITY_EX *v23; // rbx
  struct _KAFFINITY_EX *v24; // r12
  size_t v25; // r8
  size_t v26; // r8
  size_t v27; // r8
  size_t v28; // r8
  char v29; // al
  struct _KAFFINITY_EX *v30; // rsi
  struct _KAFFINITY_EX *v31; // rdi
  struct _KAFFINITY_EX *v32; // r14
  struct _KAFFINITY_EX *v33; // rsi
  struct _KAFFINITY_EX *v34; // rdi
  unsigned int v35; // eax
  char v36; // bl
  int v37; // eax
  struct _KAFFINITY_EX *v38; // rbx
  $B38C3B1372D6E954799962D5DD404846 *v39; // rcx
  struct _KAFFINITY_EX *v40; // r14
  void *v41; // rcx
  struct _KAFFINITY_EX *v42; // rsi
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // rax
  unsigned int FirstSetRightAffinity; // eax
  __int64 Prcb; // rsi
  struct _KAFFINITY_EX *v47; // rax
  bool v48; // zf
  __int64 v49; // r8
  struct _KAFFINITY_EX *v50; // r15
  _DWORD *v51; // r12
  __int64 v52; // rdx
  int v53; // eax
  unsigned int v54; // r15d
  __int64 v55; // r12
  __int64 v56; // r13
  __int16 v57; // ax
  int v58; // eax
  __int64 v59; // rcx
  __int64 v60; // rax
  int v61; // eax
  struct _KAFFINITY_EX *v62; // rdx
  struct _KAFFINITY_EX *v63; // rdx
  unsigned __int8 v64; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 v65; // [rsp+81h] [rbp-7Fh]
  char v66; // [rsp+82h] [rbp-7Eh]
  char v67; // [rsp+83h] [rbp-7Dh]
  char v68; // [rsp+84h] [rbp-7Ch]
  unsigned int v69; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v70; // [rsp+8Ch] [rbp-74h] BYREF
  int v71; // [rsp+90h] [rbp-70h]
  struct _KAFFINITY_EX *v72; // [rsp+98h] [rbp-68h]
  struct _KAFFINITY_EX *v73; // [rsp+A0h] [rbp-60h]
  struct _KAFFINITY_EX *v74; // [rsp+A8h] [rbp-58h]
  struct _KAFFINITY_EX *v75; // [rsp+B0h] [rbp-50h]
  struct _KAFFINITY_EX *v76; // [rsp+B8h] [rbp-48h]
  struct _KAFFINITY_EX *v77; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v78; // [rsp+C8h] [rbp-38h]
  __int16 v79; // [rsp+D0h] [rbp-30h]
  int v80; // [rsp+D2h] [rbp-2Eh]
  __int16 v81; // [rsp+D6h] [rbp-2Ah]
  struct _KAFFINITY_EX *v82; // [rsp+D8h] [rbp-28h]
  __int64 v83; // [rsp+E0h] [rbp-20h]
  struct _KAFFINITY_EX *v84; // [rsp+E8h] [rbp-18h]
  struct _KAFFINITY_EX *v85; // [rsp+F0h] [rbp-10h]
  struct _KAFFINITY_EX *v86; // [rsp+F8h] [rbp-8h]
  int v87; // [rsp+100h] [rbp+0h]
  struct _KAFFINITY_EX *v88; // [rsp+108h] [rbp+8h]
  struct _KAFFINITY_EX *v89; // [rsp+110h] [rbp+10h]
  struct _KAFFINITY_EX *v90; // [rsp+118h] [rbp+18h]
  void *v91; // [rsp+120h] [rbp+20h]
  __int64 v92; // [rsp+128h] [rbp+28h]
  _DWORD *v93; // [rsp+130h] [rbp+30h]
  struct _KAFFINITY_EX *v94; // [rsp+138h] [rbp+38h]
  struct _KAFFINITY_EX *v95; // [rsp+140h] [rbp+40h]
  void *v96; // [rsp+148h] [rbp+48h]
  void *v97; // [rsp+150h] [rbp+50h]
  struct _KAFFINITY_EX *v98; // [rsp+158h] [rbp+58h]
  struct _KAFFINITY_EX *v99; // [rsp+160h] [rbp+60h]
  struct _KAFFINITY_EX *v100; // [rsp+168h] [rbp+68h]
  _DWORD *v101; // [rsp+170h] [rbp+70h]
  struct _KAFFINITY_EX *v102; // [rsp+178h] [rbp+78h]
  struct _KAFFINITY_EX *v103; // [rsp+180h] [rbp+80h]
  struct _KAFFINITY_EX v104; // [rsp+190h] [rbp+90h] BYREF

  v17 = a9;
  v19 = a11;
  v73 = a7;
  v76 = a8;
  v82 = a2;
  v83 = a1;
  v90 = a10;
  v86 = a4;
  v85 = a9;
  v93 = a11;
  memset_0(&v104.8, 0, sizeof(v104.8));
  v20 = PpmCurrentProfile[0];
  v21 = 61LL * dword_140F0B38C;
  v80 = 0;
  v81 = 0;
  v69 = 0;
  v70 = 0;
  v67 = PpmCurrentProfile[0][v21 + 62];
  v66 = BYTE1(PpmCurrentProfile[0][v21 + 62]);
  v87 = *(unsigned __int16 *)(a1 + 1252);
  v22 = *(_QWORD *)(a1 + 1256);
  v23 = PpmParkPerfCheckAffinities;
  v92 = v22;
  *(_QWORD *)&v104.Count = 2097153LL;
  v95 = PpmParkPerfCheckAffinities + 9;
  v24 = PpmParkPerfCheckAffinities + 11;
  v94 = PpmParkPerfCheckAffinities + 11;
  v89 = PpmParkPerfCheckAffinities + 10;
  v74 = PpmParkPerfCheckAffinities + 12;
  v88 = PpmParkPerfCheckAffinities + 15;
  v100 = PpmParkPerfCheckAffinities + 16;
  v75 = PpmParkPerfCheckAffinities + 18;
  v102 = PpmParkPerfCheckAffinities + 19;
  v103 = PpmParkPerfCheckAffinities + 20;
  v72 = PpmParkPerfCheckAffinities + 21;
  v84 = PpmParkPerfCheckAffinities + 22;
  v98 = PpmParkPerfCheckAffinities + 23;
  memset_0(&v104.8, 0, sizeof(v104.8));
  memset_0(&v23[9].8, 0, 8LL * v23[9].Count);
  v23[9].Count = 1;
  memset_0(&v23[10].8, 0, 8LL * v23[10].Count);
  v23[10].Count = 1;
  memset_0(&v24->8, 0, 8LL * v24->Count);
  v24->Count = 1;
  v25 = 8LL * v23[12].Count;
  v96 = &v23[12].8;
  memset_0(&v23[12].8, 0, v25);
  v23[12].Count = 1;
  memset_0(&v23[14].8, 0, 8LL * v23[14].Count);
  v23[14].Count = 1;
  memset_0(&v23[15].8, 0, 8LL * v23[15].Count);
  v23[15].Count = 1;
  memset_0(&v23[16].8, 0, 8LL * v23[16].Count);
  v23[16].Count = 1;
  v26 = 8LL * v23[18].Count;
  v97 = &v23[18].8;
  memset_0(&v23[18].8, 0, v26);
  v23[18].Count = 1;
  memset_0(&v23[19].8, 0, 8LL * v23[19].Count);
  v23[19].Count = 1;
  memset_0(&v23[20].8, 0, 8LL * v23[20].Count);
  v23[20].Count = 1;
  v27 = 8LL * v23[21].Count;
  v91 = &v23[21].8;
  memset_0(&v23[21].8, 0, v27);
  v23[21].Count = 1;
  memset_0(&v23[22].8, 0, 8LL * v23[22].Count);
  v23[22].Count = 1;
  memset_0(&v23[23].8, 0, 8LL * v23[23].Count);
  v23[23].Count = 1;
  v28 = 8LL * v23[13].Count;
  v99 = v23 + 13;
  memset_0(&v23[13].8, 0, v28);
  v23[13].Count = 1;
  v29 = BYTE2(v20[v21 + 62]);
  v30 = v82;
  v68 = v29;
  KeAndAffinityEx2(a3, v82, (__int64)&v23[15]);
  memset_0(&v17->8, 0, 8LL * v17->Count);
  v31 = v90;
  a9->Count = 1;
  memset_0(&v31->8, 0, 8LL * v31->Count);
  v31->Count = 1;
  if ( a6 && a5 )
  {
    if ( PpmParkPreferenceHandler )
    {
      guard_dispatch_icall_no_overrides(0LL, PpmCheckTime);
      PpmEventParkNodePreferenceEx(v30, a5, v73, v76, &v23[20].Count, &v23[23].Count);
      memset_0(&v104.8, 0, 8LL * v104.Count);
      v104.Count = 1;
      KiOrAffinityEx(v73, v76, &v104, v104.Size);
      v32 = v23 + 20;
      KeSubtractAffinityEx2(v23 + 20, &v104, v23 + 20);
      KeSubtractAffinityEx2(v23 + 23, &v104, v23 + 23);
    }
    else
    {
      v32 = v23 + 20;
    }
    v33 = v23 + 19;
    KeSubtractAffinityEx2(v82, v73, v23 + 19);
    KeSubtractAffinityEx2(v23 + 19, v76, v23 + 19);
    KeSubtractAffinityEx2(v23 + 19, v32, v23 + 19);
    KeSubtractAffinityEx2(v23 + 19, v23 + 23, v23 + 19);
    KiCopyAffinityEx(a9, a9->Size, v82);
    v34 = v23 + 14;
    v35 = KeAndAffinityEx2(a9, v76, (__int64)&v23[14]);
    v36 = 0;
    if ( v35 )
    {
      *a11 |= 0x200u;
      v36 = 0;
    }
    else
    {
      if ( KeAndAffinityEx2(a9, v98, (__int64)v34) )
      {
        v37 = 1024;
      }
      else if ( (PpmHeteroHgsContainmentState & 8) != 0 )
      {
        v38 = v99;
        v39 = &v99->8;
        *(_QWORD *)&v99->Count = 2097153LL;
        memset_0(v39, 0, sizeof($B38C3B1372D6E954799962D5DD404846));
        KiCopyAffinityEx(
          v38,
          v38->Size,
          (struct _KAFFINITY_EX *)(264LL * *(int *)(*(_QWORD *)(v83 + 1280) + 4LL) + *(_QWORD *)(v83 + 1280) + 16LL));
        if ( !KeAndAffinityEx2(a9, v38, (__int64)v34) )
        {
          v36 = v70;
          goto LABEL_19;
        }
        v37 = 0x400000;
      }
      else if ( KeAndAffinityEx2(a9, v33, (__int64)v34) )
      {
        v37 = 2048;
      }
      else
      {
        if ( !KeAndAffinityEx2(a9, v32, (__int64)v34) )
          goto LABEL_19;
        v37 = 0x80000;
      }
      *a11 |= v37;
      v36 = v37;
    }
LABEL_19:
    v40 = v84;
    KiCopyAffinityEx(v84, v84->Size, v34);
    memset_0(v96, 0, 8LL * v74->Count);
    v41 = v97;
    v74->Count = 1;
    memset_0(v41, 0, 8LL * v75->Count);
    v75->Count = 1;
    KiCopyAffinityEx(v24, v24->Size, v40);
    KeAndAffinityEx2(v88, v86, (__int64)v95);
    KeSubtractAffinityEx2(v82, v88, v89);
    KeAndAffinityEx2(v89, v86, (__int64)v89);
    v65 = -1;
    v64 = -1;
    v71 = 0;
    v70 = 0;
    while ( 1 )
    {
      if ( (unsigned int)KeIsEmptyAffinityEx(&v24->Count) )
        return;
      v42 = v100;
      KeAndAffinityEx2(v24, v95, (__int64)v100);
      if ( !(unsigned int)KeIsEmptyAffinityEx(&v42->Count) )
      {
        *v19 |= 0x20000u;
        KiCopyAffinityEx(v24, v24->Size, v42);
      }
      if ( ((PopHeteroSystem - 3) & 0xFFFFFFFC) == 0 && PopHeteroSystem != 4 )
      {
        *v19 |= 0x8000u;
        PpmHeteroRestrictToFavoredClassEx(v24, &v64, a14, a15, a13, v71, a16);
        if ( v64 != v65 )
        {
          v65 = v64;
          LODWORD(v73) = KeCountSetBitsAffinityEx(&v24->Count);
          v43 = *(_QWORD *)a12 % (unsigned __int64)(unsigned int)v73;
          v78 = v24->Bitmap[0];
          v79 = 0;
          v77 = v24;
          if ( !(unsigned int)KeEnumerateNextProcessor(&v70, (unsigned __int16 **)&v77) )
          {
            do
            {
              if ( !v43 )
                break;
              --v43;
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&v70, (unsigned __int16 **)&v77) );
            v17 = v85;
          }
          PpmEventHeteroFavoredCoreRotationChange((int)v73, v70);
          v42 = v100;
        }
      }
      KeAndAffinityEx2(v24, v89, (__int64)v42);
      if ( !(unsigned int)KeIsEmptyAffinityEx(&v42->Count) )
      {
        *v19 |= 0x1000u;
        KiCopyAffinityEx(v24, v24->Size, v42);
      }
      if ( !*(_BYTE *)(a12 + 16) )
      {
        KeSubtractAffinityEx2(v24, v88, v42);
        if ( !(unsigned int)KeIsEmptyAffinityEx(&v42->Count) )
        {
          *v19 |= 0x2000u;
          KiCopyAffinityEx(v24, v24->Size, v42);
        }
      }
      v44 = v24->Bitmap[0];
      v79 = 0;
      v78 = v44;
      v77 = v24;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v69, (unsigned __int16 **)&v77) )
      {
        FirstSetRightAffinity = v69;
        if ( v69 >= v70 )
        {
          if ( v69 != -1 )
            goto LABEL_42;
          break;
        }
      }
      FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(&v24->Count);
LABEL_42:
      Prcb = KeGetPrcb(FirstSetRightAffinity);
      v84 = (struct _KAFFINITY_EX *)Prcb;
      memset_0(v91, 0, 8LL * v72->Count);
      v47 = v72;
      v48 = PpmParkCoreMask == 0;
      v72->Count = 1;
      if ( v48 )
        v49 = *(_QWORD *)(Prcb + 200);
      else
        v49 = *(_QWORD *)(Prcb + 36448);
      KeAddGroupAffinityEx(&v47->Count, *(unsigned __int8 *)(Prcb + 208), v49);
      KeSubtractAffinityEx2(v17, v72, v17);
      if ( v71 < a5 )
      {
        if ( v92 && *(_DWORD *)(v83 + 1232) == 3 )
        {
          v79 = 0;
          LODWORD(v73) = v87 - v71 + a5 - 1;
          v78 = *(_QWORD *)v91;
          v77 = v72;
          if ( !(unsigned int)KeEnumerateNextProcessor(&v69, (unsigned __int16 **)&v77) )
          {
            v54 = (unsigned int)v73;
            v55 = v83;
            v56 = v92;
            do
            {
              if ( v54 < *(unsigned __int16 *)(v55 + 10) && *(_DWORD *)(v56 + 4LL * v54) != v69 )
              {
                *(_DWORD *)(v56 + 4LL * v54) = v69;
                *(_BYTE *)(v55 + 1254) = 1;
              }
              --v54;
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&v69, (unsigned __int16 **)&v77) );
            v19 = v93;
            v24 = v94;
            v17 = v85;
          }
          v57 = KeCountSetBitsAffinityEx(&v72->Count);
          *(_WORD *)(v83 + 1252) += v57;
        }
      }
      else
      {
        KeOrAffinityEx2(v90, v72, v90);
        KiCopyAffinityEx(&v104, v104.Size, v72);
        v101 = PpmParkNewSoftParkRankList;
        if ( PpmParkNewSoftParkRankList )
        {
          v73 = (struct _KAFFINITY_EX *)PpmParkOldSoftParkRankList;
          if ( PpmParkOldSoftParkRankList )
          {
            if ( !(unsigned int)KeIsEmptyAffinityEx(&v104.Count) )
            {
              v50 = v73;
              v51 = v101;
              do
              {
                v52 = (unsigned int)KeFindFirstSetRightAffinityEx(&v104.Count);
                v53 = PpmParkSoftParkCurrentRank;
                v69 = v52;
                v51[v52] = PpmParkSoftParkCurrentRank;
                if ( v53 != *((_DWORD *)&v50->Count + v52) )
                  PpmParkSoftParkRankListChanged = 1;
                PpmParkSoftParkCurrentRank = v53 + 1;
                KeRemoveProcessorAffinityEx(&v104.Count, v52);
              }
              while ( !(unsigned int)KeIsEmptyAffinityEx(&v104.Count) );
              v19 = v93;
              v24 = v94;
              v17 = v85;
              Prcb = (__int64)v84;
            }
          }
        }
      }
      v58 = KeCountSetBitsAffinityEx(&v72->Count);
      v71 += v58;
      PpmEventTraceCoreParkingSelectionEx(
        v82,
        a5,
        a6,
        v71,
        a13,
        v36,
        v24,
        v17,
        v72,
        v74,
        v75,
        (__int64)v40,
        v34,
        v86,
        v82);
      v36 = 0;
      memset_0(&v24->8, 0, 8LL * v24->Count);
      v24->Count = 1;
      KeSubtractAffinityEx2(v40, (struct _KAFFINITY_EX *)(Prcb + 35856), v40);
      KeGetTopologySiblingAffinityForProcessor(Prcb, 5, &v104);
      if ( v66 )
      {
        if ( v66 == 1 )
        {
          KiComplementAffinityEx(&v104, v104.Size, &v104);
          goto LABEL_69;
        }
        if ( v66 == 2 )
        {
          KiSubtractAffinityEx(&v104, v72, &v104, v104.Size);
LABEL_69:
          PpmParkBuildTopologyCandidatesEx(v74, &v104, v17);
          goto LABEL_71;
        }
      }
      memset_0(v96, 0, 8LL * v74->Count);
      v74->Count = 1;
LABEL_71:
      KeGetTopologySiblingAffinityForProcessor(Prcb, 2, &v104);
      switch ( v67 )
      {
        case 0:
          goto LABEL_77;
        case 1:
          KiComplementAffinityEx(&v104, v104.Size, &v104);
          break;
        case 2:
          KiSubtractAffinityEx(&v104, v72, &v104, v104.Size);
          break;
        default:
LABEL_77:
          memset_0(v97, 0, 8LL * v75->Count);
          v75->Count = 1;
          goto LABEL_78;
      }
      PpmParkBuildTopologyCandidatesEx(v75, &v104, v17);
LABEL_78:
      if ( v68 && v68 == 3 )
      {
        if ( (unsigned int)v34->Count <= *(unsigned __int8 *)(Prcb + 208) )
          goto LABEL_85;
        v59 = *(unsigned __int8 *)(Prcb + 208);
        v60 = *(_QWORD *)(Prcb + 200);
      }
      else
      {
        if ( (unsigned int)v34->Count <= *(unsigned __int8 *)(Prcb + 208) )
          goto LABEL_85;
        v59 = *(unsigned __int8 *)(Prcb + 208);
        v60 = *(_QWORD *)(Prcb + 36448);
      }
      v34->Bitmap[v59] &= ~v60;
LABEL_85:
      if ( (unsigned int)KeIsEmptyAffinityEx(&v24->Count) )
      {
        if ( (unsigned int)KeIsEmptyAffinityEx(&v40->Count) )
        {
          if ( !(unsigned int)KeIsEmptyAffinityEx(&v34->Count) )
            goto LABEL_100;
          if ( KeAndAffinityEx2(v17, v76, (__int64)v34) )
          {
            v61 = 512;
            goto LABEL_99;
          }
          if ( KeAndAffinityEx2(v17, v98, (__int64)v34) )
          {
            v61 = 1024;
            goto LABEL_99;
          }
          if ( (PpmHeteroHgsContainmentState & 8) != 0 )
          {
            if ( KeAndAffinityEx2(v17, v99, (__int64)v34) )
            {
              v61 = 0x400000;
              goto LABEL_99;
            }
          }
          else
          {
            if ( KeAndAffinityEx2(v17, v102, (__int64)v34) )
            {
              v61 = 2048;
            }
            else
            {
              if ( !KeAndAffinityEx2(v17, v103, (__int64)v34) )
                goto LABEL_100;
              v61 = 0x80000;
            }
LABEL_99:
            *v19 |= v61;
            v36 = v61;
          }
LABEL_100:
          KiCopyAffinityEx(v40, v40->Size, v34);
          if ( (unsigned int)KiAndAffinityExNoResult(v40, v74) )
            KeAndAffinityEx2(v40, v62, (__int64)v40);
          if ( (unsigned int)KiAndAffinityExNoResult(v40, v75) )
            KeAndAffinityEx2(v40, v63, (__int64)v40);
        }
        KiCopyAffinityEx(v24, v24->Size, v40);
      }
      if ( v71 >= a6 )
        return;
    }
  }
  KiCopyAffinityEx(a9, a9->Size, v30);
}
