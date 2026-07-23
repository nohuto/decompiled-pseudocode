/*
 * XREFs of RtlpHpVsChunkSplit @ 0x140366900
 * Callers:
 *     RtlpHpVsSlotAllocate @ 0x140367A10 (RtlpHpVsSlotAllocate.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140336C60 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpSegLfhVsCommit @ 0x140360A10 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403628A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     RtlpHpVsCommitLimitCheck @ 0x14036683C (RtlpHpVsCommitLimitCheck.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1403682CC (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1403684A4 (RtlpHpVsSubsegmentCleanup.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpVsChunkSplit(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v7; // r14d
  int v10; // esi
  unsigned int v11; // ebx
  __int64 v12; // r10
  unsigned int v13; // r11d
  __int64 v14; // r9
  unsigned int v15; // edx
  unsigned int v16; // ecx
  int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // r14d
  unsigned __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // r9d
  unsigned int v23; // r10d
  unsigned int v24; // r12d
  int v25; // eax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r14
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r8
  unsigned int v34; // r12d
  unsigned int v35; // r14d
  unsigned __int64 v36; // r12
  __int64 v37; // rsi
  __int64 v38; // r11
  unsigned int v39; // edx
  unsigned int v40; // eax
  int v41; // ecx
  unsigned __int16 v42; // cx
  unsigned __int64 v43; // rsi
  __int64 v44; // r11
  unsigned int v45; // edx
  unsigned int v46; // eax
  int v47; // ecx
  unsigned __int64 v48; // rdx
  __int64 v49; // rsi
  unsigned int v50; // r8d
  __int64 v51; // rdx
  unsigned int v52; // eax
  int v53; // ecx
  unsigned __int64 v54; // r9
  __int64 v55; // r8
  unsigned __int64 v56; // r11
  unsigned int v57; // r10d
  unsigned int v58; // r8d
  __int16 v59; // r11
  unsigned int v60; // edx
  unsigned __int64 v61; // r8
  __int64 v62; // rax
  int v63; // ecx
  unsigned int v64; // edx
  _RTL_RB_TREE *v65; // r12
  __int64 v66; // rax
  __int64 v67; // r11
  __int64 v68; // rdx
  int v69; // r8d
  BOOLEAN v70; // al
  unsigned __int64 v71; // rax
  __int64 v72; // r8
  unsigned __int64 v73; // r10
  unsigned int v74; // r9d
  unsigned int v75; // r8d
  __int16 v76; // r10
  unsigned __int64 v77; // rax
  int v78; // ecx
  __int64 v79; // rax
  unsigned int v80; // ebx
  unsigned __int64 Root; // rdx
  BOOLEAN v82; // al
  unsigned __int64 v83; // rax
  unsigned int v84; // r9d
  unsigned int v85; // r8d
  unsigned __int64 v86; // rsi
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rdx
  __int64 v89; // r10
  unsigned __int64 v90; // rax
  unsigned int v91; // r8d
  __int64 v92; // r14
  __int64 v93; // rcx
  int v94; // eax
  char *v95; // r12
  int v96; // r14d
  char v97; // r8
  __int64 v98; // rcx
  unsigned int v99; // edx
  unsigned __int64 v100; // r8
  unsigned int v101; // [rsp+34h] [rbp-64h]
  __int64 v102; // [rsp+38h] [rbp-60h]
  unsigned int v103; // [rsp+40h] [rbp-58h]
  __int128 v104; // [rsp+48h] [rbp-50h] BYREF
  __int64 v105; // [rsp+58h] [rbp-40h]
  int v106; // [rsp+A0h] [rbp+8h]
  unsigned int v107; // [rsp+A0h] [rbp+8h]
  __int64 v108; // [rsp+A0h] [rbp+8h]
  _DWORD *v109; // [rsp+A0h] [rbp+8h]
  char *v110; // [rsp+A0h] [rbp+8h]
  unsigned int v112; // [rsp+B0h] [rbp+18h]
  unsigned int i; // [rsp+B0h] [rbp+18h]
  unsigned int v114; // [rsp+B0h] [rbp+18h]
  unsigned int v115; // [rsp+C0h] [rbp+28h]
  unsigned int v116; // [rsp+C0h] [rbp+28h]

  v7 = WORD1(RtlpHpHeapGlobals) ^ WORD1(a4) ^ *(unsigned __int16 *)(a4 + 2);
  v10 = a4;
  RtlRbRemoveNode((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)(a4 + 8));
  v11 = 0;
  v12 = *(__int16 *)(a1 + 6);
  v13 = a4 - a3;
  v14 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((*(_DWORD *)a4 ^ (unsigned int)a4) >> 16));
  v15 = (a4 - a3 + 4127) & 0xFFFFF000;
  v16 = ((a4 + v14 - a3) & 0xFFFFF000) - v15;
  if ( v15 >= (((_DWORD)a4 + (_DWORD)v14 - (_DWORD)a3) & 0xFFFFF000) )
    v16 = 0;
  v17 = ((unsigned __int64)(v14 + 4095) >> 12)
      + (unsigned __int16)(RtlpHpHeapGlobals ^ *(_DWORD *)a4 ^ a4)
      - (v16 >> 12)
      - ((v14 + (unsigned __int64)(v10 & 0xFFF) + 4095) >> 12);
  if ( (_WORD)v12 )
    _InterlockedAdd64((volatile signed __int64 *)(v12 + a1 + 32), v17);
  else
    *(_QWORD *)(a1 + 88) += v17;
  v18 = a5;
  v19 = v7 - a5;
  if ( v19 && (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    v20 = (((a4 + 16LL * a5 + 4095) & 0xFFFFFFFFFFFFF000uLL) - (a4 + 16LL * a5)) >> 4;
    v21 = 16 * v20;
    if ( (unsigned int)(16 * v20) < 0x20 )
    {
      v18 = v20 + a5;
      v19 -= v20;
    }
    else if ( (v21 & 0xFFFFFFC0) == 0 && v21 != 32 )
    {
      v18 = a5 + 1;
      --v19;
    }
  }
  v22 = v19 + v18;
  v23 = 0;
  if ( 16 * v19 >= 0x20 )
  {
    v22 = v18;
    v23 = v19;
  }
  v24 = v23;
  v101 = v22;
  *(_BYTE *)(a4 + 6) = BYTE6(a4) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
  v112 = v23;
  v106 = (unsigned __int8)(RtlpHpHeapGlobals ^ (v13 >> 12) ^ v10);
  *(_DWORD *)(a4 + 8) = v106;
  v25 = 16 * v22 + 32;
  if ( !v23 )
    v25 = 16 * v22;
  LODWORD(v26) = v22;
  v27 = (-1LL << (v13 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                         - (unsigned __int8)((unsigned __int64)(v25 + v13 - 1) >> 12)));
  v115 = v22;
  v28 = (*(_QWORD *)(a3 + 16) ^ v27) & v27;
  if ( v28 )
  {
    *(_DWORD *)(a4 + 8) = v106 | 0x200;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), a6);
    v110 = (char *)(a1 + 5);
    _BitScanForward64(&v88, v28);
    v103 = __popcnt(v28);
    v105 = 0LL;
    v89 = a3 + (unsigned int)((_DWORD)v88 << 12);
    _BitScanReverse64(&v90, v28);
    LODWORD(v90) = v90 - v88;
    v102 = v89;
    v104 = 0LL;
    v91 = ((_DWORD)v90 + 1) << 12;
    v116 = v91;
    v92 = ((1LL << ((unsigned __int8)v90 + 1)) - 1) << v88;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      RtlpHpAcquireQueuedLockExclusive((int *)(a3 + 24), *(unsigned __int8 *)(a1 + 3), (__int64)&v104);
      v89 = v102;
      v91 = v116;
    }
    v93 = *(_QWORD *)(a1 + 8) ^ a1;
    if ( (__int64 (__fastcall *)(__int64, __int64, unsigned int, _DWORD *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32)) == RtlpHpSegLfhVsCommit )
      v94 = RtlpHpSegLfhVsCommit(v93, v89, v91, 0LL);
    else
      v94 = guard_dispatch_icall_no_overrides(v93, v89);
    v95 = (char *)(a1 + 5);
    if ( v94 < 0 )
    {
      v96 = v94;
    }
    else
    {
      *(_QWORD *)(a3 + 16) |= v92;
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 80), v103);
      v96 = 0;
      v95 = (char *)(a1 + 5);
    }
    v97 = *v110;
    if ( (*v110 & 1) == 0 )
    {
      RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), (__int64)&v104);
      v97 = *v95;
    }
    v24 = v112;
    v115 = v101;
    if ( v96 < 0 )
    {
      v24 = v101 + v112;
      v115 = 0;
    }
    if ( (v97 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive((int *)(a2 + 8), *(unsigned __int8 *)(a1 + 3), a6);
    *(_DWORD *)(a4 + 8) &= ~0x200u;
    LODWORD(v26) = v115;
  }
  *(_WORD *)(a4 + 2) = WORD1(RtlpHpHeapGlobals) ^ v26 ^ HIWORD(v10);
  if ( !v24 )
    return (unsigned int)v26;
  v30 = 16LL * (unsigned int)v26 + a4;
  if ( !(_DWORD)v26 )
    v26 = (v30 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v30) >> 32;
  *(_QWORD *)v30 = v30 ^ RtlpHpHeapGlobals ^ ((v24 << 16) | (((unsigned __int16)v26 | 0x10000LL) << 32));
  *(_DWORD *)(v30 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v30 ^ ((unsigned int)(v30 - a3) >> 12));
  v31 = v30 + 16LL * v24;
  if ( v31 < a3 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a3 + 32) + 3) )
    *(_WORD *)(v31 + 4) = WORD2(v31) ^ WORD2(RtlpHpHeapGlobals) ^ v24;
  for ( i = 0; ; i = v35 )
  {
    v32 = a3 + 48;
    v33 = (unsigned __int16)((RtlpHpHeapGlobals ^ *(_QWORD *)v30 ^ v30) >> 32);
    v34 = ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v30 ^ (unsigned int)v30) >> 16;
    v35 = v34;
    v107 = v34;
    *(_BYTE *)(v30 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v30);
    if ( (_DWORD)v33 )
    {
      v36 = v30 - 16LL * (unsigned int)v33;
      v37 = RtlpHpHeapGlobals ^ *(_QWORD *)v36 ^ v36;
      if ( (v37 & 0xFF000000000000LL) != 0 )
      {
        v34 = v35;
      }
      else
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)(v36 + 8));
        v38 = *(__int16 *)(a1 + 6);
        v39 = (v36 - a3 + 4127) & 0xFFFFF000;
        v33 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v36 ^ *(_DWORD *)v36) >> 16));
        v40 = ((v36 + v33 - a3) & 0xFFFFF000) - v39;
        if ( v39 >= (((_DWORD)v36 + (_DWORD)v33 - (_DWORD)a3) & 0xFFFFF000) )
          v40 = 0;
        v41 = ((unsigned __int64)(v33 + 4095) >> 12)
            + (unsigned __int16)(RtlpHpHeapGlobals ^ v36 ^ *(_DWORD *)v36)
            - (v40 >> 12)
            - (((v36 & 0xFFF) + v33 + 4095) >> 12);
        if ( (_WORD)v38 )
          _InterlockedAdd64((volatile signed __int64 *)(v38 + a1 + 32), v41);
        else
          *(_QWORD *)(a1 + 88) += v41;
        v32 = a3 + 48;
        v30 = v36;
        v35 += WORD1(v37);
        v34 = v107;
      }
    }
    v42 = *(_WORD *)(a3 + 32);
    v43 = v30 + 16LL * v35;
    if ( v43 < v32 + 16 * (unsigned __int64)v42 )
    {
      v108 = RtlpHpHeapGlobals ^ *(_QWORD *)v43 ^ v43;
      if ( (v108 & 0xFF000000000000LL) == 0 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)(v43 + 8));
        v44 = *(__int16 *)(a1 + 6);
        v45 = (v43 - a3 + 4127) & 0xFFFFF000;
        v33 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v43 ^ *(_DWORD *)v43) >> 16));
        v46 = ((v43 + v33 - a3) & 0xFFFFF000) - v45;
        if ( v45 >= (((_DWORD)v43 + (_DWORD)v33 - (_DWORD)a3) & 0xFFFFF000) )
          v46 = 0;
        v47 = ((unsigned __int64)(v33 + 4095) >> 12)
            + (unsigned __int16)(*(_DWORD *)v43 ^ RtlpHpHeapGlobals ^ v43)
            - (v46 >> 12)
            - (((v43 & 0xFFF) + v33 + 4095) >> 12);
        if ( (_WORD)v44 )
          _InterlockedAdd64((volatile signed __int64 *)(v44 + a1 + 32), v47);
        else
          *(_QWORD *)(a1 + 88) += v47;
        v32 = a3 + 48;
        v42 = *(_WORD *)(a3 + 32);
        v35 += WORD1(v108);
      }
    }
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      v48 = v30 + 16LL * v35;
      v109 = (_DWORD *)v48;
      if ( v48 < v32 + 16 * (unsigned __int64)v42 )
      {
        v49 = RtlpHpHeapGlobals ^ *(_QWORD *)v48 ^ v48;
        if ( (v49 & 0xFF000000000000LL) == 0 )
        {
          RtlRbRemoveNode((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)(v48 + 8));
          v50 = ((_DWORD)v109 - a3 + 4127) & 0xFFFFF000;
          v51 = *(__int16 *)(a1 + 6);
          v32 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v109 ^ *v109) >> 16));
          v52 = (((_DWORD)v109 + 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v109 ^ *v109) >> 16)) - a3) & 0xFFFFF000)
              - v50;
          if ( v50 >= (((_DWORD)v109
                      + 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v109 ^ *v109) >> 16))
                      - (_DWORD)a3) & 0xFFFFF000) )
            v52 = 0;
          v53 = ((unsigned __int64)(v32 + 4095) >> 12)
              + (unsigned __int16)(RtlpHpHeapGlobals ^ (unsigned __int16)v109 ^ *v109)
              - (v52 >> 12)
              - ((v32 + (unsigned __int64)((unsigned __int16)v109 & 0xFFF) + 4095) >> 12);
          v33 = v53;
          if ( (_WORD)v51 )
            _InterlockedAdd64((volatile signed __int64 *)(v51 + a1 + 32), v53);
          else
            *(_QWORD *)(a1 + 88) += v53;
          v35 += WORD1(v49);
        }
      }
    }
    if ( v34 != v35 )
    {
      v87 = v30 + 16LL * v35;
      *(_WORD *)(v30 + 2) = WORD1(RtlpHpHeapGlobals) ^ v35 ^ WORD1(v30);
      if ( v87 < a3 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a3 + 32) )
        *(_WORD *)(v87 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v87) ^ v35;
    }
    if ( v35 == *(unsigned __int16 *)(a3 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a3, v33, v32);
      return v115;
    }
    if ( v35 <= i )
      break;
    v84 = (v30 - a3 + 4127) & 0xFFFFF000;
    v85 = (v30 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v30) ^ *(unsigned __int16 *)(v30 + 2)) - a3) & 0xFFFFF000;
    if ( v84 >= v85 )
      break;
    v86 = *(_QWORD *)(a3 + 16) & (-1LL << (v84 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                  - (unsigned __int8)((unsigned __int64)(v85 - 1) >> 12)));
    if ( v85 - v84 < 0x1000 )
      break;
    if ( !v86 )
      break;
    v114 = __popcnt(v86);
    if ( !(unsigned int)RtlpHpVsCommitLimitCheck(a1, a3, v114) )
      break;
    *(_BYTE *)(v30 + 6) = BYTE6(RtlpHpHeapGlobals) ^ BYTE6(v30) ^ 1;
    *(_DWORD *)(v30 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v30 ^ ((unsigned int)(v30 - a3) >> 12)) | 0x200;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), a6);
    RtlpHpVsSubsegmentCommitPages(a1, a3, v86, v114, 0);
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive((int *)(a2 + 8), *(unsigned __int8 *)(a1 + 3), a6);
    *(_DWORD *)(v30 + 8) &= ~0x200u;
  }
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 || ((v30 + 32) & 0xFFF) == 0 )
    goto LABEL_63;
  if ( ((v30 + 4111) & 0xFFFFFFFFFFFFF000uLL) - v30 < 16
                                                    * (unsigned __int64)(WORD1(RtlpHpHeapGlobals) ^ WORD1(v30) ^ *(unsigned __int16 *)(v30 + 2)) )
  {
    v54 = ((v30 + 4111) & 0xFFFFFFFFFFFFF000uLL) - 32;
    v98 = (__int64)(v54 - v30) >> 4;
    v99 = (WORD1(RtlpHpHeapGlobals) ^ WORD1(v30) ^ *(unsigned __int16 *)(v30 + 2)) - v98;
    *(_WORD *)(v30 + 2) = WORD1(RtlpHpHeapGlobals) ^ v98 ^ WORD1(v30);
    *(_OWORD *)v54 = 0LL;
    *(_OWORD *)(v54 + 16) = 0LL;
    *(_WORD *)(v54 + 2) = v99;
    v100 = v54 + 16LL * v99;
    *(_WORD *)(v54 + 4) = v98;
    *(_QWORD *)v54 ^= RtlpHpHeapGlobals ^ v54;
    if ( v100 < a3 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a3 + 32) + 3) )
      *(_WORD *)(v100 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v100) ^ v99;
  }
  else
  {
    v54 = 0LL;
  }
  if ( v54 )
  {
    v55 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v54) ^ *(unsigned __int16 *)(v54 + 2));
    v56 = v55 + (v54 & 0xFFF) + 4095;
    v57 = (v54 - a3 + 4127) & 0xFFFFF000;
    v58 = (v54 + v55 - a3) & 0xFFFFF000;
    v59 = (v56 >> 12)
        - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v54) ^ *(unsigned __int16 *)(v54 + 2))) + 4095) >> 12);
    if ( v57 < v58 )
    {
      v60 = v58 - v57;
      v61 = *(_QWORD *)(a3 + 16) & (-1LL << (v57 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v58 - 1) >> 12)));
    }
    else
    {
      v60 = 0;
      v61 = 0LL;
    }
    v62 = *(__int16 *)(a1 + 6);
    v63 = __popcnt(v61);
    v64 = v60 >> 12;
    if ( (_WORD)v62 )
      _InterlockedAdd64((volatile signed __int64 *)(v62 + a1 + 32), v63);
    else
      *(_QWORD *)(a1 + 88) += v63;
    v65 = (_RTL_RB_TREE *)a2;
    *(_WORD *)v54 = RtlpHpHeapGlobals ^ v54 ^ (v59 + v64 - v63);
    v66 = *(_QWORD *)(a2 + 24);
    if ( (v66 & 1) == 0 )
    {
      v67 = *(_QWORD *)(a2 + 16);
      goto LABEL_57;
    }
    v68 = *(_QWORD *)(a2 + 16);
    if ( v68 )
    {
      v67 = v68 ^ (a2 + 16);
LABEL_57:
      v68 = v67;
      v69 = v66 & 1;
      v70 = 0;
      if ( !v67 )
        goto LABEL_62;
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v54 ^ (unsigned int)v54) < ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v68 - 8) ^ ((_DWORD)v68 - 8)) )
        {
          v71 = *(_QWORD *)v68;
          if ( v69 )
          {
            if ( !v71 )
              break;
            v71 ^= v68;
          }
          if ( !v71 )
            break;
        }
        else
        {
          v71 = *(_QWORD *)(v68 + 8);
          if ( v69 )
          {
            if ( !v71 )
              goto LABEL_61;
            v71 ^= v68;
          }
          if ( !v71 )
          {
LABEL_61:
            v70 = 1;
            goto LABEL_62;
          }
        }
        v68 = v71;
      }
    }
    v70 = 0;
LABEL_62:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)v68, v70, (PRTL_BALANCED_NODE)(v54 + 8));
  }
  else
  {
LABEL_63:
    v65 = (_RTL_RB_TREE *)a2;
  }
  v72 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v30) ^ *(unsigned __int16 *)(v30 + 2));
  v73 = v72 + (v30 & 0xFFF) + 4095;
  v74 = (v30 - a3 + 4127) & 0xFFFFF000;
  v75 = (v30 + v72 - a3) & 0xFFFFF000;
  v76 = (v73 >> 12)
      - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v30) ^ *(unsigned __int16 *)(v30 + 2))) + 4095) >> 12);
  if ( v74 < v75 )
  {
    v11 = v75 - v74;
    v77 = *(_QWORD *)(a3 + 16) & (-1LL << (v74 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                  - (unsigned __int8)((unsigned __int64)(v75 - 1) >> 12)));
  }
  else
  {
    v77 = 0LL;
  }
  v78 = __popcnt(v77);
  v79 = *(__int16 *)(a1 + 6);
  v80 = v11 >> 12;
  if ( (_WORD)v79 )
    _InterlockedAdd64((volatile signed __int64 *)(v79 + a1 + 32), v78);
  else
    *(_QWORD *)(a1 + 88) += v78;
  *(_WORD *)v30 = RtlpHpHeapGlobals ^ v30 ^ (v76 + v80 - v78);
  Root = (unsigned __int64)v65[1].Root;
  if ( ((__int64)v65[1].Min & 1) == 0 )
  {
LABEL_69:
    v82 = 0;
    if ( !Root )
      goto LABEL_74;
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v30 ^ (unsigned int)v30) < ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(Root - 8) ^ ((_DWORD)Root - 8)) )
      {
        v83 = *(_QWORD *)Root;
        if ( ((__int64)v65[1].Min & 1) != 0 )
        {
          if ( !v83 )
            goto LABEL_125;
          v83 ^= Root;
        }
        if ( !v83 )
          goto LABEL_125;
      }
      else
      {
        v83 = *(_QWORD *)(Root + 8);
        if ( ((__int64)v65[1].Min & 1) != 0 )
        {
          if ( !v83 )
            goto LABEL_73;
          v83 ^= Root;
        }
        if ( !v83 )
        {
LABEL_73:
          v82 = 1;
          goto LABEL_74;
        }
      }
      Root = v83;
    }
  }
  if ( Root )
  {
    Root ^= (unsigned __int64)&v65[1];
    goto LABEL_69;
  }
LABEL_125:
  v82 = 0;
LABEL_74:
  RtlRbInsertNodeEx(v65 + 1, (PRTL_BALANCED_NODE)Root, v82, (PRTL_BALANCED_NODE)(v30 + 8));
  return v115;
}
