/*
 * XREFs of RtlpHpSegReAlloc @ 0x1800A3160
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x1800A2F84 (RtlpHpReAllocateHeap.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011C8F0 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18002CA00 (RtlCSparseBitmapBitmaskRead.c)
 *     EtwEventWriteTransfer @ 0x18003AD80 (EtwEventWriteTransfer.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x18004B138 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18004EAC0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhContextFree @ 0x18004F530 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x18004F7C0 (RtlpHpSegFreeInternal.c)
 *     RtlpHpAllocateHeapBackend @ 0x180051334 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800544A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180056390 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpSegPageRangeCommit @ 0x180056980 (RtlpHpSegPageRangeCommit.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     RtlpHpLargeFree @ 0x1800938E4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x180093F08 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800A4EB0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpExtrasSetPresent @ 0x1800C2830 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpVsContextGrowInPlace @ 0x1800DF8F4 (RtlpHpVsContextGrowInPlace.c)
 *     RtlpHpVsContextAllocate @ 0x1800ED0DC (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180119830 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x180167000 (RtlHeapZero.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlpHpSegReAlloc(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r8
  unsigned int v7; // ebp
  char v9; // cl
  unsigned __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rdx
  char v13; // cl
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r9
  __int64 result; // rax
  unsigned int v18; // edi
  char v19; // cl
  unsigned int v20; // r8d
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  char *Slow; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int8 *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // r14
  int v31; // eax
  __int64 v32; // rbp
  unsigned int v33; // ecx
  __int64 v34; // rsi
  __int64 v35; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v37; // rbx
  __int64 v38; // r8
  unsigned __int64 v39; // rcx
  __int64 v40; // r13
  __int64 v41; // rax
  __int64 v42; // rbp
  unsigned __int64 v43; // r11
  struct _TEB *v44; // r9
  int v45; // r10d
  int v46; // eax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // rdi
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rdx
  __int16 v52; // bx
  _DWORD *v53; // r8
  unsigned __int64 i; // rcx
  unsigned int v58; // ecx
  __int16 v59; // cx
  signed __int64 v60; // rsi
  signed __int64 v61; // rax
  struct _TEB *v62; // r9
  unsigned __int64 v63; // rsi
  __int64 v64; // rbp
  unsigned __int64 v65; // rcx
  int v66; // ebx
  bool v67; // cf
  unsigned __int64 v68; // r14
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // r8
  unsigned __int64 v71; // rdx
  int v72; // r11d
  unsigned int v73; // edi
  volatile signed __int64 *v74; // rbx
  volatile signed __int64 *v75; // r8
  signed __int64 v76; // r9
  __int64 v81; // rdx
  unsigned __int64 v83; // rcx
  unsigned int v85; // ecx
  signed __int64 v87; // rcx
  signed __int64 v88; // rax
  signed __int64 v89; // r8
  __int64 v90; // r14
  unsigned int v91; // edi
  __int64 v92; // rbp
  __int64 v93; // rbx
  unsigned int v94; // ebp
  __int16 v95; // cx
  signed __int64 v96; // rax
  char v97; // dl
  unsigned __int64 v98; // rdx
  signed __int64 v99; // rtt
  __int64 v100; // r10
  signed __int64 v101; // rax
  signed __int64 v102; // rax
  signed __int64 v103; // rtt
  __int64 HeapBackend; // rax
  size_t v105; // r8
  __int64 v106; // rcx
  unsigned __int64 v107; // rdx
  __int64 v108; // rax
  __int64 v109; // r10
  unsigned __int64 v110; // r9
  char v111; // cl
  unsigned __int64 v112; // r8
  __int64 v113; // r8
  unsigned __int64 v114; // rdx
  unsigned __int8 v116; // [rsp+34h] [rbp-C4h]
  int v117; // [rsp+38h] [rbp-C0h]
  signed __int64 v118; // [rsp+38h] [rbp-C0h]
  unsigned __int8 v119; // [rsp+3Ch] [rbp-BCh]
  int v120; // [rsp+44h] [rbp-B4h]
  unsigned __int16 v121; // [rsp+46h] [rbp-B2h]
  __int64 v122; // [rsp+48h] [rbp-B0h]
  int v123; // [rsp+4Ch] [rbp-ACh]
  unsigned __int64 v124; // [rsp+50h] [rbp-A8h]
  __int64 v125; // [rsp+60h] [rbp-98h]
  unsigned __int64 v126; // [rsp+68h] [rbp-90h]
  __int128 v127; // [rsp+70h] [rbp-88h] BYREF
  void *v128; // [rsp+80h] [rbp-78h] BYREF
  int v129; // [rsp+88h] [rbp-70h]
  int v130; // [rsp+8Ch] [rbp-6Ch]
  void *v131; // [rsp+90h] [rbp-68h]
  int v132; // [rsp+98h] [rbp-60h]
  int v133; // [rsp+9Ch] [rbp-5Ch]

  v5 = *(_QWORD *)a1 & a3;
  v7 = a2;
  if ( (v5 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(v5 + 16)) != a1 )
    return -1LL;
  v9 = *(_BYTE *)(a1 + 8);
  v10 = v5 + 32LL * ((unsigned int)(a3 - v5) >> v9);
  v11 = -32LL * *(unsigned __int8 *)(v10 + 26) + v10;
  v12 = (__int64)(v11 - v5) >> 5 << v9;
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
        v24 = *(_QWORD *)(a4 + 24);
        v25 = a3 + *(_QWORD *)a4;
        if ( (v7 & 0x2000) != 0 )
        {
          v26 = (unsigned __int8 *)((v25 + 31) & 0xFFFFFFFFFFFFFFF0uLL);
          v27 = v24 + a3 + 16;
        }
        else
        {
          v27 = a3 + v24;
          v26 = (unsigned __int8 *)((v25 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
        }
        memmove((void *)((v27 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v26, 16 * (v26[3] + 1LL));
        RtlpHpExtrasSetPresent(*(_QWORD *)(a1 + 56), Slow);
        return (__int64)Slow;
      }
    }
LABEL_33:
    if ( (v7 & 0x10000000) != 0 )
      return 0LL;
    v28 = *(_QWORD *)(a1 + 56);
    v29 = *(_QWORD *)(a4 + 32);
    v30 = *(_QWORD *)(a4 + 24);
    v125 = v28;
    v126 = v29;
    v124 = v30;
    if ( v29 >= *(unsigned __int16 *)(v28 + 900) )
      goto LABEL_125;
    v31 = v29 + 2;
    if ( (_DWORD)v30 == (_DWORD)v29 )
      v31 = *(_QWORD *)(a4 + 32);
    v32 = v28 + 832;
    v122 = v28 + 832;
    v33 = *(unsigned __int16 *)(v28 + 908);
    v34 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned int)(v31 + 15) >> 4] - 1;
    if ( v33 >= 0x40 )
    {
      TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
      if ( !TlsExpansionSlots )
      {
LABEL_43:
        v35 = RtlpHpLfhThreadDataInitializeSet(v28 + 832);
LABEL_44:
        v37 = v32 + ((unsigned __int16)v35 << 6);
        v119 = BYTE4(v35);
        v38 = *(unsigned __int16 *)(2 * v34 + v37);
        if ( !*(_WORD *)(2 * v34 + v37) )
        {
          if ( !RtlpHpLfhBucketCheckAndUpdate(v32, (unsigned int)v34, v38) )
          {
            v7 = a2;
            goto LABEL_125;
          }
          v39 = v32 + ((unsigned __int64)v119 << 8) + 1472;
          LODWORD(v38) = *(unsigned __int16 *)(v39 + 2 * v34);
          if ( v37 != v39 )
            *(_WORD *)(2 * v34 + v37) = *(_WORD *)(v39 + 2 * v34);
        }
        v40 = v32 + (unsigned int)((_DWORD)v38 << 6);
        if ( *(_WORD *)(v40 + 4) )
        {
          v41 = *(_QWORD *)(v40 + 56);
          if ( (v41 & 0xFFF) != 0 )
          {
            v42 = 0x100000001LL;
            v43 = v41 & 0xFFFFFFFFFFFFF000uLL;
            *(_QWORD *)(v40 + 56) = v41 - 1;
            v44 = NtCurrentTeb();
            v45 = *(unsigned __int8 *)((v41 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
            v46 = qword_1801CDEC8 ^ *(_DWORD *)((v41 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v41 & 0xFFFFFFFFFFFFF000uLL) >> 12);
            v47 = v44->RngState[0];
            v48 = v44->RngState[1];
            v49 = (unsigned __int16)v46;
            v121 = HIWORD(v46);
            if ( (unsigned int)v30 >= (unsigned __int16)v46 )
              v42 = 1LL;
            v50 = v48 + v47;
            v51 = v47 ^ v48;
            v52 = BYTE4(v50);
            v44->RngState[1] = __ROL8__(v51, 37);
            v44->RngState[0] = v51 ^ (v51 << 16) ^ __ROL8__(v47, 24);
            v53 = (_DWORD *)(v43 + 64 + 8LL * *(unsigned __int8 *)(v43 + 36));
            for ( i = (unsigned int)~*v53; *v53 == -1; i = (unsigned int)~*v53 )
            {
              if ( v53 == (_DWORD *)(v43 + 64 + 8 * ((unsigned int)(v45 - 8) - 1LL)) )
                v53 = (_DWORD *)(v43 + 64);
              else
                v53 += 2;
            }
            _RAX = 1LL << ((unsigned __int16)(v52 * __popcnt(i)) >> 8);
            __asm
            {
              pdep    rcx, rax, rcx
              tzcnt   rdx, rcx
            }
            *(_QWORD *)v53 |= v42 << _RDX;
            v58 = _RDX + 4 * ((_DWORD)v53 - (v43 + 64));
            *(_BYTE *)(v43 + 36) = v58 >> 5;
            Slow = (char *)(v43 + v121 + v58 * (unsigned int)v49);
            if ( (a2 & 2) != 0 )
              RtlHeapZero(v43 + v121 + v58 * (unsigned int)v49, ((unsigned int)v30 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
            if ( (unsigned int)v30 < (unsigned int)v49 )
            {
              v59 = v49 - v30;
              if ( (_DWORD)v49 - (_DWORD)v30 == 1 )
                v59 = 0x8000;
              *(_WORD *)&Slow[v49 - 2] = v59;
            }
            goto LABEL_122;
          }
LABEL_50:
          Slow = (char *)RtlpHpLfhSlotAllocateSlow(v32, v40, (unsigned int)v30, a2);
LABEL_122:
          v28 = v125;
          v7 = a2;
          if ( Slow != (char *)-1LL )
            goto LABEL_131;
          v29 = v126;
LABEL_125:
          if ( v29 > 0x20000 )
          {
            if ( v29 > *(unsigned int *)(v28 + 528) )
              HeapBackend = RtlpHpLargeAlloc(v28, v30, v29, v7);
            else
              HeapBackend = RtlpHpAllocateHeapBackend(v28, v30, v29, v7);
          }
          else
          {
            HeapBackend = RtlpHpVsContextAllocate(v28 + 704, (unsigned int)v30, (unsigned int)v29, v7);
          }
          Slow = (char *)HeapBackend;
LABEL_131:
          if ( Slow )
          {
            v105 = *(_QWORD *)a4;
            if ( *(_QWORD *)a4 >= *(_QWORD *)(a4 + 24) )
              v105 = *(_QWORD *)(a4 + 24);
            memmove(Slow, (const void *)a3, v105);
            if ( *(_DWORD *)(a4 + 16) )
            {
              v106 = *(_QWORD *)(a4 + 24);
              if ( (v7 & 0x2000) != 0 )
              {
                v107 = a3 + 31;
                v106 += 16LL;
              }
              else
              {
                v107 = a3 + 15;
              }
              memmove(
                (void *)((unsigned __int64)&Slow[v106 + 15] & 0xFFFFFFFFFFFFFFF0uLL),
                (const void *)((*(_QWORD *)a4 + v107) & 0xFFFFFFFFFFFFFFF0uLL),
                16 * (*(unsigned __int8 *)(((*(_QWORD *)a4 + v107) & 0xFFFFFFFFFFFFFFF0uLL) + 3) + 1LL));
              RtlpHpExtrasSetPresent(v28, Slow);
            }
            if ( (_WORD)a3 )
            {
              v109 = v28 + 320;
LABEL_146:
              v110 = *(_QWORD *)v109 & a3;
              if ( RtlpHpHeapGlobals ^ v110 ^ *(_QWORD *)(v110 + 0x10) ^ v109 )
              {
                RtlpLogHeapFailure(9, *(_QWORD *)(v109 + 56), a3, 0LL, 0LL, 0LL);
              }
              else
              {
                v111 = *(_BYTE *)(v109 + 8);
                v112 = v110 + 32 * ((unsigned __int64)(unsigned int)(a3 - v110) >> v111);
                v113 = -32LL * *(unsigned __int8 *)(v112 + 26) + v112;
                v114 = v110 + ((__int64)(v113 - v110) >> 5 << v111);
                if ( *(_BYTE *)(v113 + 24) + (v114 == a3) == 11 )
                  RtlpHpLfhContextFree(*(_QWORD *)(v109 + 24), v114, a3);
                else
                  RtlpHpSegFreeInternal(v109, a3, v113, 0LL);
              }
              return (__int64)Slow;
            }
            v108 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801CE930, 2 * ((a3 - qword_1801CE928) >> 20));
            if ( v108 && (_DWORD)v108 != 3 )
            {
              v109 = v28 + 320;
              if ( (_DWORD)v108 == 2 )
                v109 = v28 + 512;
              goto LABEL_146;
            }
            RtlpHpLargeFree(v28, a3);
          }
          return (__int64)Slow;
        }
        v120 = 0;
        _m_prefetchw((const void *)(v40 + 56));
        v60 = *(_QWORD *)(v40 + 56);
        if ( (v60 & 0xFFF) == 0 )
          goto LABEL_50;
        while ( 1 )
        {
          v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 56), v60 - 1, v60);
          if ( v60 == v61 )
            break;
          v120 = 1;
          v60 = v61;
          if ( (v61 & 0xFFF) == 0 )
            goto LABEL_50;
        }
        v62 = NtCurrentTeb();
        v63 = v60 & 0xFFFFFFFFFFFFF000uLL;
        v64 = 0x100000001LL;
        v65 = v62->RngState[0];
        v66 = *(unsigned __int8 *)(v63 + 24);
        v117 = qword_1801CDEC8 ^ *(_DWORD *)(v63 + 40) ^ (v63 >> 12);
        v67 = (unsigned int)v30 < (unsigned __int16)v117;
        v68 = v63 + 64;
        if ( !v67 )
          v64 = 1LL;
        v69 = v62->RngState[1];
        v70 = v69 + v65;
        v71 = v65 ^ v69;
        v72 = BYTE4(v70);
        v62->RngState[0] = v71 ^ (v71 << 16) ^ __ROL8__(v65, 24);
        v62->RngState[1] = __ROL8__(v71, 37);
        v73 = *(unsigned __int8 *)(v63 + 50);
        v116 = *(_BYTE *)(v63 + 39);
        v74 = (volatile signed __int64 *)(v68 + 8 * ((unsigned int)(v66 - 8) - 1LL));
        v75 = (volatile signed __int64 *)(v68 + 8LL * *(unsigned __int8 *)(v63 + 36));
LABEL_71:
        v76 = *v75;
        for ( _RAX = (unsigned int)~*(_DWORD *)v75; *(_DWORD *)v75 == -1; _RAX = (unsigned int)~*(_DWORD *)v75 )
        {
          if ( v75 == v74 )
            v75 = (volatile signed __int64 *)(v63 + 64);
          else
            ++v75;
          v76 = *v75;
        }
        while ( 1 )
        {
          if ( (qword_1801CDEE8 & 4) != 0 )
          {
            _RCX = 1LL << ((unsigned __int16)(v72 * __popcnt(_RAX)) >> 8);
            __asm
            {
              pdep    rdx, rcx, rax
              tzcnt   r10, rdx
            }
            v81 = v64 << _R10;
          }
          else
          {
            if ( v75 == v74 || v73 != 32 )
            {
              _BitScanReverse64(&v83, _RAX);
              __asm { tzcnt   rdx, rax }
              v85 = v83 - _RDX + 1;
              if ( v73 < v85 )
                v85 = v73;
              v72 = _RDX + ((v85 * v72) >> 8);
              _RAX = __ROR8__(_RAX, v72);
              __asm { tzcnt   r10, rax }
              LODWORD(_R10) = v72 + _R10;
            }
            else
            {
              _RCX = (unsigned int)__ROR4__(_RAX, v72);
              __asm { tzcnt   r10, rcx }
              LODWORD(_R10) = ((_BYTE)v72 + (_BYTE)_R10) & 0x1F;
            }
            v81 = v64 << _R10;
          }
          v87 = v76;
          v88 = _InterlockedCompareExchange64(v75, v76 | v81, v76);
          v76 = v88;
          if ( v88 == v87 )
            break;
          _RAX = (unsigned int)~(_DWORD)v88;
          if ( !_RAX )
          {
            if ( v75 == v74 )
              v75 = (volatile signed __int64 *)(v63 + 64);
            else
              ++v75;
            goto LABEL_71;
          }
        }
        v89 = (unsigned int)((_DWORD)v75 - v68);
        v90 = v122;
        v91 = _R10 + 4 * v89;
        v92 = v91 >> 5;
        *(_BYTE *)(v63 + 36) = v92;
        v93 = HIWORD(v117) + v91 * (unsigned __int16)v117;
        if ( v116 <= 1u )
        {
          v94 = (unsigned __int16)v117;
          if ( v91 > *(unsigned __int16 *)(v63 + 48) )
            RtlpHpLfhSubsegmentPrefetch(v122, v63, v93, (unsigned __int16)v117);
        }
        else
        {
          if ( (int)RtlpHpLfhSubsegmentCommitBlock(v122, v63, (unsigned int)v93) < 0 )
          {
            Slow = 0LL;
            if ( v91 != -1 )
            {
              _InterlockedAnd64(
                (volatile signed __int64 *)(v63 + 8 * v92 + 64),
                __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v91 & 0x1F));
              goto LABEL_104;
            }
LABEL_103:
            if ( Slow )
            {
LABEL_119:
              if ( v120 )
                RtlpHpLfhBucketUpdateAffinityMapping(
                  v90,
                  v90 + ((unsigned __int64)*(unsigned __int16 *)(v40 + 2) << 6),
                  v89,
                  v76);
              v30 = v124;
              goto LABEL_122;
            }
LABEL_104:
            v96 = *(_QWORD *)(v63 + 16);
            do
            {
              v118 = v96;
              v97 = BYTE6(v96);
              v123 = HIDWORD(v96);
              if ( BYTE6(v96) == 1 )
                v97 = 2;
              WORD1(v118) = WORD1(v96) + 1;
              BYTE6(v118) = v97;
              v98 = (unsigned __int64)*(unsigned __int16 *)(v63 + 44) << 6;
              v99 = v96;
              v96 = _InterlockedCompareExchange64((volatile signed __int64 *)(v63 + 16), v118, v96);
            }
            while ( v99 != v96 );
            if ( !*(_BYTE *)(v98 + v90 + 92) )
            {
              *(_BYTE *)(v98 + v90 + 92) = 1;
              if ( !(_DWORD)qword_1801CE278 )
              {
                if ( qword_1801CE268 )
                {
                  if ( !byte_1801D2908
                    && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801CE278, 1, 0) )
                  {
                    TpSetTimerEx((_PEB_LDR_DATA *)qword_1801CE268, (unsigned __int64)&qword_1801CE270, 0, 0x3E8uLL);
                    if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CC670 > 5 )
                    {
                      v128 = off_1801CC678;
                      v127 = 0x50B000000uLL;
                      v129 = *(unsigned __int16 *)off_1801CC678;
                      v131 = &unk_1801A23DE;
                      v130 = 2;
                      v132 = 25;
                      v133 = 1;
                      EtwEventWriteTransfer(qword_1801CC690, &v127, 0LL, 0LL, 2, (__int64)&v128);
                    }
                  }
                }
              }
            }
            if ( BYTE2(v123) == 1 )
            {
              v76 = v90 + ((unsigned __int16)v123 << 6);
              _m_prefetchw((const void *)(v76 + 8));
              v100 = *(_QWORD *)(v63 + 24);
              v101 = *(_QWORD *)(v76 + 8);
              *(_QWORD *)(v63 + 24) = v100 ^ (v101 ^ v100) & 0xFFFFFFFFFFFFF000uLL;
              v103 = v101;
              v102 = _InterlockedCompareExchange64((volatile signed __int64 *)(v76 + 8), v101 & 0xFFF | v63, v101);
              if ( v103 != v102 )
              {
                do
                {
                  v89 = v102;
                  *(_QWORD *)(v63 + 24) = v100 ^ (v100 ^ v102) & 0xFFFFFFFFFFFFF000uLL;
                  v102 = _InterlockedCompareExchange64((volatile signed __int64 *)(v76 + 8), v63 | v102 & 0xFFF, v102);
                }
                while ( v102 != v89 );
              }
            }
            goto LABEL_119;
          }
          v94 = (unsigned __int16)v117;
        }
        Slow = (char *)(v63 + v93);
        if ( (a2 & 2) != 0 )
          RtlHeapZero(Slow, ((unsigned int)v124 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
        if ( (unsigned int)v124 < v94 )
        {
          v95 = v94 - v124;
          if ( v94 - (_DWORD)v124 == 1 )
            v95 = 0x8000;
          *(_WORD *)&Slow[v94 - 2] = v95;
        }
        goto LABEL_103;
      }
      v35 = (__int64)TlsExpansionSlots[v33 - 64];
    }
    else
    {
      v35 = __readgsqword(8 * v33 + 5248);
    }
    if ( v35 )
      goto LABEL_44;
    goto LABEL_43;
  }
  if ( v18 > *(unsigned __int8 *)(v11 + 31) )
    goto LABEL_33;
  v20 = (unsigned __int16)~*(_WORD *)(v11 + 28);
  if ( (unsigned int)v16 > v20 )
  {
    if ( (int)RtlpHpSegPageRangeCommit(a1, v11, v20, (unsigned int)v16 - v20, 0, 0LL) < 0 )
      return 0LL;
    LOWORD(v7) = a2;
  }
  if ( *(_DWORD *)(a4 + 16) )
  {
    v21 = *(_QWORD *)(a4 + 24);
    if ( (v7 & 0x2000) != 0 )
    {
      v22 = a3 + 31;
      v21 += 16LL;
    }
    else
    {
      v22 = a3 + 15;
    }
    memmove(
      (void *)((a3 + v21 + 15) & 0xFFFFFFFFFFFFFFF0uLL),
      (const void *)((*(_QWORD *)a4 + v22) & 0xFFFFFFFFFFFFFFF0uLL),
      16 * (*(unsigned __int8 *)(((*(_QWORD *)a4 + v22) & 0xFFFFFFFFFFFFFFF0uLL) + 3) + 1LL));
  }
  if ( v18 < *(unsigned __int8 *)(v11 + 31) )
    RtlpHpSegPageRangeShrink(a1, v11, v18);
  result = a3;
  *(_DWORD *)(v11 + 4) = (v18 << *(_BYTE *)(a1 + 8)) - *(_DWORD *)(a4 + 24);
  return result;
}
