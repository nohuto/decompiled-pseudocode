/*
 * XREFs of RtlpHpReallocMove @ 0x18002C3C0
 * Callers:
 *     RtlpHpSegReAlloc @ 0x18002C120 (RtlpHpSegReAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x1800BCCC4 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlpHpLargeFree @ 0x180009DDC (RtlpHpLargeFree.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18000A350 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvCompactionSchedule @ 0x18000B720 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpAllocateHeapBackend @ 0x18000CF74 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800100E0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180011FD0 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpVsChunkSetExtraPresent @ 0x18002D6B8 (RtlpHpVsChunkSetExtraPresent.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x18002DB5C (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpVsContextAllocate @ 0x18002DD2C (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x18002FDE0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18002FEB0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1800554D0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAlloc @ 0x1800BD0E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1800F5AF8 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpVsSlotFreeList @ 0x18011CCB0 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x180143DB4 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlpInterlockedPushEntrySList @ 0x180166FD0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x180167010 (RtlpInterlockedFlushSList.c)
 *     RtlHeapZero @ 0x180168590 (RtlHeapZero.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpHpReallocMove(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r13
  __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // r15d
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r15
  __int64 v17; // rsi
  signed __int64 i; // rbx
  signed __int64 v19; // rax
  struct _TEB *v20; // r9
  unsigned int v21; // r11d
  unsigned __int64 v22; // rdi
  __int64 v23; // rcx
  int v24; // r10d
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  volatile signed __int64 *v29; // rcx
  __int64 v30; // r10
  volatile signed __int64 *v31; // r8
  signed __int64 v32; // r9
  __int64 v36; // r10
  signed __int64 v37; // rcx
  signed __int64 v38; // rax
  unsigned int v39; // ecx
  unsigned __int64 v40; // r8
  __int64 v41; // rdi
  __int64 Slow; // rdi
  __int16 v43; // cx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 HeapBackend; // rax
  size_t v47; // r8
  __int64 v48; // rcx
  unsigned __int64 v49; // rdx
  int v50; // eax
  __int64 v51; // r9
  __int64 v52; // r8
  char v53; // cl
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  char v56; // r11
  char v57; // r8
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // rdx
  int v64; // ecx
  int v65; // r9d
  char v67; // cl
  unsigned __int64 v68; // r9
  __int64 v69; // r9
  char v70; // r12
  unsigned __int64 v71; // rbx
  __int64 v72; // r12
  unsigned __int64 v73; // rsi
  unsigned int v74; // ecx
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // r8
  __int64 v77; // rax
  signed __int64 v78; // rax
  unsigned __int64 v79; // r8
  int v80; // edx
  unsigned __int64 v81; // rdx
  signed __int64 v82; // rtt
  __int64 v83; // r9
  signed __int64 v84; // rax
  __int64 v85; // r10
  signed __int64 v86; // rax
  signed __int64 v87; // rtt
  signed __int64 v88; // r8
  _WORD *v89; // rdx
  __int64 v90; // r13
  unsigned __int64 v91; // r12
  __int64 v92; // r9
  __int64 v93; // r8
  __int64 v94; // rax
  __int64 v95; // r14
  unsigned int v96; // ebx
  __int64 v97; // rdx
  __int64 v98; // r8
  signed __int64 v99; // rcx
  signed __int64 v100; // rdx
  __int64 v103; // rdx
  __int64 v104; // r9
  unsigned int v105; // eax
  unsigned __int64 v107; // rax
  unsigned int v108; // eax
  void **TlsExpansionSlots; // rdx
  void **v111; // rdx
  unsigned __int64 v112; // rcx
  signed __int64 v113; // rax
  __int64 v114; // rdx
  signed __int64 v115; // rtt
  __int64 v116; // r10
  signed __int64 v117; // rax
  __int64 v118; // r11
  signed __int64 v119; // rax
  signed __int64 v120; // rtt
  __int64 v121; // rax
  unsigned __int64 v122; // rdi
  struct _TEB *v123; // r9
  int v124; // r10d
  int v125; // eax
  unsigned __int64 v126; // rcx
  unsigned __int64 v127; // rdx
  __int64 v128; // rbx
  bool v129; // cf
  __int64 v130; // rax
  unsigned __int64 v131; // r8
  unsigned __int64 v132; // rdx
  __int64 v133; // r10
  _DWORD *v134; // r8
  unsigned int v138; // ecx
  __int16 v139; // cx
  int v140; // ecx
  int v141; // ecx
  unsigned __int64 v142; // rdx
  int v143; // ecx
  __int64 v144; // rcx
  __int64 v145; // [rsp+20h] [rbp-88h]
  __int64 v146; // [rsp+30h] [rbp-78h]
  __int64 v147; // [rsp+30h] [rbp-78h]
  int v148; // [rsp+34h] [rbp-74h]
  int v149; // [rsp+34h] [rbp-74h]
  int v150; // [rsp+38h] [rbp-70h]
  unsigned int v151; // [rsp+40h] [rbp-68h]
  unsigned int v152; // [rsp+40h] [rbp-68h]
  int v153; // [rsp+44h] [rbp-64h]
  unsigned __int16 v154; // [rsp+46h] [rbp-62h]
  __int64 v155; // [rsp+48h] [rbp-60h]
  unsigned __int64 v156; // [rsp+50h] [rbp-58h]
  __int64 v157; // [rsp+58h] [rbp-50h]
  volatile signed __int64 *v158; // [rsp+58h] [rbp-50h]
  unsigned __int64 v159; // [rsp+58h] [rbp-50h]
  __int64 v160; // [rsp+60h] [rbp-48h]
  int v161; // [rsp+6Ch] [rbp-3Ch]
  unsigned __int8 v163; // [rsp+C0h] [rbp+18h]
  signed __int64 v164; // [rsp+C0h] [rbp+18h]
  signed __int64 v165; // [rsp+C0h] [rbp+18h]
  signed __int64 v166; // [rsp+C0h] [rbp+18h]
  __int16 v167; // [rsp+C0h] [rbp+18h]
  unsigned __int8 v168; // [rsp+C4h] [rbp+1Ch]
  unsigned int v169; // [rsp+C8h] [rbp+20h]

  v169 = a4;
  v4 = *(_QWORD *)(a3 + 32);
  v7 = *(_QWORD *)(a3 + 24);
  v8 = a1;
  v155 = v7;
  if ( v4 >= *(unsigned __int16 *)(a1 + 900) )
  {
    v44 = (unsigned int)v4;
    v45 = (unsigned int)v7;
    v16 = 0LL;
    goto LABEL_36;
  }
  v9 = a1 + 832;
  v10 = v4 + 2;
  v160 = a1 + 832;
  if ( (_DWORD)v7 == (_DWORD)v4 )
    v10 = *(_QWORD *)(a3 + 32);
  v11 = *(unsigned __int16 *)(a1 + 908);
  v12 = RtlpLfhBucketIndexMap[(unsigned int)(v10 + 15) >> 4] - 1;
  if ( v11 < 0x40 )
  {
    v13 = __readgsqword(8 * v11 + 5248);
    goto LABEL_6;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v13 = (__int64)TlsExpansionSlots[v11 - 64];
LABEL_6:
    if ( v13 )
      goto LABEL_7;
  }
  v13 = RtlpHpLfhThreadDataInitializeSet(v9);
LABEL_7:
  v168 = BYTE4(v13);
  v14 = v9 + ((unsigned __int16)v13 << 6);
  v157 = 2LL * v12;
  v15 = *(unsigned __int16 *)(v157 + v14);
  if ( *(_WORD *)(v157 + v14) )
    goto LABEL_8;
  if ( RtlpHpLfhBucketCheckAndUpdate(v9, v12, v15) )
  {
    v112 = v9 + ((unsigned __int64)v168 << 8) + 1472;
    LODWORD(v15) = *(unsigned __int16 *)(v157 + v112);
    if ( v14 != v112 )
      *(_WORD *)(v157 + v14) = *(_WORD *)(v157 + v112);
LABEL_8:
    v16 = 0LL;
    v17 = v9 + (unsigned int)((_DWORD)v15 << 6);
    if ( *(_WORD *)(v17 + 4) )
    {
      v121 = *(_QWORD *)(v17 + 56);
      if ( (v121 & 0xFFF) != 0 )
      {
        v122 = v121 & 0xFFFFFFFFFFFFF000uLL;
        v159 = v121 & 0xFFFFFFFFFFFFF000uLL;
        *(_QWORD *)(v17 + 56) = v121 - 1;
        v123 = NtCurrentTeb();
        v124 = *(unsigned __int8 *)((v121 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
        v7 = v155;
        v125 = qword_1801CFEC8 ^ *(_DWORD *)((v121 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v121 & 0xFFFFFFFFFFFFF000uLL) >> 12);
        v126 = v123->RngState[0];
        v127 = v123->RngState[1];
        v128 = (unsigned __int16)v125;
        v154 = HIWORD(v125);
        v129 = (unsigned int)v155 < (unsigned __int16)v125;
        v130 = 0x100000001LL;
        if ( !v129 )
          v130 = 1LL;
        v131 = v127 + v126;
        v132 = v126 ^ v127;
        v147 = v130;
        v123->RngState[1] = __ROL8__(v132, 37);
        v123->RngState[0] = v132 ^ (v132 << 16) ^ __ROL8__(v126, 24);
        v167 = BYTE4(v131);
        v133 = v122 + 64 + 8 * ((unsigned int)(v124 - 8) - 1LL);
        v134 = (_DWORD *)(v122 + 64 + 8LL * *(unsigned __int8 *)(v122 + 36));
        while ( *v134 == -1 )
        {
          if ( v134 == (_DWORD *)v133 )
            v134 = (_DWORD *)(v122 + 64);
          else
            v134 += 2;
        }
        _RAX = 1LL << ((unsigned __int16)(v167 * __popcnt((unsigned int)~*v134)) >> 8);
        __asm
        {
          pdep    rcx, rax, rcx
          tzcnt   rdx, rcx
        }
        *(_QWORD *)v134 |= v147 << _RDX;
        a4 = v169;
        v138 = _RDX + 4 * ((_DWORD)v134 - (v122 + 64));
        *(_BYTE *)(v122 + 36) = v138 >> 5;
        Slow = v159 + v154 + v138 * (unsigned int)v128;
        if ( (v169 & 2) != 0 )
        {
          RtlHeapZero(v159 + v154 + v138 * (unsigned int)v128, ((unsigned int)v155 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          a4 = v169;
        }
        if ( (unsigned int)v155 < (unsigned int)v128 )
        {
          v139 = v128 - v155;
          if ( (_DWORD)v128 - (_DWORD)v155 == 1 )
            v139 = 0x8000;
          *(_WORD *)(v128 + Slow - 2) = v139;
        }
LABEL_34:
        v44 = (unsigned int)v4;
        v45 = (unsigned int)v7;
        if ( Slow != -1 )
        {
          v8 = a1;
          goto LABEL_40;
        }
        goto LABEL_35;
      }
      Slow = RtlpHpLfhSlotAllocateSlow(v9);
LABEL_33:
      a4 = v169;
      v7 = v155;
      goto LABEL_34;
    }
    v153 = 0;
    _m_prefetchw((const void *)(v17 + 56));
    for ( i = *(_QWORD *)(v17 + 56); ; i = v19 )
    {
      if ( (i & 0xFFF) == 0 )
      {
        Slow = RtlpHpLfhSlotAllocateSlow(v9);
        goto LABEL_31;
      }
      v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 56), i - 1, i);
      if ( i == v19 )
        break;
      v153 = 1;
    }
    v20 = NtCurrentTeb();
    v21 = v155;
    v22 = i & 0xFFFFFFFFFFFFF000uLL;
    v156 = i & 0xFFFFFFFFFFFFF000uLL;
    v23 = 0x100000001LL;
    v24 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x18);
    v161 = qword_1801CFEC8 ^ *(_DWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((i & 0xFFFFFFFFFFFFF000uLL) >> 12);
    if ( (unsigned int)v155 >= (unsigned __int16)v161 )
      v23 = 1LL;
    v25 = v20->RngState[1];
    v146 = v23;
    v26 = v20->RngState[0];
    v27 = v25 + v26;
    v28 = v26 ^ v25;
    v20->RngState[0] = v28 ^ (v28 << 16) ^ __ROL8__(v26, 24);
    v29 = (volatile signed __int64 *)(v22 + 64);
    v150 = BYTE4(v27);
    v20->RngState[1] = __ROL8__(v28, 37);
    v151 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x32);
    v163 = *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x27);
    v30 = v22 + 64 + 8 * ((unsigned int)(v24 - 8) - 1LL);
    v158 = (volatile signed __int64 *)v30;
    v31 = (volatile signed __int64 *)(v22 + 64 + 8LL * *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24));
LABEL_15:
    while ( 1 )
    {
      v32 = *v31;
      _RDX = (unsigned int)~*(_DWORD *)v31;
      if ( *(_DWORD *)v31 != -1 )
        break;
      if ( v31 == (volatile signed __int64 *)v30 )
LABEL_130:
        v31 = v29;
      else
        ++v31;
    }
    while ( 1 )
    {
      if ( (qword_1801CFEE8 & 4) != 0 )
      {
        _RCX = 1LL << ((unsigned __int16)(v150 * __popcnt(_RDX)) >> 8);
        __asm
        {
          pdep    rdx, rcx, rdx
          tzcnt   rdx, rdx
        }
        v36 = v146 << _RDX;
      }
      else
      {
        if ( v31 == (volatile signed __int64 *)v30 || v151 != 32 )
        {
          __asm { tzcnt   rcx, rdx }
          _BitScanReverse64(&v107, _RDX);
          v108 = v107 - _RCX + 1;
          if ( v151 < v108 )
            v108 = v151;
          v150 = _RCX + ((v150 * v108) >> 8);
          _RDX = __ROR8__(_RDX, v150);
          __asm { tzcnt   rdx, rdx }
          LODWORD(_RDX) = v150 + _RDX;
        }
        else
        {
          _RAX = (unsigned int)__ROR4__(_RDX, v150);
          __asm { tzcnt   rdx, rax }
          LODWORD(_RDX) = ((_BYTE)v150 + (_BYTE)_RDX) & 0x1F;
        }
        v36 = v146 << _RDX;
      }
      v37 = v32;
      v38 = _InterlockedCompareExchange64(v31, v32 | v36, v32);
      v32 = v38;
      if ( v38 == v37 )
        break;
      v30 = (__int64)v158;
      v105 = ~(_DWORD)v38;
      _RDX = v105;
      if ( !v105 )
      {
        v29 = (volatile signed __int64 *)(v22 + 64);
        if ( v31 == v158 )
          goto LABEL_130;
        ++v31;
        goto LABEL_15;
      }
    }
    v39 = _RDX + 4 * ((_DWORD)v31 - (v22 + 64));
    v40 = (unsigned __int16)v161;
    *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v39 >> 5;
    v152 = v39;
    v41 = HIWORD(v161) + v39 * (unsigned __int16)v161;
    if ( v163 > 1u )
    {
      if ( (int)RtlpHpLfhSubsegmentCommitBlock(v160, v156, v41) < 0 )
      {
        Slow = 0LL;
        if ( v152 != -1 )
        {
          v32 = i & 0xFFFFFFFFFFFFF000uLL;
          _InterlockedAnd64(
            (volatile signed __int64 *)(v156 + 8LL * (v152 >> 5) + 64),
            __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v152 & 0x1F));
          goto LABEL_146;
        }
LABEL_30:
        if ( Slow )
          goto LABEL_31;
        v32 = i & 0xFFFFFFFFFFFFF000uLL;
LABEL_146:
        v113 = *(_QWORD *)(v32 + 16);
        v114 = v160;
        do
        {
          v149 = HIDWORD(v113);
          v166 = v113;
          if ( BYTE6(v113) == 1 )
            BYTE6(v166) = 2;
          WORD1(v166) = WORD1(v113) + 1;
          v40 = (unsigned __int64)*(unsigned __int16 *)(v32 + 44) << 6;
          v115 = v113;
          v113 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 16), v166, v113);
        }
        while ( v115 != v113 );
        if ( !*(_BYTE *)(v40 + v160 + 92) )
        {
          *(_BYTE *)(v40 + v160 + 92) = 1;
          if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(v166, v160, v40, v32) )
          {
            RtlpHpEnvCompactionSchedule();
            v114 = v160;
            v32 = i & 0xFFFFFFFFFFFFF000uLL;
          }
        }
        if ( BYTE2(v149) == 1 )
        {
          v116 = v114 + ((unsigned __int16)v149 << 6);
          _m_prefetchw((const void *)(v116 + 8));
          v117 = *(_QWORD *)(v116 + 8);
          v118 = *(_DWORD *)(v32 + 24) & 0xFFF;
          *(_QWORD *)(v32 + 24) = (v117 - (v117 & 0xFFF)) | v118;
          v120 = v117;
          v119 = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(v116 + 8),
                   v117 ^ (v117 ^ i) & 0xFFFFFFFFFFFFF000uLL,
                   v117);
          if ( v120 != v119 )
          {
            do
            {
              v40 = v119;
              *(_QWORD *)(v32 + 24) = (v119 - (v119 & 0xFFF)) | v118;
              v119 = _InterlockedCompareExchange64(
                       (volatile signed __int64 *)(v116 + 8),
                       v119 ^ (v119 ^ i) & 0xFFFFFFFFFFFFF000uLL,
                       v119);
            }
            while ( v119 != v40 );
          }
        }
LABEL_31:
        if ( v153 )
          RtlpHpLfhBucketUpdateAffinityMapping(
            v160,
            v160 + ((unsigned __int64)*(unsigned __int16 *)(v17 + 2) << 6),
            v40,
            v32);
        goto LABEL_33;
      }
    }
    else
    {
      if ( v39 <= *(unsigned __int16 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
      {
LABEL_24:
        Slow = v156 + v41;
        if ( (v169 & 2) != 0 )
        {
          RtlHeapZero(Slow, (v21 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          v21 = v155;
          v40 = (unsigned __int16)v161;
        }
        if ( v21 < (unsigned int)v40 )
        {
          v43 = v40 - v21;
          if ( (_DWORD)v40 - v21 == 1 )
            v43 = 0x8000;
          *(_WORD *)((unsigned int)v40 + Slow - 2) = v43;
        }
        goto LABEL_30;
      }
      RtlpHpLfhSubsegmentPrefetch(v160, v156, (unsigned int)v41, (unsigned __int16)v161);
    }
    v40 = (unsigned __int16)v161;
    v21 = v155;
    goto LABEL_24;
  }
  a4 = v169;
  v44 = (unsigned int)v4;
  v45 = (unsigned int)v7;
  v16 = 0LL;
LABEL_35:
  v8 = a1;
LABEL_36:
  if ( v4 <= 0x20000 )
  {
    HeapBackend = RtlpHpVsContextAllocate(v8 + 704, v45, v44, a4);
  }
  else if ( v4 <= *(unsigned int *)(v8 + 528) )
  {
    HeapBackend = RtlpHpAllocateHeapBackend(v8, v7, v4, a4);
  }
  else
  {
    HeapBackend = RtlpHpLargeAlloc(v8, v7, v4, a4);
  }
  Slow = HeapBackend;
LABEL_40:
  if ( !Slow )
    return Slow;
  v47 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 >= *(_QWORD *)(a3 + 24) )
    v47 = *(_QWORD *)(a3 + 24);
  memmove((void *)Slow, (const void *)a2, v47);
  if ( *(_DWORD *)(a3 + 16) )
  {
    v48 = *(_QWORD *)(a3 + 24);
    if ( (v169 & 0x2000) != 0 )
    {
      v49 = a2 + 31;
      v48 += 16LL;
    }
    else
    {
      v49 = a2 + 15;
    }
    memmove(
      (void *)((Slow + v48 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
      (const void *)((*(_QWORD *)a3 + v49) & 0xFFFFFFFFFFFFFFF0uLL),
      16 * (*(unsigned __int8 *)(((*(_QWORD *)a3 + v49) & 0xFFFFFFFFFFFFFFF0uLL) + 3) + 1LL));
    if ( (_WORD)Slow )
    {
      v50 = 0;
    }
    else
    {
      v94 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((unsigned __int64)(Slow - qword_1801D0978) >> 20));
      if ( !v94 || (v50 = v94 - 1, v50 == 2) )
      {
        RtlpHpLargeAllocSetExtraPresent(v8, Slow);
        goto LABEL_56;
      }
    }
    v51 = v8 + 192LL * v50 + 320;
    v52 = Slow & *(_QWORD *)v51;
    if ( RtlpHpHeapGlobals ^ v51 ^ *(_QWORD *)(v52 + 0x10) ^ v52
      || (v53 = *(_BYTE *)(v51 + 8),
          v54 = v52 + 32 * ((unsigned __int64)(unsigned int)(Slow - v52) >> v53),
          v55 = -32LL * *(unsigned __int8 *)(v54 + 26) + v54,
          v56 = *(_BYTE *)(v55 + 24),
          (v56 & 3) != 3)
      || v52 + ((__int64)(v55 - v52) >> 5 << v53) != Slow && (v56 & 0xCu) < 8 )
    {
      v55 = 0LL;
    }
    v57 = *(_BYTE *)(v55 + 24);
    if ( (v57 & 0xCu) < 8 )
    {
      *(_WORD *)(v55 + 8) |= 1u;
    }
    else
    {
      v58 = (v55 & *(_QWORD *)v51) + ((__int64)(v55 - (v55 & *(_QWORD *)v51)) >> 5 << *(_BYTE *)(v51 + 8));
      if ( (v57 & 0xC) == 8 )
      {
        v59 = (unsigned __int16)qword_1801CFEC8 ^ *(unsigned __int16 *)(v58 + 40) ^ (unsigned __int64)(unsigned __int16)(v58 >> 12);
        *(_WORD *)(v59 + Slow - 2) |= 0x4000u;
      }
      else
      {
        RtlpHpVsChunkSetExtraPresent(*(_QWORD *)(v51 + 32), Slow);
      }
    }
  }
LABEL_56:
  if ( (_WORD)a2 )
  {
    v60 = v8 + 320;
  }
  else
  {
    v61 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((a2 - qword_1801D0978) >> 20));
    if ( !v61 || (_DWORD)v61 == 3 )
    {
      RtlpHpLargeFree((__int128 *)v8, a2);
      return Slow;
    }
    v60 = v8 + 320;
    if ( (_DWORD)v61 == 2 )
      v60 = v8 + 512;
  }
  v62 = a2 & *(_QWORD *)v60;
  if ( RtlpHpHeapGlobals ^ v60 ^ *(_QWORD *)(v62 + 0x10) ^ v62 )
    goto LABEL_63;
  v67 = *(_BYTE *)(v60 + 8);
  v68 = v62 + 32 * ((unsigned __int64)(unsigned int)(a2 - v62) >> v67);
  v69 = -32LL * *(unsigned __int8 *)(v68 + 26) + v68;
  v70 = *(_BYTE *)(v69 + 24);
  v71 = v62 + ((__int64)(v69 - v62) >> 5 << v67);
  if ( v70 + (v71 == a2) != 11 )
  {
    v89 = (_WORD *)((v69 & *(_QWORD *)v60) + ((v69 - (v69 & *(_QWORD *)v60)) >> 5 << v67));
    if ( (v70 & 3) == 3 )
    {
      if ( (_WORD *)a2 == v89 )
        goto LABEL_123;
      if ( v70 == 15 )
      {
        if ( a2 > (unsigned __int64)v89 )
        {
          v90 = *(_QWORD *)(v60 + 32);
          v91 = a2 - 16;
          v92 = *(unsigned __int8 *)(v90 + 4);
          if ( (v92 & 1) != 0 && (a2 & 0xFFF) == 0 )
            v91 = a2 - 32;
          if ( v89 )
          {
LABEL_94:
            if ( (((unsigned __int16)(v89[16] ^ v89[18]) ^ 0x2BED) & 0x7FFF) != 0 )
            {
              RtlpLogHeapFailure(18, *(_DWORD *)(v90 + 8) ^ v90, (_DWORD)v89, 0, 0LL, 0LL);
              return Slow;
            }
            v93 = *(_QWORD *)v91;
            if ( ((HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v91) ^ HIDWORD(*(_QWORD *)v91)) & 0xFF0000) == 0 )
            {
              v65 = v91;
              LODWORD(v63) = *(_DWORD *)(v90 + 8) ^ v90;
              v64 = 8;
              goto LABEL_64;
            }
            v95 = v90 + ((unsigned __int64)(unsigned __int16)v89[17] << 6);
            v96 = 16 * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v93 ^ (unsigned int)v91) >> 16)) - 16;
            if ( (v92 & 2) != 0 && v96 < 0x1000 )
            {
              v144 = v95 + 64;
              if ( *(_WORD *)(v95 + 64) < 0x20u )
              {
                RtlpInterlockedPushEntrySList(v144, v91 + 16, v93, v92);
LABEL_115:
                v97 = *(_QWORD *)(v60 + 24);
                if ( v96 < *(unsigned __int16 *)(v97 + 68) )
                {
                  v98 = v97 + 8LL * ((unsigned int)RtlpLfhBucketIndexMap[(unsigned __int64)v96 >> 4] - 1);
                  do
                  {
                    v165 = *(_QWORD *)(v98 + 448);
                    v99 = v165;
                    v100 = v165;
                    if ( (v165 & 1) == 0 )
                      break;
                    if ( WORD1(v165) > 1u )
                    {
                      --WORD1(v165);
                      v100 = v165;
                    }
                  }
                  while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v98 + 448), v100, v99) != v99 );
                }
                return Slow;
              }
              v16 = RtlpInterlockedFlushSList(v144, v89, v93, v92);
            }
            *(_QWORD *)(v91 + 16) = v16;
            RtlpHpVsSlotFreeList(v90, v95);
            goto LABEL_115;
          }
          v140 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v91) ^ HIDWORD(v91);
          if ( (v140 & 0xFF0000) != 0 )
          {
            v141 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v91 + 8) ^ v91);
          }
          else
          {
            if ( (_WORD)v140 )
            {
              v142 = v91 - 16LL * (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v91) ^ WORD2(v91));
              v143 = HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(v142) ^ HIDWORD(*(_QWORD *)v142);
              if ( (v143 & 0xFF0000) != 0 )
              {
                v141 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v142 + 8) ^ v142);
              }
              else if ( (_WORD)v143 )
              {
                v142 -= 16LL * (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ WORD2(v142) ^ HIDWORD(*(_QWORD *)v142));
                v141 = (unsigned __int8)(v142 ^ RtlpHpHeapGlobals ^ *(_BYTE *)(v142 + 8));
              }
              else
              {
                v141 = 0;
              }
              goto LABEL_189;
            }
            v141 = 0;
          }
          v142 = v91;
LABEL_189:
          v89 = (_WORD *)((v142 - (unsigned int)(v141 << 12)) & 0xFFFFFFFFFFFFF000uLL);
          goto LABEL_94;
        }
LABEL_123:
        RtlpHpSegPageRangeShrink(v60, v69, 0);
        return Slow;
      }
    }
LABEL_63:
    v63 = *(_QWORD *)(v60 + 56);
    v64 = 9;
    v65 = 0;
LABEL_64:
    v145 = 0LL;
LABEL_65:
    RtlpLogHeapFailure(v64, v63, a2, v65, v145, 0LL);
    return Slow;
  }
  v72 = *(_QWORD *)(v60 + 24);
  v73 = (((unsigned int)a2
        - (((unsigned int)qword_1801CFEC8 ^ *(_DWORD *)(v71 + 40) ^ (unsigned int)(v71 >> 12)) >> 16)
        - (unsigned int)v71)
       * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(v71 + 44) << 6) + v72 + 72)) >> 32;
  if ( (_DWORD)a2
     - (((unsigned int)qword_1801CFEC8 ^ *(_DWORD *)(v71 + 40) ^ (unsigned int)(v71 >> 12)) >> 16)
     - (_DWORD)v71 != (_DWORD)v73 * (unsigned __int16)(qword_1801CFEC8 ^ *(_WORD *)(v71 + 40) ^ (v71 >> 12)) )
    return Slow;
  v74 = *(unsigned __int16 *)(v72 + 76);
  if ( v74 < 0x40 )
  {
    v75 = __readgsqword(8 * v74 + 5248);
    goto LABEL_71;
  }
  v111 = NtCurrentTeb()->TlsExpansionSlots;
  if ( v111 )
  {
    v75 = (unsigned __int64)v111[v74 - 64];
LABEL_71:
    if ( v75 )
      goto LABEL_72;
  }
  LOWORD(v75) = RtlpHpLfhThreadDataInitializeSet(v72);
LABEL_72:
  if ( (_WORD)v75 == *(_WORD *)(v71 + 46) && *(_BYTE *)(v71 + 22) != 1 )
  {
    v103 = *(_QWORD *)(v71 + 8 * (v73 >> 5) + 64);
    v104 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v73 & 0x1F);
    v76 = v73;
    *(_QWORD *)(v71 + 8 * (v73 >> 5) + 64) = v104 & v103;
    if ( (~(_DWORD)v104 & (unsigned int)v103) != 0 )
    {
      ++*(_WORD *)(v71 + 32);
      return Slow;
    }
    goto LABEL_105;
  }
  v76 = v73;
  v77 = *(unsigned int *)(v71 + 8 * (v73 >> 5) + 64);
  if ( !_bittest64(&v77, v73 & 0x1F) )
  {
LABEL_105:
    v63 = *(_QWORD *)v72;
    v65 = v71;
    v64 = 17;
    v145 = v76;
    goto LABEL_65;
  }
  v78 = *(_QWORD *)(v71 + 16);
  do
  {
    v148 = HIDWORD(v78);
    v164 = v78;
    if ( BYTE6(v78) == 1 )
      BYTE6(v164) = 2;
    if ( a2 )
    {
      v79 = *(_QWORD *)(v72 + 80);
      v80 = v79;
      *(_WORD *)a2 = v78;
      v76 = HIDWORD(v79);
      LOWORD(v164) = v73 + 1;
      *(_DWORD *)(a2 + 8) = a2 ^ v76 ^ __ROL4__(*(_DWORD *)a2 ^ v80, v78);
    }
    WORD1(v164) = WORD1(v78) + 1;
    v81 = (unsigned __int64)*(unsigned __int16 *)(v71 + 44) << 6;
    v82 = v78;
    v78 = _InterlockedCompareExchange64((volatile signed __int64 *)(v71 + 16), v164, v78);
  }
  while ( v82 != v78 );
  if ( !*(_BYTE *)(v81 + v72 + 92) )
  {
    *(_BYTE *)(v81 + v72 + 92) = 1;
    if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(v164, v81, v76, v69) )
      RtlpHpEnvCompactionSchedule();
  }
  if ( BYTE2(v148) == 1 )
  {
    v83 = v72 + ((unsigned __int16)v148 << 6);
    _m_prefetchw((const void *)(v83 + 8));
    v84 = *(_QWORD *)(v83 + 8);
    v85 = *(_QWORD *)(v71 + 24);
    *(_QWORD *)(v71 + 24) = v85 & 0xFFF | (v84 - (v84 & 0xFFF));
    v87 = v84;
    v86 = _InterlockedCompareExchange64((volatile signed __int64 *)(v83 + 8), v84 & 0xFFF | v71, v84);
    if ( v87 != v86 )
    {
      do
      {
        v88 = v86;
        *(_QWORD *)(v71 + 24) = v85 ^ (v86 ^ v85) & 0xFFFFFFFFFFFFF000uLL;
        v86 = _InterlockedCompareExchange64((volatile signed __int64 *)(v83 + 8), v86 & 0xFFF | v71, v86);
      }
      while ( v86 != v88 );
    }
  }
  return Slow;
}
