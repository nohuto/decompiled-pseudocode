/*
 * XREFs of RtlpHpAllocateHeapSlow @ 0x18002F040
 * Callers:
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpHpLargeFree @ 0x180009DDC (RtlpHpLargeFree.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18000A350 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhContextFree @ 0x18000B170 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x18000B400 (RtlpHpSegFreeInternal.c)
 *     RtlpHpEnvCompactionSchedule @ 0x18000B720 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpAllocateHeapBackend @ 0x18000CF74 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180011FD0 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpVsChunkSetExtraPresent @ 0x18002D6B8 (RtlpHpVsChunkSetExtraPresent.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x18002DB5C (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpVsContextAllocate @ 0x18002DD2C (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x18002FDE0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18002FEB0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1800554D0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeAlloc @ 0x1800BD0E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DCD90 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1800F5AF8 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpLogHeapAllocateEvent @ 0x180119438 (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011E484 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x180143DB4 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlHeapZero @ 0x180168590 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocateHeapSlow(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  int v4; // r12d
  int v6; // edi
  unsigned __int64 v9; // rax
  int v10; // ebx
  unsigned __int64 v11; // rsi
  int v12; // r13d
  unsigned int v13; // edx
  int v14; // eax
  __int64 v15; // r13
  unsigned int v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r8
  __int64 v21; // r13
  signed __int64 i; // rbx
  signed __int64 v23; // rax
  struct _TEB *v24; // r9
  unsigned __int64 v25; // r14
  int v26; // eax
  int v27; // r10d
  bool v28; // cf
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // rdx
  volatile signed __int64 *v34; // r8
  __int64 v35; // rcx
  signed __int64 v36; // r9
  __int64 v40; // rdx
  signed __int64 v41; // rcx
  signed __int64 v42; // rax
  unsigned int v43; // ecx
  unsigned __int64 v44; // r8
  __int64 v45; // r14
  __int64 Slow; // r14
  __int64 v47; // rax
  int v48; // ecx
  int v49; // r8d
  unsigned int v50; // eax
  __int64 HeapBackend; // rax
  unsigned int v52; // esi
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rbx
  __int64 v55; // rbx
  char v56; // al
  int v57; // eax
  __int64 v58; // r10
  __int64 v59; // r8
  char v60; // cl
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rax
  char v63; // r9
  char v64; // r8
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v70; // rdi
  unsigned int *v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // r15
  __int64 v74; // rax
  __int64 v75; // r9
  char v76; // cl
  unsigned __int64 v77; // r8
  __int64 v78; // r8
  unsigned __int64 v79; // rdx
  unsigned int v80; // eax
  int v81; // ebx
  __int64 v82; // rdx
  unsigned __int64 v83; // rax
  unsigned int v85; // eax
  void **TlsExpansionSlots; // r8
  __int64 v89; // rdx
  unsigned __int64 v90; // rcx
  signed __int64 v91; // rax
  __int64 v92; // rdx
  signed __int64 v93; // rtt
  __int64 v94; // r10
  signed __int64 v95; // rax
  __int64 v96; // r11
  signed __int64 v97; // rax
  signed __int64 v98; // rtt
  __int64 v99; // rax
  unsigned __int64 v100; // r11
  struct _TEB *v101; // r9
  int v102; // r10d
  unsigned __int64 v103; // r14
  int v104; // eax
  unsigned __int64 v105; // rdx
  __int64 v106; // r13
  __int64 v107; // rax
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // r8
  unsigned __int64 v110; // rdx
  _DWORD *v111; // r8
  unsigned int v115; // ecx
  __int16 v116; // cx
  __int64 v117; // [rsp+20h] [rbp-98h]
  __int64 v118; // [rsp+30h] [rbp-88h]
  signed __int64 v119; // [rsp+30h] [rbp-88h]
  __int64 v120; // [rsp+30h] [rbp-88h]
  unsigned __int8 v121; // [rsp+34h] [rbp-84h]
  int v122; // [rsp+38h] [rbp-80h]
  unsigned int v123; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v124; // [rsp+40h] [rbp-78h]
  unsigned int v125; // [rsp+40h] [rbp-78h]
  int v126; // [rsp+44h] [rbp-74h]
  unsigned __int16 v127; // [rsp+46h] [rbp-72h]
  unsigned __int64 v128; // [rsp+50h] [rbp-68h]
  unsigned __int16 v129; // [rsp+5Ah] [rbp-5Eh]
  int v130; // [rsp+5Ch] [rbp-5Ch]
  __int64 v131; // [rsp+60h] [rbp-58h]
  volatile signed __int64 *v132; // [rsp+60h] [rbp-58h]
  unsigned __int64 v133; // [rsp+70h] [rbp-48h] BYREF
  unsigned int v134; // [rsp+D0h] [rbp+18h]
  unsigned __int8 v135; // [rsp+D0h] [rbp+18h]
  __int16 v136; // [rsp+D0h] [rbp+18h]

  v3 = 0LL;
  v4 = 0;
  v133 = 0LL;
  v6 = a3;
  if ( (a3 & 0x20) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( v4 )
    {
      __writegsqword(0x1858u, 0LL);
      v6 = a3 | 8;
      v81 = RtlpCallInterceptRoutine(v4, a1, 0, 1, (__int64)&v133);
      __writegsqword(0x1858u, a1 + 20);
      v82 = *(unsigned int *)(a1 + 20);
      if ( (v82 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
        RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v82);
      if ( v81 < 0 )
        return 0LL;
      v3 = v133;
    }
  }
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v9 = a2 + v3;
  v10 = v6 & 0x2000;
  v11 = v9 + 16;
  if ( (v6 & 0x2000) == 0 )
    v11 = v9;
  v12 = v6 & 0x20000F08;
  if ( (v6 & 0x20000F08) != 0 )
    v11 = ((v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  if ( !v11 )
    v11 = 1LL;
  v13 = v6 & 0x10002002;
  if ( v11 >= *(unsigned __int16 *)(a1 + 900) )
  {
    v49 = v11;
    v50 = a2;
    goto LABEL_47;
  }
  v14 = v11 + 2;
  if ( (_DWORD)a2 == (_DWORD)v11 )
    v14 = v11;
  v15 = a1 + 832;
  v16 = *(unsigned __int16 *)(a1 + 908);
  v17 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned int)(v14 + 15) >> 4] - 1;
  v134 = RtlpLfhBucketIndexMap[(unsigned int)(v14 + 15) >> 4] - 1;
  if ( v16 < 0x40 )
  {
    v18 = __readgsqword(8 * v16 + 5248);
    goto LABEL_16;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v18 = (__int64)TlsExpansionSlots[v16 - 64];
LABEL_16:
    if ( v18 )
      goto LABEL_17;
  }
  v18 = RtlpHpLfhThreadDataInitializeSet(a1 + 832);
  v17 = v134;
LABEL_17:
  v121 = BYTE4(v18);
  v19 = v15 + ((unsigned __int16)v18 << 6);
  v131 = 2LL * (unsigned int)v17;
  v20 = *(unsigned __int16 *)(v131 + v19);
  if ( *(_WORD *)(v131 + v19) )
    goto LABEL_18;
  if ( RtlpHpLfhBucketCheckAndUpdate(a1 + 832, v17, v20) )
  {
    v90 = v15 + ((unsigned __int64)v121 << 8) + 1472;
    LODWORD(v20) = *(unsigned __int16 *)(v90 + v131);
    if ( v19 != v90 )
      *(_WORD *)(v131 + v19) = *(_WORD *)(v90 + v131);
LABEL_18:
    v21 = a1 + 832 + (unsigned int)((_DWORD)v20 << 6);
    if ( *(_WORD *)(v21 + 4) )
    {
      v99 = *(_QWORD *)(v21 + 56);
      if ( (v99 & 0xFFF) != 0 )
      {
        v100 = v99 & 0xFFFFFFFFFFFFF000uLL;
        *(_QWORD *)(v21 + 56) = v99 - 1;
        v101 = NtCurrentTeb();
        v102 = *(unsigned __int8 *)((v99 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
        v103 = (v99 & 0xFFFFFFFFFFFFF000uLL) + 64;
        v104 = qword_1801CFEC8 ^ *(_DWORD *)((v99 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v99 & 0xFFFFFFFFFFFFF000uLL) >> 12);
        v105 = v101->RngState[1];
        v106 = (unsigned __int16)v104;
        v127 = HIWORD(v104);
        v28 = (unsigned int)a2 < (unsigned __int16)v104;
        v107 = 0x100000001LL;
        if ( !v28 )
          v107 = 1LL;
        v108 = v101->RngState[0];
        v120 = v107;
        v109 = v105 + v108;
        v110 = v108 ^ v105;
        v101->RngState[1] = __ROL8__(v110, 37);
        v101->RngState[0] = v110 ^ (v110 << 16) ^ __ROL8__(v108, 24);
        v136 = BYTE4(v109);
        v111 = (_DWORD *)(v103 + 8LL * *(unsigned __int8 *)(v100 + 36));
        while ( *v111 == -1 )
        {
          if ( v111 == (_DWORD *)(v103 + 8 * ((unsigned int)(v102 - 8) - 1LL)) )
            v111 = (_DWORD *)v103;
          else
            v111 += 2;
        }
        _RAX = 1LL << ((unsigned __int16)(v136 * __popcnt((unsigned int)~*v111)) >> 8);
        __asm
        {
          pdep    rcx, rax, rcx
          tzcnt   rdx, rcx
        }
        *(_QWORD *)v111 |= v120 << _RDX;
        v115 = _RDX + 4 * ((_DWORD)v111 - v103);
        v13 = v6 & 0x10002002;
        *(_BYTE *)(v100 + 36) = v115 >> 5;
        Slow = v100 + v127 + v115 * (unsigned int)v106;
        if ( (v6 & 2) != 0 )
        {
          RtlHeapZero(v100 + v127 + v115 * (unsigned int)v106, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          v13 = v6 & 0x10002002;
        }
        if ( (unsigned int)a2 < (unsigned int)v106 )
        {
          v116 = v106 - a2;
          if ( (_DWORD)v106 - (_DWORD)a2 == 1 )
            v116 = 0x8000;
          *(_WORD *)(v106 + Slow - 2) = v116;
        }
LABEL_45:
        v49 = v11;
        v50 = a2;
        if ( Slow != -1 )
        {
          v12 = v6 & 0x20000F08;
          v52 = 2;
          goto LABEL_51;
        }
        goto LABEL_46;
      }
      Slow = RtlpHpLfhSlotAllocateSlow(a1 + 832);
LABEL_44:
      v13 = v6 & 0x10002002;
      goto LABEL_45;
    }
    v126 = 0;
    _m_prefetchw((const void *)(v21 + 56));
    for ( i = *(_QWORD *)(v21 + 56); ; i = v23 )
    {
      if ( (i & 0xFFF) == 0 )
      {
        Slow = RtlpHpLfhSlotAllocateSlow(a1 + 832);
        goto LABEL_41;
      }
      v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 56), i - 1, i);
      if ( i == v23 )
        break;
      v126 = 1;
    }
    v24 = NtCurrentTeb();
    v25 = i & 0xFFFFFFFFFFFFF000uLL;
    v128 = i & 0xFFFFFFFFFFFFF000uLL;
    v26 = qword_1801CFEC8 ^ *(_DWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((i & 0xFFFFFFFFFFFFF000uLL) >> 12);
    v27 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x18);
    v28 = (unsigned int)a2 < (unsigned __int16)v26;
    v129 = HIWORD(v26);
    v123 = (unsigned __int16)v26;
    v29 = 0x100000001LL;
    v30 = v24->RngState[0];
    if ( !v28 )
      v29 = 1LL;
    v31 = v24->RngState[1];
    v118 = v29;
    v32 = v31 + v30;
    v33 = v30 ^ v31;
    v24->RngState[0] = v33 ^ (v33 << 16) ^ __ROL8__(v30, 24);
    v122 = BYTE4(v32);
    v24->RngState[1] = __ROL8__(v33, 37);
    v124 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x32);
    v135 = *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x27);
    v34 = (volatile signed __int64 *)(v25 + 64 + 8LL * *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24));
    v35 = v25 + 64 + 8LL * (unsigned int)(v27 - 8) - 8;
    v132 = (volatile signed __int64 *)v35;
LABEL_25:
    while ( 1 )
    {
      v36 = *v34;
      _RDX = (unsigned int)~*(_DWORD *)v34;
      if ( *(_DWORD *)v34 != -1 )
        break;
      if ( v34 == (volatile signed __int64 *)v35 )
        v34 = (volatile signed __int64 *)(v25 + 64);
      else
        ++v34;
    }
    while ( 1 )
    {
      if ( (qword_1801CFEE8 & 4) != 0 )
      {
        _RCX = 1LL << ((unsigned __int16)(v122 * __popcnt(_RDX)) >> 8);
        __asm
        {
          pdep    rdx, rcx, rdx
          tzcnt   r10, rdx
        }
        v40 = v118 << _R10;
      }
      else
      {
        if ( v124 != 32 || v34 == (volatile signed __int64 *)v35 )
        {
          _BitScanReverse64(&v83, _RDX);
          __asm { tzcnt   rcx, rdx }
          v85 = v83 - _RCX + 1;
          if ( v124 < v85 )
            v85 = v124;
          v122 = _RCX + ((v122 * v85) >> 8);
          _RDX = __ROR8__(_RDX, v122);
          __asm { tzcnt   rax, rdx }
          LODWORD(_R10) = _RAX + v122;
        }
        else
        {
          _RAX = (unsigned int)__ROR4__(_RDX, v122);
          __asm { tzcnt   r10, rax }
          LODWORD(_R10) = ((_BYTE)v122 + (_BYTE)_R10) & 0x1F;
        }
        v40 = v118 << _R10;
      }
      v41 = v36;
      v42 = _InterlockedCompareExchange64(v34, v36 | v40, v36);
      v36 = v42;
      if ( v42 == v41 )
        break;
      v35 = (__int64)v132;
      v80 = ~(_DWORD)v42;
      _RDX = v80;
      if ( !v80 )
      {
        if ( v34 == v132 )
          v34 = (volatile signed __int64 *)(v25 + 64);
        else
          ++v34;
        goto LABEL_25;
      }
    }
    v43 = _R10 + 4 * ((_DWORD)v34 - (v25 + 64));
    v44 = v123;
    v125 = v43;
    *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v43 >> 5;
    v45 = v129 + v43 * v123;
    if ( v135 > 1u )
    {
      if ( (int)RtlpHpLfhSubsegmentCommitBlock(a1 + 832, v128, v45) < 0 )
      {
        Slow = 0LL;
        if ( v125 != -1 )
        {
          v36 = i & 0xFFFFFFFFFFFFF000uLL;
          _InterlockedAnd64(
            (volatile signed __int64 *)(v128 + 8LL * (v125 >> 5) + 64),
            __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v125 & 0x1F));
          goto LABEL_127;
        }
LABEL_40:
        if ( Slow )
          goto LABEL_41;
        v36 = i & 0xFFFFFFFFFFFFF000uLL;
LABEL_127:
        v91 = *(_QWORD *)(v36 + 16);
        v92 = a1 + 832;
        do
        {
          v130 = HIDWORD(v91);
          v119 = v91;
          if ( BYTE6(v91) == 1 )
            BYTE6(v119) = 2;
          WORD1(v119) = WORD1(v91) + 1;
          v44 = (unsigned __int64)*(unsigned __int16 *)(v36 + 44) << 6;
          v93 = v91;
          v91 = _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 16), v119, v91);
        }
        while ( v93 != v91 );
        if ( !*(_BYTE *)(v44 + v92 + 92) )
        {
          *(_BYTE *)(v44 + v92 + 92) = 1;
          if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(v119, v92, v44, v36) )
          {
            RtlpHpEnvCompactionSchedule();
            v36 = i & 0xFFFFFFFFFFFFF000uLL;
            v92 = a1 + 832;
          }
        }
        if ( BYTE2(v130) == 1 )
        {
          v94 = v92 + ((unsigned __int16)v130 << 6);
          _m_prefetchw((const void *)(v94 + 8));
          v95 = *(_QWORD *)(v94 + 8);
          v96 = *(_DWORD *)(v36 + 24) & 0xFFF;
          *(_QWORD *)(v36 + 24) = (v95 - (v95 & 0xFFF)) | v96;
          v98 = v95;
          v97 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v94 + 8),
                  v95 ^ (v95 ^ i) & 0xFFFFFFFFFFFFF000uLL,
                  v95);
          if ( v98 != v97 )
          {
            do
            {
              v44 = v97;
              *(_QWORD *)(v36 + 24) = (v97 - (v97 & 0xFFF)) | v96;
              v97 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v94 + 8),
                      v97 ^ (v97 ^ i) & 0xFFFFFFFFFFFFF000uLL,
                      v97);
            }
            while ( v97 != v44 );
          }
        }
LABEL_41:
        if ( v126 )
          RtlpHpLfhBucketUpdateAffinityMapping(
            a1 + 832,
            a1 + 832 + ((unsigned __int64)*(unsigned __int16 *)(v21 + 2) << 6),
            v44,
            v36);
        v10 = v6 & 0x2000;
        goto LABEL_44;
      }
    }
    else
    {
      if ( v43 <= *(unsigned __int16 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
      {
LABEL_34:
        Slow = v128 + v45;
        if ( (v6 & 2) != 0 )
        {
          RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          v44 = v123;
        }
        if ( (unsigned int)a2 < (unsigned int)v44 )
        {
          v47 = (unsigned int)v44;
          v48 = v44 - a2;
          v44 = 0x8000LL;
          if ( v48 == 1 )
            LOWORD(v48) = 0x8000;
          *(_WORD *)(v47 + Slow - 2) = v48;
        }
        goto LABEL_40;
      }
      RtlpHpLfhSubsegmentPrefetch(a1 + 832, v128, v45, v123);
    }
    v44 = v123;
    goto LABEL_34;
  }
  v13 = v6 & 0x10002002;
  v49 = v11;
  v50 = a2;
LABEL_46:
  v12 = v6 & 0x20000F08;
LABEL_47:
  if ( v11 <= 0x20000 )
  {
    HeapBackend = RtlpHpVsContextAllocate((_BYTE *)(a1 + 704), v50, v49, v13);
  }
  else if ( v11 <= *(unsigned int *)(a1 + 528) )
  {
    HeapBackend = RtlpHpAllocateHeapBackend(a1, a2, v11, v13);
  }
  else
  {
    HeapBackend = RtlpHpLargeAlloc(a1, a2, v11, v13);
  }
  v52 = 3;
  Slow = HeapBackend;
LABEL_51:
  if ( !Slow )
    return Slow;
  if ( (v6 & 0x20002F08) == 0 )
  {
LABEL_69:
    if ( (dword_1801D0918 & 1) != 0
      && (dword_1801D0918 & 2) != 0
      && NtCurrentPeb()->ProcessHeap
      && a1 != qword_1801D4208[2 * (unsigned int)dword_1801816F8[BYTE1(RtlpHpEnvHandle)]] )
    {
      RtlpHpStackTraceAddStack(a1, Slow);
    }
    if ( *(char *)(a1 + 20) < 0 )
      RtlpLogHeapAllocateEvent(a1, Slow, a2, v52);
    return Slow;
  }
  v53 = v133;
  if ( v10 )
    *(__m128i *)(Slow + a2) = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  v54 = 0LL;
  if ( v12 )
  {
    v55 = Slow + a2 + 16;
    if ( (v6 & 0x2000) == 0 )
      v55 = Slow + a2;
    v54 = (v55 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    *(_OWORD *)v54 = 0LL;
    v56 = *(_BYTE *)(v54 + 2) & 0xF;
    *(_BYTE *)(v54 + 3) = v53 >> 4;
    *(_BYTE *)(v54 + 2) = v56 | (16 * (BYTE1(v6) & 0xFE));
    if ( (_WORD)Slow )
    {
      v57 = 0;
    }
    else
    {
      v67 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((unsigned __int64)(Slow - qword_1801D0978) >> 20));
      if ( !v67 || (v57 = v67 - 1, v57 == 2) )
      {
        RtlpHpLargeAllocSetExtraPresent(a1, Slow);
        goto LABEL_68;
      }
    }
    v58 = a1 + 192LL * v57 + 320;
    v59 = Slow & *(_QWORD *)v58;
    if ( RtlpHpHeapGlobals ^ v58 ^ *(_QWORD *)(v59 + 0x10) ^ v59
      || (v60 = *(_BYTE *)(v58 + 8),
          v61 = v59 + 32 * ((unsigned __int64)(unsigned int)(Slow - v59) >> v60),
          v62 = -32LL * *(unsigned __int8 *)(v61 + 26) + v61,
          v63 = *(_BYTE *)(v62 + 24),
          (v63 & 3) != 3)
      || v59 + ((__int64)(v62 - v59) >> 5 << v60) != Slow && (v63 & 0xCu) < 8 )
    {
      v62 = 0LL;
    }
    v64 = *(_BYTE *)(v62 + 24);
    if ( (v64 & 0xCu) < 8 )
    {
      *(_WORD *)(v62 + 8) |= 1u;
    }
    else
    {
      v65 = (*(_QWORD *)v58 & v62) + ((__int64)(v62 - (*(_QWORD *)v58 & v62)) >> 5 << *(_BYTE *)(v58 + 8));
      if ( (v64 & 0xC) == 8 )
      {
        v66 = (unsigned __int16)qword_1801CFEC8 ^ *(unsigned __int16 *)(v65 + 40) ^ (unsigned __int64)(unsigned __int16)(v65 >> 12);
        *(_WORD *)(v66 + Slow - 2) |= 0x4000u;
      }
      else
      {
        RtlpHpVsChunkSetExtraPresent(*(_QWORD *)(v58 + 32), Slow);
      }
    }
  }
LABEL_68:
  if ( !v4 )
    goto LABEL_69;
  v70 = v54 + 16;
  v117 = v54 + 16;
  *(_BYTE *)(v54 + 2) ^= (*(_BYTE *)(v54 + 2) ^ v4) & 0xF;
  __writegsqword(0x1858u, 0LL);
  v71 = (unsigned int *)(a1 + 20);
  if ( (int)RtlpCallInterceptRoutine(v4, a1, Slow, 2, v117) >= 0 )
  {
    __writegsqword(0x1858u, (unsigned __int64)v71);
    v89 = *v71;
    if ( (v89 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v89);
    goto LABEL_69;
  }
  RtlpCallInterceptRoutine(v4, a1, Slow, 3, v70);
  __writegsqword(0x1858u, (unsigned __int64)v71);
  v72 = *v71;
  if ( (v72 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v72);
  if ( (_WORD)Slow )
  {
    v73 = a1 + 320;
  }
  else
  {
    v74 = RtlCSparseBitmapBitmaskRead(&BaseAddress, 2 * ((unsigned __int64)(Slow - qword_1801D0978) >> 20));
    if ( !v74 || (_DWORD)v74 == 3 )
    {
      RtlpHpLargeFree((__int128 *)a1, Slow);
      return 0LL;
    }
    v73 = a1 + 320;
    if ( (_DWORD)v74 == 2 )
      v73 += 192LL;
  }
  v75 = *(_QWORD *)v73 & Slow;
  if ( RtlpHpHeapGlobals ^ v73 ^ *(_QWORD *)(v75 + 0x10) ^ v75 )
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(v73 + 56), Slow, 0, 0LL, 0LL);
    return 0LL;
  }
  v76 = *(_BYTE *)(v73 + 8);
  v77 = v75 + 32 * ((unsigned __int64)(unsigned int)(Slow - v75) >> v76);
  v78 = -32LL * *(unsigned __int8 *)(v77 + 26) + v77;
  v79 = v75 + ((v78 - v75) >> 5 << v76);
  if ( *(_BYTE *)(v78 + 24) + (v79 == Slow) == 11 )
  {
    RtlpHpLfhContextFree(*(_QWORD *)(v73 + 24), v79, Slow);
    return 0LL;
  }
  RtlpHpSegFreeInternal(v73, Slow, v78, 0LL);
  return 0LL;
}
