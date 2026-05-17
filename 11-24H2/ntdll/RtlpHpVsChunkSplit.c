/*
 * XREFs of RtlpHpVsChunkSplit @ 0x180052BD0
 * Callers:
 *     RtlpHpVsContextGrowInPlace @ 0x1800DF8F4 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpVsSlotAllocate @ 0x18011B120 (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x18004F144 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18004F198 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpEnvCompactionSchedule @ 0x18004FAE0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpVsFreeChunkRemove @ 0x180051B80 (RtlpHpVsFreeChunkRemove.c)
 *     RtlRbRemoveNode @ 0x180051DA0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x180054EB0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCommit @ 0x180056980 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1800DB080 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180114DF8 (RtlpHpVsChunkAlignSplit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v7; // r12d
  int v8; // r12d
  int v11; // r15d
  unsigned int v12; // ebx
  __int64 v13; // r10
  unsigned int v14; // r11d
  __int64 v15; // r9
  unsigned int v16; // edx
  unsigned int v17; // ecx
  int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // r12d
  unsigned int v21; // edx
  unsigned int v22; // r13d
  unsigned __int64 v23; // r12
  int v24; // edx
  int v25; // r10d
  int v26; // eax
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rdi
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r9
  unsigned int v33; // r15d
  unsigned int v34; // r8d
  unsigned __int64 v35; // r13
  __int64 v36; // r12
  __int64 v37; // rdi
  __int64 v38; // r9
  unsigned int v39; // r8d
  unsigned int v40; // edx
  int v41; // ecx
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // r12
  __int64 v44; // r13
  __int64 v45; // r11
  unsigned int v46; // edx
  __int64 v47; // r8
  unsigned int v48; // eax
  int v49; // ecx
  unsigned int v50; // r10d
  char v51; // r11
  unsigned int v52; // r8d
  unsigned int v53; // edx
  unsigned __int64 v54; // r12
  __int64 v55; // r15
  __int64 v56; // rcx
  unsigned int v57; // r9d
  __int16 v58; // r10
  unsigned int v59; // r11d
  unsigned __int64 v60; // rax
  int v61; // ecx
  __int64 v62; // rax
  unsigned int v63; // ebx
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  int v67; // r10d
  unsigned __int8 v68; // al
  unsigned __int64 v69; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // r12
  unsigned int v75; // r9d
  __int64 v76; // r13
  __int64 v77; // r10
  __int64 (__fastcall *v78)(__int64, unsigned __int64, _QWORD, _QWORD); // rax
  __int64 v79; // r11
  __int64 v80; // r8
  unsigned __int64 v81; // r8
  char v82; // cl
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rdx
  char v85; // r9
  int v86; // eax
  unsigned __int64 i; // r8
  char v88; // al
  unsigned __int64 v89; // rdx
  volatile signed __int32 *v90; // rcx
  void *SchedulerSharedDataSlot; // r9
  unsigned int v92; // eax
  __int64 v93; // r8
  __int64 v94; // rax
  __int64 v95; // rdx
  unsigned __int64 v96; // r9
  unsigned __int64 v97; // rax
  int v98; // eax
  BOOL v99; // eax
  unsigned __int64 v100; // rdx
  int v101; // eax
  unsigned __int64 v102; // rdx
  __int64 v103; // r12
  __int64 v104; // rax
  unsigned int v105; // [rsp+30h] [rbp-78h]
  unsigned int v106; // [rsp+30h] [rbp-78h]
  int v107; // [rsp+3Ch] [rbp-6Ch] BYREF
  unsigned __int64 v108; // [rsp+40h] [rbp-68h]
  unsigned __int64 v109; // [rsp+48h] [rbp-60h]
  unsigned __int64 v110; // [rsp+50h] [rbp-58h]
  __int128 v111; // [rsp+58h] [rbp-50h]
  __int64 v112; // [rsp+68h] [rbp-40h]
  unsigned __int64 v113; // [rsp+B0h] [rbp+8h]
  unsigned int j; // [rsp+B0h] [rbp+8h]
  int v115; // [rsp+B0h] [rbp+8h]
  unsigned int v117; // [rsp+C0h] [rbp+18h]
  unsigned int v118; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v119; // [rsp+C0h] [rbp+18h]
  unsigned int v120; // [rsp+D0h] [rbp+28h]
  unsigned int v121; // [rsp+D0h] [rbp+28h]

  v7 = WORD1(a4) ^ *(unsigned __int16 *)(a4 + 2);
  v109 = a4;
  v110 = a2 + 16;
  v8 = WORD1(RtlpHpHeapGlobals) ^ v7;
  v11 = a4;
  RtlRbRemoveNode(a2 + 16, (unsigned __int64 *)(a4 + 8));
  v12 = 0;
  v13 = *(__int16 *)(a1 + 6);
  v14 = a4 - a3;
  v15 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)a4 ^ (unsigned int)a4) >> 16));
  v16 = (a4 - a3 + 4127) & 0xFFFFF000;
  v17 = ((a4 + v15 - a3) & 0xFFFFF000) - v16;
  if ( v16 >= (((_DWORD)a4 + (_DWORD)v15 - (_DWORD)a3) & 0xFFFFF000) )
    v17 = 0;
  v18 = ((unsigned __int64)(v15 + 4095) >> 12)
      + (unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)a4 ^ a4)
      - (v17 >> 12)
      - ((v15 + (unsigned __int64)(v11 & 0xFFF) + 4095) >> 12);
  if ( (_WORD)v13 )
    _InterlockedAdd64((volatile signed __int64 *)(v13 + a1 + 32), v18);
  else
    *(_QWORD *)(a1 + 88) += v18;
  v19 = a5;
  v20 = v8 - a5;
  if ( v20 && (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    v100 = (((a4 + 16LL * a5 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a4 + 16LL * a5)) >> 4;
    v101 = 16 * v100;
    if ( (unsigned int)(16 * v100) >= 0x20 )
    {
      if ( (v101 & 0xFFFFFFC0) == 0 && v101 != 32 )
      {
        v19 = a5 + 1;
        --v20;
      }
    }
    else
    {
      v19 = v100 + a5;
      v20 -= v100;
    }
  }
  v21 = v20 + v19;
  v22 = 0;
  if ( 16 * v20 >= 0x20 )
  {
    v21 = v19;
    v22 = v20;
  }
  v117 = v21;
  LODWORD(v23) = v21;
  v24 = 16 * v21;
  *(_BYTE *)(a4 + 6) = BYTE6(a4) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
  v105 = v22;
  v25 = (unsigned __int8)(RtlpHpHeapGlobals ^ (v14 >> 12) ^ v11);
  v26 = v24 + 32;
  *(_DWORD *)(a4 + 8) = v25;
  if ( !v22 )
    v26 = v24;
  v120 = v23;
  v27 = (-1LL << (v14 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                         - (unsigned __int8)((unsigned __int64)(v26 + v14 - 1) >> 12)));
  v28 = (*(_QWORD *)(a3 + 16) ^ v27) & v27;
  v113 = v28;
  if ( v28 )
  {
    *(_DWORD *)(a4 + 8) = v25 | 0x200;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(_QWORD *)(a6 + 8));
      v28 = v113;
      *(_QWORD *)(a6 + 8) = 0LL;
    }
    _BitScanForward64(&v72, v28);
    v108 = __popcnt(v28);
    v112 = 0LL;
    _BitScanReverse64(&v73, v28);
    v74 = a3 + (unsigned int)((_DWORD)v72 << 12);
    LODWORD(v73) = v73 - v72;
    v111 = 0LL;
    v75 = ((_DWORD)v73 + 1) << 12;
    v121 = v75;
    v76 = ((1LL << ((unsigned __int8)v73 + 1)) - 1) << v72;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      *((_QWORD *)&v111 + 1) = a3 + 24;
      RtlAcquireSRWLockExclusive(a3 + 24);
      v75 = v121;
    }
    v77 = *(_QWORD *)(a1 + 8) ^ a1;
    v78 = (__int64 (__fastcall *)(__int64, unsigned __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32));
    if ( v78 != RtlpHpSegLfhVsCommit )
    {
      v86 = v78(*(_QWORD *)(a1 + 8) ^ a1, v74, v121, 0LL);
      goto LABEL_73;
    }
    v79 = *(_QWORD *)v77;
    v80 = *(_QWORD *)v77;
    v107 = 0;
    v81 = v74 & v80;
    if ( !(RtlpHpHeapGlobals ^ v77 ^ *(_QWORD *)(v81 + 16) ^ v81) )
    {
      v82 = *(_BYTE *)(v77 + 8);
      v83 = v81 + 32 * ((unsigned __int64)(unsigned int)(v74 - v81) >> v82);
      v84 = -32LL * *(unsigned __int8 *)(v83 + 26) + v83;
      v85 = *(_BYTE *)(v84 + 24);
      if ( (v85 & 3) == 3 && (v81 + ((__int64)(v84 - v81) >> 5 << v82) == v74 || (v85 & 0xCu) >= 8) )
      {
        v75 = v121;
        goto LABEL_72;
      }
      v75 = v121;
    }
    v84 = 0LL;
LABEL_72:
    v86 = RtlpHpSegPageRangeCommit(
            v77,
            v84,
            ((_DWORD)v74
           - (unsigned int)((__int64)(v84 - (v84 & v79)) >> 5 << *(_BYTE *)(v77 + 8))
           - ((unsigned int)v84 & (unsigned int)v79)) >> 12,
            v75 >> 12,
            0,
            (__int64)&v107);
LABEL_73:
    v115 = v86;
    if ( v86 >= 0 )
    {
      *(_QWORD *)(a3 + 16) |= v76;
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 80), (unsigned int)v108);
      v115 = 0;
    }
    v88 = *(_BYTE *)(a1 + 5);
    if ( (v88 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*((_QWORD *)&v111 + 1));
      v88 = *(_BYTE *)(a1 + 5);
    }
    LODWORD(v23) = v117;
    v89 = v105;
    v22 = v105;
    v120 = v117;
    if ( v115 < 0 )
    {
      v22 = v117 + v105;
      v120 = 0;
      LODWORD(v23) = 0;
    }
    if ( (v88 & 1) == 0 )
    {
      v90 = (volatile signed __int32 *)(a2 + 8);
      *(_QWORD *)(a6 + 8) = a2 + 8;
      SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0LL; (unsigned int)i < 8; i = (unsigned int)(i + 1) )
        {
          v89 = (unsigned __int64)SchedulerSharedDataSlot + 8 * (unsigned int)i;
          if ( !*(_QWORD *)v89 )
          {
            if ( v89 )
              *(_QWORD *)v89 = v90;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64(v90, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(
          (unsigned __int64)v90,
          v89,
          (_QWORD *)i,
          (unsigned __int64)SchedulerSharedDataSlot);
    }
    *(_DWORD *)(a4 + 8) &= ~0x200u;
  }
  *(_WORD *)(a4 + 2) = WORD1(RtlpHpHeapGlobals) ^ v23 ^ HIWORD(v11);
  if ( !v22 )
    return (unsigned int)v23;
  v29 = 16LL * (unsigned int)v23 + a4;
  v30 = (unsigned int)v23;
  if ( !(_DWORD)v23 )
    v23 = (v29 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v29) >> 32;
  *(_QWORD *)v29 = v29 ^ RtlpHpHeapGlobals ^ ((v22 << 16) | (((unsigned __int16)v23 | 0x10000LL) << 32));
  *(_DWORD *)(v29 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v29 ^ ((unsigned int)(v29 - a3) >> 12));
  v31 = v109 + 16 * (v30 + v22);
  if ( v31 < a3 + 16 * (*(unsigned __int16 *)(a3 + 32) + 3LL) )
    *(_WORD *)(v31 + 4) = WORD2(v31) ^ WORD2(RtlpHpHeapGlobals) ^ v22;
  for ( j = 0; ; j = v33 )
  {
    v32 = a3 + 48;
    v33 = ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v29 ^ (unsigned int)v29) >> 16;
    v118 = v33;
    v34 = (unsigned __int16)((RtlpHpHeapGlobals ^ *(_QWORD *)v29 ^ v29) >> 32);
    *(_BYTE *)(v29 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v29);
    if ( v34 )
    {
      v35 = v29 - 16LL * v34;
      v36 = RtlpHpHeapGlobals ^ *(_QWORD *)v35 ^ v35;
      if ( (v36 & 0xFF000000000000LL) == 0 )
      {
        RtlRbRemoveNode(v110, (unsigned __int64 *)(v35 + 8));
        v37 = *(__int16 *)(a1 + 6);
        v39 = (v35 - a3 + 4127) & 0xFFFFF000;
        v40 = ((v35 + 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v35 ^ *(_DWORD *)v35) >> 16)) - a3) & 0xFFFFF000)
            - v39;
        if ( v39 >= (((_DWORD)v35
                    + 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v35 ^ *(_DWORD *)v35) >> 16))
                    - (_DWORD)a3) & 0xFFFFF000) )
          v40 = 0;
        v38 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v35 ^ *(_DWORD *)v35) >> 16));
        v41 = ((unsigned __int64)(v38 + 4095) >> 12)
            + (unsigned __int16)(RtlpHpHeapGlobals ^ *(_DWORD *)v35 ^ v35)
            - (v40 >> 12)
            - (((v35 & 0xFFF) + v38 + 4095) >> 12);
        if ( (_WORD)v37 )
          _InterlockedAdd64((volatile signed __int64 *)(v37 + a1 + 32), v41);
        else
          *(_QWORD *)(a1 + 88) += v41;
        v32 = a3 + 48;
        v33 += WORD1(v36);
        v29 = v35;
      }
    }
    v42 = *(unsigned __int16 *)(a3 + 32);
    v43 = v29 + 16LL * v33;
    if ( v43 < v32 + 16 * v42 )
    {
      v44 = RtlpHpHeapGlobals ^ *(_QWORD *)v43 ^ v43;
      if ( (v44 & 0xFF000000000000LL) == 0 )
      {
        RtlRbRemoveNode(v110, (unsigned __int64 *)(v43 + 8));
        v45 = *(__int16 *)(a1 + 6);
        v46 = (v43 - a3 + 4127) & 0xFFFFF000;
        v47 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v43 ^ *(_DWORD *)v43) >> 16));
        v48 = ((v43 + v47 - a3) & 0xFFFFF000) - v46;
        if ( v46 >= (((_DWORD)v43 + (_DWORD)v47 - (_DWORD)a3) & 0xFFFFF000) )
          v48 = 0;
        v49 = ((unsigned __int64)(v47 + 4095) >> 12)
            + (unsigned __int16)(RtlpHpHeapGlobals ^ v43 ^ *(_DWORD *)v43)
            - (v48 >> 12)
            - (((v43 & 0xFFF) + v47 + 4095) >> 12);
        if ( (_WORD)v45 )
          _InterlockedAdd64((volatile signed __int64 *)(v45 + a1 + 32), v49);
        else
          *(_QWORD *)(a1 + 88) += v49;
        v42 = *(unsigned __int16 *)(a3 + 32);
        v32 = a3 + 48;
        v33 += WORD1(v44);
      }
    }
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      v102 = v29 + 16LL * v33;
      if ( v102 < v32 + 16LL * (unsigned __int16)v42 )
      {
        v103 = RtlpHpHeapGlobals ^ *(_QWORD *)v102 ^ v102;
        if ( (v103 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, a2, a3, (_DWORD *)(v29 + 16LL * v33));
          v33 += WORD1(v103);
        }
      }
    }
    if ( v118 != v33 )
    {
      v42 = a3 + 48;
      v71 = v29 + 16LL * v33;
      *(_WORD *)(v29 + 2) = WORD1(RtlpHpHeapGlobals) ^ v33 ^ WORD1(v29);
      if ( v71 < a3 + 48 + 16LL * *(unsigned __int16 *)(a3 + 32) )
      {
        LODWORD(v119) = 0;
        HIDWORD(v119) = (unsigned __int16)v33;
        v42 = HIDWORD(v119);
        LOWORD(v42) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v71) ^ v33;
        *(_WORD *)(v71 + 4) = v42;
      }
    }
    if ( v33 == *(unsigned __int16 *)(a3 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a3);
      return v120;
    }
    if ( v33 <= j )
      goto LABEL_38;
    v50 = v29 - a3;
    v51 = v29;
    v52 = (v29 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v29) ^ *(unsigned __int16 *)(v29 + 2)) - a3) & 0xFFFFF000;
    v32 = ((_DWORD)v29 - (_DWORD)a3 + 4127) & 0xFFFFF000;
    if ( (unsigned int)v32 >= v52 )
      goto LABEL_38;
    v53 = v52 - v32;
    v32 = (unsigned int)v32 >> 12;
    v42 = (unsigned __int8)v32;
    v54 = *(_QWORD *)(a3 + 16) & (-1LL << v32) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                          - (unsigned __int8)((unsigned __int64)(v52 - 1) >> 12)));
    if ( v53 < 0x1000 )
      goto LABEL_38;
    if ( !v54 )
      goto LABEL_38;
    v92 = __popcnt(v54);
    v106 = v92;
    if ( *(__int16 *)(a3 + 36) < 0 )
      goto LABEL_38;
    if ( !*(_WORD *)(a1 + 6) )
      break;
    v93 = *(_QWORD *)(a1 + 8) ^ a1;
    if ( (*(_BYTE *)(v93 + 0xD) & 8) != 0 )
    {
      v99 = 1;
    }
    else
    {
      v94 = *(__int16 *)((*(_QWORD *)(a1 + 8) ^ a1) + 0x16);
      v95 = *(_QWORD *)(v94 + v93 + 16) + *(_QWORD *)(v94 + v93 + 24);
      v96 = *(_QWORD *)(v94 + v93 + 8);
      v97 = *(_QWORD *)(v94 + (*(_QWORD *)(a1 + 8) ^ a1) + 8) >> *(_BYTE *)((*(_QWORD *)(a1 + 8) ^ a1) + 0xB);
      if ( v97 <= 8 )
        v97 = 8LL;
      v32 = v96 >> *(_BYTE *)((*(_QWORD *)(a1 + 8) ^ a1) + 0xC);
      if ( v32 <= 8 )
        v32 = 8LL;
      v42 = v95 + v106;
      v108 = v32;
      v109 = v42;
      if ( v42 <= v97 )
      {
        v99 = 0;
      }
      else
      {
        v98 = RtlpHpEnvCompactionSchedule();
        v50 = v29 - a3;
        v51 = v29;
        if ( v98 < 0 )
        {
          v99 = 1;
        }
        else
        {
          v42 = v109;
          v99 = v109 > v108;
        }
      }
    }
    if ( !v99 )
      goto LABEL_38;
LABEL_104:
    *(_BYTE *)(v29 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v29) ^ 1;
    *(_DWORD *)(v29 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v51 ^ (v50 >> 12)) | 0x200;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(_QWORD *)(a6 + 8));
      *(_QWORD *)(a6 + 8) = 0LL;
    }
    RtlpHpVsSubsegmentCommitPages(a1, a3, v54, v106, 0);
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      *(_QWORD *)(a6 + 8) = a2 + 8;
      RtlAcquireSRWLockExclusive(a2 + 8);
    }
    *(_DWORD *)(v29 + 8) &= ~0x200u;
  }
  v42 = *(_QWORD *)(a1 + 80) >> 7;
  if ( v42 <= 8 )
    v42 = 8LL;
  if ( *(_QWORD *)(a1 + 88) + (unsigned __int64)v92 > v42 )
    goto LABEL_104;
LABEL_38:
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((v29 + 32) & 0xFFF) != 0 )
  {
    v104 = RtlpHpVsChunkAlignSplit(v42, a3, v29, v32);
    v55 = a2;
    if ( v104 )
      RtlpHpVsFreeChunkInsert(a1, a2, a3, v104);
  }
  else
  {
    v55 = a2;
  }
  v56 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v29 ^ *(_DWORD *)v29) >> 16));
  v57 = (v29 + v56 - a3) & 0xFFFFF000;
  v58 = ((v56 + (v29 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v56 + 4095) >> 12);
  v59 = (v29 - a3 + 4127) & 0xFFFFF000;
  if ( v59 >= v57 )
  {
    v60 = 0LL;
  }
  else
  {
    v12 = v57 - v59;
    v60 = *(_QWORD *)(a3 + 16) & (-1LL << (v59 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                  - (unsigned __int8)((unsigned __int64)(v57 - 1) >> 12)));
  }
  v61 = __popcnt(v60);
  v62 = *(__int16 *)(a1 + 6);
  v63 = v12 >> 12;
  if ( (_WORD)v62 )
    _InterlockedAdd64((volatile signed __int64 *)(v62 + a1 + 32), v61);
  else
    *(_QWORD *)(a1 + 88) += v61;
  *(_WORD *)v29 = RtlpHpHeapGlobals ^ v29 ^ (v63 + v58 - v61);
  v64 = *(_QWORD *)(v55 + 24);
  if ( (v64 & 1) == 0 )
  {
    v65 = *(_QWORD *)(v55 + 16);
    goto LABEL_46;
  }
  v66 = *(_QWORD *)(v55 + 16);
  if ( v66 )
  {
    v65 = v66 ^ (v55 + 16);
LABEL_46:
    v66 = v65;
    v67 = v64 & 1;
    v68 = 0;
    if ( !v65 )
      goto LABEL_56;
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v29 ^ (unsigned int)v29) >= (*(_DWORD *)(v66 - 8) ^ (unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v66 - 8)) )
      {
        v69 = *(_QWORD *)(v66 + 8);
        if ( v67 )
        {
          if ( !v69 )
          {
LABEL_55:
            v68 = 1;
            goto LABEL_56;
          }
          v69 ^= v66;
        }
        if ( !v69 )
          goto LABEL_55;
      }
      else
      {
        v69 = *(_QWORD *)v66;
        if ( v67 )
        {
          if ( !v69 )
            break;
          v69 ^= v66;
        }
        if ( !v69 )
          break;
      }
      v66 = v69;
    }
  }
  v68 = 0;
LABEL_56:
  RtlRbInsertNodeEx(v55 + 16, v66, v68, v29 + 8);
  return v120;
}
