/*
 * XREFs of PpmParkComputeUnparkMask @ 0x1404EAC14
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1404EA450 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140256130 (KeAddGroupAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x14026A790 (KeRemoveProcessorAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140271570 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEmptyAffinityEx @ 0x140377880 (KeIsEmptyAffinityEx.c)
 *     KeGetPrcb @ 0x1403B0CC0 (KeGetPrcb.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x1403B1EE4 (PpmHeteroRestrictToFavoredClass.c)
 *     KeEnumerateNextProcessor @ 0x140405FA0 (KeEnumerateNextProcessor.c)
 *     KeGetTopologySiblingGroupAffinityForProcessor @ 0x14045653C (KeGetTopologySiblingGroupAffinityForProcessor.c)
 *     KeFindFirstSetRightAffinityEx @ 0x140466B50 (KeFindFirstSetRightAffinityEx.c)
 *     PpmEventHeteroFavoredCoreRotationChange @ 0x140470788 (PpmEventHeteroFavoredCoreRotationChange.c)
 *     PpmEventParkNodePreference @ 0x1405D4F70 (PpmEventParkNodePreference.c)
 *     PpmEventTraceCoreParkingSelection @ 0x1405D528C (PpmEventTraceCoreParkingSelection.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 *v16; // r15
  _DWORD *v19; // rsi
  char v20; // r12
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // rcx
  __int64 v30; // r14
  unsigned __int64 v31; // rbx
  unsigned __int16 v32; // r10
  __int64 v33; // r8
  unsigned int v34; // ecx
  __int64 v35; // rdx
  char v36; // di
  __int64 v37; // r13
  int v38; // r9d
  unsigned __int64 v39; // r8
  unsigned int v40; // r10d
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 Prcb; // rax
  unsigned __int64 v46; // rdi
  unsigned int v47; // edx
  _DWORD *v48; // r15
  _DWORD *v49; // r14
  __int64 FirstSetRightAffinity; // rdx
  int v51; // eax
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rax
  __int64 v54; // r14
  __int64 v55; // r15
  __int64 v56; // rsi
  unsigned __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // r11
  __int64 v60; // rdx
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rax
  unsigned __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // ecx
  unsigned __int64 v69; // rcx
  int v70; // eax
  char v72; // [rsp+38h] [rbp-C8h]
  unsigned __int16 v73; // [rsp+70h] [rbp-90h]
  unsigned __int8 v74; // [rsp+72h] [rbp-8Eh] BYREF
  unsigned __int8 v75; // [rsp+73h] [rbp-8Dh]
  char v76; // [rsp+74h] [rbp-8Ch]
  char v77; // [rsp+75h] [rbp-8Bh]
  char v78; // [rsp+76h] [rbp-8Ah]
  unsigned int v79; // [rsp+78h] [rbp-88h]
  int v80; // [rsp+7Ch] [rbp-84h] BYREF
  int v81; // [rsp+80h] [rbp-80h]
  unsigned __int64 v82; // [rsp+88h] [rbp-78h]
  unsigned __int64 v83; // [rsp+90h] [rbp-70h]
  __int64 *v84; // [rsp+98h] [rbp-68h]
  unsigned __int64 v85; // [rsp+A0h] [rbp-60h]
  __int64 v86; // [rsp+A8h] [rbp-58h]
  __int64 v87; // [rsp+B0h] [rbp-50h]
  __int64 v88; // [rsp+B8h] [rbp-48h]
  int v89; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v90; // [rsp+C8h] [rbp-38h]
  __int64 v91; // [rsp+D0h] [rbp-30h]
  __int64 v92; // [rsp+D8h] [rbp-28h]
  __int64 v93; // [rsp+E0h] [rbp-20h]
  __int64 v94; // [rsp+E8h] [rbp-18h]
  __int128 v95; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v96; // [rsp+100h] [rbp+0h]
  __int64 v97; // [rsp+108h] [rbp+8h]
  _QWORD *v98; // [rsp+110h] [rbp+10h]
  _DWORD *v99; // [rsp+118h] [rbp+18h]
  __int64 v100; // [rsp+120h] [rbp+20h]
  __int64 v101; // [rsp+128h] [rbp+28h]
  __int64 v102; // [rsp+130h] [rbp+30h]
  __int128 v103; // [rsp+138h] [rbp+38h] BYREF
  __int64 v104; // [rsp+150h] [rbp+50h] BYREF
  char v105[264]; // [rsp+158h] [rbp+58h] BYREF
  struct _KAFFINITY_EX v106; // [rsp+260h] [rbp+160h] BYREF
  _DWORD v107[2]; // [rsp+370h] [rbp+270h] BYREF
  _QWORD v108[33]; // [rsp+378h] [rbp+278h] BYREF
  _DWORD v109[2]; // [rsp+480h] [rbp+380h] BYREF
  _QWORD v110[33]; // [rsp+488h] [rbp+388h] BYREF
  _DWORD v111[2]; // [rsp+590h] [rbp+490h] BYREF
  char v112[264]; // [rsp+598h] [rbp+498h] BYREF
  _DWORD v113[2]; // [rsp+6A0h] [rbp+5A0h] BYREF
  char v114[264]; // [rsp+6A8h] [rbp+5A8h] BYREF
  _DWORD v115[2]; // [rsp+7B0h] [rbp+6B0h] BYREF
  char v116[264]; // [rsp+7B8h] [rbp+6B8h] BYREF

  v16 = a9;
  v19 = a11;
  v87 = a3;
  v88 = a1;
  v93 = a4;
  v84 = a9;
  v98 = a10;
  v99 = a11;
  v95 = 0LL;
  v96 = 0LL;
  memset_0(v113, 0, 0x108uLL);
  memset_0(v111, 0, 0x108uLL);
  v103 = 0LL;
  memset_0(v107, 0, 0x108uLL);
  memset_0(&v104, 0, 0x108uLL);
  memset_0(v115, 0, 0x108uLL);
  v80 = 0;
  memset_0(v109, 0, 0x108uLL);
  memset_0(&v106, 0, sizeof(v106));
  v20 = 0;
  v21 = *(unsigned __int16 *)(a1 + 4);
  v22 = 61LL * dword_140F0B70C;
  v73 = *(_WORD *)(a1 + 4);
  v77 = PpmCurrentProfile[0][v22 + 62];
  v76 = BYTE1(PpmCurrentProfile[0][v22 + 62]);
  v89 = *(unsigned __int8 *)(a1 + 172);
  v92 = *(_QWORD *)(a1 + 176);
  LOBYTE(v23) = BYTE2(PpmCurrentProfile[0][v22 + 62]);
  *a9 = 0LL;
  *a10 = 0LL;
  v78 = v23;
  if ( a6 && a5 )
  {
    if ( PpmParkPreferenceHandler )
    {
      v115[1] = 0;
      v115[0] = 2097153;
      memset_0(v116, 0, 0x100uLL);
      v113[1] = 0;
      v113[0] = 2097153;
      memset_0(v114, 0, 0x100uLL);
      v111[1] = 0;
      v111[0] = 2097153;
      memset_0(v112, 0, 0x100uLL);
      v107[1] = 0;
      v107[0] = 2097153;
      memset_0(v108, 0, 0x100uLL);
      v109[1] = 0;
      v109[0] = 2097153;
      memset_0(v110, 0, 0x100uLL);
      KeAddGroupAffinityEx((unsigned __int16 *)v115, v21, a2);
      KeAddGroupAffinityEx((unsigned __int16 *)v113, v21, a7);
      KeAddGroupAffinityEx((unsigned __int16 *)v111, v21, a8);
      guard_dispatch_icall_no_overrides(0LL, PpmCheckTime);
      if ( (unsigned __int16)v21 >= LOWORD(v107[0]) )
        v25 = 0LL;
      else
        v25 = v108[v21];
      if ( (unsigned __int16)v21 >= LOWORD(v109[0]) )
        v26 = 0LL;
      else
        v26 = v110[v21];
      LOBYTE(v24) = a5;
      PpmEventParkNodePreference(v73, a2, v24, a7, a8, v25, v26);
      v27 = ~(a8 | a7);
      v91 = v27 & v25;
      v28 = v27 & v26;
      v29 = v27 & v25;
    }
    else
    {
      v29 = 0LL;
      v91 = 0LL;
      v28 = 0LL;
    }
    v94 = v28;
    *a9 = a2;
    v30 = a2 & ~(a8 | a7 | v29 | v28);
    v86 = v30;
    if ( (a2 & a8) != 0 )
    {
      *a11 |= 0x200u;
      v20 = 0;
      v31 = a8 & *a9;
    }
    else if ( (a2 & v28) != 0 )
    {
      *a11 |= 0x400u;
      v20 = 0;
      v31 = v28 & *a9;
    }
    else
    {
      if ( (PpmHeteroHgsContainmentState & 8) != 0 )
      {
        v106.Reserved = 0;
        *(_DWORD *)&v106.Count = 2097153;
        memset_0(&v106.8, 0, sizeof(v106.8));
        KiCopyAffinityEx(
          &v106,
          v106.Size,
          (struct _KAFFINITY_EX *)(264LL * *(int *)(*(_QWORD *)(v88 + 192) + 4LL) + *(_QWORD *)(v88 + 192) + 16LL));
        v32 = v73;
        v31 = 0LL;
        if ( (v106.Bitmap[v73] & a2) != 0 )
        {
          v31 = v106.Bitmap[v73] & a2;
          *a11 |= 0x400000u;
          v20 = 0;
        }
        goto LABEL_25;
      }
      if ( (a2 & ~(a8 | a7 | v29 | v28)) != 0 )
      {
        *a11 |= 0x800u;
        v20 = 0;
        v31 = v30 & *a9;
      }
      else
      {
        v31 = v29 & a2;
        if ( (v29 & a2) != 0 )
        {
          *a11 |= 0x80000u;
          v20 = 0;
        }
        else
        {
          v31 = 0LL;
        }
      }
    }
    v32 = v73;
LABEL_25:
    v33 = v87;
    v34 = 0;
    v82 = 0LL;
    v23 = v93 & (a2 ^ v87);
    v35 = v87 & v93;
    v83 = 0LL;
    v36 = 0;
    v37 = v31;
    v97 = v23;
    v85 = v31;
    v75 = -1;
    v74 = -1;
    v102 = v87 & v93;
    v79 = 0;
    v81 = 0;
    LOBYTE(v23) = v32;
    v101 = v32;
    while ( 1 )
    {
      if ( !v37 )
        return v23;
      if ( (v35 & v37) != 0 )
      {
        *v19 |= 0x20000u;
        v37 &= v35;
      }
      if ( ((PopHeteroSystem - 3) & 0xFFFFFFFC) == 0 && PopHeteroSystem != 4 )
      {
        *v19 |= 0x8000u;
        v37 = PpmHeteroRestrictToFavoredClass(v37, v32, &v74, a14, a15, a13, v34, a16);
        if ( v74 != v75 )
        {
          v75 = v74;
          v38 = 0;
          v39 = v37;
          v40 = __popcnt(v37);
          v41 = *(_QWORD *)a12 % (unsigned __int64)v40 + 1;
          if ( *(_QWORD *)a12 % (unsigned __int64)v40 != -1LL )
          {
            do
            {
              v81 = 0;
              _BitScanForward64(&v42, v39);
              v38 += v42 + 1;
              v39 >>= (unsigned __int8)v42 + 1;
              --v41;
            }
            while ( v41 );
          }
          v36 = v38 - 1;
          v81 = v38 - 1;
          PpmEventHeteroFavoredCoreRotationChange(v40, v38 - 1);
        }
        v33 = v87;
        v32 = v73;
      }
      v43 = v97 & v37;
      if ( (v97 & v37) != 0 )
      {
        *v19 |= 0x1000u;
        v37 = v43;
      }
      if ( !*(_BYTE *)(a12 + 16) && (v37 & ~v33) != 0 )
      {
        *v19 |= 0x2000u;
        v37 &= ~v33;
      }
      LODWORD(v90) = 0;
      _BitScanForward64(&v44, __ROR8__(v37, v36));
      Prcb = KeGetPrcb(*((_DWORD *)qword_140F216A8 + 64 * v32 + ((v36 + (_BYTE)v44) & 0x3Fu)));
      v100 = Prcb;
      if ( PpmParkCoreMask )
        v46 = *(_QWORD *)(Prcb + 36448);
      else
        v46 = *(_QWORD *)(Prcb + 200);
      v47 = v79;
      *v16 &= ~v46;
      v90 = v46;
      if ( v47 < a5 )
      {
        if ( v92 && *(_DWORD *)(v88 + 160) == 3 )
        {
          LOWORD(v96) = v73;
          v54 = a5 - 1 + v89 - v47;
          *((_QWORD *)&v95 + 1) = v46;
          *(_QWORD *)&v95 = 0LL;
          if ( !(unsigned int)KeEnumerateNextProcessor(&v80, (unsigned __int16 **)&v95) )
          {
            v55 = v88;
            v56 = v92;
            do
            {
              if ( (unsigned int)v54 < *(unsigned __int8 *)(v55 + 10) && *(_DWORD *)(v56 + 4 * v54) != v80 )
              {
                *(_DWORD *)(v56 + 4 * v54) = v80;
                *(_BYTE *)(v55 + 173) = 1;
              }
              v54 = (unsigned int)(v54 - 1);
            }
            while ( !(unsigned int)KeEnumerateNextProcessor(&v80, (unsigned __int16 **)&v95) );
            v19 = v99;
            v46 = v90;
            v16 = v84;
          }
          *(_BYTE *)(v88 + 172) += __popcnt(v46);
LABEL_53:
          v47 = v79;
          goto LABEL_54;
        }
      }
      else
      {
        v48 = PpmParkNewSoftParkRankList;
        *v98 |= v46;
        if ( v48 )
        {
          v49 = PpmParkOldSoftParkRankList;
          if ( PpmParkOldSoftParkRankList )
          {
            v104 = 2097153LL;
            memset_0(v105, 0, 0x100uLL);
            KeAddGroupAffinityEx((unsigned __int16 *)&v104, v73, v46);
            while ( !(unsigned int)KeIsEmptyAffinityEx((unsigned __int16 *)&v104) )
            {
              FirstSetRightAffinity = (unsigned int)KeFindFirstSetRightAffinityEx((unsigned __int16 *)&v104);
              v51 = PpmParkSoftParkCurrentRank;
              v80 = FirstSetRightAffinity;
              v48[FirstSetRightAffinity] = PpmParkSoftParkCurrentRank;
              if ( v51 != v49[FirstSetRightAffinity] )
                PpmParkSoftParkRankListChanged = 1;
              PpmParkSoftParkCurrentRank = v51 + 1;
              KeRemoveProcessorAffinityEx((unsigned __int16 *)&v104, FirstSetRightAffinity);
            }
            v16 = v84;
            goto LABEL_53;
          }
          v16 = v84;
LABEL_54:
          v30 = v86;
          goto LABEL_55;
        }
        v16 = v84;
      }
LABEL_55:
      v72 = *v16;
      v79 = __popcnt(v46) + v47;
      PpmEventTraceCoreParkingSelection(v73, a5, a6, v79, a13, v20, v37, v72, v46, v82, v83, v85, v31, v93);
      v20 = 0;
      v37 &= ~*(_QWORD *)(*(_QWORD *)(v100 + 192) + 128LL);
      v85 &= ~*(_QWORD *)(v100 + 8LL * *(unsigned __int8 *)(v100 + 208) + 35864);
      switch ( v76 )
      {
        case 0:
          goto LABEL_76;
        case 1:
          v57 = v82;
          v58 = ~*(_QWORD *)(v100 + 36464);
          if ( (v58 & v82) == 0 )
            v57 = *v16;
          v82 = v58 & v57;
          break;
        case 2:
          v52 = ~v46 & *(_QWORD *)(v100 + 36464);
          v53 = v82;
          if ( (v52 & v82) == 0 )
            v53 = *v16;
          v82 = v52 & v53;
          break;
        default:
LABEL_76:
          v82 = 0LL;
          break;
      }
      KeGetTopologySiblingGroupAffinityForProcessor(v100, 2, &v103);
      switch ( v77 )
      {
        case 0:
          goto LABEL_86;
        case 1:
          v63 = v83;
          if ( (~(_QWORD)v103 & v83) == 0 )
            v63 = *v16;
          v62 = ~(_QWORD)v103 & v63;
          break;
        case 2:
          v60 = v83;
          v61 = v103 & ~v46;
          if ( (v61 & v83) == 0 )
            v60 = *v16;
          v62 = v61 & v60;
          break;
        default:
LABEL_86:
          v62 = 0LL;
          break;
      }
      v83 = v62;
      if ( v78 && v78 == 3 )
        v64 = *(_QWORD *)(v59 + 200);
      else
        v64 = *(_QWORD *)(v59 + 36448);
      v23 = ~v64;
      v31 &= v23;
      if ( v37 )
        goto LABEL_114;
      v65 = v85;
      if ( !v85 )
      {
        if ( !v31 )
        {
          v66 = *v16;
          v67 = a8;
          if ( (*v16 & a8) != 0 )
          {
            v68 = 512;
            goto LABEL_98;
          }
          v67 = v94;
          if ( (v66 & v94) == 0 )
          {
            if ( (PpmHeteroHgsContainmentState & 8) != 0 )
            {
              v69 = v106.Bitmap[v101] & v66;
              if ( !v69 )
                goto LABEL_108;
              v31 = v69;
              v70 = 0x400000;
            }
            else
            {
              if ( (v66 & v30) != 0 )
              {
                *v19 |= 0x800u;
                v20 = 0;
                v31 = v30 & *v16;
                goto LABEL_108;
              }
              v31 = v91 & v66;
              if ( (v91 & v66) == 0 )
              {
                v31 = 0LL;
                goto LABEL_108;
              }
              v70 = 0x80000;
            }
            *v19 |= v70;
            v20 = v70;
            goto LABEL_108;
          }
          v68 = 1024;
LABEL_98:
          *v19 |= v68;
          v20 = v68;
          v31 = v67 & *v16;
        }
LABEL_108:
        v65 = v82 & v31;
        if ( (v82 & v31) == 0 )
          v65 = v31;
        LOBYTE(v23) = v62 & v65;
        if ( (v62 & v65) != 0 )
          v65 &= v62;
        v85 = v65;
      }
      v37 = v65;
LABEL_114:
      v34 = v79;
      v32 = v73;
      v36 = v81;
      v35 = v102;
      v33 = v87;
      if ( v79 >= a6 )
        return v23;
    }
  }
  *a9 = a2;
  return v23;
}
