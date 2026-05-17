/*
 * XREFs of RtlpHpTagFreeHeap @ 0x1800274C0
 * Callers:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpHpFreeHeapSlow @ 0x18002B6C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpFreeNTHeapInternal @ 0x18002BD80 (RtlpFreeNTHeapInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18002CA00 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18004EAC0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvCompactionSchedule @ 0x18004FAE0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800544A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpLargeFree @ 0x1800938E4 (RtlpHpLargeFree.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHpVsSlotFreeList @ 0x18011B418 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011CBF4 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x1801426C4 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlpInterlockedPushEntrySList @ 0x180165A40 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180165A80 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpTagFreeHeap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int16 v5; // si
  __int64 v6; // r13
  unsigned int v7; // r12d
  _DWORD *v9; // r14
  int v10; // eax
  __int64 v11; // r11
  __int64 v12; // r10
  unsigned __int64 v13; // r8
  char v14; // cl
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  char v17; // cl
  int v18; // r10d
  unsigned __int64 v19; // r11
  __int64 v20; // r8
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdi
  int v26; // eax
  __int64 v27; // rcx
  unsigned __int16 *v28; // rcx
  unsigned int v29; // edi
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  char v33; // cl
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r9
  char v36; // r10
  unsigned __int64 v37; // rdi
  __int64 v38; // r14
  unsigned __int64 v39; // rsi
  unsigned int v40; // ecx
  unsigned __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rax
  signed __int64 v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rdx
  signed __int64 v47; // rtt
  _WORD *v49; // rdx
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  __int64 v53; // rdi
  unsigned __int64 v54; // r15
  char v55; // r8
  unsigned __int64 v56; // rdx
  char v57; // r8
  __int64 v58; // rcx
  unsigned __int16 v59; // ax
  __int64 v60; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // rcx
  int v63; // edx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // r14
  unsigned int v67; // ebx
  __int64 v68; // rax
  __int64 v69; // r8
  unsigned int v70; // r9d
  signed __int64 v71; // rcx
  signed __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // r9
  signed __int64 v76; // rax
  __int64 v77; // r10
  signed __int64 v78; // rax
  signed __int64 v79; // rtt
  signed __int64 v80; // rdx
  void **TlsExpansionSlots; // rdx
  struct _TEB *v82; // rbx
  unsigned __int64 v83; // rdx
  unsigned __int64 v84; // rcx
  int v85; // ecx
  unsigned __int64 v86; // rcx
  __int64 v87; // rcx
  int v88; // [rsp+30h] [rbp-68h]
  signed __int64 v89; // [rsp+30h] [rbp-68h]
  signed __int64 v90; // [rsp+40h] [rbp-58h]
  int v91; // [rsp+44h] [rbp-54h]
  unsigned __int16 v92; // [rsp+A0h] [rbp+8h]
  unsigned int v93; // [rsp+B0h] [rbp+18h]
  int v94; // [rsp+B8h] [rbp+20h]
  int v95; // [rsp+B8h] [rbp+20h]

  v93 = a3;
  v3 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 1;
  v92 = 0;
  if ( *(_DWORD *)(a1 + 16) != -571548178
    || a1 == qword_1801D21B8[2 * (unsigned int)dword_1801800C8[BYTE1(RtlpHpEnvHandle)]] )
  {
    v9 = (_DWORD *)(a1 + 20);
    goto LABEL_27;
  }
  v9 = (_DWORD *)(a1 + 20);
  v88 = *(_DWORD *)(a1 + 20);
  v94 = 0;
  if ( (_WORD)a2 )
  {
    v10 = 0;
LABEL_5:
    v11 = a1 + 192LL * v10 + 320;
    v13 = a2 & *(_QWORD *)v11;
    if ( !(RtlpHpHeapGlobals ^ v11 ^ *(_QWORD *)(v13 + 0x10) ^ v13) )
    {
      v14 = *(_BYTE *)(v11 + 8);
      v15 = v13 + 32 * ((unsigned __int64)(unsigned int)(a2 - v13) >> v14);
      v16 = -32LL * *(unsigned __int8 *)(v15 + 26) + v15;
      v3 = *(unsigned __int8 *)(v16 + 24);
      if ( (v3 & 3) == 3 )
      {
        if ( v13 + ((__int64)(v16 - v13) >> 5 << v14) == a2 || (LOBYTE(v3) = v3 & 0xC, (unsigned __int8)v3 >= 8u) )
        {
          if ( v16 )
          {
            v17 = *(_BYTE *)(v11 + 8);
            v12 = *(_QWORD *)v11;
            v3 = (v16 & v12) + ((__int64)(v16 - (v16 & v12)) >> 5 << v17);
            if ( a2 <= v3 )
            {
              v25 = ((unsigned __int64)*(unsigned __int8 *)(v16 + 31) << v17) - *(unsigned int *)(v16 + 4);
              v26 = *(_WORD *)(v16 + 8) & 1;
            }
            else if ( (*(_BYTE *)(v16 + 24) & 0xC) == 8 )
            {
              v18 = *(_DWORD *)((v16 & v12) + ((__int64)(v16 - (v16 & v12)) >> 5 << v17) + 0x28);
              v19 = (((unsigned int)a2
                    - (((unsigned int)qword_1801CDEC8 ^ (unsigned int)(v3 >> 12) ^ *(_DWORD *)(v3 + 40)) >> 16)
                    - (unsigned int)v3)
                   * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v3 + 44) << 6)
                                                       + *(_QWORD *)(v11 + 24)
                                                       + 72)) >> 32;
              if ( (_DWORD)a2
                 - (((unsigned int)qword_1801CDEC8 ^ (unsigned int)(v3 >> 12) ^ *(_DWORD *)(v3 + 40)) >> 16)
                 - (_DWORD)v3 == (_DWORD)v19 * (unsigned __int16)(qword_1801CDEC8 ^ (v3 >> 12) ^ *(_WORD *)(v3 + 40)) )
              {
                v20 = 1LL << (v19 & 0x1F);
                v21 = (_QWORD *)(v3 + 8 * ((v19 >> 5) + 8));
                if ( (*(_DWORD *)v21 & (unsigned int)v20) != 0 )
                {
                  v22 = (unsigned __int16)qword_1801CDEC8 ^ (unsigned int)(unsigned __int16)((v3 >> 12) ^ v18);
                  if ( (HIDWORD(*v21) & v20) != 0 )
                  {
                    v23 = *(_WORD *)(v22 + a2 - 2) & 0x3FF;
                    v24 = *(unsigned __int16 *)(v22 + a2 - 2);
                    if ( (v24 & 0x8000u) != 0 )
                      v23 = 1;
                    v94 = (v24 >> 14) & 1;
                    LODWORD(v22) = v22 - v23;
                  }
                  else
                  {
                    v94 = 0;
                  }
                  v25 = (unsigned int)v22;
                }
                else
                {
                  v25 = -1LL;
                }
              }
              else
              {
                v25 = -1LL;
              }
              v26 = v94;
              v5 = 0;
            }
            else
            {
              v56 = a2 - 16;
              v57 = *(_BYTE *)(*(_QWORD *)(v11 + 32) + 4LL) & 1;
              if ( v57 && (a2 & 0xFFF) == 0 )
                v56 = a2 - 32;
              v3 = *(_QWORD *)v56;
              if ( ((RtlpHpHeapGlobals ^ v56 ^ *(_QWORD *)v56) & 0xFF000000000000LL) != 0 )
              {
                v58 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v3 ^ (unsigned int)v56) >> 16)) - 16;
                if ( v57 && ((v56 + 32) & 0xFFF) == 0 )
                  v58 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v3 ^ (unsigned int)v56) >> 16)) - 32;
                v25 = (unsigned int)v58;
                if ( (*(_DWORD *)(v56 + 8) & 0x100) != 0 )
                {
                  v59 = *(_WORD *)(v58 + a2 - 2);
                  if ( (v59 & 0x8000u) == 0 )
                    v25 = (unsigned int)v58 - (unsigned __int64)(*(_WORD *)(v58 + a2 - 2) & 0x1FFF);
                  else
                    v25 = (unsigned int)v58 - 1LL;
                  v26 = (v59 >> 14) & 1;
                }
                else
                {
                  v26 = 0;
                }
              }
              else
              {
                v26 = 0;
                v25 = -1LL;
              }
            }
            goto LABEL_20;
          }
        }
      }
    }
    goto LABEL_26;
  }
  v60 = RtlCSparseBitmapBitmaskRead(&unk_1801CE930, 2 * ((a2 - qword_1801CE928) >> 20), a3, 0LL);
  if ( v60 )
  {
    v10 = v60 - 1;
    if ( v10 != 2 )
      goto LABEL_5;
  }
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 64));
  v61 = *(_QWORD *)(a1 + 80);
  v62 = *(_QWORD *)(a1 + 72);
  if ( (v61 & 1) != 0 )
  {
    if ( !v62 )
      goto LABEL_116;
    v62 ^= a1 + 72;
  }
  v63 = v61 & 1;
  if ( !v62 )
    goto LABEL_116;
  do
  {
    v64 = *(_QWORD *)(v62 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v64 )
    {
      if ( a2 <= v64 )
        break;
      v65 = *(_QWORD *)(v62 + 8);
      if ( v63 && v65 )
      {
        v62 ^= v65;
        continue;
      }
LABEL_110:
      v62 = v65;
      continue;
    }
    v65 = *(_QWORD *)v62;
    if ( !v63 || !v65 )
      goto LABEL_110;
    v62 ^= v65;
  }
  while ( v62 );
  if ( v62 )
  {
    v95 = *(_QWORD *)(v62 + 32) & 1;
    v25 = (*(_QWORD *)(v62 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(v62 + 24);
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 64));
    v26 = v95;
    goto LABEL_20;
  }
LABEL_116:
  v25 = -1LL;
  RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 64));
  v26 = 0;
LABEL_20:
  if ( v25 != -1 )
  {
    v6 = v25;
    if ( v26 )
    {
      v27 = v25 + a2 + 16;
      if ( (v88 & 0x2000) == 0 )
        v27 = v25 + a2;
      v28 = (unsigned __int16 *)((v27 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( v28 )
      {
        v5 = *v28;
        v92 = *v28;
      }
    }
  }
LABEL_26:
  a3 = v93;
LABEL_27:
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v7 = RtlpFreeNTHeapInternal(a1, a2, a3, v3);
    goto LABEL_56;
  }
  __writegsqword(0x1858u, (unsigned __int64)v9);
  v29 = *v9 & 0x20F0;
  if ( v29 )
  {
    if ( (v29 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(v9, v29);
    v7 = RtlpHpFreeHeapSlow(a1, a2, v29, v3);
    goto LABEL_54;
  }
  if ( (_WORD)a2 )
  {
    v30 = a1 + 320;
    goto LABEL_35;
  }
  v31 = RtlCSparseBitmapBitmaskRead(&unk_1801CE930, 2 * ((a2 - qword_1801CE928) >> 20), a3, v3);
  if ( !v31 || (_DWORD)v31 == 3 )
  {
    v7 = RtlpHpLargeFree(a1, a2) != 0;
    goto LABEL_54;
  }
  v30 = a1 + 320;
  if ( (_DWORD)v31 == 2 )
    v30 = a1 + 512;
LABEL_35:
  v32 = a2 & *(_QWORD *)v30;
  if ( RtlpHpHeapGlobals ^ v30 ^ *(_QWORD *)(v32 + 0x10) ^ v32 )
    goto LABEL_60;
  v33 = *(_BYTE *)(v30 + 8);
  v34 = v32 + 32 * ((unsigned __int64)(unsigned int)(a2 - v32) >> v33);
  v35 = -32LL * *(unsigned __int8 *)(v34 + 26) + v34;
  v36 = *(_BYTE *)(v35 + 24);
  v37 = v32 + ((__int64)(v35 - v32) >> 5 << v33);
  if ( v36 + (v37 == a2) != 11 )
  {
    v49 = (_WORD *)((*(_QWORD *)v30 & v35) + ((__int64)(v35 - (*(_QWORD *)v30 & v35)) >> 5 << v33));
    if ( (v36 & 3) == 3 )
    {
      if ( (_WORD *)a2 == v49 )
        goto LABEL_104;
      if ( v36 == 15 )
      {
        if ( a2 > (unsigned __int64)v49 )
        {
          v53 = *(_QWORD *)(v30 + 32);
          v54 = a2 - 16;
          v55 = *(_BYTE *)(v53 + 4);
          if ( (v55 & 1) != 0 && (a2 & 0xFFF) == 0 )
            v54 = a2 - 32;
          if ( v49 )
            goto LABEL_69;
          v83 = v54;
          v84 = (RtlpHpHeapGlobals ^ *(_QWORD *)v54 ^ v54) >> 32;
          if ( (v84 & 0xFF0000) != 0 )
          {
            v85 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v54 + 8) ^ v54);
LABEL_148:
            v49 = (_WORD *)((v83 - (unsigned int)(v85 << 12)) & 0xFFFFFFFFFFFFF000uLL);
LABEL_69:
            if ( (((unsigned __int16)(v49[16] ^ v49[18]) ^ 0x2BED) & 0x7FFF) == 0 )
            {
              if ( ((RtlpHpHeapGlobals ^ *(_QWORD *)v54 ^ v54) & 0xFF000000000000LL) == 0 )
              {
                v52 = v54;
                LODWORD(v49) = *(_DWORD *)(v53 + 8) ^ v53;
                v51 = a2;
                v50 = 8;
                goto LABEL_62;
              }
              v66 = v53 + ((unsigned __int64)(unsigned __int16)v49[17] << 6);
              v67 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)*(_QWORD *)v54 ^ (unsigned int)v54) >> 16)) - 16;
              v68 = 0LL;
              if ( (v55 & 2) != 0 && v67 < 0x1000 )
              {
                v87 = v66 + 64;
                if ( *(_WORD *)(v66 + 64) < 0x20u )
                {
                  RtlpInterlockedPushEntrySList(v87, v54 + 16);
LABEL_97:
                  v69 = *(_QWORD *)(v30 + 24);
                  if ( v67 < *(unsigned __int16 *)(v69 + 68) )
                  {
                    v70 = RtlpLfhBucketIndexMap[(unsigned __int64)v67 >> 4] - 1;
                    do
                    {
                      v90 = *(_QWORD *)(v69 + 8LL * v70 + 448);
                      v71 = v90;
                      v72 = v90;
                      if ( (v90 & 1) == 0 )
                        break;
                      if ( WORD1(v90) > 1u )
                      {
                        --WORD1(v90);
                        v72 = v90;
                      }
                    }
                    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v69 + 8LL * v70 + 448), v72, v71) != v71 );
                  }
                  goto LABEL_53;
                }
                v68 = RtlpInterlockedFlushSList(v87);
              }
              *(_QWORD *)(v54 + 16) = v68;
              RtlpHpVsSlotFreeList(v53, v66);
              goto LABEL_97;
            }
            v51 = (int)v49;
            LODWORD(v49) = *(_DWORD *)(v53 + 8) ^ v53;
            v50 = 18;
LABEL_61:
            v52 = 0;
LABEL_62:
            RtlpLogHeapFailure(v50, (_DWORD)v49, v51, v52, 0LL, 0LL);
            v7 = 0;
            goto LABEL_53;
          }
          if ( (_WORD)v84 )
          {
            v83 = v54 - 16LL * (unsigned __int16)v84;
            v86 = (RtlpHpHeapGlobals ^ *(_QWORD *)v83 ^ v83) >> 32;
            if ( (v86 & 0xFF0000) != 0 )
            {
              v85 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v83 + 8) ^ v83);
              goto LABEL_148;
            }
            if ( (_WORD)v86 )
            {
              v83 -= 16LL * (unsigned __int16)v86;
              v85 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v83 + 8) ^ v83);
              goto LABEL_148;
            }
          }
          v85 = 0;
          goto LABEL_148;
        }
LABEL_104:
        RtlpHpSegPageRangeShrink(v30, v35, 0LL);
        goto LABEL_53;
      }
    }
LABEL_60:
    v49 = *(_WORD **)(v30 + 56);
    v50 = 9;
    v51 = a2;
    goto LABEL_61;
  }
  v38 = *(_QWORD *)(v30 + 24);
  v39 = (((unsigned int)a2
        - (((unsigned int)qword_1801CDEC8 ^ *(_DWORD *)(v37 + 40) ^ (unsigned int)(v37 >> 12)) >> 16)
        - (unsigned int)v37)
       * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v37 + 44) << 6) + v38 + 72)) >> 32;
  if ( (_DWORD)a2
     - (((unsigned int)qword_1801CDEC8 ^ *(_DWORD *)(v37 + 40) ^ (unsigned int)(v37 >> 12)) >> 16)
     - (_DWORD)v37 != (_DWORD)v39 * (unsigned __int16)(qword_1801CDEC8 ^ *(_WORD *)(v37 + 40) ^ (v37 >> 12)) )
  {
    v7 = 0;
    goto LABEL_53;
  }
  v40 = *(unsigned __int16 *)(v38 + 76);
  if ( v40 < 0x40 )
  {
    v41 = __readgsqword(8 * v40 + 5248);
    goto LABEL_40;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( !TlsExpansionSlots )
    goto LABEL_125;
  v41 = (unsigned __int64)TlsExpansionSlots[v40 - 64];
LABEL_40:
  if ( !v41 )
LABEL_125:
    LOWORD(v41) = RtlpHpLfhThreadDataInitializeSet(v38);
  if ( (_WORD)v41 == *(_WORD *)(v37 + 46) && *(_BYTE *)(v37 + 22) != 1 )
  {
    v73 = *(_QWORD *)(v37 + 8 * (v39 >> 5) + 64);
    v74 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v39 & 0x1F);
    v42 = v39;
    *(_QWORD *)(v37 + 8 * (v39 >> 5) + 64) = v73 & v74;
    if ( ((unsigned int)v73 & ~(_DWORD)v74) != 0 )
    {
      ++*(_WORD *)(v37 + 32);
      goto LABEL_53;
    }
LABEL_75:
    RtlpLogHeapFailure(17, *(_QWORD *)v38, a2, v37, v42, 0LL);
    v7 = 0;
    goto LABEL_53;
  }
  v42 = v39;
  v43 = *(unsigned int *)(v37 + 8 * (v39 >> 5) + 64);
  if ( !_bittest64(&v43, v39 & 0x1F) )
    goto LABEL_75;
  v44 = *(_QWORD *)(v37 + 16);
  do
  {
    v91 = HIDWORD(v44);
    v89 = v44;
    if ( BYTE6(v44) == 1 )
      BYTE6(v89) = 2;
    if ( a2 )
    {
      v45 = *(_QWORD *)(v38 + 80);
      *(_WORD *)a2 = v44;
      LOWORD(v89) = v39 + 1;
      *(_DWORD *)(a2 + 8) = a2 ^ HIDWORD(v45) ^ __ROL4__(*(_DWORD *)a2 ^ v45, v44);
    }
    WORD1(v89) = WORD1(v44) + 1;
    v46 = (unsigned __int64)*(unsigned __int16 *)(v37 + 44) << 6;
    v47 = v44;
    v44 = _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 16), v89, v44);
  }
  while ( v47 != v44 );
  if ( !*(_BYTE *)(v46 + v38 + 92) )
  {
    *(_BYTE *)(v46 + v38 + 92) = 1;
    if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled() )
      RtlpHpEnvCompactionSchedule();
  }
  if ( BYTE2(v91) == 1 )
  {
    v75 = v38 + ((unsigned __int16)v91 << 6);
    _m_prefetchw((const void *)(v75 + 8));
    v76 = *(_QWORD *)(v75 + 8);
    v77 = *(_QWORD *)(v37 + 24);
    *(_QWORD *)(v37 + 24) = v77 & 0xFFF | (v76 - (v76 & 0xFFF));
    v79 = v76;
    v78 = _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 8), v37 | v76 & 0xFFF, v76);
    if ( v79 != v78 )
    {
      do
      {
        v80 = v78;
        *(_QWORD *)(v37 + 24) = v77 ^ (v77 ^ v78) & 0xFFFFFFFFFFFFF000uLL;
        v78 = _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 8), v37 | v78 & 0xFFF, v78);
      }
      while ( v78 != v80 );
    }
  }
LABEL_53:
  v5 = v92;
LABEL_54:
  __writegsqword(0x1858u, 0LL);
  if ( !v7 )
  {
    v82 = NtCurrentTeb();
    v82->LastStatusValue = -1073741811;
    v82->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225485LL);
  }
LABEL_56:
  if ( v7 && v5 )
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_1801D3C38 + 8LL * v5 - 8) + 32LL), -v6);
  return v7;
}
