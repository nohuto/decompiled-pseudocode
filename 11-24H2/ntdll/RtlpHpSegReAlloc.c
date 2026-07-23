/*
 * XREFs of RtlpHpSegReAlloc @ 0x18005CF10
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x18005CD30 (RtlpHpReAllocateHeap.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011AB20 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18001B000 (EtwEventWriteTransfer.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180059400 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x180060D18 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800646A0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhContextFree @ 0x180065110 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x1800653A0 (RtlpHpSegFreeInternal.c)
 *     RtlpHpAllocateHeapBackend @ 0x180066F14 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpSegPageRangeShrink @ 0x18006A080 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18006BF70 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpSegPageRangeCommit @ 0x18006C560 (RtlpHpSegPageRangeCommit.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     RtlpHpLargeAlloc @ 0x18009A714 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x18009E878 (RtlpHpLargeFree.c)
 *     RtlpHpExtrasSetPresent @ 0x18009EA20 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800D6820 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpVsContextGrowInPlace @ 0x1800DAA64 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpVsContextAllocate @ 0x1800E80AC (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117A60 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x1801653C0 (RtlHeapZero.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

__int64 __fastcall RtlpHpSegReAlloc(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  unsigned int v7; // ebp
  char v9; // cl
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  char v13; // cl
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r9
  __int64 result; // rax
  unsigned int v18; // edi
  char v19; // cl
  __int64 v20; // rcx
  __int64 v21; // rdx
  char *Slow; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int8 *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  unsigned __int64 v28; // r13
  __int64 v29; // r14
  int v30; // eax
  __int64 v31; // rbp
  unsigned int v32; // ecx
  __int64 v33; // rsi
  __int64 v34; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v36; // rbx
  __int64 v37; // r8
  unsigned __int64 v38; // rcx
  __int64 v39; // r13
  __int64 v40; // rax
  __int64 v41; // rbp
  unsigned __int64 v42; // r11
  struct _TEB *v43; // r9
  int v44; // r10d
  int v45; // eax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rdx
  __int64 v48; // rdi
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rdx
  __int16 v51; // bx
  _DWORD *v52; // r8
  unsigned __int64 i; // rcx
  unsigned int v57; // ecx
  __int16 v58; // cx
  signed __int64 v59; // rsi
  signed __int64 v60; // rax
  struct _TEB *v61; // r9
  unsigned __int64 v62; // rsi
  __int64 v63; // rbp
  unsigned __int64 v64; // rcx
  int v65; // ebx
  bool v66; // cf
  unsigned __int64 v67; // r14
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // rdx
  int v71; // r11d
  unsigned int v72; // edi
  volatile signed __int64 *v73; // rbx
  volatile signed __int64 *v74; // r8
  signed __int64 v75; // r9
  __int64 v80; // rdx
  unsigned __int64 v82; // rcx
  unsigned int v84; // ecx
  signed __int64 v86; // rcx
  signed __int64 v87; // rax
  signed __int64 v88; // r8
  __int64 v89; // r14
  unsigned int v90; // edi
  __int64 v91; // rbp
  __int64 v92; // rbx
  unsigned int v93; // ebp
  __int16 v94; // cx
  signed __int64 v95; // rax
  char v96; // dl
  unsigned __int64 v97; // rdx
  signed __int64 v98; // rtt
  __int64 v99; // r10
  signed __int64 v100; // rax
  signed __int64 v101; // rax
  signed __int64 v102; // rtt
  __int64 HeapBackend; // rax
  size_t v104; // r8
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // r10
  __int64 v109; // r9
  char v110; // cl
  unsigned __int64 v111; // r8
  unsigned __int64 v112; // r8
  __int64 v113; // rdx
  ULONG UserDataCount[2]; // [rsp+20h] [rbp-D8h]
  unsigned __int8 v116; // [rsp+34h] [rbp-C4h]
  int v117; // [rsp+38h] [rbp-C0h]
  signed __int64 v118; // [rsp+38h] [rbp-C0h]
  unsigned __int8 v119; // [rsp+3Ch] [rbp-BCh]
  int v120; // [rsp+44h] [rbp-B4h]
  unsigned __int16 v121; // [rsp+46h] [rbp-B2h]
  __int64 v122; // [rsp+48h] [rbp-B0h]
  int v123; // [rsp+4Ch] [rbp-ACh]
  __int64 v124; // [rsp+50h] [rbp-A8h]
  __int64 v125; // [rsp+60h] [rbp-98h]
  unsigned __int64 v126; // [rsp+68h] [rbp-90h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-88h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-78h] BYREF
  void *v129; // [rsp+90h] [rbp-68h]
  int v130; // [rsp+98h] [rbp-60h]
  int v131; // [rsp+9Ch] [rbp-5Ch]

  v5 = *(_QWORD *)a1 & a3;
  v7 = a2;
  if ( (v5 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v5 + 16)) != a1 )
    return -1LL;
  v9 = *(_BYTE *)(a1 + 8);
  v10 = v5 + 32LL * ((unsigned int)(a3 - v5) >> v9);
  v11 = -32LL * *(unsigned __int8 *)(v10 + 26) + v10;
  v12 = (v11 - v5) >> 5 << v9;
  v13 = *(_BYTE *)(v11 + 24);
  v14 = v5 + v12;
  if ( (v13 & 3) != 3 || v14 != a3 && (v13 & 0xCu) < 8 )
    return -1LL;
  if ( !v11 )
    return -1LL;
  v15 = *(_QWORD *)(a4 + 32);
  v16 = (v15 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v16 << 12) < v15 )
    return 0LL;
  v18 = (unsigned int)(v16 + (1 << *(_BYTE *)(a1 + 9)) - 1) >> *(_BYTE *)(a1 + 9);
  v19 = *(_BYTE *)(v11 + 24);
  if ( (v19 & 0xCu) >= 8 )
  {
    if ( (v19 & 0xC) == 0xC && *(_QWORD *)(a4 + 24) > *(_QWORD *)a4 && v15 <= 0x20000 )
    {
      result = RtlpHpVsContextGrowInPlace(
                 *(_QWORD *)(a1 + 32),
                 ((v11 - (v11 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)) + (v11 & *(_QWORD *)a1),
                 a3,
                 a4);
      Slow = (char *)result;
      if ( result )
      {
        if ( !*(_DWORD *)(a4 + 16) )
          return result;
        v23 = *(_QWORD *)(a4 + 24);
        v24 = a3 + *(_QWORD *)a4;
        if ( (v7 & 0x2000) != 0 )
        {
          v25 = (unsigned __int8 *)((v24 + 31) & 0xFFFFFFFFFFFFFFF0uLL);
          v26 = v23 + a3 + 16;
        }
        else
        {
          v26 = a3 + v23;
          v25 = (unsigned __int8 *)((v24 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
        }
        memmove((void *)((v26 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v25, 16 * (v25[3] + 1LL));
        RtlpHpExtrasSetPresent(*(_QWORD *)(a1 + 56), Slow);
        return (__int64)Slow;
      }
    }
LABEL_33:
    if ( (v7 & 0x10000000) != 0 )
      return 0LL;
    v27 = *(_QWORD *)(a1 + 56);
    v28 = *(_QWORD *)(a4 + 32);
    v29 = *(_QWORD *)(a4 + 24);
    v125 = v27;
    v126 = v28;
    v124 = v29;
    if ( v28 >= *(unsigned __int16 *)(v27 + 900) )
      goto LABEL_125;
    v30 = v28 + 2;
    if ( (_DWORD)v29 == (_DWORD)v28 )
      v30 = *(_QWORD *)(a4 + 32);
    v31 = v27 + 832;
    v122 = v27 + 832;
    v32 = *(unsigned __int16 *)(v27 + 908);
    v33 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned int)(v30 + 15) >> 4] - 1;
    if ( v32 >= 0x40 )
    {
      TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
      if ( !TlsExpansionSlots )
      {
LABEL_43:
        v34 = RtlpHpLfhThreadDataInitializeSet(v27 + 832);
LABEL_44:
        v36 = v31 + ((unsigned __int16)v34 << 6);
        v119 = BYTE4(v34);
        v37 = *(unsigned __int16 *)(2 * v33 + v36);
        if ( !*(_WORD *)(2 * v33 + v36) )
        {
          if ( !RtlpHpLfhBucketCheckAndUpdate(v31, (unsigned int)v33, v37) )
          {
            v7 = a2;
            goto LABEL_125;
          }
          v38 = v31 + ((unsigned __int64)v119 << 8) + 1472;
          LODWORD(v37) = *(unsigned __int16 *)(v38 + 2 * v33);
          if ( v36 != v38 )
            *(_WORD *)(2 * v33 + v36) = *(_WORD *)(v38 + 2 * v33);
        }
        v39 = v31 + (unsigned int)((_DWORD)v37 << 6);
        if ( *(_WORD *)(v39 + 4) )
        {
          v40 = *(_QWORD *)(v39 + 56);
          if ( (v40 & 0xFFF) != 0 )
          {
            v41 = 0x100000001LL;
            v42 = v40 & 0xFFFFFFFFFFFFF000uLL;
            *(_QWORD *)(v39 + 56) = v40 - 1;
            v43 = NtCurrentTeb();
            v44 = *(unsigned __int8 *)((v40 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
            v45 = qword_1801CCEC8 ^ *(_DWORD *)((v40 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v40 & 0xFFFFFFFFFFFFF000uLL) >> 12);
            v46 = v43->RngState[0];
            v47 = v43->RngState[1];
            v48 = (unsigned __int16)v45;
            v121 = HIWORD(v45);
            if ( (unsigned int)v29 >= (unsigned __int16)v45 )
              v41 = 1LL;
            v49 = v47 + v46;
            v50 = v46 ^ v47;
            v51 = BYTE4(v49);
            v43->RngState[1] = __ROL8__(v50, 37);
            v43->RngState[0] = v50 ^ (v50 << 16) ^ __ROL8__(v46, 24);
            v52 = (_DWORD *)(v42 + 64 + 8LL * *(unsigned __int8 *)(v42 + 36));
            for ( i = (unsigned int)~*v52; *v52 == -1; i = (unsigned int)~*v52 )
            {
              if ( v52 == (_DWORD *)(v42 + 64 + 8 * ((unsigned int)(v44 - 8) - 1LL)) )
                v52 = (_DWORD *)(v42 + 64);
              else
                v52 += 2;
            }
            _RAX = 1LL << ((unsigned __int16)(v51 * __popcnt(i)) >> 8);
            __asm
            {
              pdep    rcx, rax, rcx
              tzcnt   rdx, rcx
            }
            *(_QWORD *)v52 |= v41 << _RDX;
            v57 = _RDX + 4 * ((_DWORD)v52 - (v42 + 64));
            *(_BYTE *)(v42 + 36) = v57 >> 5;
            Slow = (char *)(v42 + v121 + v57 * (unsigned int)v48);
            if ( (a2 & 2) != 0 )
              RtlHeapZero(v42 + v121 + v57 * (unsigned int)v48, ((unsigned int)v29 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
            if ( (unsigned int)v29 < (unsigned int)v48 )
            {
              v58 = v48 - v29;
              if ( (_DWORD)v48 - (_DWORD)v29 == 1 )
                v58 = 0x8000;
              *(_WORD *)&Slow[v48 - 2] = v58;
            }
            goto LABEL_122;
          }
LABEL_50:
          Slow = (char *)RtlpHpLfhSlotAllocateSlow(v31);
LABEL_122:
          v27 = v125;
          v7 = a2;
          if ( Slow != (char *)-1LL )
            goto LABEL_131;
          v28 = v126;
LABEL_125:
          if ( v28 > 0x20000 )
          {
            if ( v28 > *(unsigned int *)(v27 + 528) )
              HeapBackend = RtlpHpLargeAlloc(v27, v29, v28, v7);
            else
              HeapBackend = RtlpHpAllocateHeapBackend(v27, v29, v28, v7);
          }
          else
          {
            HeapBackend = RtlpHpVsContextAllocate(v27 + 704, (unsigned int)v29, (unsigned int)v28, v7);
          }
          Slow = (char *)HeapBackend;
LABEL_131:
          if ( Slow )
          {
            v104 = *(_QWORD *)a4;
            if ( *(_QWORD *)a4 >= *(_QWORD *)(a4 + 24) )
              v104 = *(_QWORD *)(a4 + 24);
            memmove(Slow, (const void *)a3, v104);
            if ( *(_DWORD *)(a4 + 16) )
            {
              v105 = *(_QWORD *)(a4 + 24);
              if ( (v7 & 0x2000) != 0 )
              {
                v106 = a3 + 31;
                v105 += 16LL;
              }
              else
              {
                v106 = a3 + 15;
              }
              memmove(
                (void *)((unsigned __int64)&Slow[v105 + 15] & 0xFFFFFFFFFFFFFFF0uLL),
                (const void *)((*(_QWORD *)a4 + v106) & 0xFFFFFFFFFFFFFFF0uLL),
                16 * (*(unsigned __int8 *)(((*(_QWORD *)a4 + v106) & 0xFFFFFFFFFFFFFFF0uLL) + 3) + 1LL));
              RtlpHpExtrasSetPresent(v27, Slow);
            }
            if ( (_WORD)a3 )
            {
              v108 = v27 + 320;
LABEL_146:
              v109 = *(_QWORD *)v108 & a3;
              if ( RtlpHpHeapGlobals ^ v109 ^ *(_QWORD *)(v109 + 0x10) ^ v108 )
              {
                RtlpLogHeapFailure(9, *(_QWORD *)(v108 + 56), a3, 0LL, 0LL, 0LL);
              }
              else
              {
                v110 = *(_BYTE *)(v108 + 8);
                v111 = v109 + 32 * ((unsigned __int64)(unsigned int)(a3 - v109) >> v110);
                v112 = -32LL * *(unsigned __int8 *)(v111 + 26) + v111;
                v113 = v109 + ((__int64)(v112 - v109) >> 5 << v110);
                if ( *(_BYTE *)(v112 + 24) + (v113 == a3) == 11 )
                  RtlpHpLfhContextFree(*(_QWORD *)(v108 + 24), v113, a3);
                else
                  RtlpHpSegFreeInternal(v108, a3, v112, 0LL, *(_QWORD *)UserDataCount);
              }
              return (__int64)Slow;
            }
            v107 = RtlCSparseBitmapBitmaskRead(
                     (__int64)&BaseAddress,
                     2 * ((unsigned __int64)(a3 - qword_1801CD918) >> 20));
            if ( v107 && (_DWORD)v107 != 3 )
            {
              v108 = v27 + 320;
              if ( (_DWORD)v107 == 2 )
                v108 = v27 + 512;
              goto LABEL_146;
            }
            RtlpHpLargeFree(v27, a3);
          }
          return (__int64)Slow;
        }
        v120 = 0;
        _m_prefetchw((const void *)(v39 + 56));
        v59 = *(_QWORD *)(v39 + 56);
        if ( (v59 & 0xFFF) == 0 )
          goto LABEL_50;
        while ( 1 )
        {
          v60 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 56), v59 - 1, v59);
          if ( v59 == v60 )
            break;
          v120 = 1;
          v59 = v60;
          if ( (v60 & 0xFFF) == 0 )
            goto LABEL_50;
        }
        v61 = NtCurrentTeb();
        v62 = v59 & 0xFFFFFFFFFFFFF000uLL;
        v63 = 0x100000001LL;
        v64 = v61->RngState[0];
        v65 = *(unsigned __int8 *)(v62 + 24);
        v117 = qword_1801CCEC8 ^ *(_DWORD *)(v62 + 40) ^ (v62 >> 12);
        v66 = (unsigned int)v29 < (unsigned __int16)v117;
        v67 = v62 + 64;
        if ( !v66 )
          v63 = 1LL;
        v68 = v61->RngState[1];
        v69 = v68 + v64;
        v70 = v64 ^ v68;
        v71 = BYTE4(v69);
        v61->RngState[0] = v70 ^ (v70 << 16) ^ __ROL8__(v64, 24);
        v61->RngState[1] = __ROL8__(v70, 37);
        v72 = *(unsigned __int8 *)(v62 + 50);
        v116 = *(_BYTE *)(v62 + 39);
        v73 = (volatile signed __int64 *)(v67 + 8 * ((unsigned int)(v65 - 8) - 1LL));
        v74 = (volatile signed __int64 *)(v67 + 8LL * *(unsigned __int8 *)(v62 + 36));
LABEL_71:
        v75 = *v74;
        for ( _RAX = (unsigned int)~*(_DWORD *)v74; *(_DWORD *)v74 == -1; _RAX = (unsigned int)~*(_DWORD *)v74 )
        {
          if ( v74 == v73 )
            v74 = (volatile signed __int64 *)(v62 + 64);
          else
            ++v74;
          v75 = *v74;
        }
        while ( 1 )
        {
          if ( (qword_1801CCEE8 & 4) != 0 )
          {
            _RCX = 1LL << ((unsigned __int16)(v71 * __popcnt(_RAX)) >> 8);
            __asm
            {
              pdep    rdx, rcx, rax
              tzcnt   r10, rdx
            }
            v80 = v63 << _R10;
          }
          else
          {
            if ( v74 == v73 || v72 != 32 )
            {
              _BitScanReverse64(&v82, _RAX);
              __asm { tzcnt   rdx, rax }
              v84 = v82 - _RDX + 1;
              if ( v72 < v84 )
                v84 = v72;
              v71 = _RDX + ((v84 * v71) >> 8);
              _RAX = __ROR8__(_RAX, v71);
              __asm { tzcnt   r10, rax }
              LODWORD(_R10) = v71 + _R10;
            }
            else
            {
              _RCX = (unsigned int)__ROR4__(_RAX, v71);
              __asm { tzcnt   r10, rcx }
              LODWORD(_R10) = ((_BYTE)v71 + (_BYTE)_R10) & 0x1F;
            }
            v80 = v63 << _R10;
          }
          v86 = v75;
          v87 = _InterlockedCompareExchange64(v74, v75 | v80, v75);
          v75 = v87;
          if ( v87 == v86 )
            break;
          _RAX = (unsigned int)~(_DWORD)v87;
          if ( !_RAX )
          {
            if ( v74 == v73 )
              v74 = (volatile signed __int64 *)(v62 + 64);
            else
              ++v74;
            goto LABEL_71;
          }
        }
        v88 = (unsigned int)((_DWORD)v74 - v67);
        v89 = v122;
        v90 = _R10 + 4 * v88;
        v91 = v90 >> 5;
        *(_BYTE *)(v62 + 36) = v91;
        v92 = HIWORD(v117) + v90 * (unsigned __int16)v117;
        if ( v116 <= 1u )
        {
          v93 = (unsigned __int16)v117;
          if ( v90 > *(unsigned __int16 *)(v62 + 48) )
            RtlpHpLfhSubsegmentPrefetch(v122, v62, (unsigned int)v92, (unsigned __int16)v117);
        }
        else
        {
          if ( (int)RtlpHpLfhSubsegmentCommitBlock(v122, v62, (unsigned int)v92) < 0 )
          {
            Slow = 0LL;
            if ( v90 != -1 )
            {
              _InterlockedAnd64(
                (volatile signed __int64 *)(v62 + 8 * v91 + 64),
                __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v90 & 0x1F));
              goto LABEL_104;
            }
LABEL_103:
            if ( Slow )
            {
LABEL_119:
              if ( v120 )
                RtlpHpLfhBucketUpdateAffinityMapping(
                  v89,
                  v89 + ((unsigned __int64)*(unsigned __int16 *)(v39 + 2) << 6),
                  v88,
                  v75);
              v29 = v124;
              goto LABEL_122;
            }
LABEL_104:
            v95 = *(_QWORD *)(v62 + 16);
            do
            {
              v118 = v95;
              v96 = BYTE6(v95);
              v123 = HIDWORD(v95);
              if ( BYTE6(v95) == 1 )
                v96 = 2;
              WORD1(v118) = WORD1(v95) + 1;
              BYTE6(v118) = v96;
              v97 = (unsigned __int64)*(unsigned __int16 *)(v62 + 44) << 6;
              v98 = v95;
              v95 = _InterlockedCompareExchange64((volatile signed __int64 *)(v62 + 16), v118, v95);
            }
            while ( v98 != v95 );
            if ( !*(_BYTE *)(v97 + v89 + 92) )
            {
              *(_BYTE *)(v97 + v89 + 92) = 1;
              if ( !(_DWORD)qword_1801CD278 )
              {
                if ( Context )
                {
                  if ( !byte_1801D1908
                    && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801CD278, 1, 0) )
                  {
                    TpSetTimerEx(Context, &DueTime, 0, 0x3E8u);
                    if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CB670 > 5 )
                    {
                      *(_DWORD *)&EventDescriptor.Level = 5;
                      UserData.Ptr = (unsigned __int64)off_1801CB678;
                      *(_DWORD *)&EventDescriptor.Id = 184549376;
                      EventDescriptor.Keyword = 0LL;
                      UserData.Size = *(unsigned __int16 *)off_1801CB678;
                      v129 = &unk_1801A157E;
                      UserData.Reserved = 2;
                      v130 = 25;
                      v131 = 1;
                      EtwEventWriteTransfer(qword_1801CB690, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
                    }
                  }
                }
              }
            }
            if ( BYTE2(v123) == 1 )
            {
              v75 = v89 + ((unsigned __int16)v123 << 6);
              _m_prefetchw((const void *)(v75 + 8));
              v99 = *(_QWORD *)(v62 + 24);
              v100 = *(_QWORD *)(v75 + 8);
              *(_QWORD *)(v62 + 24) = v99 ^ (v100 ^ v99) & 0xFFFFFFFFFFFFF000uLL;
              v102 = v100;
              v101 = _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 8), v100 & 0xFFF | v62, v100);
              if ( v102 != v101 )
              {
                do
                {
                  v88 = v101;
                  *(_QWORD *)(v62 + 24) = v99 ^ (v99 ^ v101) & 0xFFFFFFFFFFFFF000uLL;
                  v101 = _InterlockedCompareExchange64((volatile signed __int64 *)(v75 + 8), v62 | v101 & 0xFFF, v101);
                }
                while ( v101 != v88 );
              }
            }
            goto LABEL_119;
          }
          v93 = (unsigned __int16)v117;
        }
        Slow = (char *)(v62 + v92);
        if ( (a2 & 2) != 0 )
          RtlHeapZero(Slow, ((unsigned int)v124 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( (unsigned int)v124 < v93 )
        {
          v94 = v93 - v124;
          if ( v93 - (_DWORD)v124 == 1 )
            v94 = 0x8000;
          *(_WORD *)&Slow[v93 - 2] = v94;
        }
        goto LABEL_103;
      }
      v34 = (__int64)TlsExpansionSlots[v32 - 64];
    }
    else
    {
      v34 = __readgsqword(8 * v32 + 5248);
    }
    if ( v34 )
      goto LABEL_44;
    goto LABEL_43;
  }
  if ( v18 > *(unsigned __int8 *)(v11 + 31) )
    goto LABEL_33;
  if ( (unsigned int)v16 > (unsigned __int16)~*(_WORD *)(v11 + 28) )
  {
    if ( (int)RtlpHpSegPageRangeCommit(a1, 0, 0LL) < 0 )
      return 0LL;
    LOWORD(v7) = a2;
  }
  if ( *(_DWORD *)(a4 + 16) )
  {
    v20 = *(_QWORD *)(a4 + 24);
    if ( (v7 & 0x2000) != 0 )
    {
      v21 = a3 + 31;
      v20 += 16LL;
    }
    else
    {
      v21 = a3 + 15;
    }
    memmove(
      (void *)((a3 + v20 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
      (const void *)((*(_QWORD *)a4 + v21) & 0xFFFFFFFFFFFFFFF0uLL),
      16 * (*(unsigned __int8 *)(((*(_QWORD *)a4 + v21) & 0xFFFFFFFFFFFFFFF0uLL) + 3) + 1LL));
  }
  if ( v18 < *(unsigned __int8 *)(v11 + 31) )
    RtlpHpSegPageRangeShrink(a1, v11, v18);
  result = a3;
  *(_DWORD *)(v11 + 4) = (v18 << *(_BYTE *)(a1 + 8)) - *(_DWORD *)(a4 + 24);
  return result;
}
