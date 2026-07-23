/*
 * XREFs of RtlpHpVsChunkFree @ 0x1800697A0
 * Callers:
 *     RtlpHpVsSlotFreeInternal @ 0x180119740 (RtlpHpVsSlotFreeInternal.c)
 *     RtlpHpVsSlotCompactChunks @ 0x1801198FC (RtlpHpVsSlotCompactChunks.c)
 * Callees:
 *     RtlpHpVsSubsegmentCommitPages @ 0x180064D78 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1800656C0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlRbRemoveNode @ 0x180067980 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x18006AA90 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1800D55E0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkAlignSplit @ 0x1801101C8 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v7; // rsi
  __int64 v8; // r10
  unsigned __int64 v9; // r9
  unsigned int v11; // r14d
  unsigned int v12; // r8d
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // r11
  unsigned int v16; // edx
  __int64 v17; // r8
  unsigned int v18; // eax
  int v19; // ecx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // r11
  unsigned int v24; // edx
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // r10d
  char v28; // r11
  unsigned int v29; // r8d
  unsigned int v30; // edx
  unsigned __int64 v31; // r15
  _RTL_RB_TREE *v32; // r14
  __int64 v33; // r9
  unsigned __int64 v34; // r10
  unsigned int v35; // r8d
  unsigned int v36; // r9d
  __int16 v37; // r10
  unsigned int v38; // eax
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r8d
  unsigned int v42; // eax
  unsigned __int64 Root; // rdx
  BOOLEAN v44; // al
  unsigned __int64 v45; // rax
  unsigned __int64 v47; // rdx
  unsigned int v48; // eax
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // rax
  int v54; // eax
  BOOL v55; // eax
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  unsigned __int64 *v58; // r8
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // r12
  __int64 v61; // r15
  __int64 v62; // r11
  unsigned int v63; // edx
  unsigned int v64; // eax
  __int64 v65; // rax
  unsigned __int64 v66; // [rsp+30h] [rbp-48h]
  unsigned __int64 v67; // [rsp+38h] [rbp-40h]
  unsigned int v68; // [rsp+80h] [rbp+8h]
  unsigned int v70; // [rsp+90h] [rbp+18h]
  unsigned __int64 v71; // [rsp+90h] [rbp+18h]
  unsigned int v72; // [rsp+98h] [rbp+20h]

  v68 = 0;
  v7 = a3;
  v8 = a3 + 48;
  v9 = a2;
  while ( 1 )
  {
    v70 = ((unsigned int)a4 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a4) >> 16;
    v11 = v70;
    v12 = (unsigned __int16)((a4 ^ (unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)a4) >> 32);
    *(_BYTE *)(a4 + 6) = BYTE6(a4) ^ BYTE6(RtlpHpHeapGlobals);
    if ( v12 )
    {
      v13 = a4 - 16LL * v12;
      v14 = v13 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v13;
      if ( (v14 & 0xFF000000000000LL) == 0 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(v9 + 16), (PRTL_BALANCED_NODE)(v13 + 8));
        v15 = *(__int16 *)(a1 + 6);
        v16 = (v13 - v7 + 4127) & 0xFFFFF000;
        v17 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v13 ^ *(_DWORD *)v13) >> 16));
        v18 = ((v13 + v17 - v7) & 0xFFFFF000) - v16;
        if ( v16 >= (((_DWORD)v13 + (_DWORD)v17 - (_DWORD)v7) & 0xFFFFF000) )
          v18 = 0;
        v19 = ((unsigned __int64)(v17 + 4095) >> 12)
            + (unsigned __int16)(RtlpHpHeapGlobals ^ v13 ^ *(_DWORD *)v13)
            - (v18 >> 12)
            - (((unsigned __int64)(v13 & 0xFFF) + v17 + 4095) >> 12);
        if ( (_WORD)v15 )
          _InterlockedAdd64((volatile signed __int64 *)(v15 + a1 + 32), v19);
        else
          *(_QWORD *)(a1 + 88) += v19;
        v9 = a2;
        v8 = v7 + 48;
        a4 = v13;
        v11 = WORD1(v14) + v70;
      }
    }
    v20 = *(unsigned __int16 *)(v7 + 32);
    v21 = a4 + 16LL * v11;
    if ( v21 < v8 + 16 * v20 )
    {
      v22 = v21 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v21;
      if ( (v22 & 0xFF000000000000LL) == 0 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(v9 + 16), (PRTL_BALANCED_NODE)(v21 + 8));
        v23 = *(__int16 *)(a1 + 6);
        v24 = (v21 - v7 + 4127) & 0xFFFFF000;
        v9 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v21 ^ *(_DWORD *)v21) >> 16));
        v25 = ((v21 + v9 - v7) & 0xFFFFF000) - v24;
        if ( v24 >= (((_DWORD)v21 + (_DWORD)v9 - (_DWORD)v7) & 0xFFFFF000) )
          v25 = 0;
        v26 = ((v9 + 4095) >> 12)
            + (unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)v21 ^ v21)
            - (v25 >> 12)
            - (((v21 & 0xFFF) + v9 + 4095) >> 12);
        if ( (_WORD)v23 )
          _InterlockedAdd64((volatile signed __int64 *)(v23 + a1 + 32), v26);
        else
          *(_QWORD *)(a1 + 88) += v26;
        v20 = *(unsigned __int16 *)(v7 + 32);
        v8 = v7 + 48;
        v11 += WORD1(v22);
      }
    }
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      v60 = a4 + 16LL * v11;
      if ( v60 < v8 + 16 * (unsigned __int64)(unsigned __int16)v20 )
      {
        v61 = v60 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v60;
        if ( (v61 & 0xFF000000000000LL) == 0 )
        {
          RtlRbRemoveNode((PRTL_RB_TREE)(a2 + 16), (PRTL_BALANCED_NODE)(v60 + 8));
          v62 = *(__int16 *)(a1 + 6);
          v63 = (v60 - v7 + 4127) & 0xFFFFF000;
          v9 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v60 ^ *(_DWORD *)v60) >> 16));
          v64 = ((v60 + v9 - v7) & 0xFFFFF000) - v63;
          if ( v63 >= (((_DWORD)v60 + (_DWORD)v9 - (_DWORD)v7) & 0xFFFFF000) )
            v64 = 0;
          v20 = (unsigned int)((v9 + 4095) >> 12)
              + (unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)v60 ^ v60)
              - (v64 >> 12)
              - (unsigned int)(((v60 & 0xFFF) + v9 + 4095) >> 12);
          if ( (_WORD)v62 )
            _InterlockedAdd64((volatile signed __int64 *)(v62 + a1 + 32), (int)v20);
          else
            *(_QWORD *)(a1 + 88) += (int)v20;
          v11 += WORD1(v61);
        }
      }
    }
    if ( v70 != v11 )
    {
      v20 = v7 + 48;
      v47 = a4 + 16LL * v11;
      *(_WORD *)(a4 + 2) = WORD1(RtlpHpHeapGlobals) ^ v11 ^ WORD1(a4);
      if ( v47 < v7 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(v7 + 32) )
      {
        LODWORD(v71) = 0;
        HIDWORD(v71) = (unsigned __int16)v11;
        v20 = HIDWORD(v71);
        LOWORD(v20) = WORD2(v47) ^ WORD2(RtlpHpHeapGlobals) ^ v11;
        *(_WORD *)(v47 + 4) = v20;
      }
    }
    if ( v11 == *(unsigned __int16 *)(v7 + 32) )
    {
      v56 = *(_QWORD *)v7 ^ v7;
      v57 = *(_QWORD *)(v7 + 8) ^ v7;
      v58 = (unsigned __int64 *)(v56 + 8);
      if ( (*(_QWORD *)(v56 + 8) ^ v56) != v7 || (*(_QWORD *)v57 ^ v57) != v7 )
        __fastfail(3u);
      v59 = v57 ^ v56;
      *(_QWORD *)v57 = v59;
      *v58 = v59;
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 80), (int)-(__int64)__popcnt(*(_QWORD *)(v7 + 16)));
      return v7;
    }
    if ( v11 <= v68 )
      goto LABEL_22;
    v27 = a4 - v7;
    v28 = a4;
    v29 = (a4 + 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a4) ^ *(unsigned __int16 *)(a4 + 2)) - v7) & 0xFFFFF000;
    v9 = ((_DWORD)a4 - (_DWORD)v7 + 4127) & 0xFFFFF000;
    if ( (unsigned int)v9 >= v29 )
      goto LABEL_22;
    v30 = v29 - v9;
    v9 = (unsigned int)v9 >> 12;
    v20 = (unsigned __int8)v9;
    v31 = *(_QWORD *)(v7 + 16) & (-1LL << v9) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                         - (unsigned __int8)((unsigned __int64)(v29 - 1) >> 12)));
    if ( v30 < 0x1000 || !v31 )
      goto LABEL_22;
    v48 = __popcnt(v31);
    v72 = v48;
    if ( (a5 & 1) == 0 )
      break;
LABEL_60:
    *(_BYTE *)(a4 + 6) = BYTE6(a4) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
    *(_DWORD *)(a4 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ v28 ^ (v27 >> 12)) | 0x200;
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(a6 + 8));
      *(_QWORD *)(a6 + 8) = 0LL;
    }
    RtlpHpVsSubsegmentCommitPages(a1, (_RTL_SRWLOCK *)v7, v31, v72, 0);
    if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    {
      *(_QWORD *)(a6 + 8) = a2 + 8;
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a2 + 8));
    }
    *(_DWORD *)(a4 + 8) &= ~0x200u;
    v8 = v7 + 48;
    v9 = a2;
    v68 = v11;
  }
  if ( *(__int16 *)(v7 + 36) < 0 )
    goto LABEL_22;
  if ( *(_WORD *)(a1 + 6) )
  {
    v49 = *(_QWORD *)(a1 + 8) ^ a1;
    if ( (*(_BYTE *)(v49 + 0xD) & 8) != 0 )
    {
      v55 = 1;
    }
    else
    {
      v50 = *(__int16 *)((*(_QWORD *)(a1 + 8) ^ a1) + 0x16);
      v51 = *(_QWORD *)(v50 + v49 + 16) + *(_QWORD *)(v50 + v49 + 24);
      v52 = *(_QWORD *)(v50 + v49 + 8);
      v53 = *(_QWORD *)(v50 + (*(_QWORD *)(a1 + 8) ^ a1) + 8) >> *(_BYTE *)((*(_QWORD *)(a1 + 8) ^ a1) + 0xB);
      if ( v53 <= 8 )
        v53 = 8LL;
      v9 = v52 >> *(_BYTE *)((*(_QWORD *)(a1 + 8) ^ a1) + 0xC);
      if ( v9 <= 8 )
        v9 = 8LL;
      v20 = v51 + v72;
      v67 = v9;
      v66 = v20;
      if ( v20 <= v53 )
      {
        v55 = 0;
      }
      else
      {
        v54 = RtlpHpEnvCompactionSchedule();
        v27 = a4 - v7;
        v28 = a4;
        if ( v54 < 0 )
        {
          v55 = 1;
        }
        else
        {
          v20 = v66;
          v55 = v66 > v67;
        }
      }
    }
    if ( !v55 )
      goto LABEL_22;
    goto LABEL_60;
  }
  v20 = *(_QWORD *)(a1 + 80) >> 7;
  if ( v20 <= 8 )
    v20 = 8LL;
  if ( *(_QWORD *)(a1 + 88) + (unsigned __int64)v48 > v20 )
    goto LABEL_60;
LABEL_22:
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 && ((a4 + 32) & 0xFFF) != 0 )
  {
    v65 = RtlpHpVsChunkAlignSplit(v20, v7, a4, v9);
    v32 = (_RTL_RB_TREE *)a2;
    if ( v65 )
      RtlpHpVsFreeChunkInsert(a1, a2, v7, v65);
  }
  else
  {
    v32 = (_RTL_RB_TREE *)a2;
  }
  v33 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a4) ^ *(unsigned __int16 *)(a4 + 2));
  v34 = v33 + (a4 & 0xFFF) + 4095;
  v35 = (a4 - v7 + 4127) & 0xFFFFF000;
  v36 = (a4 + v33 - v7) & 0xFFFFF000;
  v37 = (v34 >> 12)
      - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a4) ^ *(unsigned __int16 *)(a4 + 2))) + 4095) >> 12);
  if ( v35 >= v36 )
  {
    v38 = 0;
    v39 = 0LL;
  }
  else
  {
    v38 = v36 - v35;
    v39 = *(_QWORD *)(v7 + 16) & (-1LL << (v35 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                  - (unsigned __int8)((unsigned __int64)(v36 - 1) >> 12)));
  }
  v40 = *(__int16 *)(a1 + 6);
  v41 = __popcnt(v39);
  v42 = v38 >> 12;
  if ( (_WORD)v40 )
    _InterlockedAdd64((volatile signed __int64 *)(v40 + a1 + 32), v41);
  else
    *(_QWORD *)(a1 + 88) += v41;
  *(_WORD *)a4 = RtlpHpHeapGlobals ^ a4 ^ (v37 + v42 - v41);
  Root = (unsigned __int64)v32[1].Root;
  if ( ((__int64)v32[1].Min & 1) == 0 )
  {
LABEL_29:
    v44 = 0;
    if ( !Root )
      goto LABEL_39;
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a4 ^ (unsigned int)a4) >= ((unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)(Root - 8) ^ ((_DWORD)Root - 8)) )
      {
        v45 = *(_QWORD *)(Root + 8);
        if ( ((__int64)v32[1].Min & 1) != 0 )
        {
          if ( !v45 )
          {
LABEL_38:
            v44 = 1;
            goto LABEL_39;
          }
          v45 ^= Root;
        }
        if ( !v45 )
          goto LABEL_38;
      }
      else
      {
        v45 = *(_QWORD *)Root;
        if ( ((__int64)v32[1].Min & 1) != 0 )
        {
          if ( !v45 )
            goto LABEL_65;
          v45 ^= Root;
        }
        if ( !v45 )
          goto LABEL_65;
      }
      Root = v45;
    }
  }
  if ( Root )
  {
    Root ^= (unsigned __int64)&v32[1];
    goto LABEL_29;
  }
LABEL_65:
  v44 = 0;
LABEL_39:
  RtlRbInsertNodeEx(v32 + 1, (PRTL_BALANCED_NODE)Root, v44, (PRTL_BALANCED_NODE)(a4 + 8));
  return 0LL;
}
