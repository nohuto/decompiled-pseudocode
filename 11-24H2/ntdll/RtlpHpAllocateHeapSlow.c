/*
 * XREFs of RtlpHpAllocateHeapSlow @ 0x1800ACEF0
 * Callers:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x180094EF0 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlpCallInterceptRoutine @ 0x1800280E0 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18002CA00 (RtlCSparseBitmapBitmaskRead.c)
 *     EtwEventWriteTransfer @ 0x18003AD80 (EtwEventWriteTransfer.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x18004B138 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18004EAC0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhContextFree @ 0x18004F530 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x18004F7C0 (RtlpHpSegFreeInternal.c)
 *     RtlpHpAllocateHeapBackend @ 0x180051334 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180056390 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     RtlpHpLargeFree @ 0x1800938E4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x180093F08 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800A4EB0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpExtrasAppend @ 0x1800B7EC0 (RtlpHpExtrasAppend.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800DB020 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DF290 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpVsContextAllocate @ 0x1800ED0DC (RtlpHpVsContextAllocate.c)
 *     RtlpLogHeapAllocateEvent @ 0x180116248 (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180119830 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011CBF4 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x180167000 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpAllocateHeapSlow(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int v6; // ecx
  int v7; // ebx
  __int64 v8; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned int v12; // r13d
  int v13; // eax
  __int64 v14; // rbp
  unsigned int v15; // ecx
  __int64 v16; // rsi
  __int64 v17; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v19; // rdi
  __int64 v20; // rbx
  int v21; // r8d
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 Slow; // rdi
  signed __int64 v26; // r9
  __int64 v27; // rbp
  unsigned __int64 v28; // r11
  int v29; // r10d
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int16 v36; // di
  _DWORD *v37; // r8
  unsigned __int64 i; // rcx
  unsigned int v42; // ecx
  __int16 v43; // cx
  signed __int64 v44; // rbx
  signed __int64 v45; // rax
  struct _TEB *v46; // r9
  unsigned __int64 v47; // r13
  __int64 v48; // rbp
  unsigned __int64 v49; // rcx
  int v50; // edi
  unsigned __int64 v51; // rdx
  bool v52; // cf
  unsigned __int64 v53; // r12
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // rdx
  int v56; // r11d
  unsigned int v57; // esi
  volatile signed __int64 *v58; // rdi
  volatile signed __int64 *v59; // r8
  __int64 v64; // rdx
  unsigned __int64 v66; // rcx
  unsigned int v68; // ecx
  signed __int64 v70; // rcx
  signed __int64 v71; // rax
  signed __int64 v72; // r8
  __int64 v73; // r12
  unsigned int v74; // esi
  __int64 v75; // rbp
  __int64 v76; // rdi
  unsigned int v77; // ebp
  __int16 v78; // cx
  signed __int64 v79; // rax
  char v80; // dl
  unsigned __int64 v81; // rdx
  signed __int64 v82; // rtt
  __int64 v83; // r10
  signed __int64 v84; // rax
  __int64 v85; // r11
  __int64 v86; // r8
  __int64 v87; // rdx
  unsigned int v88; // esi
  __int64 HeapBackend; // rax
  __int64 v90; // rax
  __int64 v91; // rbp
  unsigned int *v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rax
  __int64 v95; // r10
  unsigned __int64 v96; // r9
  char v97; // cl
  unsigned __int64 v98; // r8
  __int64 v99; // r8
  unsigned __int64 v100; // rdx
  __int64 v101; // rdx
  unsigned __int8 v102; // [rsp+30h] [rbp-C8h]
  int v103; // [rsp+38h] [rbp-C0h]
  signed __int64 v104; // [rsp+38h] [rbp-C0h]
  unsigned __int8 v105; // [rsp+3Ch] [rbp-BCh]
  int v106; // [rsp+40h] [rbp-B8h]
  unsigned __int16 v107; // [rsp+42h] [rbp-B6h]
  int v108; // [rsp+4Ch] [rbp-ACh]
  int v109; // [rsp+50h] [rbp-A8h]
  int v110; // [rsp+54h] [rbp-A4h]
  int v111; // [rsp+58h] [rbp-A0h]
  __int64 v113; // [rsp+70h] [rbp-88h] BYREF
  __int64 v114; // [rsp+78h] [rbp-80h]
  __int128 v115; // [rsp+80h] [rbp-78h] BYREF
  void *v116; // [rsp+90h] [rbp-68h] BYREF
  int v117; // [rsp+98h] [rbp-60h]
  int v118; // [rsp+9Ch] [rbp-5Ch]
  void *v119; // [rsp+A0h] [rbp-58h]
  int v120; // [rsp+A8h] [rbp-50h]
  int v121; // [rsp+ACh] [rbp-4Ch]

  v110 = a3;
  v3 = 0LL;
  v113 = 0LL;
  v4 = a2;
  v111 = 0;
  if ( (a3 & 0x20) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 24);
    v111 = v6;
    if ( v6 )
    {
      __writegsqword(0x1858u, 0LL);
      v110 = a3 | 8;
      v7 = RtlpCallInterceptRoutine(v6, a1, 0LL, 1u, (__int64)&v113);
      __writegsqword(0x1858u, a1 + 20);
      v8 = *(unsigned int *)(a1 + 20);
      if ( (v8 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
        RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v8);
      if ( v7 < 0 )
        return 0LL;
      v3 = v113;
      a3 = v110;
    }
  }
  if ( v4 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v10 = v4 + v3;
  v11 = v10 + 16;
  if ( (a3 & 0x2000) == 0 )
    v11 = v10;
  if ( (a3 & 0x20000F08) != 0 )
    v11 = ((v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  if ( !v11 )
    v11 = 1LL;
  v12 = a3 & 0x10002002;
  v109 = a3 & 0x10002002;
  if ( v11 >= *(unsigned __int16 *)(a1 + 900) )
    goto LABEL_105;
  v13 = v11 + 2;
  if ( (_DWORD)v4 == (_DWORD)v11 )
    v13 = v11;
  v14 = a1 + 832;
  v15 = *(unsigned __int16 *)(a1 + 908);
  v16 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned int)(v13 + 15) >> 4] - 1;
  if ( v15 < 0x40 )
  {
    v17 = __readgsqword(8 * v15 + 5248);
    goto LABEL_23;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v17 = (__int64)TlsExpansionSlots[v15 - 64];
LABEL_23:
    if ( v17 )
      goto LABEL_25;
  }
  v17 = RtlpHpLfhThreadDataInitializeSet(a1 + 832);
LABEL_25:
  v19 = 2 * v16;
  v20 = v14 + ((unsigned __int16)v17 << 6);
  v105 = BYTE4(v17);
  v21 = *(unsigned __int16 *)(2 * v16 + v20);
  if ( *(_WORD *)(2 * v16 + v20) )
    goto LABEL_29;
  if ( !RtlpHpLfhBucketCheckAndUpdate(a1 + 832, v16) )
  {
LABEL_105:
    v87 = (unsigned int)v4;
    v86 = (unsigned int)v11;
    goto LABEL_106;
  }
  v22 = v14 + ((unsigned __int64)v105 << 8) + 1472;
  v21 = *(unsigned __int16 *)(v19 + v22);
  if ( v20 != v22 )
    *(_WORD *)(v19 + v20) = *(_WORD *)(v19 + v22);
LABEL_29:
  v23 = v14 + (unsigned int)(v21 << 6);
  v114 = v23;
  if ( !*(_WORD *)(v23 + 4) )
  {
    v106 = 0;
    _m_prefetchw((const void *)(v23 + 56));
    v44 = *(_QWORD *)(v23 + 56);
    if ( (v44 & 0xFFF) == 0 )
      goto LABEL_31;
    while ( 1 )
    {
      v45 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 56), v44 - 1, v44);
      if ( v44 == v45 )
        break;
      v106 = 1;
      v44 = v45;
      if ( (v45 & 0xFFF) == 0 )
        goto LABEL_31;
    }
    v46 = NtCurrentTeb();
    v47 = v44 & 0xFFFFFFFFFFFFF000uLL;
    v48 = 0x100000001LL;
    v49 = v46->RngState[0];
    v50 = *(unsigned __int8 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
    v51 = v46->RngState[1];
    v103 = qword_1801CDEC8 ^ *(_DWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v44 & 0xFFFFFFFFFFFFF000uLL) >> 12);
    v52 = (unsigned int)v4 < (unsigned __int16)v103;
    v53 = (v44 & 0xFFFFFFFFFFFFF000uLL) + 64;
    if ( !v52 )
      v48 = 1LL;
    v54 = v51 + v49;
    v55 = v49 ^ v51;
    v56 = BYTE4(v54);
    v46->RngState[1] = __ROL8__(v55, 37);
    v46->RngState[0] = v55 ^ (v55 << 16) ^ __ROL8__(v49, 24);
    v57 = *(unsigned __int8 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x32);
    v102 = *(_BYTE *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x27);
    v58 = (volatile signed __int64 *)(v53 + 8 * ((unsigned int)(v50 - 8) - 1LL));
    v59 = (volatile signed __int64 *)(v53 + 8LL * *(unsigned __int8 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
LABEL_52:
    v26 = *v59;
    for ( _RAX = (unsigned int)~*(_DWORD *)v59; *(_DWORD *)v59 == -1; _RAX = (unsigned int)~*(_DWORD *)v59 )
    {
      if ( v59 == v58 )
        v59 = (volatile signed __int64 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 64);
      else
        ++v59;
      v26 = *v59;
    }
    while ( 1 )
    {
      if ( (qword_1801CDEE8 & 4) != 0 )
      {
        _RCX = 1LL << ((unsigned __int16)(v56 * __popcnt(_RAX)) >> 8);
        __asm
        {
          pdep    rdx, rcx, rax
          tzcnt   r10, rdx
        }
        v64 = v48 << _R10;
      }
      else
      {
        if ( v59 == v58 || v57 != 32 )
        {
          _BitScanReverse64(&v66, _RAX);
          __asm { tzcnt   rdx, rax }
          v68 = v66 - _RDX + 1;
          if ( v57 < v68 )
            v68 = v57;
          v56 = _RDX + ((v68 * v56) >> 8);
          _RAX = __ROR8__(_RAX, v56);
          __asm { tzcnt   r10, rax }
          LODWORD(_R10) = v56 + _R10;
        }
        else
        {
          _RCX = (unsigned int)__ROR4__(_RAX, v56);
          __asm { tzcnt   r10, rcx }
          LODWORD(_R10) = ((_BYTE)v56 + (_BYTE)_R10) & 0x1F;
        }
        v64 = v48 << _R10;
      }
      v70 = v26;
      v71 = _InterlockedCompareExchange64(v59, v26 | v64, v26);
      v26 = v71;
      if ( v71 == v70 )
        break;
      _RAX = (unsigned int)~(_DWORD)v71;
      if ( !_RAX )
      {
        if ( v59 == v58 )
          v59 = (volatile signed __int64 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 64);
        else
          ++v59;
        goto LABEL_52;
      }
    }
    v72 = (unsigned int)((_DWORD)v59 - v53);
    v73 = a1 + 832;
    v74 = _R10 + 4 * v72;
    v75 = v74 >> 5;
    *(_BYTE *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v75;
    v76 = HIWORD(v103) + v74 * (unsigned __int16)v103;
    if ( v102 <= 1u )
    {
      v77 = (unsigned __int16)v103;
      if ( v74 > *(unsigned __int16 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
        RtlpHpLfhSubsegmentPrefetch(a1 + 832, v44 & 0xFFFFFFFFFFFFF000uLL, v76, (unsigned __int16)v103);
    }
    else
    {
      if ( (int)RtlpHpLfhSubsegmentCommitBlock(a1 + 832, v44 & 0xFFFFFFFFFFFFF000uLL, (unsigned int)v76) < 0 )
      {
        Slow = 0LL;
        if ( v74 != -1 )
        {
          _InterlockedAnd64(
            (volatile signed __int64 *)(v47 + 8 * v75 + 64),
            __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v74 & 0x1F));
          goto LABEL_85;
        }
LABEL_84:
        if ( Slow )
        {
LABEL_100:
          if ( v106 )
            RtlpHpLfhBucketUpdateAffinityMapping(
              a1 + 832,
              v73 + ((unsigned __int64)*(unsigned __int16 *)(v114 + 2) << 6),
              v72,
              v26);
          v12 = v109;
          v4 = a2;
          goto LABEL_103;
        }
LABEL_85:
        v79 = *(_QWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        do
        {
          v104 = v79;
          v80 = BYTE6(v79);
          v108 = HIDWORD(v79);
          if ( BYTE6(v79) == 1 )
            v80 = 2;
          WORD1(v104) = WORD1(v79) + 1;
          BYTE6(v104) = v80;
          v81 = (unsigned __int64)*(unsigned __int16 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x2C) << 6;
          v82 = v79;
          v79 = _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 16), v104, v79);
        }
        while ( v82 != v79 );
        if ( !*(_BYTE *)(v81 + v73 + 92) )
        {
          *(_BYTE *)(v81 + v73 + 92) = 1;
          if ( !(_DWORD)qword_1801CE278 )
          {
            if ( qword_1801CE268 )
            {
              if ( !byte_1801D2908 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801CE278, 1, 0) )
              {
                TpSetTimerEx((_PEB_LDR_DATA *)qword_1801CE268, (unsigned __int64)&qword_1801CE270, 0, 0x3E8uLL);
                if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CC670 > 5 )
                {
                  v116 = off_1801CC678;
                  v115 = 0x50B000000uLL;
                  v117 = *(unsigned __int16 *)off_1801CC678;
                  v119 = &unk_1801A23DE;
                  v118 = 2;
                  v120 = 25;
                  v121 = 1;
                  EtwEventWriteTransfer(qword_1801CC690, &v115, 0LL, 0LL, 2, (__int64)&v116);
                }
              }
            }
          }
        }
        if ( BYTE2(v108) == 1 )
        {
          v83 = v73 + ((unsigned __int16)v108 << 6);
          _m_prefetchw((const void *)(v83 + 8));
          v84 = *(_QWORD *)(v83 + 8);
          v85 = *(_DWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x18) & 0xFFF;
          *(_QWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = (v84 - (v84 & 0xFFF)) | v85;
          v26 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v83 + 8),
                  v84 ^ (v84 ^ v44) & 0xFFFFFFFFFFFFF000uLL,
                  v84);
          if ( v84 != v26 )
          {
            do
            {
              v72 = v26;
              *(_QWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = (v26 - (v26 & 0xFFF)) | v85;
              v26 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v83 + 8),
                      v26 ^ (v26 ^ v44) & 0xFFFFFFFFFFFFF000uLL,
                      v26);
            }
            while ( v26 != v72 );
          }
        }
        goto LABEL_100;
      }
      v77 = (unsigned __int16)v103;
    }
    Slow = v47 + v76;
    if ( (v109 & 2) != 0 )
      RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned int)a2 < v77 )
    {
      v78 = v77 - a2;
      if ( v77 - (_DWORD)a2 == 1 )
        v78 = 0x8000;
      *(_WORD *)(v77 + Slow - 2) = v78;
    }
    goto LABEL_84;
  }
  v24 = *(_QWORD *)(v23 + 56);
  if ( (v24 & 0xFFF) == 0 )
  {
LABEL_31:
    Slow = RtlpHpLfhSlotAllocateSlow(a1 + 832, v23, (unsigned int)v4, v12);
    goto LABEL_103;
  }
  v27 = 0x100000001LL;
  v28 = v24 & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(v23 + 56) = v24 - 1;
  v26 = (signed __int64)NtCurrentTeb();
  v29 = *(unsigned __int8 *)((v24 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
  v30 = qword_1801CDEC8 ^ *(_DWORD *)((v24 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v24 & 0xFFFFFFFFFFFFF000uLL) >> 12);
  v31 = *(_QWORD *)(v26 + 608);
  v32 = *(_QWORD *)(v26 + 616);
  v33 = (unsigned __int16)v30;
  v107 = HIWORD(v30);
  if ( (unsigned int)v4 >= (unsigned __int16)v30 )
    v27 = 1LL;
  v34 = v32 + v31;
  v35 = v31 ^ v32;
  v36 = BYTE4(v34);
  *(_QWORD *)(v26 + 616) = __ROL8__(v35, 37);
  *(_QWORD *)(v26 + 608) = v35 ^ (v35 << 16) ^ __ROL8__(v31, 24);
  LODWORD(v26) = v28 + 64;
  v37 = (_DWORD *)(v28 + 8 * (*(unsigned __int8 *)(v28 + 36) + 8LL));
  for ( i = (unsigned int)~*v37; *v37 == -1; i = (unsigned int)~*v37 )
  {
    if ( v37 == (_DWORD *)(v28 + 8 * ((unsigned int)(v29 - 8) + 7LL)) )
      v37 = (_DWORD *)(v28 + 64);
    else
      v37 += 2;
  }
  _RAX = 1LL << ((unsigned __int16)(v36 * __popcnt(i)) >> 8);
  __asm
  {
    pdep    rcx, rax, rcx
    tzcnt   rdx, rcx
  }
  *(_QWORD *)v37 |= v27 << _RDX;
  v42 = _RDX + 4 * ((_DWORD)v37 - v26);
  *(_BYTE *)(v28 + 36) = v42 >> 5;
  Slow = v28 + v107 + v42 * (unsigned int)v33;
  if ( (v12 & 2) != 0 )
    RtlHeapZero(v28 + v107 + v42 * (unsigned int)v33, ((unsigned int)v4 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (unsigned int)v4 < (unsigned int)v33 )
  {
    v43 = v33 - v4;
    if ( (_DWORD)v33 - (_DWORD)v4 == 1 )
      v43 = 0x8000;
    *(_WORD *)(v33 + Slow - 2) = v43;
  }
LABEL_103:
  v86 = (unsigned int)v11;
  v87 = (unsigned int)v4;
  if ( Slow != -1LL )
  {
    v88 = 2;
    goto LABEL_112;
  }
LABEL_106:
  v88 = 3;
  if ( v11 > 0x20000 )
  {
    if ( v11 > *(unsigned int *)(a1 + 528) )
      HeapBackend = RtlpHpLargeAlloc(a1, v4, v11, v12);
    else
      HeapBackend = RtlpHpAllocateHeapBackend(a1, v4, v11, v12);
  }
  else
  {
    HeapBackend = RtlpHpVsContextAllocate(a1 + 704, v87, v86, v12);
  }
  Slow = HeapBackend;
LABEL_112:
  if ( !Slow )
    return Slow;
  if ( (v110 & 0x20002F08) == 0 || (v90 = RtlpHpExtrasAppend(a1, Slow, v4, v26, v113, v110), !v111) )
  {
LABEL_135:
    if ( (unsigned int)RtlpHpStackLoggingEnabled(a1) )
      RtlpHpStackTraceAddStack(a1, Slow);
    if ( *(char *)(a1 + 20) < 0 )
      RtlpLogHeapAllocateEvent(a1, Slow, v4, v88);
    return Slow;
  }
  v91 = v90 + 16;
  v92 = (unsigned int *)(a1 + 20);
  *(_BYTE *)(v90 + 2) ^= (v111 ^ *(_BYTE *)(v90 + 2)) & 0xF;
  __writegsqword(0x1858u, 0LL);
  if ( (int)RtlpCallInterceptRoutine(v111, a1, Slow, 2u, v90 + 16) >= 0 )
  {
    __writegsqword(0x1858u, (unsigned __int64)v92);
    v101 = *v92;
    if ( (v101 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v101);
    goto LABEL_135;
  }
  RtlpCallInterceptRoutine(v111, a1, Slow, 3u, v91);
  __writegsqword(0x1858u, (unsigned __int64)v92);
  v93 = *v92;
  if ( (v93 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v93);
  if ( (_WORD)Slow )
  {
    v95 = a1 + 320;
  }
  else
  {
    v94 = RtlCSparseBitmapBitmaskRead((__int64)&unk_1801CE930, 2 * ((Slow - qword_1801CE928) >> 20));
    if ( !v94 || (_DWORD)v94 == 3 )
    {
      RtlpHpLargeFree(a1, Slow);
      return 0LL;
    }
    v95 = a1 + 320;
    if ( (_DWORD)v94 == 2 )
      v95 = a1 + 512;
  }
  v96 = *(_QWORD *)v95 & Slow;
  if ( RtlpHpHeapGlobals ^ v96 ^ *(_QWORD *)(v96 + 0x10) ^ v95 )
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(v95 + 56), Slow, 0LL, 0LL, 0LL);
    return 0LL;
  }
  else
  {
    v97 = *(_BYTE *)(v95 + 8);
    v98 = v96 + 32 * ((unsigned __int64)(unsigned int)(Slow - v96) >> v97);
    v99 = -32LL * *(unsigned __int8 *)(v98 + 26) + v98;
    v100 = v96 + ((__int64)(v99 - v96) >> 5 << v97);
    if ( *(_BYTE *)(v99 + 24) + (v100 == Slow) == 11 )
      RtlpHpLfhContextFree(*(_QWORD *)(v95 + 24), v100, Slow);
    else
      RtlpHpSegFreeInternal(v95, Slow, v99, 0LL);
    return 0LL;
  }
}
