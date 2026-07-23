/*
 * XREFs of PpmParkComputeUnparkMask @ 0x140328B7C
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1404E5250 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     EtwWriteEx @ 0x140289C90 (EtwWriteEx.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x1402AF330 (PpmHeteroRestrictToFavoredClass.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     KeGetTopologySiblingGroupAffinityForProcessor @ 0x14032A8E4 (KeGetTopologySiblingGroupAffinityForProcessor.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14032ADF0 (KeFindFirstSetRightAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     PpmEventHeteroFavoredCoreRotationChange @ 0x1404696E0 (PpmEventHeteroFavoredCoreRotationChange.c)
 *     PpmEventParkNodePreference @ 0x1405D6CF8 (PpmEventParkNodePreference.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall PpmParkComputeUnparkMask(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        _QWORD *a10,
        _DWORD *a11,
        __int64 a12,
        unsigned int a13,
        unsigned __int8 a14,
        unsigned __int8 a15,
        int a16)
{
  _DWORD *v18; // rdi
  int v19; // r15d
  __int64 v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 *v26; // rsi
  __int64 v27; // r13
  unsigned __int64 v28; // rbx
  __int64 v29; // r10
  unsigned __int16 v30; // cx
  __int64 v31; // rdx
  __int64 v32; // r14
  unsigned __int64 v33; // r12
  unsigned int v34; // r8d
  char v35; // r9
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  __int64 Prcb; // rax
  unsigned __int64 v41; // r14
  unsigned int v42; // ecx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // r13
  __int64 v47; // rdi
  unsigned __int16 v48; // si
  unsigned int FirstSetRightAffinity; // eax
  int v50; // edx
  unsigned int v51; // r8d
  unsigned __int16 i; // cx
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  int v56; // eax
  int v57; // ecx
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // r14
  __int64 v62; // rsi
  __int64 v63; // r12
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  int v66; // r9d
  unsigned __int64 v67; // r8
  unsigned int v68; // r10d
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rdx
  unsigned __int16 v73; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v74; // [rsp+52h] [rbp-AEh] BYREF
  unsigned __int8 v75; // [rsp+53h] [rbp-ADh]
  char v76; // [rsp+54h] [rbp-ACh]
  char v77; // [rsp+55h] [rbp-ABh]
  char v78; // [rsp+56h] [rbp-AAh]
  unsigned int v79; // [rsp+58h] [rbp-A8h]
  int v80; // [rsp+5Ch] [rbp-A4h]
  unsigned int v81; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v82; // [rsp+68h] [rbp-98h]
  unsigned __int64 v83; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v84; // [rsp+78h] [rbp-88h]
  unsigned __int64 v85; // [rsp+80h] [rbp-80h]
  __int64 v86; // [rsp+88h] [rbp-78h]
  __int64 v87; // [rsp+90h] [rbp-70h]
  int v88; // [rsp+98h] [rbp-68h]
  int v89; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v90; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v91; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v92; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v93; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v94; // [rsp+C8h] [rbp-38h]
  __int64 v95; // [rsp+D0h] [rbp-30h]
  __int64 v96; // [rsp+D8h] [rbp-28h]
  __int64 v97; // [rsp+E0h] [rbp-20h]
  __int64 v98; // [rsp+E8h] [rbp-18h]
  __int64 v99; // [rsp+F0h] [rbp-10h]
  __int64 v100; // [rsp+F8h] [rbp-8h]
  __int64 v101; // [rsp+100h] [rbp+0h]
  __int64 v102; // [rsp+108h] [rbp+8h]
  __int128 v103; // [rsp+110h] [rbp+10h] BYREF
  __int64 v104; // [rsp+120h] [rbp+20h]
  _QWORD *v105; // [rsp+128h] [rbp+28h]
  _DWORD *v106; // [rsp+130h] [rbp+30h]
  __int64 v107; // [rsp+138h] [rbp+38h]
  unsigned __int64 v108; // [rsp+140h] [rbp+40h] BYREF
  __int64 v109; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v110; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v111; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v112; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v113; // [rsp+168h] [rbp+68h] BYREF
  unsigned __int64 v114; // [rsp+170h] [rbp+70h] BYREF
  __int64 v115; // [rsp+178h] [rbp+78h] BYREF
  __int128 v116; // [rsp+180h] [rbp+80h] BYREF
  __int64 v117; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v118[33]; // [rsp+198h] [rbp+98h] BYREF
  struct _KAFFINITY_EX v119; // [rsp+2A0h] [rbp+1A0h] BYREF
  _DWORD v120[2]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _QWORD v121[33]; // [rsp+3B8h] [rbp+2B8h] BYREF
  _DWORD v122[2]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _QWORD v123[33]; // [rsp+4C8h] [rbp+3C8h] BYREF
  _DWORD v124[2]; // [rsp+5D0h] [rbp+4D0h] BYREF
  char v125[264]; // [rsp+5D8h] [rbp+4D8h] BYREF
  _DWORD v126[2]; // [rsp+6E0h] [rbp+5E0h] BYREF
  char v127[264]; // [rsp+6E8h] [rbp+5E8h] BYREF
  __int64 v128; // [rsp+7F0h] [rbp+6F0h] BYREF
  char v129[264]; // [rsp+7F8h] [rbp+6F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+900h] [rbp+800h] BYREF
  int *v131; // [rsp+910h] [rbp+810h]
  __int64 v132; // [rsp+918h] [rbp+818h]
  unsigned int *v133; // [rsp+920h] [rbp+820h]
  __int64 v134; // [rsp+928h] [rbp+828h]
  unsigned int *v135; // [rsp+930h] [rbp+830h]
  __int64 v136; // [rsp+938h] [rbp+838h]
  unsigned int *v137; // [rsp+940h] [rbp+840h]
  __int64 v138; // [rsp+948h] [rbp+848h]
  unsigned __int64 *v139; // [rsp+950h] [rbp+850h]
  __int64 v140; // [rsp+958h] [rbp+858h]
  unsigned __int64 *v141; // [rsp+960h] [rbp+860h]
  __int64 v142; // [rsp+968h] [rbp+868h]
  __int64 *v143; // [rsp+970h] [rbp+870h]
  __int64 v144; // [rsp+978h] [rbp+878h]
  unsigned __int64 *v145; // [rsp+980h] [rbp+880h]
  __int64 v146; // [rsp+988h] [rbp+888h]
  __int64 *v147; // [rsp+990h] [rbp+890h]
  __int64 v148; // [rsp+998h] [rbp+898h]
  __int64 *v149; // [rsp+9A0h] [rbp+8A0h]
  __int64 v150; // [rsp+9A8h] [rbp+8A8h]
  unsigned __int64 *v151; // [rsp+9B0h] [rbp+8B0h]
  __int64 v152; // [rsp+9B8h] [rbp+8B8h]
  unsigned __int64 *v153; // [rsp+9C0h] [rbp+8C0h]
  __int64 v154; // [rsp+9C8h] [rbp+8C8h]
  __int64 *v155; // [rsp+9D0h] [rbp+8D0h]
  __int64 v156; // [rsp+9D8h] [rbp+8D8h]

  v18 = a11;
  v86 = a3;
  v87 = a1;
  v98 = a4;
  v94 = a9;
  v105 = a10;
  v106 = a11;
  v103 = 0LL;
  v104 = 0LL;
  memset_0(v126, 0, 0x108uLL);
  memset_0(v124, 0, 0x108uLL);
  v116 = 0LL;
  memset_0(v120, 0, 0x108uLL);
  memset_0(&v117, 0, 0x108uLL);
  memset_0(&v128, 0, 0x108uLL);
  v81 = 0;
  memset_0(v122, 0, 0x108uLL);
  memset_0(&v119, 0, sizeof(v119));
  v19 = 0;
  v20 = *(unsigned __int16 *)(a1 + 4);
  v21 = 61LL * dword_140F0B38C;
  v73 = *(_WORD *)(a1 + 4);
  v77 = PpmCurrentProfile[0][v21 + 62];
  v76 = BYTE1(PpmCurrentProfile[0][v21 + 62]);
  v88 = *(unsigned __int16 *)(a1 + 1252);
  v97 = *(_QWORD *)(a1 + 1256);
  LOBYTE(v22) = BYTE2(PpmCurrentProfile[0][v21 + 62]);
  *a9 = 0LL;
  v78 = v22;
  *a10 = 0LL;
  if ( a6 && a5 )
  {
    if ( PpmParkPreferenceHandler )
    {
      v128 = 2097153LL;
      memset_0(v129, 0, 0x100uLL);
      v126[1] = 0;
      v126[0] = 2097153;
      memset_0(v127, 0, 0x100uLL);
      v124[1] = 0;
      v124[0] = 2097153;
      memset_0(v125, 0, 0x100uLL);
      v120[1] = 0;
      v120[0] = 2097153;
      memset_0(v121, 0, 0x100uLL);
      v122[1] = 0;
      v122[0] = 2097153;
      memset_0(v123, 0, 0x100uLL);
      KeAddGroupAffinityEx((unsigned __int16 *)&v128, v20, a2);
      KeAddGroupAffinityEx((unsigned __int16 *)v126, v20, a7);
      KeAddGroupAffinityEx((unsigned __int16 *)v124, v20, a8);
      guard_dispatch_icall_no_overrides(0LL, PpmCheckTime);
      if ( (unsigned __int16)v20 >= LOWORD(v120[0]) )
        v62 = 0LL;
      else
        v62 = v121[v20];
      if ( (unsigned __int16)v20 >= LOWORD(v122[0]) )
        v63 = 0LL;
      else
        v63 = v123[v20];
      PpmEventParkNodePreference((unsigned __int16)v20, a2, a5, a7, a8, v62, v63);
      v64 = ~(a8 | a7);
      v23 = v64 & v62;
      v24 = v64 & v63;
      v96 = v23;
    }
    else
    {
      v23 = 0LL;
      v96 = 0LL;
      v24 = 0LL;
    }
    v25 = v23 | v24;
    v99 = v24;
    v26 = v94;
    v27 = a2 & ~(a8 | a7 | v25);
    v107 = v27;
    *v94 = a2;
    if ( (a2 & a8) != 0 )
    {
      *a11 |= 0x200u;
      v19 = 512;
      v28 = a8 & *v26;
    }
    else if ( (v24 & a2) != 0 )
    {
      *a11 |= 0x400u;
      v19 = 1024;
      v28 = v24 & *v26;
    }
    else if ( (PpmHeteroHgsContainmentState & 8) != 0 )
    {
      *(_QWORD *)&v119.Count = 2097153LL;
      memset_0(&v119.8, 0, sizeof(v119.8));
      KiCopyAffinityEx(
        &v119,
        v119.Size,
        (struct _KAFFINITY_EX *)(264LL * *(int *)(*(_QWORD *)(v87 + 1280) + 4LL) + *(_QWORD *)(v87 + 1280) + 16LL));
      v28 = 0LL;
      if ( (v119.Bitmap[v73] & a2) != 0 )
      {
        v28 = v119.Bitmap[v73] & a2;
        *a11 |= 0x400000u;
        v19 = 0x400000;
      }
    }
    else if ( (v27 & a2) != 0 )
    {
      *a11 |= 0x800u;
      v19 = 2048;
      v28 = v27 & *v26;
    }
    else
    {
      v28 = a2 & v96;
      if ( (a2 & v96) != 0 )
      {
        *a11 |= 0x80000u;
        v19 = 0x80000;
      }
      else
      {
        v28 = 0LL;
      }
    }
    v29 = v86;
    LOBYTE(v22) = -1;
    v30 = v73;
    v31 = v98 & v86;
    v32 = v98 & (v86 ^ a2);
    v33 = v28;
    v101 = v32;
    v34 = 0;
    v85 = v28;
    v35 = 0;
    v82 = 0LL;
    v84 = 0LL;
    v102 = v98 & v86;
    v79 = 0;
    v75 = -1;
    v74 = -1;
    v80 = 0;
    v100 = v73;
    while ( 1 )
    {
      if ( v34 >= a6 || !v33 )
        return v22;
      if ( (v31 & v33) != 0 )
      {
        v33 &= v31;
        *v18 |= 0x20000u;
        v19 |= 0x20000u;
      }
      if ( ((PopHeteroSystem - 3) & 0xFFFFFFFC) == 0 && PopHeteroSystem != 4 )
      {
        *v18 |= 0x8000u;
        v19 |= 0x8000u;
        v65 = PpmHeteroRestrictToFavoredClass(v33, v30, &v74, a14, a15, a13, v34, a16);
        v33 = v65;
        if ( v74 != v75 )
        {
          v75 = v74;
          v66 = 0;
          v67 = v65;
          v68 = __popcnt(v65);
          v69 = *(_QWORD *)a12 % (unsigned __int64)v68 + 1;
          if ( *(_QWORD *)a12 % (unsigned __int64)v68 != -1LL )
          {
            do
            {
              LODWORD(v83) = 0;
              _BitScanForward64(&v70, v67);
              v66 += v70 + 1;
              v67 >>= (unsigned __int8)v70 + 1;
              --v69;
            }
            while ( v69 );
          }
          v80 = v66 - 1;
          PpmEventHeteroFavoredCoreRotationChange(v68, (unsigned int)(v66 - 1), v67);
        }
        v29 = v86;
        v35 = v80;
      }
      if ( (v32 & v33) != 0 )
      {
        v33 &= v32;
        *v18 |= 0x1000u;
        v19 |= 0x1000u;
      }
      if ( !*(_BYTE *)(a12 + 16) && (v33 & ~v29) != 0 )
      {
        v33 &= ~v29;
        *v18 |= 0x2000u;
        v19 |= 0x2000u;
      }
      LODWORD(v83) = 0;
      _BitScanForward64(&v39, __ROR8__(v33, v35));
      Prcb = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * v73 + ((v35 + (_BYTE)v39) & 0x3Fu)));
      v95 = Prcb;
      if ( PpmParkCoreMask )
        v41 = *(_QWORD *)(Prcb + 36448);
      else
        v41 = *(_QWORD *)(Prcb + 200);
      v42 = v79;
      *v26 &= ~v41;
      v83 = v41;
      if ( v42 < a5 )
      {
        if ( v97 && *(_DWORD *)(v87 + 1232) == 3 )
        {
          LOWORD(v104) = v73;
          v45 = a5 - 1 + v88 - v42;
          *((_QWORD *)&v103 + 1) = v41;
          *(_QWORD *)&v103 = 0LL;
          if ( !(unsigned int)KeEnumerateNextProcessor(&v81, &v103) )
          {
            v46 = v87;
            v47 = v97;
            do
            {
              if ( (unsigned int)v45 < *(unsigned __int16 *)(v46 + 10) && *(_DWORD *)(v47 + 4 * v45) != v81 )
              {
                *(_DWORD *)(v47 + 4 * v45) = v81;
                *(_BYTE *)(v46 + 1254) = 1;
              }
              v45 = (unsigned int)(v45 - 1);
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&v81, &v103) );
            v18 = v106;
            v41 = v83;
            v27 = v107;
          }
          *(_WORD *)(v87 + 1252) += (unsigned __int8)__popcnt(v41);
LABEL_69:
          v42 = v79;
          v26 = v94;
        }
      }
      else
      {
        *v105 |= v41;
        if ( PpmParkNewSoftParkRankList && PpmParkOldSoftParkRankList )
        {
          v117 = 2097153LL;
          memset_0(v118, 0, 0x100uLL);
          v48 = v117;
          if ( (unsigned __int16)v117 <= v73 )
          {
            if ( WORD1(v117) > v73 )
            {
              LOWORD(v117) = v73 + 1;
              goto LABEL_59;
            }
          }
          else
          {
LABEL_59:
            v118[v100] |= v41;
LABEL_64:
            v48 = v117;
          }
LABEL_65:
          for ( i = 0; i < v48; ++i )
          {
            if ( v118[i] )
            {
              FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(&v117);
              v50 = PpmParkSoftParkCurrentRank;
              v81 = FirstSetRightAffinity;
              *((_DWORD *)PpmParkNewSoftParkRankList + FirstSetRightAffinity) = PpmParkSoftParkCurrentRank;
              if ( v50 != *((_DWORD *)PpmParkOldSoftParkRankList + FirstSetRightAffinity) )
                PpmParkSoftParkRankListChanged = 1;
              PpmParkSoftParkCurrentRank = v50 + 1;
              v51 = *((_DWORD *)KiGlobalState + FirstSetRightAffinity);
              if ( v48 > v51 >> 6 )
              {
                v118[v51 >> 6] &= ~(1LL << (v51 & 0x3F));
                goto LABEL_64;
              }
              goto LABEL_65;
            }
          }
          goto LABEL_69;
        }
      }
      v43 = v82;
      v114 = v28;
      v115 = v98;
      v113 = v85;
      v112 = v84;
      v109 = *v26;
      v93 = a13;
      v91 = a6;
      v90 = a5;
      v89 = v73;
      v79 = __popcnt(v41) + v42;
      v111 = v82;
      v110 = v41;
      v108 = v33;
      LODWORD(v83) = v19;
      v92 = v79;
      if ( PpmEtwRegistered )
      {
        if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_COREPARKING_SELECTION_V0) )
        {
          UserData.Ptr = (ULONGLONG)&v89;
          *(_QWORD *)&UserData.Size = 4LL;
          v131 = (int *)&v90;
          v132 = 4LL;
          v133 = &v91;
          v135 = &v92;
          v137 = &v93;
          v139 = &v83;
          v141 = &v108;
          v143 = &v109;
          v145 = &v110;
          v147 = (__int64 *)&v111;
          v149 = (__int64 *)&v112;
          v151 = &v113;
          v153 = &v114;
          v155 = &v115;
          v134 = 4LL;
          v136 = 4LL;
          v138 = 4LL;
          v140 = 4LL;
          v142 = 8LL;
          v144 = 8LL;
          v146 = 8LL;
          v148 = 8LL;
          v150 = 8LL;
          v152 = 8LL;
          v154 = 8LL;
          v156 = 8LL;
          EtwWriteEx(PpmEtwHandle, &PPM_ETW_COREPARKING_SELECTION_V0, 0LL, 0, 0LL, 0LL, 0xEu, &UserData);
        }
        v43 = v82;
      }
      v19 = 0;
      v33 &= ~*(_QWORD *)(*(_QWORD *)(v95 + 192) + 128LL);
      v85 &= ~*(_QWORD *)(v95 + 8LL * *(unsigned __int8 *)(v95 + 208) + 35864);
      switch ( v76 )
      {
        case 0:
LABEL_46:
          v82 = 0LL;
          goto LABEL_47;
        case 1:
          v59 = ~*(_QWORD *)(v95 + 36464);
          if ( (v59 & v43) == 0 )
            v43 = *v26;
          v71 = v59 & v43;
          break;
        case 2:
          v58 = ~v41 & *(_QWORD *)(v95 + 36464);
          if ( (v58 & v43) == 0 )
            v43 = *v26;
          v71 = v58 & v43;
          break;
        default:
          goto LABEL_46;
      }
      v82 = v71;
LABEL_47:
      KeGetTopologySiblingGroupAffinityForProcessor(v95, 2LL, &v116);
      switch ( v77 )
      {
        case 0:
          goto LABEL_96;
        case 1:
          v44 = v84;
          if ( (~(_QWORD)v116 & v84) == 0 )
            v44 = *v26;
          v36 = ~(_QWORD)v116 & v44;
          break;
        case 2:
          v60 = v84;
          v61 = v116 & ~v41;
          if ( (v61 & v84) == 0 )
            v60 = *v26;
          v36 = v61 & v60;
          break;
        default:
LABEL_96:
          v36 = 0LL;
          break;
      }
      v84 = v36;
      if ( v78 && v78 == 3 )
        v37 = *(_QWORD *)(v95 + 200);
      else
        v37 = *(_QWORD *)(v95 + 36448);
      v32 = v101;
      v22 = ~v37;
      v30 = v73;
      v28 &= v22;
      v34 = v79;
      v35 = v80;
      v29 = v86;
      if ( !v33 )
      {
        v38 = v85;
        if ( v85 )
          goto LABEL_23;
        if ( v28 )
          goto LABEL_18;
        v53 = *v26;
        v54 = a8;
        if ( (*v26 & a8) != 0 )
        {
          v57 = 512;
        }
        else
        {
          v54 = v99;
          if ( (v53 & v99) == 0 )
          {
            if ( (PpmHeteroHgsContainmentState & 8) != 0 )
            {
              v55 = v119.Bitmap[v100] & v53;
              if ( v55 )
              {
                v28 = v55;
                v56 = 0x400000;
                goto LABEL_126;
              }
            }
            else if ( (v53 & v27) != 0 )
            {
              *v18 |= 0x800u;
              v19 = 2048;
              v28 = v27 & *v26;
            }
            else
            {
              v28 = v96 & v53;
              if ( (v96 & v53) == 0 )
              {
                v28 = 0LL;
                goto LABEL_18;
              }
              v56 = 0x80000;
LABEL_126:
              *v18 |= v56;
              v19 = v56;
            }
LABEL_18:
            v38 = v82 & v28;
            if ( (v82 & v28) == 0 )
              v38 = v28;
            LOBYTE(v22) = v36 & v38;
            if ( (v36 & v38) != 0 )
              v38 &= v36;
            v85 = v38;
LABEL_23:
            v33 = v38;
            v30 = v73;
            goto LABEL_24;
          }
          v57 = 1024;
        }
        *v18 |= v57;
        v19 = v57;
        v28 = v54 & *v26;
        goto LABEL_18;
      }
LABEL_24:
      v31 = v102;
    }
  }
  *a9 = a2;
  return v22;
}
