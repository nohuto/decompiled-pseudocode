/*
 * XREFs of HalpInterruptParseMadt @ 0x140554374
 * Callers:
 *     HalpInterruptParseAcpiTables @ 0x1405542D4 (HalpInterruptParseAcpiTables.c)
 * Callees:
 *     HalpInterruptGsiToLine @ 0x1403733E0 (HalpInterruptGsiToLine.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     HalpMap @ 0x140460358 (HalpMap.c)
 *     HalpMmAllocateMemoryInternal @ 0x140540620 (HalpMmAllocateMemoryInternal.c)
 *     HalpInterruptBlockSmtSiblings @ 0x140553B70 (HalpInterruptBlockSmtSiblings.c)
 *     HalpInterruptSortProcessorTable @ 0x140554D64 (HalpInterruptSortProcessorTable.c)
 */

__int64 __fastcall HalpInterruptParseMadt(__int64 a1, int a2)
{
  __int64 v2; // r12
  __int64 v3; // rdi
  unsigned int v4; // ebp
  unsigned __int64 v5; // r12
  unsigned int v6; // r13d
  int v7; // r8d
  _BYTE *v9; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  _BYTE *v12; // r9
  char *v13; // rdx
  char v14; // al
  bool v15; // zf
  unsigned int v17; // r10d
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 v25; // rdi
  unsigned int *v26; // rax
  _DWORD *v27; // rdx
  unsigned int v28; // r11d
  __int64 v29; // r9
  unsigned int v30; // ecx
  unsigned __int8 *v31; // r8
  _BYTE *v32; // r14
  __int64 v33; // rcx
  _BYTE *v34; // rdi
  char v35; // al
  char v36; // dl
  _DWORD *v37; // rcx
  int v38; // eax
  ULONG_PTR v39; // rsi
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  int v42; // eax
  __int64 MemoryInternal; // rax
  __int64 v44; // rcx
  char v45; // al
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // eax
  int v49; // edx
  __int16 v50; // ax
  int v51; // eax
  __int16 v52; // ax
  BOOL v53; // eax
  __int64 *v54; // rax
  unsigned int i; // r8d
  __int64 v56; // r8
  unsigned int v57; // esi
  int v58; // ebp
  __int64 v59; // r9
  _OWORD *v60; // rcx
  _OWORD *v61; // rax
  __int128 v62; // xmm2
  __int128 v63; // xmm3
  __int128 v64; // xmm4
  __int128 v65; // xmm5
  unsigned int v66; // edi
  _DWORD *v67; // rdx
  unsigned int v68; // eax
  ULONG_PTR v69; // rdx
  __int64 v70; // r10
  ULONG_PTR v71; // rax
  unsigned __int64 v72; // rcx
  __int128 v73; // xmm2
  __int128 v74; // xmm3
  __int128 v75; // xmm4
  __int128 v76; // xmm5
  ULONG_PTR v77; // r14
  __int64 v78; // r8
  __int64 v79; // r9
  _DWORD *v80; // rdx
  unsigned int v81; // eax
  ULONG_PTR v82; // rdx
  ULONG_PTR v83; // rax
  unsigned __int64 v84; // rcx
  __int128 v85; // xmm2
  __int128 v86; // xmm3
  __int128 v87; // xmm4
  __int128 v88; // xmm5
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v92; // [rsp+78h] [rbp+10h]

  v2 = *(unsigned int *)(a1 + 4);
  v3 = a1 + 44;
  v91 = 0LL;
  v4 = 0;
  v92 = 0;
  v5 = a1 + v2;
  v6 = 0;
  v7 = 0;
  v9 = (_BYTE *)(a1 + 44);
  if ( a2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v31 = v9 + 2;
        if ( (unsigned __int64)(v9 + 2) > v5
          || (v32 = v9 + 1, v33 = (unsigned __int8)v9[1], (unsigned __int8)v33 < 2u)
          || (unsigned __int64)&v9[v33] > v5 )
        {
          if ( (unsigned int)HalpInterruptProcessorCount > 1 )
          {
            for ( i = 0; i < (unsigned int)HalpInterruptProcessorCount; ++i )
            {
              if ( *(_DWORD *)(((unsigned __int64)i << 6) + HalpInterruptProcessorState + 8) == *(_DWORD *)HalpInterruptLocalIds )
              {
                v6 = i;
                break;
              }
            }
            v56 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore - 1);
            v57 = ~(KeGetCurrentPrcb()->LogicalProcessorsPerCore * KeGetCurrentPrcb()->CoresPerPhysicalProcessor - 1);
            v58 = v57 & *(_DWORD *)HalpInterruptLocalIds;
            v59 = (unsigned int)v56 & *(_DWORD *)HalpInterruptLocalIds;
            if ( v6 )
            {
              v60 = (_OWORD *)HalpInterruptProcessorState;
              v61 = (_OWORD *)(HalpInterruptProcessorState + ((unsigned __int64)v6 << 6));
              v62 = *(_OWORD *)HalpInterruptProcessorState;
              v63 = *(_OWORD *)(HalpInterruptProcessorState + 16);
              v64 = *(_OWORD *)(HalpInterruptProcessorState + 32);
              v65 = *(_OWORD *)(HalpInterruptProcessorState + 48);
              *(_OWORD *)HalpInterruptProcessorState = *v61;
              v60[1] = v61[1];
              v60[2] = v61[2];
              v60[3] = v61[3];
              *v61 = v62;
              v61[1] = v63;
              v61[2] = v64;
              v61[3] = v65;
            }
            v66 = 1;
            if ( (unsigned int)HalpInterruptProcessorCount > 1 )
            {
              v67 = (_DWORD *)(HalpInterruptProcessorState + 72);
              do
              {
                if ( ((unsigned int)v56 & *v67) != (_DWORD)v59 )
                  break;
                ++v66;
                v67 += 16;
              }
              while ( v66 < (unsigned int)HalpInterruptProcessorCount );
            }
            v68 = v66 + 1;
            if ( v66 + 1 < (unsigned int)HalpInterruptProcessorCount )
            {
              v69 = HalpInterruptProcessorState + ((unsigned __int64)v68 << 6);
              v70 = (unsigned int)HalpInterruptProcessorCount - v68;
              do
              {
                if ( ((unsigned int)v56 & *(_DWORD *)(v69 + 8)) == (_DWORD)v59 )
                {
                  v71 = HalpInterruptProcessorState;
                  v72 = (unsigned __int64)v66++ << 6;
                  v73 = *(_OWORD *)(v72 + HalpInterruptProcessorState);
                  v74 = *(_OWORD *)(v72 + HalpInterruptProcessorState + 16);
                  v75 = *(_OWORD *)(v72 + HalpInterruptProcessorState + 32);
                  v76 = *(_OWORD *)(v72 + HalpInterruptProcessorState + 48);
                  *(_OWORD *)(v72 + HalpInterruptProcessorState) = *(_OWORD *)v69;
                  *(_OWORD *)(v72 + v71 + 16) = *(_OWORD *)(v69 + 16);
                  *(_OWORD *)(v72 + v71 + 32) = *(_OWORD *)(v69 + 32);
                  *(_OWORD *)(v72 + v71 + 48) = *(_OWORD *)(v69 + 48);
                  *(_OWORD *)v69 = v73;
                  *(_OWORD *)(v69 + 16) = v74;
                  *(_OWORD *)(v69 + 32) = v75;
                  *(_OWORD *)(v69 + 48) = v76;
                }
                v69 += 64LL;
                --v70;
              }
              while ( v70 );
            }
            if ( v66 > 1 )
              HalpInterruptHyperThreading = 1;
            v77 = HalpInterruptProcessorState;
            HalpInterruptSortProcessorTable(HalpInterruptProcessorState + 64, v66 - 1, v56, v59);
            v79 = v66;
            if ( v66 < (unsigned int)HalpInterruptProcessorCount )
            {
              v80 = (_DWORD *)(v77 + ((unsigned __int64)v66 << 6) + 8);
              do
              {
                if ( (*v80 & v57) != v58 )
                  break;
                ++v66;
                v80 += 16;
              }
              while ( v66 < (unsigned int)HalpInterruptProcessorCount );
            }
            v81 = v66 + 1;
            if ( v66 + 1 < (unsigned int)HalpInterruptProcessorCount )
            {
              v82 = HalpInterruptProcessorState + ((unsigned __int64)v81 << 6);
              v78 = (unsigned int)HalpInterruptProcessorCount - v81;
              do
              {
                if ( (v57 & *(_DWORD *)(v82 + 8)) == v58 )
                {
                  v83 = HalpInterruptProcessorState;
                  v84 = (unsigned __int64)v66++ << 6;
                  v85 = *(_OWORD *)(v84 + HalpInterruptProcessorState);
                  v86 = *(_OWORD *)(v84 + HalpInterruptProcessorState + 16);
                  v87 = *(_OWORD *)(v84 + HalpInterruptProcessorState + 32);
                  v88 = *(_OWORD *)(v84 + HalpInterruptProcessorState + 48);
                  *(_OWORD *)(v84 + HalpInterruptProcessorState) = *(_OWORD *)v82;
                  *(_OWORD *)(v84 + v83 + 16) = *(_OWORD *)(v82 + 16);
                  *(_OWORD *)(v84 + v83 + 32) = *(_OWORD *)(v82 + 32);
                  *(_OWORD *)(v84 + v83 + 48) = *(_OWORD *)(v82 + 48);
                  *(_OWORD *)v82 = v85;
                  *(_OWORD *)(v82 + 16) = v86;
                  *(_OWORD *)(v82 + 32) = v87;
                  *(_OWORD *)(v82 + 48) = v88;
                }
                v82 += 64LL;
                --v78;
              }
              while ( v78 );
            }
            HalpInterruptSortProcessorTable(HalpInterruptProcessorState + (v79 << 6), v66 - (unsigned int)v79, v78, v79);
            HalpInterruptSortProcessorTable(
              HalpInterruptProcessorState + ((unsigned __int64)v66 << 6),
              (unsigned int)HalpInterruptProcessorCount - v66,
              v89,
              v90);
            if ( HalpInterruptHyperThreading && HalpInterruptBlockHyperthreading )
              HalpInterruptBlockSmtSiblings();
          }
          return v92;
        }
        v34 = v9;
        v35 = v9[1];
        v9 += v33;
        v36 = *v34;
        if ( *v34 || (_BYTE)v33 != 8 )
          break;
        v37 = (_DWORD *)(HalpInterruptProcessorState + ((unsigned __int64)v4 << 6));
        if ( (v34[4] & 1) != 0 )
        {
          *v37 = (unsigned __int8)v34[3];
          v37[1] = *v31;
          v38 = (unsigned __int8)v34[3];
          goto LABEL_51;
        }
      }
      if ( v36 == 9 && (v35 = v33, (_BYTE)v33 == 16) )
      {
        v37 = (_DWORD *)(HalpInterruptProcessorState + ((unsigned __int64)v4 << 6));
        if ( (v34[8] & 1) != 0 )
        {
          *v37 = *((_DWORD *)v34 + 1);
          v37[1] = *((_DWORD *)v34 + 3);
          v38 = *((_DWORD *)v34 + 1);
LABEL_51:
          v37[2] = v38;
          ++v4;
        }
      }
      else if ( v36 == 11
             && (v35 = v33, (unsigned __int8)v33 >= 0x28u)
             && ((unsigned int)HalpInterruptGicVersion < 3 || (unsigned __int8)v33 >= 0x4Cu) )
      {
        v39 = HalpInterruptProcessorState + ((unsigned __int64)v4 << 6);
        if ( (v34[12] & 1) != 0 )
        {
          v40 = *((_QWORD *)v34 + 3);
          if ( *((_DWORD *)v34 + 4) == 1 && v40 )
          {
            *(_QWORD *)(v39 + 24) = v40;
            v41 = HalpMap(v40, 1LL, 0LL, 0, 4u, 0LL);
            *(_QWORD *)(v39 + 32) = v41;
            v92 = v41 == 0 ? 0xC000009A : 0;
            if ( !v41 )
              return 3221225626LL;
            if ( (unsigned int)HalpInterruptGicVersion < 3 )
            {
              *(_DWORD *)v39 = *((_DWORD *)v34 + 1);
              v42 = *((_DWORD *)v34 + 1);
            }
            else
            {
              *(_DWORD *)v39 = (*(_QWORD *)(v34 + 68) >> 8) ^ (*((_DWORD *)v34 + 17) ^ (*(_QWORD *)(v34 + 68) >> 8)) & 0xFFFFFF;
              v42 = 0;
            }
            *(_DWORD *)(v39 + 8) = v42;
            *(_DWORD *)(v39 + 4) = *((_DWORD *)v34 + 2);
            *(_DWORD *)(v39 + 40) = *((_DWORD *)v34 + 5);
            if ( *v32 < 0x4Cu )
            {
              *(_QWORD *)(v39 + 48) = 0LL;
              *(_BYTE *)(v39 + 45) = 0;
            }
            else
            {
              *(_QWORD *)(v39 + 48) = *(_QWORD *)(v34 + 68);
              *(_BYTE *)(v39 + 45) = 1;
              if ( v34[1] >= 0x4Du )
                *(_BYTE *)(v39 + 44) = v34[76];
            }
            if ( (v34[12] & 2) != 0 )
              *(_BYTE *)(v39 + 14) = 1;
            ++v4;
          }
          else
          {
            v92 = -1073741811;
          }
        }
      }
      else if ( v36 == 3 && v35 == 8 )
      {
        MemoryInternal = HalpMmAllocateMemoryInternal(24, 1u);
        if ( !MemoryInternal )
          return 3221225626LL;
        *(_BYTE *)(MemoryInternal + 8) = 0;
        *(_DWORD *)(MemoryInternal + 16) = *((unsigned __int16 *)v34 + 1);
        *(_DWORD *)(MemoryInternal + 20) = *((_DWORD *)v34 + 1);
        *(_QWORD *)MemoryInternal = HalpInterruptNmiSources;
        HalpInterruptNmiSources = MemoryInternal;
      }
      else if ( v36 == 4 && v35 == 6 || v36 == 10 && v35 == 12 )
      {
        v44 = HalpMmAllocateMemoryInternal(24, 1u);
        if ( !v44 )
          return 3221225626LL;
        *(_OWORD *)v44 = 0LL;
        *(_QWORD *)(v44 + 16) = 0LL;
        *(_BYTE *)(v44 + 8) = 1;
        if ( *v34 == 4 )
        {
          *(_DWORD *)(v44 + 12) = (unsigned __int8)v34[2];
          if ( v34[2] == 0xFF )
            *(_DWORD *)(v44 + 12) = -1;
          *(_DWORD *)(v44 + 16) = *(unsigned __int16 *)(v34 + 3);
          v45 = v34[5];
        }
        else
        {
          *(_DWORD *)(v44 + 12) = *((_DWORD *)v34 + 1);
          *(_DWORD *)(v44 + 16) = *((unsigned __int16 *)v34 + 1);
          v45 = v34[8];
        }
        *(_DWORD *)(v44 + 20) = -(v45 != 0) - 4;
        *(_QWORD *)v44 = HalpInterruptNmiSources;
        HalpInterruptNmiSources = v44;
      }
      else if ( v36 == 2 && v35 == 10 )
      {
        if ( (int)HalpInterruptGsiToLine(*((_DWORD *)v34 + 1), &v91) >= 0 )
        {
          v46 = HalpMmAllocateMemoryInternal(40, 1u);
          v47 = v46;
          if ( !v46 )
            return 3221225626LL;
          *(_OWORD *)v46 = 0LL;
          *(_OWORD *)(v46 + 16) = 0LL;
          *(_QWORD *)(v46 + 32) = 0LL;
          v48 = (unsigned __int8)v34[3];
          if ( v48 >= 8 )
          {
            v48 -= 8;
            v49 = 45057;
          }
          else
          {
            v49 = 45056;
          }
          *(_DWORD *)(v47 + 16) = v49;
          *(_DWORD *)(v47 + 20) = v48;
          *(_QWORD *)(v47 + 24) = v91;
          v50 = *((_WORD *)v34 + 4) & 3;
          if ( !v50 || (v15 = v50 == 1, v51 = 2, v15) )
            v51 = 1;
          *(_DWORD *)(v47 + 36) = v51;
          v52 = *((_WORD *)v34 + 4) & 0xC;
          v53 = !v52 || v52 == 4;
          *(_DWORD *)(v47 + 32) = v53;
          v54 = (__int64 *)qword_140F8FB48;
          if ( *(__int64 **)qword_140F8FB48 != &HalpInterruptOverrides )
            __fastfail(3u);
          *(_QWORD *)v47 = &HalpInterruptOverrides;
          *(_QWORD *)(v47 + 8) = v54;
          *v54 = v47;
          qword_140F8FB48 = v47;
        }
        v92 = 0;
      }
    }
  }
  v10 = a1 + 46;
  if ( a1 + 46 <= v5 )
  {
    do
    {
      v11 = (unsigned __int8)v9[1];
      if ( (unsigned __int8)v11 < 2u )
        break;
      v12 = &v9[v11];
      if ( (unsigned __int64)&v9[v11] > v5 )
        break;
      v13 = v9;
      v9 += v11;
      v14 = *v13;
      if ( *v13 )
      {
        if ( v14 == 9 )
        {
          if ( (_BYTE)v11 == 16 )
          {
            v15 = (v13[8] & 1) == 0;
            goto LABEL_17;
          }
        }
        else
        {
          if ( v14 == 1 )
          {
            if ( (_BYTE)v11 == 12 )
              ++HalpInterruptIoApicCount;
            continue;
          }
          if ( v14 == 11 && (unsigned __int8)v11 >= 0x28u )
          {
            v15 = (v13[12] & 1) == 0;
            goto LABEL_17;
          }
        }
      }
      else if ( (_BYTE)v11 == 8 )
      {
        v15 = (v13[4] & 1) == 0;
LABEL_17:
        if ( !v15 )
          LODWORD(HalpInterruptProcessorCount) = HalpInterruptProcessorCount + 1;
        if ( ++v7 > (unsigned int)HalpInterruptMaxProcessors )
          HalpInterruptMaxProcessors = v7;
      }
    }
    while ( (unsigned __int64)(v12 + 2) <= v5 );
  }
  HalpInterruptIoApic = HalpMmAllocateMemoryInternal(16 * HalpInterruptIoApicCount, 1u);
  if ( HalpInterruptIoApic )
  {
    v17 = 0;
    v18 = a1 + *(unsigned int *)(a1 + 4);
    if ( v10 <= v18 )
    {
      do
      {
        v19 = *(unsigned __int8 *)(v3 + 1);
        if ( (unsigned __int8)v19 < 2u || v3 + v19 > v18 )
          break;
        v20 = v3;
        v3 += v19;
        if ( *(_BYTE *)v20 == 1 && (_BYTE)v19 == 12 )
        {
          v21 = HalpInterruptIoApic;
          v22 = 2LL * v17++;
          *(_DWORD *)(HalpInterruptIoApic + 8 * v22) = *(unsigned __int8 *)(v20 + 2);
          *(_DWORD *)(v21 + 8 * v22 + 4) = *(_DWORD *)(v20 + 4);
          *(_DWORD *)(v21 + 8 * v22 + 8) = *(_DWORD *)(v20 + 8);
        }
      }
      while ( v3 + 2 <= v18 );
    }
    if ( HalpInterruptIoApicCount )
    {
      v23 = (unsigned int)HalpInterruptIoApicCount;
      v24 = (unsigned int)HalpInterruptIoApicCount;
      v25 = HalpInterruptIoApic + 8;
      v26 = (unsigned int *)(HalpInterruptIoApic + 12);
      do
      {
        *v26 = -1;
        v27 = (_DWORD *)v25;
        v28 = *(v26 - 1);
        v29 = v23;
        do
        {
          if ( *v27 > v28 )
          {
            v30 = *v27 - v28;
            if ( v30 < *v26 )
              *v26 = v30;
          }
          v27 += 4;
          --v29;
        }
        while ( v29 );
        v26 += 4;
        --v24;
      }
      while ( v24 );
    }
    return v92;
  }
  HalpInterruptSetProblemEx(0LL, 30, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0x6B8u);
  return 3221225495LL;
}
