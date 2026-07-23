/*
 * XREFs of RtlpHpTagAllocateHeap @ 0x18002E060
 * Callers:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18000A350 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvCompactionSchedule @ 0x18000B720 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpAllocateHeapBackend @ 0x18000CF74 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180011FD0 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x18002DB5C (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLargeAllocSize @ 0x18002DC40 (RtlpHpLargeAllocSize.c)
 *     RtlpHpVsContextAllocate @ 0x18002DD2C (RtlpHpVsContextAllocate.c)
 *     RtlpHpTagContextAllocateTag @ 0x18002DE84 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x18002FDE0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18002FEB0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpAllocateNTHeapInternal @ 0x180050E70 (RtlpAllocateNTHeapInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1800554D0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAlloc @ 0x1800BD0E4 (RtlpHpLargeAlloc.c)
 *     RtlpAllocateHeapRaiseException @ 0x1801186A8 (RtlpAllocateHeapRaiseException.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011E484 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x180143DB4 (RtlpHpEnvCompactionIsScheduled.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x180168590 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpTagAllocateHeap(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  unsigned __int16 v7; // r14
  unsigned __int64 SubProcessTag; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  int v14; // eax
  unsigned int v15; // r15d
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // r11
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned __int64 NTHeapInternal; // rdi
  __int64 HeapSlow; // rax
  signed __int64 i; // rbx
  signed __int64 v31; // rax
  struct _TEB *v32; // r9
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  int v35; // r10d
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rdx
  volatile signed __int64 *v40; // rcx
  __int64 v41; // r10
  __int64 v42; // rax
  volatile signed __int64 *v43; // r8
  signed __int64 v44; // r9
  __int64 v48; // rdx
  signed __int64 v49; // rcx
  signed __int64 v50; // rax
  unsigned int v51; // edx
  unsigned __int64 v52; // r8
  unsigned int v53; // ecx
  __int16 v54; // cx
  unsigned int v56; // edx
  int v57; // r8d
  int v58; // ecx
  int v59; // r15d
  int v60; // ebx
  int v61; // eax
  __int64 v62; // r10
  __int64 v63; // r11
  unsigned __int64 v64; // r8
  char v65; // cl
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rdx
  char v68; // r9
  __int64 v71; // rax
  unsigned __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // rcx
  __int64 v75; // r15
  unsigned __int64 v76; // r11
  __int64 v77; // rdx
  char v78; // cl
  unsigned __int64 v79; // r9
  __int64 v80; // r8
  int v81; // r11d
  unsigned __int64 v82; // r10
  __int64 v83; // rdx
  unsigned __int64 v84; // r8
  __int64 v85; // rcx
  unsigned int v86; // ebx
  int v87; // eax
  __int64 v88; // r12
  unsigned __int64 v89; // rdx
  char v90; // r8
  __int64 v91; // rcx
  unsigned int v92; // ebx
  unsigned int v93; // ebx
  unsigned int v94; // eax
  unsigned __int64 v95; // rax
  unsigned int v97; // eax
  void **TlsExpansionSlots; // r8
  unsigned __int64 v101; // rcx
  signed __int64 v102; // rax
  __int64 v103; // rdx
  signed __int64 v104; // rtt
  signed __int64 v105; // rax
  __int64 v106; // r10
  signed __int64 v107; // rax
  signed __int64 v108; // rtt
  signed __int64 v109; // rdx
  __int64 v110; // r11
  unsigned __int64 v111; // rdi
  struct _TEB *v112; // r9
  int v113; // r10d
  unsigned __int64 v114; // rcx
  unsigned __int64 v115; // rdx
  unsigned __int64 v116; // r8
  unsigned __int64 v117; // rdx
  __int64 v118; // r10
  _DWORD *v119; // r8
  unsigned int v123; // ecx
  __int16 v124; // cx
  struct _TEB *v125; // rbx
  unsigned __int8 v126; // [rsp+20h] [rbp-D8h]
  unsigned __int8 v127; // [rsp+20h] [rbp-D8h]
  int v128; // [rsp+28h] [rbp-D0h]
  signed __int64 v129; // [rsp+28h] [rbp-D0h]
  __int16 v130; // [rsp+28h] [rbp-D0h]
  unsigned int v131; // [rsp+30h] [rbp-C8h]
  int v132; // [rsp+30h] [rbp-C8h]
  int v133; // [rsp+34h] [rbp-C4h]
  unsigned int v134; // [rsp+34h] [rbp-C4h]
  unsigned int v135; // [rsp+38h] [rbp-C0h]
  unsigned int v136; // [rsp+38h] [rbp-C0h]
  int v137; // [rsp+38h] [rbp-C0h]
  int v138; // [rsp+3Ch] [rbp-BCh]
  int v139; // [rsp+44h] [rbp-B4h] BYREF
  volatile signed __int64 *v140; // [rsp+48h] [rbp-B0h]
  int v141; // [rsp+50h] [rbp-A8h]
  unsigned __int64 v142; // [rsp+58h] [rbp-A0h]
  int v143; // [rsp+60h] [rbp-98h]
  unsigned __int64 v144; // [rsp+68h] [rbp-90h]
  __int64 v145; // [rsp+70h] [rbp-88h]
  __int64 v146; // [rsp+78h] [rbp-80h]
  __int128 v147; // [rsp+90h] [rbp-68h]
  __int128 v148; // [rsp+A0h] [rbp-58h] BYREF

  v4 = 0LL;
  v7 = 0;
  v147 = RtlpHpEnvHandle;
  if ( *(_DWORD *)(a1 + 16) != -571548178
    || a1 == qword_1801D4208[2 * (unsigned int)dword_1801816F8[BYTE1(RtlpHpEnvHandle)]] )
  {
    goto LABEL_13;
  }
  v148 = 0LL;
  SubProcessTag = (unsigned __int64)NtCurrentTeb()->SubProcessTag;
  *(_QWORD *)&v148 = SubProcessTag;
  v9 = 0LL;
  v10 = SubProcessTag >> 24;
  v11 = SubProcessTag - RtlpHpNullGUID;
  v140 = (volatile signed __int64 *)(SubProcessTag >> 24);
  if ( SubProcessTag == RtlpHpNullGUID )
    v11 = *((_QWORD *)&v148 + 1) - qword_1801D08D0;
  if ( !v11 )
  {
    v7 = 0;
    goto LABEL_13;
  }
  v126 = SubProcessTag;
  if ( !word_1801D5CA4 )
    goto LABEL_99;
  v126 = SubProcessTag;
  v12 = *(_QWORD *)(qword_1801D5C98 + 8LL * (unsigned __int16)word_1801D5CA4 - 8);
  LOBYTE(v10) = (_BYTE)v140;
  v13 = *(_QWORD *)(v12 + 16) - SubProcessTag;
  if ( !v13 )
    v13 = *(_QWORD *)(v12 + 24) - *((_QWORD *)&v148 + 1);
  if ( v13 )
  {
    v9 = *((_QWORD *)&v148 + 1);
LABEL_99:
    v74 = dword_1801D5C8C & 0x1F;
    v75 = -1LL << v74;
    v76 = (-1LL << v74) & (HIBYTE(v148)
                         + 0x288D4C21D6A4D26DLL * v126
                         + 0x8B7970C2A4EFB2A9uLL * BYTE1(SubProcessTag)
                         + 0x3433B6F080FF8F35LL * BYTE2(SubProcessTag)
                         + 37
                         * (BYTE14(v148)
                          + 37
                          * (BYTE13(v148)
                           + 37
                           * (BYTE12(v148)
                            + 37
                            * (BYTE11(v148)
                             + 37
                             * (BYTE10(v148)
                              + 37
                              * (BYTE9(v148)
                               + 37
                               * ((unsigned __int8)v9
                                + 37
                                * (HIBYTE(SubProcessTag)
                                 + 37
                                 * (BYTE6(SubProcessTag)
                                  + 37
                                  * (BYTE5(SubProcessTag) + 37 * (BYTE4(SubProcessTag) + 37LL * (unsigned __int8)v10)))))))))))
                         + 0x201911C49281756FLL);
    v140 = (volatile signed __int64 *)(HIBYTE(v148)
                                     + 0x288D4C21D6A4D26DLL * v126
                                     + 0x8B7970C2A4EFB2A9uLL * BYTE1(SubProcessTag)
                                     + 0x3433B6F080FF8F35LL * BYTE2(SubProcessTag)
                                     + 37
                                     * (BYTE14(v148)
                                      + 37
                                      * (BYTE13(v148)
                                       + 37
                                       * (BYTE12(v148)
                                        + 37
                                        * (BYTE11(v148)
                                         + 37
                                         * (BYTE10(v148)
                                          + 37
                                          * (BYTE9(v148)
                                           + 37
                                           * ((unsigned __int8)v9
                                            + 37
                                            * (HIBYTE(SubProcessTag)
                                             + 37
                                             * (BYTE6(SubProcessTag)
                                              + 37
                                              * (BYTE5(SubProcessTag)
                                               + 37 * (BYTE4(SubProcessTag) + 37LL * (unsigned __int8)v10)))))))))))
                                     + 0x201911C49281756FLL);
    v77 = 0LL;
LABEL_100:
    if ( v77 )
      goto LABEL_103;
    if ( (unsigned int)dword_1801D5C8C >> 5 )
    {
      v74 = qword_1801D5C90;
      v77 = qword_1801D5C90
          + 8LL
          * ((37
            * (BYTE6(v76)
             + 37
             * (BYTE5(v76)
              + 37
              * (BYTE4(v76)
               + 37 * (BYTE3(v76) + 37 * (BYTE2(v76) + 37 * (BYTE1(v76) + 37 * ((unsigned __int8)v76 + 11623883)))))))
            + HIBYTE(v76)) & (((unsigned int)dword_1801D5C8C >> 5) - 1));
LABEL_103:
      while ( 1 )
      {
        v77 = *(_QWORD *)v77;
        if ( (v77 & 1) != 0 )
          break;
        v74 = v75 & *(_QWORD *)(v77 + 8);
        if ( v76 == v74 )
        {
          v74 = SubProcessTag - *(_QWORD *)(v77 + 16);
          if ( SubProcessTag == *(_QWORD *)(v77 + 16) )
            v74 = v9 - *(_QWORD *)(v77 + 24);
          if ( v74 )
            goto LABEL_100;
          if ( v77 )
          {
            _InterlockedAdd64((volatile signed __int64 *)(v77 + 32), a2);
            v7 = *(_WORD *)(v77 + 40);
            if ( v7 )
              goto LABEL_12;
          }
          break;
        }
      }
    }
    v7 = RtlpHpTagContextAllocateTag(v74, &v148, (__int64)v140, a2);
    goto LABEL_11;
  }
  _InterlockedAdd64((volatile signed __int64 *)(v12 + 32), a2);
  v7 = *(_WORD *)(v12 + 40);
LABEL_11:
  if ( v7 )
  {
LABEL_12:
    word_1801D5CA4 = v7;
    a3 |= 0x100u;
  }
LABEL_13:
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
  {
    NTHeapInternal = RtlpAllocateNTHeapInternal(a1);
    goto LABEL_59;
  }
  if ( a3 )
  {
    if ( a3 == 8 )
    {
      v14 = 2;
    }
    else
    {
      v56 = (a3 >> 2) & 2 | 0x80000000;
      if ( (a3 & 4) == 0 )
        v56 = (a3 >> 2) & 2;
      v57 = v56 | 0x100;
      if ( (a3 & 0x100) == 0 )
        v57 = v56;
      v58 = a3 & 0xE00 | v57;
      if ( (a3 & 0xE00) == 0 )
        v58 = v57;
      v14 = v58 | 0x10000000;
      if ( (a3 & 0x10) == 0 )
        v14 = v58;
    }
  }
  else
  {
    v14 = 0;
  }
  v141 = v14;
  __writegsqword(0x1858u, a1 + 20);
  v15 = ((unsigned __int16)v14 | (unsigned __int16)*(_DWORD *)(a1 + 20)) & 0x2FFA;
  if ( (((unsigned __int16)v14 | (unsigned __int16)*(_DWORD *)(a1 + 20)) & 0x2FF8) == 0 )
  {
    v16 = *(unsigned __int16 *)(a1 + 900);
    v17 = 1LL;
    if ( a2 > 1 )
      v17 = a2;
    v144 = v17;
    if ( v17 >= v16 )
      goto LABEL_73;
    v18 = v17 + 2;
    v19 = a1 + 832;
    v20 = *(unsigned __int16 *)(a1 + 908);
    if ( (_DWORD)a2 == (_DWORD)v17 )
      v18 = v17;
    v21 = (unsigned int)(v18 + 15) >> 4;
    v22 = (unsigned int)RtlpLfhBucketIndexMap[v21] - 1;
    v131 = RtlpLfhBucketIndexMap[v21] - 1;
    if ( v20 >= 0x40 )
    {
      TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
      if ( !TlsExpansionSlots )
        goto LABEL_144;
      v23 = (__int64)TlsExpansionSlots[v20 - 64];
    }
    else
    {
      v23 = __readgsqword(8 * v20 + 5248);
    }
    if ( v23 )
    {
LABEL_25:
      v142 = v23;
      v24 = v19 + ((unsigned __int16)v23 << 6);
      v140 = (volatile signed __int64 *)(2LL * (unsigned int)v22);
      v25 = *(unsigned __int16 *)((char *)v140 + v24);
      if ( *(_WORD *)((char *)v140 + v24) )
        goto LABEL_26;
      if ( RtlpHpLfhBucketCheckAndUpdate(v19, v22, v25) )
      {
        v19 = a1 + 832;
        v101 = a1 + 832 + ((unsigned __int64)BYTE4(v142) << 8) + 1472;
        LODWORD(v25) = *(unsigned __int16 *)((char *)v140 + v101);
        if ( v24 != v101 )
          *(_WORD *)((char *)v140 + v24) = *(_WORD *)((char *)v140 + v101);
LABEL_26:
        v26 = v19 + (unsigned int)((_DWORD)v25 << 6);
        v146 = v26;
        if ( *(_WORD *)(v26 + 4) )
        {
          v27 = *(_QWORD *)(v26 + 56);
          if ( (v27 & 0xFFF) != 0 )
          {
            v110 = 0x100000001LL;
            v111 = v27 & 0xFFFFFFFFFFFFF000uLL;
            v144 = v27 & 0xFFFFFFFFFFFFF000uLL;
            *(_QWORD *)(v26 + 56) = v27 - 1;
            v112 = NtCurrentTeb();
            v113 = *(unsigned __int8 *)((v27 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
            v114 = v112->RngState[0];
            v115 = v112->RngState[1];
            v137 = qword_1801CFEC8 ^ *(_DWORD *)((v27 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v27 & 0xFFFFFFFFFFFFF000uLL) >> 12);
            v116 = v115 + v114;
            if ( (unsigned int)a2 >= (unsigned __int16)v137 )
              v110 = 1LL;
            v117 = v114 ^ v115;
            v112->RngState[1] = __ROL8__(v117, 37);
            v112->RngState[0] = v117 ^ (v117 << 16) ^ __ROL8__(v114, 24);
            v130 = BYTE4(v116);
            v118 = v111 + 64 + 8 * ((unsigned int)(v113 - 8) - 1LL);
            v119 = (_DWORD *)((v27 & 0xFFFFFFFFFFFFF000uLL)
                            + 64
                            + 8LL * *(unsigned __int8 *)((v27 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
            while ( *v119 == -1 )
            {
              if ( v119 == (_DWORD *)v118 )
                v119 = (_DWORD *)(v111 + 64);
              else
                v119 += 2;
            }
            _RAX = 1LL << ((unsigned __int16)(v130 * __popcnt((unsigned int)~*v119)) >> 8);
            __asm
            {
              pdep    rcx, rax, rcx
              tzcnt   rdx, rcx
            }
            *(_QWORD *)v119 |= v110 << _RDX;
            v123 = _RDX + 4 * ((_DWORD)v119 - (v111 + 64));
            *(_BYTE *)(v111 + 36) = v123 >> 5;
            NTHeapInternal = v144 + HIWORD(v137) + v123 * (unsigned __int16)v137;
            if ( (v15 & 2) != 0 )
              RtlHeapZero(
                v144 + HIWORD(v137) + v123 * (unsigned __int16)v137,
                ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
            if ( (unsigned int)a2 < (unsigned __int16)v137 )
            {
              v124 = v137 - a2;
              if ( (unsigned __int16)v137 - (_DWORD)a2 == 1 )
                v124 = 0x8000;
              *(_WORD *)((unsigned __int16)v137 + NTHeapInternal - 2) = v124;
            }
          }
          else
          {
            NTHeapInternal = RtlpHpLfhSlotAllocateSlow(v19);
          }
          goto LABEL_57;
        }
        v132 = 0;
        _m_prefetchw((const void *)(v26 + 56));
        for ( i = *(_QWORD *)(v26 + 56); ; i = v31 )
        {
          if ( (i & 0xFFF) == 0 )
          {
            NTHeapInternal = RtlpHpLfhSlotAllocateSlow(v19);
            goto LABEL_54;
          }
          v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v26 + 56), i - 1, i);
          if ( i == v31 )
            break;
          v132 = 1;
        }
        v32 = NtCurrentTeb();
        v33 = i & 0xFFFFFFFFFFFFF000uLL;
        v142 = i & 0xFFFFFFFFFFFFF000uLL;
        v34 = v32->RngState[1];
        v35 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x18);
        v128 = qword_1801CFEC8 ^ *(_DWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((i & 0xFFFFFFFFFFFFF000uLL) >> 12);
        v36 = 0x100000001LL;
        v37 = v32->RngState[0];
        if ( (unsigned int)a2 >= (unsigned __int16)v128 )
          v36 = 1LL;
        v145 = v36;
        v38 = v34 + v37;
        v39 = v37 ^ v34;
        v32->RngState[0] = v39 ^ (v39 << 16) ^ __ROL8__(v37, 24);
        v40 = (volatile signed __int64 *)(v33 + 64);
        v133 = BYTE4(v38);
        v32->RngState[1] = __ROL8__(v39, 37);
        v135 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x32);
        v127 = *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x27);
        v41 = v33 + 64 + 8 * ((unsigned int)(v35 - 8) - 1LL);
        v42 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24);
        v140 = (volatile signed __int64 *)v41;
        v43 = (volatile signed __int64 *)(v33 + 64 + 8 * v42);
LABEL_38:
        while ( 1 )
        {
          v44 = *v43;
          _RDX = (unsigned int)~*(_DWORD *)v43;
          if ( *(_DWORD *)v43 != -1 )
            break;
          if ( v43 == (volatile signed __int64 *)v41 )
LABEL_135:
            v43 = v40;
          else
            ++v43;
        }
        while ( 1 )
        {
          if ( (qword_1801CFEE8 & 4) != 0 )
          {
            _RCX = 1LL << ((unsigned __int16)(v133 * __popcnt(_RDX)) >> 8);
            __asm
            {
              pdep    rdx, rcx, rdx
              tzcnt   r10, rdx
            }
            v48 = v145 << _R10;
          }
          else
          {
            if ( v43 == (volatile signed __int64 *)v41 || v135 != 32 )
            {
              _BitScanReverse64(&v95, _RDX);
              __asm { tzcnt   rcx, rdx }
              v143 = v95;
              v97 = v95 - _RCX + 1;
              if ( v135 < v97 )
                v97 = v135;
              v133 = _RCX + ((v133 * v97) >> 8);
              _RDX = __ROR8__(_RDX, v133);
              __asm { tzcnt   rax, rdx }
              LODWORD(_R10) = _RAX + v133;
            }
            else
            {
              _RAX = (unsigned int)__ROR4__(_RDX, v133);
              __asm { tzcnt   r10, rax }
              LODWORD(_R10) = ((_BYTE)v133 + (_BYTE)_R10) & 0x1F;
            }
            v48 = v145 << _R10;
          }
          v49 = v44;
          v50 = _InterlockedCompareExchange64(v43, v44 | v48, v44);
          v44 = v50;
          if ( v50 == v49 )
            break;
          v41 = (__int64)v140;
          v94 = ~(_DWORD)v50;
          _RDX = v94;
          if ( !v94 )
          {
            v40 = (volatile signed __int64 *)(v33 + 64);
            if ( v43 == v140 )
              goto LABEL_135;
            ++v43;
            goto LABEL_38;
          }
        }
        v51 = (unsigned __int16)v128;
        v52 = (unsigned int)(_R10 + 4 * ((_DWORD)v43 - (v33 + 64)));
        *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24) = (unsigned int)v52 >> 5;
        v134 = v52;
        v53 = HIWORD(v128) + v52 * (unsigned __int16)v128;
        v136 = v53;
        if ( v127 > 1u )
        {
          if ( (int)RtlpHpLfhSubsegmentCommitBlock(v19, i & 0xFFFFFFFFFFFFF000uLL, v53) < 0 )
          {
            NTHeapInternal = 0LL;
            if ( v134 != -1 )
            {
              v52 = v142;
              _InterlockedAnd64(
                (volatile signed __int64 *)(v142 + 8LL * (v134 >> 5) + 64),
                __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v134 & 0x1F));
              goto LABEL_156;
            }
LABEL_53:
            if ( NTHeapInternal )
              goto LABEL_54;
            v52 = v142;
LABEL_156:
            v102 = *(_QWORD *)(v52 + 16);
            v103 = a1 + 832;
            do
            {
              v138 = HIDWORD(v102);
              v129 = v102;
              if ( BYTE6(v102) == 1 )
                BYTE6(v129) = 2;
              WORD1(v129) = WORD1(v102) + 1;
              v44 = (unsigned __int64)*(unsigned __int16 *)(v52 + 44) << 6;
              v104 = v102;
              v102 = _InterlockedCompareExchange64((volatile signed __int64 *)(v52 + 16), v129, v102);
            }
            while ( v104 != v102 );
            if ( !*(_BYTE *)(v44 + v103 + 92) )
            {
              *(_BYTE *)(v44 + v103 + 92) = 1;
              if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(v129, v103, v52, v44) )
              {
                RtlpHpEnvCompactionSchedule();
                v52 = v142;
                v103 = a1 + 832;
              }
            }
            if ( BYTE2(v138) == 1 )
            {
              v44 = v103 + ((unsigned __int16)v138 << 6);
              _m_prefetchw((const void *)(v44 + 8));
              v105 = *(_QWORD *)(v44 + 8);
              v106 = *(_QWORD *)(v52 + 24);
              *(_QWORD *)(v52 + 24) = v106 ^ (v105 ^ v106) & 0xFFFFFFFFFFFFF000uLL;
              v108 = v105;
              v107 = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)(v44 + 8),
                       v105 ^ (i ^ v105) & 0xFFFFFFFFFFFFF000uLL,
                       v105);
              if ( v108 != v107 )
              {
                do
                {
                  v109 = v107;
                  *(_QWORD *)(v52 + 24) = v106 ^ (v107 ^ v106) & 0xFFFFFFFFFFFFF000uLL;
                  v107 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v44 + 8),
                           v107 ^ (v107 ^ i) & 0xFFFFFFFFFFFFF000uLL,
                           v107);
                }
                while ( v107 != v109 );
              }
            }
LABEL_54:
            if ( v132 )
              RtlpHpLfhBucketUpdateAffinityMapping(
                a1 + 832,
                a1 + 832 + ((unsigned __int64)*(unsigned __int16 *)(v146 + 2) << 6),
                v52,
                v44);
            v17 = v144;
LABEL_57:
            if ( NTHeapInternal != -1LL )
              goto LABEL_58;
            goto LABEL_73;
          }
        }
        else
        {
          if ( (unsigned int)v52 <= *(unsigned __int16 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
          {
LABEL_47:
            NTHeapInternal = v142 + v53;
            if ( (v15 & 2) != 0 )
            {
              RtlHeapZero(v142 + v53, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
              v51 = (unsigned __int16)v128;
            }
            if ( (unsigned int)a2 < v51 )
            {
              v54 = v51 - a2;
              if ( v51 - (_DWORD)a2 == 1 )
                v54 = 0x8000;
              *(_WORD *)(v51 + NTHeapInternal - 2) = v54;
            }
            goto LABEL_53;
          }
          RtlpHpLfhSubsegmentPrefetch(v19, i & 0xFFFFFFFFFFFFF000uLL, v53, (unsigned __int16)v128);
        }
        v51 = (unsigned __int16)v128;
        v53 = v136;
        goto LABEL_47;
      }
LABEL_73:
      if ( v17 <= 0x20000 )
      {
        NTHeapInternal = RtlpHpVsContextAllocate((_BYTE *)(a1 + 704), a2, v17, v15);
        goto LABEL_58;
      }
      if ( v17 <= *(unsigned int *)(a1 + 528) )
      {
        NTHeapInternal = RtlpHpAllocateHeapBackend(a1, a2, v17, v15);
        goto LABEL_58;
      }
      HeapSlow = RtlpHpLargeAlloc(a1, a2, v17, v15);
      goto LABEL_31;
    }
LABEL_144:
    v23 = RtlpHpLfhThreadDataInitializeSet(a1 + 832);
    v22 = v131;
    v19 = a1 + 832;
    goto LABEL_25;
  }
  if ( (((unsigned __int8)v14 | (unsigned __int8)*(_DWORD *)(a1 + 20)) & 0x10) != 0
    && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
  {
    RtlpHpEnvAcquireGlobalLockSharedContended(
      a1 + 20,
      ((unsigned __int16)v14 | (unsigned __int16)*(_DWORD *)(a1 + 20)) & 0x2FFA);
  }
  HeapSlow = RtlpHpAllocateHeapSlow(a1, a2, v15);
LABEL_31:
  NTHeapInternal = HeapSlow;
LABEL_58:
  __writegsqword(0x1858u, 0LL);
  if ( !NTHeapInternal )
  {
    v125 = NtCurrentTeb();
    v125->LastStatusValue = -1073741801;
    v125->LastErrorValue = RtlNtStatusToDosErrorNoTeb(-1073741801);
    if ( (*(_DWORD *)(a1 + 20) | v141) < 0 )
      RtlpAllocateHeapRaiseException(a2);
  }
LABEL_59:
  if ( !v7 )
    return NTHeapInternal;
  if ( !NTHeapInternal )
  {
    _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_1801D5C98 + 8LL * v7 - 8) + 32LL), -(__int64)a2);
    return NTHeapInternal;
  }
  v59 = *(_DWORD *)(a1 + 20);
  v60 = 0;
  v139 = 0;
  if ( (_WORD)NTHeapInternal )
  {
    v61 = 0;
  }
  else
  {
    v71 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((NTHeapInternal - qword_1801D0978) >> 20));
    if ( !v71 || (v61 = v71 - 1, v61 == 2) )
    {
      v72 = RtlpHpLargeAllocSize((_RTL_SRWLOCK *)a1, NTHeapInternal, &v139);
      v60 = v139;
      v73 = v72;
      goto LABEL_120;
    }
  }
  v62 = a1 + 192LL * v61 + 320;
  v63 = *(_QWORD *)v62;
  v64 = NTHeapInternal & *(_QWORD *)v62;
  if ( RtlpHpHeapGlobals ^ v62 ^ *(_QWORD *)(v64 + 0x10) ^ v64 )
    goto LABEL_83;
  v65 = *(_BYTE *)(v62 + 8);
  v66 = v64 + 32 * ((unsigned __int64)(unsigned int)(NTHeapInternal - v64) >> v65);
  v67 = -32LL * *(unsigned __int8 *)(v66 + 26) + v66;
  v68 = *(_BYTE *)(v67 + 24);
  if ( (v68 & 3) != 3 || v64 + ((__int64)(v67 - v64) >> 5 << v65) != NTHeapInternal && (v68 & 0xCu) < 8 )
    goto LABEL_83;
  if ( !v67 )
    goto LABEL_83;
  v78 = *(_BYTE *)(v62 + 8);
  v79 = (v63 & v67) + ((__int64)(v67 - (v63 & v67)) >> 5 << v78);
  if ( NTHeapInternal <= v79 )
  {
    LOWORD(v93) = *(_WORD *)(v67 + 8);
    v73 = ((unsigned __int64)*(unsigned __int8 *)(v67 + 31) << v78) - *(unsigned int *)(v67 + 4);
LABEL_132:
    v60 = v93 & 1;
    goto LABEL_120;
  }
  if ( (*(_BYTE *)(v67 + 24) & 0xC) == 8 )
  {
    v80 = *(_QWORD *)(v62 + 24);
    v81 = *(_DWORD *)((v63 & v67) + ((__int64)(v67 - (v63 & v67)) >> 5 << v78) + 0x28);
    v82 = (((unsigned int)NTHeapInternal
          - (((unsigned int)qword_1801CFEC8 ^ (unsigned int)(v79 >> 12) ^ *(_DWORD *)(v79 + 40)) >> 16)
          - (unsigned int)v79)
         * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v79 + 44) << 6) + v80 + 72)) >> 32;
    if ( (_DWORD)NTHeapInternal
       - (((unsigned int)qword_1801CFEC8 ^ (unsigned int)(v79 >> 12) ^ *(_DWORD *)(v79 + 40)) >> 16)
       - (_DWORD)v79 == (_DWORD)v82 * (unsigned __int16)(qword_1801CFEC8 ^ (v79 >> 12) ^ *(_WORD *)(v79 + 40)) )
    {
      v83 = 1LL << (v82 & 0x1F);
      v84 = v79
          + 8
          * ((((unsigned int)NTHeapInternal
             - (((unsigned int)qword_1801CFEC8 ^ (unsigned int)(v79 >> 12) ^ *(_DWORD *)(v79 + 40)) >> 16)
             - (unsigned int)v79)
            * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v79 + 44) << 6) + v80 + 72)) >> 37);
      if ( (*(_DWORD *)(v84 + 64) & (unsigned int)v83) != 0 )
      {
        v85 = (unsigned __int16)qword_1801CFEC8 ^ (unsigned int)(unsigned __int16)((v79 >> 12) ^ v81);
        if ( (HIDWORD(*(_QWORD *)(v84 + 64)) & v83) != 0 )
        {
          v86 = *(unsigned __int16 *)(v85 + NTHeapInternal - 2);
          v87 = *(_WORD *)(v85 + NTHeapInternal - 2) & 0x3FF;
          if ( (v86 & 0x8000u) != 0 )
            v87 = 1;
          LODWORD(v85) = v85 - v87;
          v60 = (v86 >> 14) & 1;
        }
        v73 = (unsigned int)v85;
      }
      else
      {
        v73 = -1LL;
      }
    }
    else
    {
      v73 = -1LL;
    }
    goto LABEL_120;
  }
  v89 = NTHeapInternal - 16;
  v90 = *(_BYTE *)(*(_QWORD *)(v62 + 32) + 4LL) & 1;
  if ( v90 && (NTHeapInternal & 0xFFF) == 0 )
    v89 = NTHeapInternal - 32;
  if ( ((HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v89) ^ HIDWORD(v89)) & 0xFF0000) == 0 )
  {
    v73 = -1LL;
    goto LABEL_120;
  }
  v91 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)*(_QWORD *)v89 ^ (unsigned int)v89) >> 16)) - 16;
  if ( v90 && ((v89 + 32) & 0xFFF) == 0 )
    v91 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)*(_QWORD *)v89 ^ (unsigned int)v89) >> 16)) - 32;
  v73 = (unsigned int)v91;
  if ( (*(_DWORD *)(v89 + 8) & 0x100) != 0 )
  {
    v92 = *(unsigned __int16 *)(v91 + NTHeapInternal - 2);
    if ( (v92 & 0x8000u) == 0 )
      v73 = (unsigned int)v91 - (unsigned __int64)(v92 & 0x1FFF);
    else
      v73 = (unsigned int)v91 - 1LL;
    v93 = v92 >> 14;
    goto LABEL_132;
  }
LABEL_120:
  if ( v73 == -1 )
  {
LABEL_83:
    v4 = -1LL;
LABEL_84:
    *(_WORD *)v4 = v7;
    return NTHeapInternal;
  }
  if ( !v60 )
    goto LABEL_84;
  v88 = v73 + NTHeapInternal + 16;
  if ( (v59 & 0x2000) == 0 )
    v88 = v73 + NTHeapInternal;
  *(_WORD *)((v88 + 15) & 0xFFFFFFFFFFFFFFF0uLL) = v7;
  return NTHeapInternal;
}
