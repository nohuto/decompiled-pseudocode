/*
 * XREFs of RtlpHpTagFreeHeap @ 0x1800818A0
 * Callers:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 * Callees:
 *     RtlpHpLargeFree @ 0x180009DDC (RtlpHpLargeFree.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18000A350 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvCompactionSchedule @ 0x18000B720 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800100E0 (RtlpHpSegPageRangeShrink.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpHpFreeHeapSlow @ 0x180054194 (RtlpHpFreeHeapSlow.c)
 *     RtlpFreeNTHeapInternal @ 0x180054850 (RtlpFreeNTHeapInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1800554D0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpVsSlotFreeList @ 0x18011CCB0 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011E484 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x180143DB4 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlpInterlockedPushEntrySList @ 0x180166FD0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180167010 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpTagFreeHeap(__int64 a1, unsigned __int64 a2, int a3)
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
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rdx
  char v34; // cl
  unsigned __int64 v35; // r9
  __int64 v36; // r9
  char v37; // r10
  unsigned __int64 v38; // rdi
  __int64 v39; // r14
  unsigned __int64 v40; // rsi
  unsigned int v41; // ecx
  unsigned __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // rax
  signed __int64 v45; // rax
  unsigned __int64 v46; // r8
  int v47; // edx
  unsigned __int64 v48; // rdx
  signed __int64 v49; // rtt
  __int64 v51; // rdx
  int v52; // ecx
  __int64 v53; // r8
  __int64 v54; // r9
  _WORD *v55; // rdx
  __int64 v56; // rdi
  __int64 v57; // r15
  __int64 v58; // r8
  unsigned __int64 v59; // rdx
  char v60; // r8
  __int64 v61; // rcx
  unsigned __int16 v62; // ax
  __int64 v63; // rax
  __int64 v64; // rdx
  unsigned __int64 v65; // rcx
  int v66; // edx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // r14
  unsigned int v70; // ebx
  __int64 v71; // rax
  __int64 v72; // r8
  unsigned int v73; // r9d
  signed __int64 v74; // rcx
  signed __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  signed __int64 v79; // rax
  __int64 v80; // r10
  signed __int64 v81; // rax
  signed __int64 v82; // rtt
  signed __int64 v83; // rdx
  void **TlsExpansionSlots; // rdx
  struct _TEB *v85; // rbx
  __int64 v86; // rdx
  unsigned __int64 v87; // rcx
  int v88; // ecx
  unsigned __int64 v89; // rcx
  __int64 v90; // rcx
  int v91; // [rsp+30h] [rbp-68h]
  signed __int64 v92; // [rsp+30h] [rbp-68h]
  signed __int64 v93; // [rsp+40h] [rbp-58h]
  int v94; // [rsp+44h] [rbp-54h]
  unsigned __int16 v95; // [rsp+A0h] [rbp+8h]
  int v96; // [rsp+B0h] [rbp+18h]
  int v97; // [rsp+B8h] [rbp+20h]
  int v98; // [rsp+B8h] [rbp+20h]

  v96 = a3;
  v3 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v7 = 1;
  v95 = 0;
  if ( *(_DWORD *)(a1 + 16) != -571548178
    || a1 == qword_1801D4208[2 * (unsigned int)dword_1801816F8[BYTE1(RtlpHpEnvHandle)]] )
  {
    v9 = (_DWORD *)(a1 + 20);
    goto LABEL_27;
  }
  v9 = (_DWORD *)(a1 + 20);
  v91 = *(_DWORD *)(a1 + 20);
  v97 = 0;
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
                    - (((unsigned int)qword_1801CFEC8 ^ (unsigned int)(v3 >> 12) ^ *(_DWORD *)(v3 + 40)) >> 16)
                    - (unsigned int)v3)
                   * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v3 + 44) << 6)
                                                       + *(_QWORD *)(v11 + 24)
                                                       + 72)) >> 32;
              if ( (_DWORD)a2
                 - (((unsigned int)qword_1801CFEC8 ^ (unsigned int)(v3 >> 12) ^ *(_DWORD *)(v3 + 40)) >> 16)
                 - (_DWORD)v3 == (_DWORD)v19 * (unsigned __int16)(qword_1801CFEC8 ^ (v3 >> 12) ^ *(_WORD *)(v3 + 40)) )
              {
                v20 = 1LL << (v19 & 0x1F);
                v21 = (_QWORD *)(v3 + 8 * ((v19 >> 5) + 8));
                if ( (*(_DWORD *)v21 & (unsigned int)v20) != 0 )
                {
                  v22 = (unsigned __int16)qword_1801CFEC8 ^ (unsigned int)(unsigned __int16)((v3 >> 12) ^ v18);
                  if ( (HIDWORD(*v21) & v20) != 0 )
                  {
                    v23 = *(_WORD *)(v22 + a2 - 2) & 0x3FF;
                    v24 = *(unsigned __int16 *)(v22 + a2 - 2);
                    if ( (v24 & 0x8000u) != 0 )
                      v23 = 1;
                    v97 = (v24 >> 14) & 1;
                    LODWORD(v22) = v22 - v23;
                  }
                  else
                  {
                    v97 = 0;
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
              v26 = v97;
              v5 = 0;
            }
            else
            {
              v59 = a2 - 16;
              v60 = *(_BYTE *)(*(_QWORD *)(v11 + 32) + 4LL) & 1;
              if ( v60 && (a2 & 0xFFF) == 0 )
                v59 = a2 - 32;
              v3 = *(_QWORD *)v59;
              if ( ((RtlpHpHeapGlobals ^ v59 ^ *(_QWORD *)v59) & 0xFF000000000000LL) != 0 )
              {
                v61 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v3 ^ (unsigned int)v59) >> 16)) - 16;
                if ( v60 && ((v59 + 32) & 0xFFF) == 0 )
                  v61 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v3 ^ (unsigned int)v59) >> 16)) - 32;
                v25 = (unsigned int)v61;
                if ( (*(_DWORD *)(v59 + 8) & 0x100) != 0 )
                {
                  v62 = *(_WORD *)(v61 + a2 - 2);
                  if ( (v62 & 0x8000u) == 0 )
                    v25 = (unsigned int)v61 - (unsigned __int64)(*(_WORD *)(v61 + a2 - 2) & 0x1FFF);
                  else
                    v25 = (unsigned int)v61 - 1LL;
                  v26 = (v62 >> 14) & 1;
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
  v63 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a2 - qword_1801D0978) >> 20));
  if ( v63 )
  {
    v10 = v63 - 1;
    if ( v10 != 2 )
      goto LABEL_5;
  }
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  v64 = *(_QWORD *)(a1 + 80);
  v65 = *(_QWORD *)(a1 + 72);
  if ( (v64 & 1) != 0 )
  {
    if ( !v65 )
      goto LABEL_116;
    v65 ^= a1 + 72;
  }
  v66 = v64 & 1;
  if ( !v65 )
    goto LABEL_116;
  do
  {
    v67 = *(_QWORD *)(v65 + 24) & 0xFFFFFFFFFFFF0000uLL;
    if ( a2 >= v67 )
    {
      if ( a2 <= v67 )
        break;
      v68 = *(_QWORD *)(v65 + 8);
      if ( v66 && v68 )
      {
        v65 ^= v68;
        continue;
      }
LABEL_110:
      v65 = v68;
      continue;
    }
    v68 = *(_QWORD *)v65;
    if ( !v66 || !v68 )
      goto LABEL_110;
    v65 ^= v68;
  }
  while ( v65 );
  if ( v65 )
  {
    v98 = *(_QWORD *)(v65 + 32) & 1;
    v25 = (*(_QWORD *)(v65 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(v65 + 24);
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
    v26 = v98;
    goto LABEL_20;
  }
LABEL_116:
  v25 = -1LL;
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 64));
  v26 = 0;
LABEL_20:
  if ( v25 != -1 )
  {
    v6 = v25;
    if ( v26 )
    {
      v27 = v25 + a2 + 16;
      if ( (v91 & 0x2000) == 0 )
        v27 = v25 + a2;
      v28 = (unsigned __int16 *)((v27 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( v28 )
      {
        v5 = *v28;
        v95 = *v28;
      }
    }
  }
LABEL_26:
  a3 = v96;
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
    v7 = RtlpHpFreeHeapSlow((unsigned int *)a1, a2, v29);
    goto LABEL_54;
  }
  if ( (_WORD)a2 )
  {
    v30 = a1 + 320;
    goto LABEL_35;
  }
  v31 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a2 - qword_1801D0978) >> 20));
  if ( !v31 || (_DWORD)v31 == 3 )
  {
    v7 = RtlpHpLargeFree((__int128 *)a1, a2) != 0;
    goto LABEL_54;
  }
  v30 = a1 + 320;
  if ( (_DWORD)v31 == 2 )
    v30 = a1 + 512;
LABEL_35:
  v32 = *(_QWORD *)v30;
  v33 = a2 & *(_QWORD *)v30;
  if ( RtlpHpHeapGlobals ^ v30 ^ *(_QWORD *)(v33 + 0x10) ^ v33 )
    goto LABEL_60;
  v34 = *(_BYTE *)(v30 + 8);
  v35 = v33 + 32 * ((unsigned __int64)(unsigned int)(a2 - v33) >> v34);
  v36 = -32LL * *(unsigned __int8 *)(v35 + 26) + v35;
  v37 = *(_BYTE *)(v36 + 24);
  v38 = v33 + ((__int64)(v36 - v33) >> 5 << v34);
  if ( v37 + (v38 == a2) != 11 )
  {
    v55 = (_WORD *)((v32 & v36) + ((__int64)(v36 - (v32 & v36)) >> 5 << v34));
    if ( (v37 & 3) == 3 )
    {
      if ( (_WORD *)a2 == v55 )
        goto LABEL_104;
      if ( v37 == 15 )
      {
        if ( a2 > (unsigned __int64)v55 )
        {
          v56 = *(_QWORD *)(v30 + 32);
          v57 = a2 - 16;
          v58 = *(unsigned __int8 *)(v56 + 4);
          if ( (v58 & 1) != 0 && (a2 & 0xFFF) == 0 )
            v57 = a2 - 32;
          if ( v55 )
            goto LABEL_69;
          v86 = v57;
          v87 = (RtlpHpHeapGlobals ^ *(_QWORD *)v57 ^ (unsigned __int64)v57) >> 32;
          if ( (v87 & 0xFF0000) != 0 )
          {
            v88 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v57 + 8) ^ v57);
LABEL_148:
            v55 = (_WORD *)((v86 - (unsigned int)(v88 << 12)) & 0xFFFFFFFFFFFFF000uLL);
LABEL_69:
            if ( (((unsigned __int16)(v55[16] ^ v55[18]) ^ 0x2BED) & 0x7FFF) == 0 )
            {
              if ( ((RtlpHpHeapGlobals ^ *(_QWORD *)v57 ^ v57) & 0xFF000000000000LL) == 0 )
              {
                v54 = v57;
                v51 = *(_QWORD *)(v56 + 8) ^ v56;
                v53 = a2;
                v52 = 8;
                goto LABEL_62;
              }
              v69 = v56 + ((unsigned __int64)(unsigned __int16)v55[17] << 6);
              v70 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)*(_QWORD *)v57 ^ (unsigned int)v57) >> 16)) - 16;
              v71 = 0LL;
              if ( (v58 & 2) != 0 && v70 < 0x1000 )
              {
                v90 = v69 + 64;
                if ( *(_WORD *)(v69 + 64) < 0x20u )
                {
                  RtlpInterlockedPushEntrySList(v90, v57 + 16, v58, v36);
LABEL_97:
                  v72 = *(_QWORD *)(v30 + 24);
                  if ( v70 < *(unsigned __int16 *)(v72 + 68) )
                  {
                    v73 = RtlpLfhBucketIndexMap[(unsigned __int64)v70 >> 4] - 1;
                    do
                    {
                      v93 = *(_QWORD *)(v72 + 8LL * v73 + 448);
                      v74 = v93;
                      v75 = v93;
                      if ( (v93 & 1) == 0 )
                        break;
                      if ( WORD1(v93) > 1u )
                      {
                        --WORD1(v93);
                        v75 = v93;
                      }
                    }
                    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v72 + 8LL * v73 + 448), v75, v74) != v74 );
                  }
                  goto LABEL_53;
                }
                v71 = RtlpInterlockedFlushSList(v90, v55, v58, v36);
              }
              *(_QWORD *)(v57 + 16) = v71;
              RtlpHpVsSlotFreeList(v56, v69);
              goto LABEL_97;
            }
            v53 = (__int64)v55;
            v51 = *(_QWORD *)(v56 + 8) ^ v56;
            v52 = 18;
LABEL_61:
            v54 = 0LL;
LABEL_62:
            RtlpLogHeapFailure(v52, v51, v53, v54, 0LL, 0LL);
            v7 = 0;
            goto LABEL_53;
          }
          if ( (_WORD)v87 )
          {
            v86 = v57 - 16LL * (unsigned __int16)v87;
            v89 = (RtlpHpHeapGlobals ^ *(_QWORD *)v86 ^ (unsigned __int64)v86) >> 32;
            if ( (v89 & 0xFF0000) != 0 )
            {
              v88 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v86 + 8) ^ v86);
              goto LABEL_148;
            }
            if ( (_WORD)v89 )
            {
              v86 -= 16LL * (unsigned __int16)v89;
              v88 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v86 + 8) ^ v86);
              goto LABEL_148;
            }
          }
          v88 = 0;
          goto LABEL_148;
        }
LABEL_104:
        RtlpHpSegPageRangeShrink(v30, v36, 0);
        goto LABEL_53;
      }
    }
LABEL_60:
    v51 = *(_QWORD *)(v30 + 56);
    v52 = 9;
    v53 = a2;
    goto LABEL_61;
  }
  v39 = *(_QWORD *)(v30 + 24);
  v40 = (((unsigned int)a2
        - (((unsigned int)qword_1801CFEC8 ^ *(_DWORD *)(v38 + 40) ^ (unsigned int)(v38 >> 12)) >> 16)
        - (unsigned int)v38)
       * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v38 + 44) << 6) + v39 + 72)) >> 32;
  if ( (_DWORD)a2
     - (((unsigned int)qword_1801CFEC8 ^ *(_DWORD *)(v38 + 40) ^ (unsigned int)(v38 >> 12)) >> 16)
     - (_DWORD)v38 != (_DWORD)v40 * (unsigned __int16)(qword_1801CFEC8 ^ *(_WORD *)(v38 + 40) ^ (v38 >> 12)) )
  {
    v7 = 0;
    goto LABEL_53;
  }
  v41 = *(unsigned __int16 *)(v39 + 76);
  if ( v41 < 0x40 )
  {
    v42 = __readgsqword(8 * v41 + 5248);
    goto LABEL_40;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( !TlsExpansionSlots )
    goto LABEL_125;
  v42 = (unsigned __int64)TlsExpansionSlots[v41 - 64];
LABEL_40:
  if ( !v42 )
LABEL_125:
    LOWORD(v42) = RtlpHpLfhThreadDataInitializeSet(v39);
  if ( (_WORD)v42 == *(_WORD *)(v38 + 46) && *(_BYTE *)(v38 + 22) != 1 )
  {
    v76 = *(_QWORD *)(v38 + 8 * (v40 >> 5) + 64);
    v77 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v40 & 0x1F);
    v43 = v40;
    *(_QWORD *)(v38 + 8 * (v40 >> 5) + 64) = v76 & v77;
    if ( ((unsigned int)v76 & ~(_DWORD)v77) != 0 )
    {
      ++*(_WORD *)(v38 + 32);
      goto LABEL_53;
    }
LABEL_75:
    RtlpLogHeapFailure(17, *(_QWORD *)v39, a2, v38, v43, 0LL);
    v7 = 0;
    goto LABEL_53;
  }
  v43 = v40;
  v44 = *(unsigned int *)(v38 + 8 * (v40 >> 5) + 64);
  if ( !_bittest64(&v44, v40 & 0x1F) )
    goto LABEL_75;
  v45 = *(_QWORD *)(v38 + 16);
  do
  {
    v94 = HIDWORD(v45);
    v92 = v45;
    if ( BYTE6(v45) == 1 )
      BYTE6(v92) = 2;
    if ( a2 )
    {
      v46 = *(_QWORD *)(v39 + 80);
      v47 = v46;
      *(_WORD *)a2 = v45;
      v32 = HIDWORD(v46);
      LOWORD(v92) = v40 + 1;
      *(_DWORD *)(a2 + 8) = a2 ^ v32 ^ __ROL4__(*(_DWORD *)a2 ^ v47, v45);
    }
    WORD1(v92) = WORD1(v45) + 1;
    v48 = (unsigned __int64)*(unsigned __int16 *)(v38 + 44) << 6;
    v49 = v45;
    v45 = _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 16), v92, v45);
  }
  while ( v49 != v45 );
  if ( !*(_BYTE *)(v48 + v39 + 92) )
  {
    *(_BYTE *)(v48 + v39 + 92) = 1;
    if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(v92, v48, v32, v40) )
      RtlpHpEnvCompactionSchedule();
  }
  if ( BYTE2(v94) == 1 )
  {
    v78 = v39 + ((unsigned __int16)v94 << 6);
    _m_prefetchw((const void *)(v78 + 8));
    v79 = *(_QWORD *)(v78 + 8);
    v80 = *(_QWORD *)(v38 + 24);
    *(_QWORD *)(v38 + 24) = v80 & 0xFFF | (v79 - (v79 & 0xFFF));
    v82 = v79;
    v81 = _InterlockedCompareExchange64((volatile signed __int64 *)(v78 + 8), v38 | v79 & 0xFFF, v79);
    if ( v82 != v81 )
    {
      do
      {
        v83 = v81;
        *(_QWORD *)(v38 + 24) = v80 ^ (v80 ^ v81) & 0xFFFFFFFFFFFFF000uLL;
        v81 = _InterlockedCompareExchange64((volatile signed __int64 *)(v78 + 8), v38 | v81 & 0xFFF, v81);
      }
      while ( v81 != v83 );
    }
  }
LABEL_53:
  v5 = v95;
LABEL_54:
  __writegsqword(0x1858u, 0LL);
  if ( !v7 )
  {
    v85 = NtCurrentTeb();
    v85->LastStatusValue = -1073741811;
    v85->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741811);
  }
LABEL_56:
  if ( v7 && v5 )
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_1801D5C98 + 8LL * v5 - 8) + 32LL), -v6);
  return v7;
}
