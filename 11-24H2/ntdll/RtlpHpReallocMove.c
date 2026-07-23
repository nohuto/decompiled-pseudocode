/*
 * XREFs of RtlpHpReallocMove @ 0x18009EFF0
 * Callers:
 *     RtlpHpLargeReAlloc @ 0x18009E474 (RtlpHpLargeReAlloc.c)
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
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x18006BF70 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     RtlpHpLargeAlloc @ 0x18009A714 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x18009E878 (RtlpHpLargeFree.c)
 *     RtlpHpExtrasSetPresent @ 0x18009EA20 (RtlpHpExtrasSetPresent.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800D6820 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpExtrasMove @ 0x1800DF940 (RtlpHpExtrasMove.c)
 *     RtlpHpVsContextAllocate @ 0x1800E80AC (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117A60 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x1801653C0 (RtlHeapZero.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

char *__fastcall RtlpHpReallocMove(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // r15
  __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rbp
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rsi
  __int64 v13; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v15; // rdi
  __int64 v16; // rbx
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 HeapBackend; // rax
  unsigned __int64 v21; // rcx
  unsigned int v22; // edx
  __int64 v23; // r13
  __int64 v24; // rax
  char *Slow; // rdi
  __int64 v26; // rbp
  unsigned __int64 v27; // r11
  struct _TEB *v28; // r9
  int v29; // r10d
  int v30; // eax
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // rbx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rdx
  __int16 v36; // di
  _DWORD *v37; // r8
  unsigned __int64 i; // rcx
  unsigned int v42; // ecx
  __int16 v43; // cx
  signed __int64 v44; // rbx
  signed __int64 v45; // rax
  struct _TEB *v46; // r9
  unsigned __int64 v47; // r15
  __int64 v48; // rbp
  unsigned __int64 v49; // rcx
  int v50; // edi
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rdx
  int v54; // r11d
  unsigned int v55; // esi
  __int64 v56; // rdi
  volatile signed __int64 *v57; // r8
  signed __int64 v58; // r9
  __int64 v63; // rdx
  unsigned __int64 v65; // rcx
  unsigned int v67; // ecx
  signed __int64 v69; // rcx
  signed __int64 v70; // rax
  signed __int64 v71; // r8
  __int64 v72; // r14
  unsigned int v73; // esi
  __int64 v74; // rbp
  __int64 v75; // rdi
  unsigned int v76; // ebp
  __int16 v77; // cx
  signed __int64 v78; // rax
  char v79; // dl
  unsigned __int64 v80; // rdx
  signed __int64 v81; // rtt
  __int64 v82; // r10
  signed __int64 v83; // rax
  __int64 v84; // r11
  size_t v85; // r8
  __int64 v86; // rax
  __int64 v87; // r10
  unsigned __int64 v88; // r9
  char v89; // cl
  unsigned __int64 v90; // r8
  __int64 v91; // r8
  unsigned __int64 v92; // rdx
  unsigned __int8 v94; // [rsp+30h] [rbp-D8h]
  int v96; // [rsp+38h] [rbp-D0h]
  signed __int64 v97; // [rsp+38h] [rbp-D0h]
  unsigned __int8 v98; // [rsp+3Ch] [rbp-CCh]
  int v99; // [rsp+44h] [rbp-C4h]
  unsigned __int16 v100; // [rsp+46h] [rbp-C2h]
  __int64 v101; // [rsp+48h] [rbp-C0h]
  int v102; // [rsp+4Ch] [rbp-BCh]
  unsigned __int64 v103; // [rsp+50h] [rbp-B8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-78h] BYREF
  void *v109; // [rsp+A0h] [rbp-68h]
  int v110; // [rsp+A8h] [rbp-60h]
  int v111; // [rsp+ACh] [rbp-5Ch]

  v4 = a4;
  v5 = *(_QWORD *)(a3 + 24);
  v6 = a2;
  v7 = a1;
  v8 = *(_QWORD *)(a3 + 32);
  v103 = v5;
  if ( v8 >= *(unsigned __int16 *)(a1 + 900) )
  {
    v18 = (unsigned int)v8;
    v19 = (unsigned int)v5;
    goto LABEL_14;
  }
  v9 = a1 + 832;
  v10 = v8 + 2;
  v101 = a1 + 832;
  if ( (_DWORD)v5 == (_DWORD)v8 )
    v10 = *(_QWORD *)(a3 + 32);
  v11 = *(unsigned __int16 *)(a1 + 908);
  v12 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned int)(v10 + 15) >> 4] - 1;
  if ( v11 < 0x40 )
  {
    v13 = __readgsqword(8 * v11 + 5248);
    goto LABEL_8;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v13 = (__int64)TlsExpansionSlots[v11 - 64];
LABEL_8:
    if ( v13 )
      goto LABEL_10;
  }
  v13 = RtlpHpLfhThreadDataInitializeSet(v9);
LABEL_10:
  v15 = 2 * v12;
  v16 = v9 + ((unsigned __int16)v13 << 6);
  v98 = BYTE4(v13);
  v17 = *(unsigned __int16 *)(2 * v12 + v16);
  if ( *(_WORD *)(2 * v12 + v16) )
    goto LABEL_18;
  if ( RtlpHpLfhBucketCheckAndUpdate(v9, (unsigned int)v12, a3) )
  {
    v21 = v9 + ((unsigned __int64)v98 << 8) + 1472;
    v17 = *(unsigned __int16 *)(v15 + v21);
    if ( v16 != v21 )
      *(_WORD *)(v15 + v16) = *(_WORD *)(v15 + v21);
LABEL_18:
    v22 = v17 << 6;
    v23 = v9 + v22;
    if ( *(_WORD *)(v23 + 4) )
    {
      v24 = *(_QWORD *)(v23 + 56);
      if ( (v24 & 0xFFF) == 0 )
      {
LABEL_20:
        Slow = (char *)RtlpHpLfhSlotAllocateSlow(v9, v9 + v22, (unsigned int)v5, (struct _TEB *)a4);
        goto LABEL_92;
      }
      v26 = 0x100000001LL;
      v27 = v24 & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(v23 + 56) = v24 - 1;
      v28 = NtCurrentTeb();
      v29 = *(unsigned __int8 *)((v24 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
      v30 = qword_1801CCEC8 ^ *(_DWORD *)((v24 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v24 & 0xFFFFFFFFFFFFF000uLL) >> 12);
      v31 = v28->RngState[0];
      v32 = v28->RngState[1];
      v33 = (unsigned __int16)v30;
      v100 = HIWORD(v30);
      if ( (unsigned int)v5 >= (unsigned __int16)v30 )
        v26 = 1LL;
      v34 = v32 + v31;
      v35 = v31 ^ v32;
      v36 = BYTE4(v34);
      v28->RngState[1] = __ROL8__(v35, 37);
      v28->RngState[0] = v35 ^ (v35 << 16) ^ __ROL8__(v31, 24);
      v37 = (_DWORD *)(v27 + 8 * (*(unsigned __int8 *)(v27 + 36) + 8LL));
      for ( i = (unsigned int)~*v37; *v37 == -1; i = (unsigned int)~*v37 )
      {
        if ( v37 == (_DWORD *)(v27 + 8 * ((unsigned int)(v29 - 8) + 7LL)) )
          v37 = (_DWORD *)(v27 + 64);
        else
          v37 += 2;
      }
      _RAX = 1LL << ((unsigned __int16)(v36 * __popcnt(i)) >> 8);
      __asm
      {
        pdep    rcx, rax, rcx
        tzcnt   rdx, rcx
      }
      *(_QWORD *)v37 |= v26 << _RDX;
      v42 = _RDX + 4 * ((_DWORD)v37 - (v27 + 64));
      *(_BYTE *)(v27 + 36) = v42 >> 5;
      Slow = (char *)(v27 + v100 + v42 * (unsigned int)v33);
      if ( (a4 & 2) != 0 )
        RtlHeapZero(v27 + v100 + v42 * (unsigned int)v33, ((unsigned int)v5 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (unsigned int)v5 < (unsigned int)v33 )
      {
        v43 = v33 - v5;
        if ( (_DWORD)v33 - (_DWORD)v5 == 1 )
          v43 = 0x8000;
        *(_WORD *)&Slow[v33 - 2] = v43;
      }
LABEL_92:
      v18 = (unsigned int)v8;
      v19 = (unsigned int)v5;
      if ( Slow != (char *)-1LL )
      {
        v7 = a1;
        v4 = a4;
        goto LABEL_99;
      }
      goto LABEL_13;
    }
    v99 = 0;
    _m_prefetchw((const void *)(v23 + 56));
    v44 = *(_QWORD *)(v23 + 56);
    if ( (v44 & 0xFFF) == 0 )
      goto LABEL_20;
    while ( 1 )
    {
      v45 = _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 56), v44 - 1, v44);
      if ( v44 == v45 )
        break;
      v99 = 1;
      v44 = v45;
      if ( (v45 & 0xFFF) == 0 )
        goto LABEL_20;
    }
    v46 = NtCurrentTeb();
    v47 = v44 & 0xFFFFFFFFFFFFF000uLL;
    v48 = 0x100000001LL;
    v49 = v46->RngState[0];
    v50 = *(unsigned __int8 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
    v51 = v46->RngState[1];
    v96 = qword_1801CCEC8 ^ *(_DWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v44 & 0xFFFFFFFFFFFFF000uLL) >> 12);
    v52 = v51 + v49;
    if ( (unsigned int)v5 >= (unsigned __int16)v96 )
      v48 = 1LL;
    v53 = v49 ^ v51;
    v54 = BYTE4(v52);
    v46->RngState[1] = __ROL8__(v53, 37);
    v46->RngState[0] = v53 ^ (v53 << 16) ^ __ROL8__(v49, 24);
    v55 = *(unsigned __int8 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x32);
    v94 = *(_BYTE *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x27);
    v56 = v47 + 64 + 8 * ((unsigned int)(v50 - 8) - 1LL);
    v57 = (volatile signed __int64 *)(v47 + 64 + 8LL * *(unsigned __int8 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
LABEL_41:
    v58 = *v57;
    for ( _RAX = (unsigned int)~*(_DWORD *)v57; *(_DWORD *)v57 == -1; _RAX = (unsigned int)~*(_DWORD *)v57 )
    {
      if ( v57 == (volatile signed __int64 *)v56 )
        v57 = (volatile signed __int64 *)(v47 + 64);
      else
        ++v57;
      v58 = *v57;
    }
    while ( 1 )
    {
      if ( (qword_1801CCEE8 & 4) != 0 )
      {
        _RCX = 1LL << ((unsigned __int16)(v54 * __popcnt(_RAX)) >> 8);
        __asm
        {
          pdep    rdx, rcx, rax
          tzcnt   r10, rdx
        }
        v63 = v48 << _R10;
      }
      else
      {
        if ( v57 == (volatile signed __int64 *)v56 || v55 != 32 )
        {
          _BitScanReverse64(&v65, _RAX);
          __asm { tzcnt   rdx, rax }
          v67 = v65 - _RDX + 1;
          if ( v55 < v67 )
            v67 = v55;
          v54 = _RDX + ((v67 * v54) >> 8);
          _RAX = __ROR8__(_RAX, v54);
          __asm { tzcnt   r10, rax }
          LODWORD(_R10) = v54 + _R10;
        }
        else
        {
          _RCX = (unsigned int)__ROR4__(_RAX, v54);
          __asm { tzcnt   r10, rcx }
          LODWORD(_R10) = ((_BYTE)v54 + (_BYTE)_R10) & 0x1F;
        }
        v63 = v48 << _R10;
      }
      v69 = v58;
      v70 = _InterlockedCompareExchange64(v57, v58 | v63, v58);
      v58 = v70;
      if ( v70 == v69 )
        break;
      _RAX = (unsigned int)~(_DWORD)v70;
      if ( !_RAX )
      {
        if ( v57 == (volatile signed __int64 *)v56 )
          v57 = (volatile signed __int64 *)(v47 + 64);
        else
          ++v57;
        goto LABEL_41;
      }
    }
    v71 = (unsigned int)((_DWORD)v57 - (v47 + 64));
    v72 = v101;
    v73 = _R10 + 4 * v71;
    v74 = v73 >> 5;
    *(_BYTE *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v74;
    v75 = HIWORD(v96) + v73 * (unsigned __int16)v96;
    if ( v94 <= 1u )
    {
      v76 = (unsigned __int16)v96;
      if ( v73 > *(unsigned __int16 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
        RtlpHpLfhSubsegmentPrefetch(v101, v44 & 0xFFFFFFFFFFFFF000uLL, v75, (unsigned __int16)v96);
    }
    else
    {
      if ( (int)RtlpHpLfhSubsegmentCommitBlock(v101, v44 & 0xFFFFFFFFFFFFF000uLL, v75) < 0 )
      {
        Slow = 0LL;
        if ( v73 != -1 )
        {
          _InterlockedAnd64(
            (volatile signed __int64 *)(v47 + 8 * v74 + 64),
            __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v73 & 0x1F));
          goto LABEL_74;
        }
LABEL_73:
        if ( Slow )
        {
LABEL_89:
          if ( v99 )
            RtlpHpLfhBucketUpdateAffinityMapping(
              v72,
              v72 + ((unsigned __int64)*(unsigned __int16 *)(v23 + 2) << 6),
              v71,
              v58);
          v6 = a2;
          v5 = v103;
          goto LABEL_92;
        }
LABEL_74:
        v78 = *(_QWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        do
        {
          v97 = v78;
          v79 = BYTE6(v78);
          v102 = HIDWORD(v78);
          if ( BYTE6(v78) == 1 )
            v79 = 2;
          WORD1(v97) = WORD1(v78) + 1;
          BYTE6(v97) = v79;
          v80 = (unsigned __int64)*(unsigned __int16 *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x2C) << 6;
          v81 = v78;
          v78 = _InterlockedCompareExchange64((volatile signed __int64 *)(v47 + 16), v97, v78);
        }
        while ( v81 != v78 );
        if ( !*(_BYTE *)(v80 + v72 + 92) )
        {
          *(_BYTE *)(v80 + v72 + 92) = 1;
          if ( !(_DWORD)qword_1801CD278 )
          {
            if ( Context )
            {
              if ( !byte_1801D1908 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801CD278, 1, 0) )
              {
                TpSetTimerEx(Context, &DueTime, 0, 0x3E8u);
                if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CB670 > 5 )
                {
                  *(_DWORD *)&EventDescriptor.Level = 5;
                  UserData.Ptr = (unsigned __int64)off_1801CB678;
                  *(_DWORD *)&EventDescriptor.Id = 184549376;
                  EventDescriptor.Keyword = 0LL;
                  UserData.Size = *(unsigned __int16 *)off_1801CB678;
                  v109 = &unk_1801A157E;
                  UserData.Reserved = 2;
                  v110 = 25;
                  v111 = 1;
                  EtwEventWriteTransfer(qword_1801CB690, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
                }
              }
            }
          }
        }
        if ( BYTE2(v102) == 1 )
        {
          v82 = v72 + ((unsigned __int16)v102 << 6);
          _m_prefetchw((const void *)(v82 + 8));
          v83 = *(_QWORD *)(v82 + 8);
          v84 = *(_DWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x18) & 0xFFF;
          *(_QWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = (v83 - (v83 & 0xFFF)) | v84;
          v58 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v82 + 8),
                  v83 ^ (v44 ^ v83) & 0xFFFFFFFFFFFFF000uLL,
                  v83);
          if ( v83 != v58 )
          {
            do
            {
              v71 = v58;
              *(_QWORD *)((v44 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = (v58 - (v58 & 0xFFF)) | v84;
              v58 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v82 + 8),
                      v58 ^ (v44 ^ v58) & 0xFFFFFFFFFFFFF000uLL,
                      v58);
            }
            while ( v58 != v71 );
          }
        }
        goto LABEL_89;
      }
      v76 = (unsigned __int16)v96;
    }
    Slow = (char *)(v47 + v75);
    if ( (a4 & 2) != 0 )
      RtlHeapZero(Slow, ((unsigned int)v103 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned int)v103 < v76 )
    {
      v77 = v76 - v103;
      if ( v76 - (_DWORD)v103 == 1 )
        v77 = 0x8000;
      *(_WORD *)&Slow[v76 - 2] = v77;
    }
    goto LABEL_73;
  }
  v18 = (unsigned int)v8;
  v19 = (unsigned int)v5;
LABEL_13:
  v4 = a4;
  v7 = a1;
LABEL_14:
  if ( v8 > 0x20000 )
  {
    if ( v8 > *(unsigned int *)(v7 + 528) )
      HeapBackend = RtlpHpLargeAlloc(v7, v5, v8, v4);
    else
      HeapBackend = RtlpHpAllocateHeapBackend(v7, v5, v8, v4);
  }
  else
  {
    HeapBackend = RtlpHpVsContextAllocate(v7 + 704, v19, v18, v4);
  }
  Slow = (char *)HeapBackend;
LABEL_99:
  if ( Slow )
  {
    v85 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 >= *(_QWORD *)(a3 + 24) )
      v85 = *(_QWORD *)(a3 + 24);
    memmove(Slow, (const void *)v6, v85);
    if ( *(_DWORD *)(a3 + 16) )
    {
      RtlpHpExtrasMove(v6, *(_QWORD *)a3, (_DWORD)Slow, *(_QWORD *)(a3 + 24), v4);
      RtlpHpExtrasSetPresent((_RTL_SRWLOCK *)v7, (__int64)Slow);
    }
    if ( (_WORD)v6 )
    {
      v87 = v7 + 320;
    }
    else
    {
      v86 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((v6 - qword_1801CD918) >> 20));
      if ( !v86 || (_DWORD)v86 == 3 )
      {
        RtlpHpLargeFree(v7, (char *)v6);
        return Slow;
      }
      v87 = v7 + 320;
      if ( (_DWORD)v86 == 2 )
        v87 = v7 + 512;
    }
    v88 = *(_QWORD *)v87 & v6;
    if ( RtlpHpHeapGlobals ^ v87 ^ *(_QWORD *)(v88 + 0x10) ^ v88 )
    {
      RtlpLogHeapFailure(9, *(_QWORD *)(v87 + 56), v6, 0LL, 0LL, 0LL);
    }
    else
    {
      v89 = *(_BYTE *)(v87 + 8);
      v90 = v88 + 32 * ((unsigned __int64)(unsigned int)(v6 - v88) >> v89);
      v91 = -32LL * *(unsigned __int8 *)(v90 + 26) + v90;
      v92 = v88 + ((__int64)(v91 - v88) >> 5 << v89);
      if ( *(_BYTE *)(v91 + 24) + (v92 == v6) == 11 )
        RtlpHpLfhContextFree(*(_QWORD *)(v87 + 24), v92, v6);
      else
        RtlpHpSegFreeInternal(v87, v6, v91, 0LL);
    }
  }
  return Slow;
}
