/*
 * XREFs of RtlpHpTagFreeHeap @ 0x180053EC0
 * Callers:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpFreeHeapSlow @ 0x1800580C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpFreeNTHeapInternal @ 0x180058780 (RtlpFreeNTHeapInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059400 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800646A0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1800656C0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpSegPageRangeShrink @ 0x18006A080 (RtlpHpSegPageRangeShrink.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHpLargeFree @ 0x18009E878 (RtlpHpLargeFree.c)
 *     RtlpHpVsSlotFreeList @ 0x180119648 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011AE24 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x180140874 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlpInterlockedPushEntrySList @ 0x180163E00 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180163E40 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpTagFreeHeap(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int16 v4; // si
  __int64 v5; // r13
  unsigned int v6; // r12d
  _DWORD *v8; // r14
  int v9; // eax
  __int64 v10; // r11
  __int64 v11; // r10
  unsigned __int64 v12; // r8
  char v13; // cl
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  char v16; // cl
  int v17; // r10d
  unsigned __int64 v18; // r11
  __int64 v19; // r8
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rcx
  unsigned __int16 *v27; // rcx
  unsigned int v28; // edi
  __int64 v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  char v32; // cl
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r9
  char v35; // r10
  unsigned __int64 v36; // rdi
  __int64 v37; // r14
  unsigned __int64 v38; // rsi
  unsigned int v39; // ecx
  unsigned __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // rax
  signed __int64 v43; // rax
  __int64 v44; // r8
  unsigned __int64 v45; // rdx
  signed __int64 v46; // rtt
  _WORD *v48; // rdx
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // rdi
  unsigned __int64 v53; // r15
  char v54; // r8
  unsigned __int64 v55; // rdx
  char v56; // r8
  __int64 v57; // rcx
  unsigned __int16 v58; // ax
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rcx
  int v62; // edx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // r14
  unsigned int v66; // ebx
  __int64 v67; // rax
  __int64 v68; // r8
  unsigned int v69; // r9d
  signed __int64 v70; // rcx
  signed __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  signed __int64 v75; // rax
  __int64 v76; // r10
  signed __int64 v77; // rax
  signed __int64 v78; // rtt
  signed __int64 v79; // rdx
  void **TlsExpansionSlots; // rdx
  struct _TEB *v81; // rbx
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // rcx
  int v84; // ecx
  unsigned __int64 v85; // rcx
  __int64 v86; // rcx
  int v87; // [rsp+30h] [rbp-68h]
  signed __int64 v88; // [rsp+30h] [rbp-68h]
  signed __int64 v89; // [rsp+40h] [rbp-58h]
  int v90; // [rsp+44h] [rbp-54h]
  unsigned __int16 v91; // [rsp+A0h] [rbp+8h]
  int v92; // [rsp+B8h] [rbp+20h]
  int v93; // [rsp+B8h] [rbp+20h]

  v2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 1;
  v91 = 0;
  if ( *(_DWORD *)(a1 + 16) != -571548178
    || a1 == qword_1801D11A8[2 * (unsigned int)dword_18017E8C8[BYTE1(RtlpHpEnvHandle)]] )
  {
    v8 = (_DWORD *)(a1 + 20);
    goto LABEL_26;
  }
  v8 = (_DWORD *)(a1 + 20);
  v87 = *(_DWORD *)(a1 + 20);
  v92 = 0;
  if ( (_WORD)a2 )
  {
    v9 = 0;
LABEL_5:
    v10 = a1 + 192LL * v9 + 320;
    v12 = a2 & *(_QWORD *)v10;
    if ( !(RtlpHpHeapGlobals ^ v10 ^ *(_QWORD *)(v12 + 0x10) ^ v12) )
    {
      v13 = *(_BYTE *)(v10 + 8);
      v14 = v12 + 32 * ((unsigned __int64)(unsigned int)(a2 - v12) >> v13);
      v15 = -32LL * *(unsigned __int8 *)(v14 + 26) + v14;
      v2 = *(unsigned __int8 *)(v15 + 24);
      if ( (v2 & 3) == 3 )
      {
        if ( v12 + ((__int64)(v15 - v12) >> 5 << v13) == a2 || (LOBYTE(v2) = v2 & 0xC, (unsigned __int8)v2 >= 8u) )
        {
          if ( v15 )
          {
            v16 = *(_BYTE *)(v10 + 8);
            v11 = *(_QWORD *)v10;
            v2 = (v15 & v11) + ((__int64)(v15 - (v15 & v11)) >> 5 << v16);
            if ( a2 <= v2 )
            {
              v24 = ((unsigned __int64)*(unsigned __int8 *)(v15 + 31) << v16) - *(unsigned int *)(v15 + 4);
              v25 = *(_WORD *)(v15 + 8) & 1;
            }
            else if ( (*(_BYTE *)(v15 + 24) & 0xC) == 8 )
            {
              v17 = *(_DWORD *)((v15 & v11) + ((__int64)(v15 - (v15 & v11)) >> 5 << v16) + 0x28);
              v18 = (((unsigned int)a2
                    - (((unsigned int)qword_1801CCEC8 ^ (unsigned int)(v2 >> 12) ^ *(_DWORD *)(v2 + 40)) >> 16)
                    - (unsigned int)v2)
                   * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v2 + 44) << 6)
                                                       + *(_QWORD *)(v10 + 24)
                                                       + 72)) >> 32;
              if ( (_DWORD)a2
                 - (((unsigned int)qword_1801CCEC8 ^ (unsigned int)(v2 >> 12) ^ *(_DWORD *)(v2 + 40)) >> 16)
                 - (_DWORD)v2 == (_DWORD)v18 * (unsigned __int16)(qword_1801CCEC8 ^ (v2 >> 12) ^ *(_WORD *)(v2 + 40)) )
              {
                v19 = 1LL << (v18 & 0x1F);
                v20 = (_QWORD *)(v2 + 8 * ((v18 >> 5) + 8));
                if ( (*(_DWORD *)v20 & (unsigned int)v19) != 0 )
                {
                  v21 = (unsigned __int16)qword_1801CCEC8 ^ (unsigned int)(unsigned __int16)((v2 >> 12) ^ v17);
                  if ( (HIDWORD(*v20) & v19) != 0 )
                  {
                    v22 = *(_WORD *)(v21 + a2 - 2) & 0x3FF;
                    v23 = *(unsigned __int16 *)(v21 + a2 - 2);
                    if ( (v23 & 0x8000u) != 0 )
                      v22 = 1;
                    v92 = (v23 >> 14) & 1;
                    LODWORD(v21) = v21 - v22;
                  }
                  else
                  {
                    v92 = 0;
                  }
                  v24 = (unsigned int)v21;
                }
                else
                {
                  v24 = -1LL;
                }
              }
              else
              {
                v24 = -1LL;
              }
              v25 = v92;
              v4 = 0;
            }
            else
            {
              v55 = a2 - 16;
              v56 = *(_BYTE *)(*(_QWORD *)(v10 + 32) + 4LL) & 1;
              if ( v56 && (a2 & 0xFFF) == 0 )
                v55 = a2 - 32;
              v2 = *(_QWORD *)v55;
              if ( ((RtlpHpHeapGlobals ^ v55 ^ *(_QWORD *)v55) & 0xFF000000000000LL) != 0 )
              {
                v57 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v2 ^ (unsigned int)v55) >> 16)) - 16;
                if ( v56 && ((v55 + 32) & 0xFFF) == 0 )
                  v57 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v2 ^ (unsigned int)v55) >> 16)) - 32;
                v24 = (unsigned int)v57;
                if ( (*(_DWORD *)(v55 + 8) & 0x100) != 0 )
                {
                  v58 = *(_WORD *)(v57 + a2 - 2);
                  if ( (v58 & 0x8000u) == 0 )
                    v24 = (unsigned int)v57 - (unsigned __int64)(*(_WORD *)(v57 + a2 - 2) & 0x1FFF);
                  else
                    v24 = (unsigned int)v57 - 1LL;
                  v25 = (v58 >> 14) & 1;
                }
                else
                {
                  v25 = 0;
                }
              }
              else
              {
                v25 = 0;
                v24 = -1LL;
              }
            }
            goto LABEL_20;
          }
        }
      }
    }
    goto LABEL_26;
  }
  v59 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_1801CD918) >> 20));
  if ( v59 )
  {
    v9 = v59 - 1;
    if ( v9 != 2 )
      goto LABEL_5;
  }
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  v60 = *(_QWORD *)(a1 + 80);
  v61 = *(_QWORD *)(a1 + 72);
  if ( (v60 & 1) != 0 )
  {
    if ( !v61 )
      goto LABEL_115;
    v61 ^= a1 + 72;
  }
  v62 = v60 & 1;
  if ( !v61 )
    goto LABEL_115;
  do
  {
    v63 = *(_QWORD *)(v61 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v63 )
    {
      if ( a2 <= v63 )
        break;
      v64 = *(_QWORD *)(v61 + 8);
      if ( v62 && v64 )
      {
        v61 ^= v64;
        continue;
      }
LABEL_109:
      v61 = v64;
      continue;
    }
    v64 = *(_QWORD *)v61;
    if ( !v62 || !v64 )
      goto LABEL_109;
    v61 ^= v64;
  }
  while ( v61 );
  if ( v61 )
  {
    v93 = *(_QWORD *)(v61 + 32) & 1;
    v24 = (*(_QWORD *)(v61 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(v61 + 24);
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
    v25 = v93;
    goto LABEL_20;
  }
LABEL_115:
  v24 = -1LL;
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  v25 = 0;
LABEL_20:
  if ( v24 != -1 )
  {
    v5 = v24;
    if ( v25 )
    {
      v26 = v24 + a2 + 16;
      if ( (v87 & 0x2000) == 0 )
        v26 = v24 + a2;
      v27 = (unsigned __int16 *)((v26 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( v27 )
      {
        v4 = *v27;
        v91 = *v27;
      }
    }
  }
LABEL_26:
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    v6 = RtlpFreeNTHeapInternal((PVOID)a1);
    goto LABEL_55;
  }
  __writegsqword(0x1858u, (unsigned __int64)v8);
  v28 = *v8 & 0x20F0;
  if ( v28 )
  {
    if ( (v28 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(v8, v28);
    v6 = RtlpHpFreeHeapSlow(a1, a2, v28, v2);
    goto LABEL_53;
  }
  if ( (_WORD)a2 )
  {
    v29 = a1 + 320;
    goto LABEL_34;
  }
  v30 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_1801CD918) >> 20));
  if ( !v30 || (_DWORD)v30 == 3 )
  {
    v6 = RtlpHpLargeFree(a1, a2) != 0;
    goto LABEL_53;
  }
  v29 = a1 + 320;
  if ( (_DWORD)v30 == 2 )
    v29 = a1 + 512;
LABEL_34:
  v31 = a2 & *(_QWORD *)v29;
  if ( RtlpHpHeapGlobals ^ v29 ^ *(_QWORD *)(v31 + 0x10) ^ v31 )
    goto LABEL_59;
  v32 = *(_BYTE *)(v29 + 8);
  v33 = v31 + 32 * ((unsigned __int64)(unsigned int)(a2 - v31) >> v32);
  v34 = -32LL * *(unsigned __int8 *)(v33 + 26) + v33;
  v35 = *(_BYTE *)(v34 + 24);
  v36 = v31 + ((__int64)(v34 - v31) >> 5 << v32);
  if ( v35 + (v36 == a2) != 11 )
  {
    v48 = (_WORD *)((*(_QWORD *)v29 & v34) + ((__int64)(v34 - (*(_QWORD *)v29 & v34)) >> 5 << v32));
    if ( (v35 & 3) == 3 )
    {
      if ( (_WORD *)a2 == v48 )
        goto LABEL_103;
      if ( v35 == 15 )
      {
        if ( a2 > (unsigned __int64)v48 )
        {
          v52 = *(_QWORD *)(v29 + 32);
          v53 = a2 - 16;
          v54 = *(_BYTE *)(v52 + 4);
          if ( (v54 & 1) != 0 && (a2 & 0xFFF) == 0 )
            v53 = a2 - 32;
          if ( v48 )
            goto LABEL_68;
          v82 = v53;
          v83 = (RtlpHpHeapGlobals ^ *(_QWORD *)v53 ^ v53) >> 32;
          if ( (v83 & 0xFF0000) != 0 )
          {
            v84 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v53 + 8) ^ v53);
LABEL_147:
            v48 = (_WORD *)((v82 - (unsigned int)(v84 << 12)) & 0xFFFFFFFFFFFFF000uLL);
LABEL_68:
            if ( (((unsigned __int16)(v48[16] ^ v48[18]) ^ 0x2BED) & 0x7FFF) == 0 )
            {
              if ( ((RtlpHpHeapGlobals ^ *(_QWORD *)v53 ^ v53) & 0xFF000000000000LL) == 0 )
              {
                v51 = v53;
                LODWORD(v48) = *(_DWORD *)(v52 + 8) ^ v52;
                v50 = a2;
                v49 = 8;
                goto LABEL_61;
              }
              v65 = v52 + ((unsigned __int64)(unsigned __int16)v48[17] << 6);
              v66 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)*(_QWORD *)v53 ^ (unsigned int)v53) >> 16)) - 16;
              v67 = 0LL;
              if ( (v54 & 2) != 0 && v66 < 0x1000 )
              {
                v86 = v65 + 64;
                if ( *(_WORD *)(v65 + 64) < 0x20u )
                {
                  RtlpInterlockedPushEntrySList(v86, v53 + 16);
LABEL_96:
                  v68 = *(_QWORD *)(v29 + 24);
                  if ( v66 < *(unsigned __int16 *)(v68 + 68) )
                  {
                    v69 = RtlpLfhBucketIndexMap[(unsigned __int64)v66 >> 4] - 1;
                    do
                    {
                      v89 = *(_QWORD *)(v68 + 8LL * v69 + 448);
                      v70 = v89;
                      v71 = v89;
                      if ( (v89 & 1) == 0 )
                        break;
                      if ( WORD1(v89) > 1u )
                      {
                        --WORD1(v89);
                        v71 = v89;
                      }
                    }
                    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v68 + 8LL * v69 + 448), v71, v70) != v70 );
                  }
                  goto LABEL_52;
                }
                v67 = RtlpInterlockedFlushSList(v86);
              }
              *(_QWORD *)(v53 + 16) = v67;
              RtlpHpVsSlotFreeList(v52, v65);
              goto LABEL_96;
            }
            v50 = (int)v48;
            LODWORD(v48) = *(_DWORD *)(v52 + 8) ^ v52;
            v49 = 18;
LABEL_60:
            v51 = 0;
LABEL_61:
            RtlpLogHeapFailure(v49, (_DWORD)v48, v50, v51, 0LL, 0LL);
            v6 = 0;
            goto LABEL_52;
          }
          if ( (_WORD)v83 )
          {
            v82 = v53 - 16LL * (unsigned __int16)v83;
            v85 = (RtlpHpHeapGlobals ^ *(_QWORD *)v82 ^ v82) >> 32;
            if ( (v85 & 0xFF0000) != 0 )
            {
              v84 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v82 + 8) ^ v82);
              goto LABEL_147;
            }
            if ( (_WORD)v85 )
            {
              v82 -= 16LL * (unsigned __int16)v85;
              v84 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v82 + 8) ^ v82);
              goto LABEL_147;
            }
          }
          v84 = 0;
          goto LABEL_147;
        }
LABEL_103:
        RtlpHpSegPageRangeShrink(v29, v34, 0LL);
        goto LABEL_52;
      }
    }
LABEL_59:
    v48 = *(_WORD **)(v29 + 56);
    v49 = 9;
    v50 = a2;
    goto LABEL_60;
  }
  v37 = *(_QWORD *)(v29 + 24);
  v38 = (((unsigned int)a2
        - (((unsigned int)qword_1801CCEC8 ^ *(_DWORD *)(v36 + 40) ^ (unsigned int)(v36 >> 12)) >> 16)
        - (unsigned int)v36)
       * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v36 + 44) << 6) + v37 + 72)) >> 32;
  if ( (_DWORD)a2
     - (((unsigned int)qword_1801CCEC8 ^ *(_DWORD *)(v36 + 40) ^ (unsigned int)(v36 >> 12)) >> 16)
     - (_DWORD)v36 != (_DWORD)v38 * (unsigned __int16)(qword_1801CCEC8 ^ *(_WORD *)(v36 + 40) ^ (v36 >> 12)) )
  {
    v6 = 0;
    goto LABEL_52;
  }
  v39 = *(unsigned __int16 *)(v37 + 76);
  if ( v39 < 0x40 )
  {
    v40 = __readgsqword(8 * v39 + 5248);
    goto LABEL_39;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( !TlsExpansionSlots )
    goto LABEL_124;
  v40 = (unsigned __int64)TlsExpansionSlots[v39 - 64];
LABEL_39:
  if ( !v40 )
LABEL_124:
    LOWORD(v40) = RtlpHpLfhThreadDataInitializeSet(v37);
  if ( (_WORD)v40 == *(_WORD *)(v36 + 46) && *(_BYTE *)(v36 + 22) != 1 )
  {
    v72 = *(_QWORD *)(v36 + 8 * (v38 >> 5) + 64);
    v73 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v38 & 0x1F);
    v41 = v38;
    *(_QWORD *)(v36 + 8 * (v38 >> 5) + 64) = v72 & v73;
    if ( ((unsigned int)v72 & ~(_DWORD)v73) != 0 )
    {
      ++*(_WORD *)(v36 + 32);
      goto LABEL_52;
    }
LABEL_74:
    RtlpLogHeapFailure(17, *(_QWORD *)v37, a2, v36, v41, 0LL);
    v6 = 0;
    goto LABEL_52;
  }
  v41 = v38;
  v42 = *(unsigned int *)(v36 + 8 * (v38 >> 5) + 64);
  if ( !_bittest64(&v42, v38 & 0x1F) )
    goto LABEL_74;
  v43 = *(_QWORD *)(v36 + 16);
  do
  {
    v90 = HIDWORD(v43);
    v88 = v43;
    if ( BYTE6(v43) == 1 )
      BYTE6(v88) = 2;
    if ( a2 )
    {
      v44 = *(_QWORD *)(v37 + 80);
      *(_WORD *)a2 = v43;
      LOWORD(v88) = v38 + 1;
      *(_DWORD *)(a2 + 8) = a2 ^ HIDWORD(v44) ^ __ROL4__(*(_DWORD *)a2 ^ v44, v43);
    }
    WORD1(v88) = WORD1(v43) + 1;
    v45 = (unsigned __int64)*(unsigned __int16 *)(v36 + 44) << 6;
    v46 = v43;
    v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 16), v88, v43);
  }
  while ( v46 != v43 );
  if ( !*(_BYTE *)(v45 + v37 + 92) )
  {
    *(_BYTE *)(v45 + v37 + 92) = 1;
    if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled() )
      RtlpHpEnvCompactionSchedule();
  }
  if ( BYTE2(v90) == 1 )
  {
    v74 = v37 + ((unsigned __int16)v90 << 6);
    _m_prefetchw((const void *)(v74 + 8));
    v75 = *(_QWORD *)(v74 + 8);
    v76 = *(_QWORD *)(v36 + 24);
    *(_QWORD *)(v36 + 24) = v76 & 0xFFF | (v75 - (v75 & 0xFFF));
    v78 = v75;
    v77 = _InterlockedCompareExchange64((volatile signed __int64 *)(v74 + 8), v36 | v75 & 0xFFF, v75);
    if ( v78 != v77 )
    {
      do
      {
        v79 = v77;
        *(_QWORD *)(v36 + 24) = v76 ^ (v76 ^ v77) & 0xFFFFFFFFFFFFF000uLL;
        v77 = _InterlockedCompareExchange64((volatile signed __int64 *)(v74 + 8), v36 | v77 & 0xFFF, v77);
      }
      while ( v77 != v79 );
    }
  }
LABEL_52:
  v4 = v91;
LABEL_53:
  __writegsqword(0x1858u, 0LL);
  if ( !v6 )
  {
    v81 = NtCurrentTeb();
    v81->LastStatusValue = -1073741811;
    v81->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
  }
LABEL_55:
  if ( v6 && v4 )
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_1801D2C38 + 8LL * v4 - 8) + 32LL), -v5);
  return v6;
}
