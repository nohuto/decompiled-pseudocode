/*
 * XREFs of RtlpHpVsChunkFree @ 0x1403645D0
 * Callers:
 *     RtlpHpVsSlotFreeList @ 0x14035C0D0 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x14035C460 (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140336C60 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403628A0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1403651C0 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     RtlpHpVsCommitLimitCheck @ 0x14036683C (RtlpHpVsCommitLimitCheck.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1403682CC (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1403684A4 (RtlpHpVsSubsegmentCleanup.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, char a5, __int64 a6)
{
  __int64 v8; // r9
  _RTL_RB_TREE *v10; // r10
  __int64 v11; // r8
  unsigned int v12; // r12d
  unsigned int v13; // edi
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r11
  unsigned int v17; // ecx
  __int64 v18; // r9
  unsigned int v19; // edx
  int v20; // ecx
  unsigned __int16 v21; // cx
  unsigned int *v22; // rsi
  __int64 v23; // r14
  __int64 v24; // r11
  unsigned int v25; // edx
  unsigned int v26; // eax
  int v27; // ecx
  unsigned int *v28; // r14
  __int64 v29; // rsi
  __int64 v30; // r11
  unsigned int v31; // edx
  unsigned int v32; // eax
  int v33; // ecx
  unsigned __int64 v34; // r9
  __int64 v35; // r8
  unsigned __int64 v36; // r11
  unsigned int v37; // r10d
  unsigned int v38; // r8d
  __int16 v39; // r11
  unsigned int v40; // edx
  unsigned __int64 v41; // r8
  __int64 v42; // rax
  int v43; // ecx
  unsigned int v44; // edx
  _RTL_RB_TREE *v45; // rsi
  __int64 v46; // rax
  __int64 v47; // r11
  __int64 v48; // rdx
  int v49; // r8d
  BOOLEAN v50; // al
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // r9d
  __int16 v54; // r11
  unsigned int v55; // r10d
  unsigned int v56; // edx
  unsigned __int64 v57; // rax
  int v58; // ecx
  __int64 v59; // rax
  unsigned int v60; // edx
  _RTL_BALANCED_NODE *Min; // rax
  __int64 Root; // r10
  unsigned __int64 v63; // rdx
  int v64; // r9d
  BOOLEAN v65; // al
  unsigned __int64 v66; // rax
  unsigned int v68; // r9d
  unsigned int v69; // r8d
  unsigned __int64 v70; // rsi
  unsigned int v71; // r12d
  unsigned __int64 v72; // rdx
  __int64 v73; // rcx
  unsigned int v74; // edx
  unsigned __int64 v75; // r8
  unsigned int v76; // [rsp+70h] [rbp+8h]

  v76 = 0;
  v8 = a3 + 48;
  v10 = (_RTL_RB_TREE *)a2;
  while ( 1 )
  {
    v11 = (unsigned __int16)((a4 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a4) >> 32);
    v12 = ((unsigned int)a4 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a4) >> 16;
    *(_BYTE *)(a4 + 6) = BYTE6(a4) ^ BYTE6(RtlpHpHeapGlobals);
    v13 = v12;
    if ( (_DWORD)v11 )
    {
      v14 = a4 - 16LL * (unsigned int)v11;
      v15 = v14 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v14;
      if ( (v15 & 0xFF000000000000LL) == 0 )
      {
        RtlRbRemoveNode(v10 + 1, (PRTL_BALANCED_NODE)(v14 + 8));
        v11 = *(unsigned int *)v14;
        v16 = *(__int16 *)(a1 + 6);
        v17 = (v14 - a3 + 4127) & 0xFFFFF000;
        v19 = ((v14 + 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v14 ^ *(_DWORD *)v14) >> 16)) - a3) & 0xFFFFF000)
            - v17;
        if ( v17 >= (((_DWORD)v14
                    + 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v14 ^ *(_DWORD *)v14) >> 16))
                    - (_DWORD)a3) & 0xFFFFF000) )
          v19 = 0;
        v18 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v14 ^ *(_DWORD *)v14) >> 16));
        v20 = ((unsigned __int64)(v18 + 4095) >> 12)
            + (unsigned __int16)(RtlpHpHeapGlobals ^ v11 ^ v14)
            - (v19 >> 12)
            - (((v14 & 0xFFF) + v18 + 4095) >> 12);
        if ( (_WORD)v16 )
          _InterlockedAdd64((volatile signed __int64 *)(v16 + a1 + 32), v20);
        else
          *(_QWORD *)(a1 + 88) += v20;
        v10 = (_RTL_RB_TREE *)a2;
        v8 = a3 + 48;
        a4 = v14;
        v13 = WORD1(v15) + v12;
      }
    }
    v21 = *(_WORD *)(a3 + 32);
    v22 = (unsigned int *)(a4 + 16LL * v13);
    if ( (unsigned __int64)v22 < v8 + 16 * (unsigned __int64)v21 )
    {
      v23 = (unsigned __int64)v22 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v22;
      if ( (v23 & 0xFF000000000000LL) == 0 )
      {
        RtlRbRemoveNode(v10 + 1, (PRTL_BALANCED_NODE)(v22 + 2));
        v24 = *(__int16 *)(a1 + 6);
        v25 = ((_DWORD)v22 - a3 + 4127) & 0xFFFFF000;
        v11 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v22 ^ *v22) >> 16));
        v26 = (((_DWORD)v22 + v11 - a3) & 0xFFFFF000) - v25;
        if ( v25 >= (((_DWORD)v22 + (_DWORD)v11 - (_DWORD)a3) & 0xFFFFF000) )
          v26 = 0;
        v27 = ((unsigned __int64)(v11 + 4095) >> 12)
            + (unsigned __int16)((unsigned __int16)v22 ^ RtlpHpHeapGlobals ^ *v22)
            - (v26 >> 12)
            - (((unsigned __int64)((unsigned __int16)v22 & 0xFFF) + v11 + 4095) >> 12);
        if ( (_WORD)v24 )
          _InterlockedAdd64((volatile signed __int64 *)(v24 + a1 + 32), v27);
        else
          *(_QWORD *)(a1 + 88) += v27;
        v21 = *(_WORD *)(a3 + 32);
        v8 = a3 + 48;
        v13 += WORD1(v23);
      }
    }
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      v28 = (unsigned int *)(a4 + 16LL * v13);
      if ( (unsigned __int64)v28 < v8 + 16 * (unsigned __int64)v21 )
      {
        v29 = (unsigned __int64)v28 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v28;
        if ( (v29 & 0xFF000000000000LL) == 0 )
        {
          RtlRbRemoveNode((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)(v28 + 2));
          v30 = *(__int16 *)(a1 + 6);
          v31 = ((_DWORD)v28 - a3 + 4127) & 0xFFFFF000;
          v11 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v28 ^ *v28) >> 16));
          v32 = (((_DWORD)v28 + v11 - a3) & 0xFFFFF000) - v31;
          if ( v31 >= (((_DWORD)v28 + (_DWORD)v11 - (_DWORD)a3) & 0xFFFFF000) )
            v32 = 0;
          v8 = (unsigned int)v28 ^ (unsigned int)RtlpHpHeapGlobals ^ *v28;
          v33 = ((unsigned __int64)(v11 + 4095) >> 12)
              + (unsigned __int16)((unsigned __int16)v28 ^ RtlpHpHeapGlobals ^ *(_WORD *)v28)
              - (v32 >> 12)
              - (((unsigned __int64)((unsigned __int16)v28 & 0xFFF) + v11 + 4095) >> 12);
          if ( (_WORD)v30 )
            _InterlockedAdd64((volatile signed __int64 *)(v30 + a1 + 32), v33);
          else
            *(_QWORD *)(a1 + 88) += v33;
          v13 += WORD1(v29);
        }
      }
    }
    if ( v12 != v13 )
    {
      v72 = a4 + 16LL * v13;
      *(_WORD *)(a4 + 2) = WORD1(RtlpHpHeapGlobals) ^ v13 ^ WORD1(a4);
      if ( v72 < a3 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a3 + 32) )
        *(_WORD *)(v72 + 4) = WORD2(v72) ^ WORD2(RtlpHpHeapGlobals) ^ v13;
    }
    if ( v13 == *(unsigned __int16 *)(a3 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a3, v11, v8);
      return a3;
    }
    if ( v13 <= v76 )
      break;
    v68 = (a4 - a3 + 4127) & 0xFFFFF000;
    v69 = (a4 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a4) ^ *(unsigned __int16 *)(a4 + 2)) - a3) & 0xFFFFF000;
    if ( v68 >= v69 )
      break;
    v70 = *(_QWORD *)(a3 + 16) & (-1LL << (v68 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                  - (unsigned __int8)((unsigned __int64)(v69 - 1) >> 12)));
    if ( v69 - v68 < 0x1000 )
      break;
    if ( !v70 )
      break;
    v71 = __popcnt(v70);
    if ( (a5 & 1) == 0 && !(unsigned int)RtlpHpVsCommitLimitCheck(a1, a3, v71) )
      break;
    *(_BYTE *)(a4 + 6) = BYTE6(a4) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
    *(_DWORD *)(a4 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ a4 ^ ((unsigned int)(a4 - a3) >> 12)) | 0x200;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(unsigned __int8 *)(a1 + 3), a6);
    RtlpHpVsSubsegmentCommitPages(a1, a3, v70, v71, 0);
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive((int *)(a2 + 8), *(unsigned __int8 *)(a1 + 3), a6);
    *(_DWORD *)(a4 + 8) &= ~0x200u;
    v8 = a3 + 48;
    v10 = (_RTL_RB_TREE *)a2;
    v76 = v13;
  }
  if ( (*(_BYTE *)(a1 + 4) & 1) == 0 || ((a4 + 32) & 0xFFF) == 0 )
    goto LABEL_44;
  if ( ((a4 + 4111) & 0xFFFFFFFFFFFFF000uLL) - a4 < 16
                                                  * (unsigned __int64)(WORD1(RtlpHpHeapGlobals) ^ WORD1(a4) ^ *(unsigned __int16 *)(a4 + 2)) )
  {
    v34 = ((a4 + 4111) & 0xFFFFFFFFFFFFF000uLL) - 32;
    v73 = (__int64)(v34 - a4) >> 4;
    v74 = (WORD1(RtlpHpHeapGlobals) ^ WORD1(a4) ^ *(unsigned __int16 *)(a4 + 2)) - v73;
    *(_WORD *)(a4 + 2) = v73 ^ WORD1(RtlpHpHeapGlobals) ^ WORD1(a4);
    *(_OWORD *)v34 = 0LL;
    *(_OWORD *)(v34 + 16) = 0LL;
    *(_WORD *)(v34 + 2) = v74;
    *(_WORD *)(v34 + 4) = v73;
    *(_QWORD *)v34 ^= RtlpHpHeapGlobals ^ v34;
    v75 = v34 + 16LL * v74;
    if ( v75 < a3 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a3 + 32) + 3) )
      *(_WORD *)(v75 + 4) = WORD2(RtlpHpHeapGlobals) ^ WORD2(v75) ^ v74;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v34 )
  {
    v35 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v34) ^ *(unsigned __int16 *)(v34 + 2));
    v36 = v35 + (v34 & 0xFFF) + 4095;
    v37 = (v34 - a3 + 4127) & 0xFFFFF000;
    v38 = (v34 + v35 - a3) & 0xFFFFF000;
    v39 = (v36 >> 12)
        - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v34) ^ *(unsigned __int16 *)(v34 + 2))) + 4095) >> 12);
    if ( v37 < v38 )
    {
      v40 = v38 - v37;
      v41 = *(_QWORD *)(a3 + 16) & (-1LL << (v37 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                    - (unsigned __int8)((unsigned __int64)(v38 - 1) >> 12)));
    }
    else
    {
      v40 = 0;
      v41 = 0LL;
    }
    v42 = *(__int16 *)(a1 + 6);
    v43 = __popcnt(v41);
    v44 = v40 >> 12;
    if ( (_WORD)v42 )
      _InterlockedAdd64((volatile signed __int64 *)(v42 + a1 + 32), v43);
    else
      *(_QWORD *)(a1 + 88) += v43;
    v45 = (_RTL_RB_TREE *)a2;
    *(_WORD *)v34 = RtlpHpHeapGlobals ^ v34 ^ (v39 + v44 - v43);
    v46 = *(_QWORD *)(a2 + 24);
    if ( (v46 & 1) == 0 )
    {
      v47 = *(_QWORD *)(a2 + 16);
      goto LABEL_38;
    }
    v48 = *(_QWORD *)(a2 + 16);
    if ( v48 )
    {
      v47 = v48 ^ (a2 + 16);
LABEL_38:
      v48 = v47;
      v49 = v46 & 1;
      v50 = 0;
      if ( !v47 )
        goto LABEL_43;
      while ( 1 )
      {
        if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)v34 ^ (unsigned int)v34) < ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v48 - 8) ^ ((_DWORD)v48 - 8)) )
        {
          v51 = *(_QWORD *)v48;
          if ( v49 )
          {
            if ( !v51 )
              break;
            v51 ^= v48;
          }
          if ( !v51 )
            break;
        }
        else
        {
          v51 = *(_QWORD *)(v48 + 8);
          if ( v49 )
          {
            if ( !v51 )
              goto LABEL_42;
            v51 ^= v48;
          }
          if ( !v51 )
          {
LABEL_42:
            v50 = 1;
            goto LABEL_43;
          }
        }
        v48 = v51;
      }
    }
    v50 = 0;
LABEL_43:
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)v48, v50, (PRTL_BALANCED_NODE)(v34 + 8));
  }
  else
  {
LABEL_44:
    v45 = (_RTL_RB_TREE *)a2;
  }
  v52 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)a4 ^ *(_DWORD *)a4) >> 16));
  v53 = (a4 + v52 - a3) & 0xFFFFF000;
  v54 = ((v52 + (a4 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v52 + 4095) >> 12);
  v55 = (a4 - a3 + 4127) & 0xFFFFF000;
  if ( v55 < v53 )
  {
    v56 = v53 - v55;
    v57 = *(_QWORD *)(a3 + 16) & (-1LL << (v55 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                  - (unsigned __int8)((unsigned __int64)(v53 - 1) >> 12)));
  }
  else
  {
    v56 = 0;
    v57 = 0LL;
  }
  v58 = __popcnt(v57);
  v59 = *(__int16 *)(a1 + 6);
  v60 = v56 >> 12;
  if ( (_WORD)v59 )
    _InterlockedAdd64((volatile signed __int64 *)(v59 + a1 + 32), v58);
  else
    *(_QWORD *)(a1 + 88) += v58;
  *(_WORD *)a4 = RtlpHpHeapGlobals ^ a4 ^ (v54 + v60 - v58);
  Min = v45[1].Min;
  if ( ((unsigned __int8)Min & 1) == 0 )
  {
    Root = (__int64)v45[1].Root;
    goto LABEL_51;
  }
  v63 = (unsigned __int64)v45[1].Root;
  if ( v63 )
  {
    Root = v63 ^ (unsigned __int64)&v45[1];
LABEL_51:
    v63 = Root;
    v64 = (unsigned __int8)Min & 1;
    v65 = 0;
    if ( !Root )
      goto LABEL_56;
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a4 ^ (unsigned int)a4) < ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(v63 - 8) ^ ((_DWORD)v63 - 8)) )
      {
        v66 = *(_QWORD *)v63;
        if ( v64 )
        {
          if ( !v66 )
            break;
          v66 ^= v63;
        }
        if ( !v66 )
          break;
      }
      else
      {
        v66 = *(_QWORD *)(v63 + 8);
        if ( v64 )
        {
          if ( !v66 )
            goto LABEL_55;
          v66 ^= v63;
        }
        if ( !v66 )
        {
LABEL_55:
          v65 = 1;
          goto LABEL_56;
        }
      }
      v63 = v66;
    }
  }
  v65 = 0;
LABEL_56:
  RtlRbInsertNodeEx(v45 + 1, (PRTL_BALANCED_NODE)v63, v65, (PRTL_BALANCED_NODE)(a4 + 8));
  return 0LL;
}
