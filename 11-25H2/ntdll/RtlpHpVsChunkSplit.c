/*
 * XREFs of RtlpHpVsChunkSplit @ 0x18000E810
 * Callers:
 *     RtlpHpVsContextGrowInPlace @ 0x18002D3B8 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpVsSlotAllocate @ 0x18011C9B8 (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     RtlpHpVsSubsegmentCleanup @ 0x18000AD84 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18000ADD8 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpEnvCompactionSchedule @ 0x18000B720 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpVsFreeChunkRemove @ 0x18000D7C0 (RtlpHpVsFreeChunkRemove.c)
 *     RtlRbRemoveNode @ 0x18000D9E0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x180010AF0 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegPageRangeCommit @ 0x1800125C0 (RtlpHpSegPageRangeCommit.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18009E150 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1800D8410 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkAlignSplit @ 0x180117CF8 (RtlpHpVsChunkAlignSplit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  _RTL_RB_TREE *v55; // r15
  __int64 v56; // rcx
  unsigned int v57; // r9d
  __int16 v58; // r10
  unsigned int v59; // r11d
  unsigned __int64 v60; // rax
  int v61; // ecx
  __int64 v62; // rax
  unsigned int v63; // ebx
  _RTL_BALANCED_NODE *Min; // rax
  __int64 Root; // rcx
  unsigned __int64 v66; // rdx
  int v67; // r10d
  BOOLEAN v68; // al
  unsigned __int64 v69; // rax
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // r12
  __int64 v75; // r13
  __int64 v76; // r10
  __int64 (__fastcall *v77)(int, __int64, __int64, _DWORD *); // rax
  int v78; // eax
  char v79; // al
  void *v80; // rcx
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // r8d
  char *v83; // rdx
  unsigned int v84; // eax
  __int64 v85; // r8
  __int64 v86; // rax
  __int64 v87; // rdx
  unsigned __int64 v88; // r9
  unsigned __int64 v89; // rax
  int v90; // eax
  BOOL v91; // eax
  unsigned __int64 v92; // rdx
  int v93; // eax
  unsigned __int64 v94; // rdx
  __int64 v95; // r12
  __int64 v96; // rax
  unsigned int v97; // [rsp+30h] [rbp-78h]
  unsigned int v98; // [rsp+30h] [rbp-78h]
  int v99; // [rsp+3Ch] [rbp-6Ch] BYREF
  unsigned __int64 v100; // [rsp+40h] [rbp-68h]
  unsigned __int64 v101; // [rsp+48h] [rbp-60h]
  PRTL_RB_TREE Tree; // [rsp+50h] [rbp-58h]
  PRTL_SRWLOCK SRWLock[2]; // [rsp+58h] [rbp-50h]
  __int64 v104; // [rsp+68h] [rbp-40h]
  unsigned __int64 v105; // [rsp+B0h] [rbp+8h]
  unsigned int j; // [rsp+B0h] [rbp+8h]
  int v107; // [rsp+B0h] [rbp+8h]
  unsigned int v109; // [rsp+C0h] [rbp+18h]
  unsigned int v110; // [rsp+C0h] [rbp+18h]
  unsigned __int64 v111; // [rsp+C0h] [rbp+18h]
  unsigned int v112; // [rsp+D0h] [rbp+28h]
  unsigned int v113; // [rsp+D0h] [rbp+28h]

  v7 = WORD1(a4) ^ *(unsigned __int16 *)(a4 + 2);
  v101 = a4;
  Tree = (PRTL_RB_TREE)(a2 + 16);
  v8 = WORD1(RtlpHpHeapGlobals) ^ v7;
  v11 = a4;
  RtlRbRemoveNode((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)(a4 + 8));
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
    v92 = (((a4 + 16LL * a5 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a4 + 16LL * a5)) >> 4;
    v93 = 16 * v92;
    if ( (unsigned int)(16 * v92) >= 0x20 )
    {
      if ( (v93 & 0xFFFFFFC0) == 0 && v93 != 32 )
      {
        v19 = a5 + 1;
        --v20;
      }
    }
    else
    {
      v19 = v92 + a5;
      v20 -= v92;
    }
  }
  v21 = v20 + v19;
  v22 = 0;
  if ( 16 * v20 >= 0x20 )
  {
    v21 = v19;
    v22 = v20;
  }
  v109 = v21;
  LODWORD(v23) = v21;
  v24 = 16 * v21;
  *(_BYTE *)(a4 + 6) = BYTE6(a4) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
  v97 = v22;
  v25 = (unsigned __int8)(RtlpHpHeapGlobals ^ (v14 >> 12) ^ v11);
  v26 = v24 + 32;
  *(_DWORD *)(a4 + 8) = v25;
  if ( !v22 )
    v26 = v24;
  v112 = v23;
  v27 = (-1LL << (v14 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                         - (unsigned __int8)((unsigned __int64)(v26 + v14 - 1) >> 12)));
  v28 = (*(_QWORD *)(a3 + 16) ^ v27) & v27;
  v105 = v28;
  if ( v28 )
  {
    *(_DWORD *)(a4 + 8) = v25 | 0x200;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
      v28 = v105;
      *(_QWORD *)(a6 + 8) = 0LL;
    }
    _BitScanForward64(&v72, v28);
    v100 = __popcnt(v28);
    v104 = 0LL;
    _BitScanReverse64(&v73, v28);
    v74 = a3 + (unsigned int)((_DWORD)v72 << 12);
    LODWORD(v73) = v73 - v72;
    *(_OWORD *)SRWLock = 0LL;
    v113 = ((_DWORD)v73 + 1) << 12;
    v75 = ((1LL << ((unsigned __int8)v73 + 1)) - 1) << v72;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      SRWLock[1] = (PRTL_SRWLOCK)(a3 + 24);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a3 + 24));
    }
    v76 = *(_QWORD *)(a1 + 8) ^ a1;
    v77 = (__int64 (__fastcall *)(int, __int64, __int64, _DWORD *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32));
    if ( v77 == RtlpHpSegLfhVsCommit )
    {
      v99 = 0;
      v78 = RtlpHpSegPageRangeCommit(v76, 0, (__int64)&v99);
    }
    else
    {
      v78 = v77(*(_QWORD *)(a1 + 8) ^ a1, v74, v113, 0LL);
    }
    v107 = v78;
    if ( v78 >= 0 )
    {
      *(_QWORD *)(a3 + 16) |= v75;
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 80), (unsigned int)v100);
      v107 = 0;
    }
    v79 = *(_BYTE *)(a1 + 5);
    if ( (v79 & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(SRWLock[1]);
      v79 = *(_BYTE *)(a1 + 5);
    }
    LODWORD(v23) = v109;
    v22 = v97;
    v112 = v109;
    if ( v107 < 0 )
    {
      v22 = v109 + v97;
      v112 = 0;
      LODWORD(v23) = 0;
    }
    if ( (v79 & 1) == 0 )
    {
      v80 = (void *)(a2 + 8);
      *(_QWORD *)(a6 + 8) = a2 + 8;
      SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
      if ( SchedulerSharedDataSlot )
      {
        for ( i = 0; i < 8; ++i )
        {
          v83 = &SchedulerSharedDataSlot[8 * i];
          if ( !*(_QWORD *)v83 )
          {
            if ( v83 )
              *(_QWORD *)v83 = v80;
            break;
          }
        }
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v80, 0LL) )
        RtlpAcquireSRWLockExclusiveContended(v80);
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
  v31 = v101 + 16 * (v30 + v22);
  if ( v31 < a3 + 16 * (*(unsigned __int16 *)(a3 + 32) + 3LL) )
    *(_WORD *)(v31 + 4) = WORD2(v31) ^ WORD2(RtlpHpHeapGlobals) ^ v22;
  for ( j = 0; ; j = v33 )
  {
    v32 = a3 + 48;
    v33 = ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v29 ^ (unsigned int)v29) >> 16;
    v110 = v33;
    v34 = (unsigned __int16)((RtlpHpHeapGlobals ^ *(_QWORD *)v29 ^ v29) >> 32);
    *(_BYTE *)(v29 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v29);
    if ( v34 )
    {
      v35 = v29 - 16LL * v34;
      v36 = RtlpHpHeapGlobals ^ *(_QWORD *)v35 ^ v35;
      if ( (v36 & 0xFF000000000000LL) == 0 )
      {
        RtlRbRemoveNode(Tree, (PRTL_BALANCED_NODE)(v35 + 8));
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
        RtlRbRemoveNode(Tree, (PRTL_BALANCED_NODE)(v43 + 8));
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
      v94 = v29 + 16LL * v33;
      if ( v94 < v32 + 16LL * (unsigned __int16)v42 )
      {
        v95 = RtlpHpHeapGlobals ^ *(_QWORD *)v94 ^ v94;
        if ( (v95 & 0xFF000000000000LL) == 0 )
        {
          RtlpHpVsFreeChunkRemove(a1, (_RTL_RB_TREE *)a2, a3, v29 + 16LL * v33);
          v33 += WORD1(v95);
        }
      }
    }
    if ( v110 != v33 )
    {
      v42 = a3 + 48;
      v71 = v29 + 16LL * v33;
      *(_WORD *)(v29 + 2) = WORD1(RtlpHpHeapGlobals) ^ v33 ^ WORD1(v29);
      if ( v71 < a3 + 48 + 16LL * *(unsigned __int16 *)(a3 + 32) )
      {
        LODWORD(v111) = 0;
        HIDWORD(v111) = (unsigned __int16)v33;
        v42 = HIDWORD(v111);
        LOWORD(v42) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v71) ^ v33;
        *(_WORD *)(v71 + 4) = v42;
      }
    }
    if ( v33 == *(unsigned __int16 *)(a3 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a3);
      return v112;
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
    v84 = __popcnt(v54);
    v98 = v84;
    if ( *(__int16 *)(a3 + 36) < 0 )
      goto LABEL_38;
    if ( !*(_WORD *)(a1 + 6) )
      break;
    v85 = *(_QWORD *)(a1 + 8) ^ a1;
    if ( (*(_BYTE *)(v85 + 0xD) & 8) != 0 )
    {
      v91 = 1;
    }
    else
    {
      v86 = *(__int16 *)((*(_QWORD *)(a1 + 8) ^ a1) + 0x16);
      v87 = *(_QWORD *)(v86 + v85 + 16) + *(_QWORD *)(v86 + v85 + 24);
      v88 = *(_QWORD *)(v86 + v85 + 8);
      v89 = *(_QWORD *)(v86 + (*(_QWORD *)(a1 + 8) ^ a1) + 8) >> *(_BYTE *)((*(_QWORD *)(a1 + 8) ^ a1) + 0xB);
      if ( v89 <= 8 )
        v89 = 8LL;
      v32 = v88 >> *(_BYTE *)((*(_QWORD *)(a1 + 8) ^ a1) + 0xC);
      if ( v32 <= 8 )
        v32 = 8LL;
      v42 = v87 + v98;
      v100 = v32;
      v101 = v42;
      if ( v42 <= v89 )
      {
        v91 = 0;
      }
      else
      {
        v90 = RtlpHpEnvCompactionSchedule();
        v50 = v29 - a3;
        v51 = v29;
        if ( v90 < 0 )
        {
          v91 = 1;
        }
        else
        {
          v42 = v101;
          v91 = v101 > v100;
        }
      }
    }
    if ( !v91 )
      goto LABEL_38;
LABEL_98:
    *(_BYTE *)(v29 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v29) ^ 1;
    *(_DWORD *)(v29 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v51 ^ (v50 >> 12)) | 0x200;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
      *(_QWORD *)(a6 + 8) = 0LL;
    }
    RtlpHpVsSubsegmentCommitPages(a1, (_RTL_SRWLOCK *)a3, v54, v98, 0);
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      *(_QWORD *)(a6 + 8) = a2 + 8;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 8));
    }
    *(_DWORD *)(v29 + 8) &= ~0x200u;
  }
  v42 = *(_QWORD *)(a1 + 80) >> 7;
  if ( v42 <= 8 )
    v42 = 8LL;
  if ( *(_QWORD *)(a1 + 88) + (unsigned __int64)v84 > v42 )
    goto LABEL_98;
LABEL_38:
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((v29 + 32) & 0xFFF) != 0 )
  {
    v96 = RtlpHpVsChunkAlignSplit(v42, a3, v29, v32);
    v55 = (_RTL_RB_TREE *)a2;
    if ( v96 )
      RtlpHpVsFreeChunkInsert(a1, a2, a3, v96);
  }
  else
  {
    v55 = (_RTL_RB_TREE *)a2;
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
  Min = v55[1].Min;
  if ( ((unsigned __int8)Min & 1) == 0 )
  {
    Root = (__int64)v55[1].Root;
    goto LABEL_46;
  }
  v66 = (unsigned __int64)v55[1].Root;
  if ( v66 )
  {
    Root = v66 ^ (unsigned __int64)&v55[1];
LABEL_46:
    v66 = Root;
    v67 = (unsigned __int8)Min & 1;
    v68 = 0;
    if ( !Root )
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
  RtlRbInsertNodeEx(v55 + 1, (PRTL_BALANCED_NODE)v66, v68, (PRTL_BALANCED_NODE)(v29 + 8));
  return v112;
}
