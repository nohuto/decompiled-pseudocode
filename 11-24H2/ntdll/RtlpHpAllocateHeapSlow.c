/*
 * XREFs of RtlpHpAllocateHeapSlow @ 0x18009FA50
 * Callers:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x180083CE0 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18001B000 (EtwEventWriteTransfer.c)
 *     RtlpCallInterceptRoutine @ 0x180054AE0 (RtlpCallInterceptRoutine.c)
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
 *     RtlpHpExtrasAppend @ 0x18009EC10 (RtlpHpExtrasAppend.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800D5580 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800D6820 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpStackTraceAddStack @ 0x1800DA400 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpVsContextAllocate @ 0x1800E80AC (RtlpHpVsContextAllocate.c)
 *     RtlpLogHeapAllocateEvent @ 0x1801113CC (RtlpLogHeapAllocateEvent.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117A60 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011AE24 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x1801653C0 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpAllocateHeapSlow(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // r12
  int v5; // ecx
  int v6; // ebx
  __int64 v7; // rdx
  unsigned __int64 v9; // r15
  unsigned int v10; // r13d
  int v11; // eax
  __int64 v12; // rbp
  unsigned int v13; // ecx
  __int64 v14; // rsi
  __int64 v15; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 Slow; // rdi
  signed __int64 v24; // r9
  __int64 v25; // rbp
  unsigned __int64 v26; // r11
  struct _TEB *v27; // r9
  int v28; // r10d
  int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __int64 v32; // rbx
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rdx
  __int16 v35; // di
  _DWORD *v36; // r8
  unsigned __int64 i; // rcx
  unsigned int v41; // ecx
  __int16 v42; // cx
  signed __int64 v43; // rbx
  signed __int64 v44; // rax
  struct _TEB *v45; // r9
  unsigned __int64 v46; // r13
  __int64 v47; // rbp
  unsigned __int64 v48; // rcx
  int v49; // edi
  unsigned __int64 v50; // rdx
  bool v51; // cf
  unsigned __int64 v52; // r12
  unsigned __int64 v53; // r8
  unsigned __int64 v54; // rdx
  int v55; // r11d
  unsigned int v56; // esi
  volatile signed __int64 *v57; // rdi
  volatile signed __int64 *v58; // r8
  __int64 v63; // rdx
  unsigned __int64 v65; // rcx
  unsigned int v67; // ecx
  signed __int64 v69; // rcx
  signed __int64 v70; // rax
  signed __int64 v71; // r8
  __int64 v72; // r12
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
  __int64 v85; // r8
  __int64 v86; // rdx
  unsigned int v87; // esi
  __int64 HeapBackend; // rax
  unsigned __int64 v89; // rax
  unsigned int *v90; // rbx
  __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // r10
  unsigned __int64 v94; // r9
  char v95; // cl
  unsigned __int64 v96; // r8
  __int64 v97; // r8
  unsigned __int64 v98; // rdx
  __int64 v99; // rdx
  unsigned __int8 v100; // [rsp+30h] [rbp-C8h]
  int v101; // [rsp+38h] [rbp-C0h]
  signed __int64 v102; // [rsp+38h] [rbp-C0h]
  unsigned __int8 v103; // [rsp+3Ch] [rbp-BCh]
  int v104; // [rsp+40h] [rbp-B8h]
  unsigned __int16 v105; // [rsp+42h] [rbp-B6h]
  int v106; // [rsp+4Ch] [rbp-ACh]
  int v107; // [rsp+50h] [rbp-A8h]
  int v108; // [rsp+54h] [rbp-A4h]
  int v109; // [rsp+58h] [rbp-A0h]
  __int64 v111; // [rsp+78h] [rbp-80h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-78h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-68h] BYREF
  void *v114; // [rsp+A0h] [rbp-58h]
  int v115; // [rsp+A8h] [rbp-50h]
  int v116; // [rsp+ACh] [rbp-4Ch]

  v108 = a3;
  v3 = a2;
  v109 = 0;
  if ( (a3 & 0x20) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    v109 = v5;
    if ( v5 )
    {
      __writegsqword(0x1858u, 0LL);
      v108 = a3 | 8;
      v6 = RtlpCallInterceptRoutine(v5, (PVOID)a1, 0LL, 1);
      __writegsqword(0x1858u, a1 + 20);
      v7 = *(unsigned int *)(a1 + 20);
      if ( (v7 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
        RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v7);
      if ( v6 < 0 )
        return 0LL;
      a3 = v108;
    }
  }
  if ( v3 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  v9 = v3 + 16;
  if ( (a3 & 0x2000) == 0 )
    v9 = v3;
  if ( (a3 & 0x20000F08) != 0 )
    v9 = ((v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
  if ( !v9 )
    v9 = 1LL;
  v10 = a3 & 0x10002002;
  v107 = a3 & 0x10002002;
  if ( v9 >= *(unsigned __int16 *)(a1 + 900) )
    goto LABEL_105;
  v11 = v9 + 2;
  if ( (_DWORD)v3 == (_DWORD)v9 )
    v11 = v9;
  v12 = a1 + 832;
  v13 = *(unsigned __int16 *)(a1 + 908);
  v14 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned int)(v11 + 15) >> 4] - 1;
  if ( v13 < 0x40 )
  {
    v15 = __readgsqword(8 * v13 + 5248);
    goto LABEL_23;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v15 = (__int64)TlsExpansionSlots[v13 - 64];
LABEL_23:
    if ( v15 )
      goto LABEL_25;
  }
  v15 = RtlpHpLfhThreadDataInitializeSet(a1 + 832);
LABEL_25:
  v17 = 2 * v14;
  v18 = v12 + ((unsigned __int16)v15 << 6);
  v103 = BYTE4(v15);
  v19 = *(unsigned __int16 *)(2 * v14 + v18);
  if ( *(_WORD *)(2 * v14 + v18) )
    goto LABEL_29;
  if ( !RtlpHpLfhBucketCheckAndUpdate(a1 + 832, (unsigned int)v14, v19) )
  {
LABEL_105:
    v86 = (unsigned int)v3;
    v85 = (unsigned int)v9;
    goto LABEL_106;
  }
  v20 = v12 + ((unsigned __int64)v103 << 8) + 1472;
  LODWORD(v19) = *(unsigned __int16 *)(v17 + v20);
  if ( v18 != v20 )
    *(_WORD *)(v17 + v18) = *(_WORD *)(v17 + v20);
LABEL_29:
  v21 = v12 + (unsigned int)((_DWORD)v19 << 6);
  v111 = v21;
  if ( !*(_WORD *)(v21 + 4) )
  {
    v104 = 0;
    _m_prefetchw((const void *)(v21 + 56));
    v43 = *(_QWORD *)(v21 + 56);
    if ( (v43 & 0xFFF) == 0 )
      goto LABEL_31;
    while ( 1 )
    {
      v44 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 56), v43 - 1, v43);
      if ( v43 == v44 )
        break;
      v104 = 1;
      v43 = v44;
      if ( (v44 & 0xFFF) == 0 )
        goto LABEL_31;
    }
    v45 = NtCurrentTeb();
    v46 = v43 & 0xFFFFFFFFFFFFF000uLL;
    v47 = 0x100000001LL;
    v48 = v45->RngState[0];
    v49 = *(unsigned __int8 *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
    v50 = v45->RngState[1];
    v101 = qword_1801CCEC8 ^ *(_DWORD *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v43 & 0xFFFFFFFFFFFFF000uLL) >> 12);
    v51 = (unsigned int)v3 < (unsigned __int16)v101;
    v52 = (v43 & 0xFFFFFFFFFFFFF000uLL) + 64;
    if ( !v51 )
      v47 = 1LL;
    v53 = v50 + v48;
    v54 = v48 ^ v50;
    v55 = BYTE4(v53);
    v45->RngState[1] = __ROL8__(v54, 37);
    v45->RngState[0] = v54 ^ (v54 << 16) ^ __ROL8__(v48, 24);
    v56 = *(unsigned __int8 *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 0x32);
    v100 = *(_BYTE *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 0x27);
    v57 = (volatile signed __int64 *)(v52 + 8 * ((unsigned int)(v49 - 8) - 1LL));
    v58 = (volatile signed __int64 *)(v52 + 8LL * *(unsigned __int8 *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
LABEL_52:
    v24 = *v58;
    for ( _RAX = (unsigned int)~*(_DWORD *)v58; *(_DWORD *)v58 == -1; _RAX = (unsigned int)~*(_DWORD *)v58 )
    {
      if ( v58 == v57 )
        v58 = (volatile signed __int64 *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 64);
      else
        ++v58;
      v24 = *v58;
    }
    while ( 1 )
    {
      if ( (qword_1801CCEE8 & 4) != 0 )
      {
        _RCX = 1LL << ((unsigned __int16)(v55 * __popcnt(_RAX)) >> 8);
        __asm
        {
          pdep    rdx, rcx, rax
          tzcnt   r10, rdx
        }
        v63 = v47 << _R10;
      }
      else
      {
        if ( v58 == v57 || v56 != 32 )
        {
          _BitScanReverse64(&v65, _RAX);
          __asm { tzcnt   rdx, rax }
          v67 = v65 - _RDX + 1;
          if ( v56 < v67 )
            v67 = v56;
          v55 = _RDX + ((v67 * v55) >> 8);
          _RAX = __ROR8__(_RAX, v55);
          __asm { tzcnt   r10, rax }
          LODWORD(_R10) = v55 + _R10;
        }
        else
        {
          _RCX = (unsigned int)__ROR4__(_RAX, v55);
          __asm { tzcnt   r10, rcx }
          LODWORD(_R10) = ((_BYTE)v55 + (_BYTE)_R10) & 0x1F;
        }
        v63 = v47 << _R10;
      }
      v69 = v24;
      v70 = _InterlockedCompareExchange64(v58, v24 | v63, v24);
      v24 = v70;
      if ( v70 == v69 )
        break;
      _RAX = (unsigned int)~(_DWORD)v70;
      if ( !_RAX )
      {
        if ( v58 == v57 )
          v58 = (volatile signed __int64 *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 64);
        else
          ++v58;
        goto LABEL_52;
      }
    }
    v71 = (unsigned int)((_DWORD)v58 - v52);
    v72 = a1 + 832;
    v73 = _R10 + 4 * v71;
    v74 = v73 >> 5;
    *(_BYTE *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v74;
    v75 = HIWORD(v101) + v73 * (unsigned __int16)v101;
    if ( v100 <= 1u )
    {
      v76 = (unsigned __int16)v101;
      if ( v73 > *(unsigned __int16 *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
        RtlpHpLfhSubsegmentPrefetch(a1 + 832, v43 & 0xFFFFFFFFFFFFF000uLL, v75, (unsigned __int16)v101);
    }
    else
    {
      if ( (int)RtlpHpLfhSubsegmentCommitBlock(a1 + 832, v43 & 0xFFFFFFFFFFFFF000uLL, v75) < 0 )
      {
        Slow = 0LL;
        if ( v73 != -1 )
        {
          _InterlockedAnd64(
            (volatile signed __int64 *)(v46 + 8 * v74 + 64),
            __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v73 & 0x1F));
          goto LABEL_85;
        }
LABEL_84:
        if ( Slow )
        {
LABEL_100:
          if ( v104 )
            RtlpHpLfhBucketUpdateAffinityMapping(
              a1 + 832,
              v72 + ((unsigned __int64)*(unsigned __int16 *)(v111 + 2) << 6),
              v71,
              v24);
          v10 = v107;
          v3 = a2;
          goto LABEL_103;
        }
LABEL_85:
        v78 = *(_QWORD *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        do
        {
          v102 = v78;
          v79 = BYTE6(v78);
          v106 = HIDWORD(v78);
          if ( BYTE6(v78) == 1 )
            v79 = 2;
          WORD1(v102) = WORD1(v78) + 1;
          BYTE6(v102) = v79;
          v80 = (unsigned __int64)*(unsigned __int16 *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 0x2C) << 6;
          v81 = v78;
          v78 = _InterlockedCompareExchange64((volatile signed __int64 *)(v46 + 16), v102, v78);
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
                  v114 = &unk_1801A157E;
                  UserData.Reserved = 2;
                  v115 = 25;
                  v116 = 1;
                  EtwEventWriteTransfer(qword_1801CB690, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
                }
              }
            }
          }
        }
        if ( BYTE2(v106) == 1 )
        {
          v82 = v72 + ((unsigned __int16)v106 << 6);
          _m_prefetchw((const void *)(v82 + 8));
          v83 = *(_QWORD *)(v82 + 8);
          v84 = *(_DWORD *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 0x18) & 0xFFF;
          *(_QWORD *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = (v83 - (v83 & 0xFFF)) | v84;
          v24 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v82 + 8),
                  v83 ^ (v83 ^ v43) & 0xFFFFFFFFFFFFF000uLL,
                  v83);
          if ( v83 != v24 )
          {
            do
            {
              v71 = v24;
              *(_QWORD *)((v43 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = (v24 - (v24 & 0xFFF)) | v84;
              v24 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v82 + 8),
                      v24 ^ (v24 ^ v43) & 0xFFFFFFFFFFFFF000uLL,
                      v24);
            }
            while ( v24 != v71 );
          }
        }
        goto LABEL_100;
      }
      v76 = (unsigned __int16)v101;
    }
    Slow = v46 + v75;
    if ( (v107 & 2) != 0 )
      RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( (unsigned int)a2 < v76 )
    {
      v77 = v76 - a2;
      if ( v76 - (_DWORD)a2 == 1 )
        v77 = 0x8000;
      *(_WORD *)(v76 + Slow - 2) = v77;
    }
    goto LABEL_84;
  }
  v22 = *(_QWORD *)(v21 + 56);
  if ( (v22 & 0xFFF) == 0 )
  {
LABEL_31:
    Slow = RtlpHpLfhSlotAllocateSlow(a1 + 832, v21, (unsigned int)v3, (struct _TEB *)v10);
    goto LABEL_103;
  }
  v25 = 0x100000001LL;
  v26 = v22 & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(v21 + 56) = v22 - 1;
  v27 = NtCurrentTeb();
  v28 = *(unsigned __int8 *)((v22 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
  v29 = qword_1801CCEC8 ^ *(_DWORD *)((v22 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v22 & 0xFFFFFFFFFFFFF000uLL) >> 12);
  v30 = v27->RngState[0];
  v31 = v27->RngState[1];
  v32 = (unsigned __int16)v29;
  v105 = HIWORD(v29);
  if ( (unsigned int)v3 >= (unsigned __int16)v29 )
    v25 = 1LL;
  v33 = v31 + v30;
  v34 = v30 ^ v31;
  v35 = BYTE4(v33);
  v27->RngState[1] = __ROL8__(v34, 37);
  v27->RngState[0] = v34 ^ (v34 << 16) ^ __ROL8__(v30, 24);
  v24 = v26 + 64;
  v36 = (_DWORD *)(v26 + 8 * (*(unsigned __int8 *)(v26 + 36) + 8LL));
  for ( i = (unsigned int)~*v36; *v36 == -1; i = (unsigned int)~*v36 )
  {
    if ( v36 == (_DWORD *)(v26 + 8 * ((unsigned int)(v28 - 8) + 7LL)) )
      v36 = (_DWORD *)(v26 + 64);
    else
      v36 += 2;
  }
  _RAX = 1LL << ((unsigned __int16)(v35 * __popcnt(i)) >> 8);
  __asm
  {
    pdep    rcx, rax, rcx
    tzcnt   rdx, rcx
  }
  *(_QWORD *)v36 |= v25 << _RDX;
  v41 = _RDX + 4 * ((_DWORD)v36 - v24);
  *(_BYTE *)(v26 + 36) = v41 >> 5;
  Slow = v26 + v105 + v41 * (unsigned int)v32;
  if ( (v10 & 2) != 0 )
    RtlHeapZero(v26 + v105 + v41 * (unsigned int)v32, ((unsigned int)v3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (unsigned int)v3 < (unsigned int)v32 )
  {
    v42 = v32 - v3;
    if ( (_DWORD)v32 - (_DWORD)v3 == 1 )
      v42 = 0x8000;
    *(_WORD *)(v32 + Slow - 2) = v42;
  }
LABEL_103:
  v85 = (unsigned int)v9;
  v86 = (unsigned int)v3;
  if ( Slow != -1LL )
  {
    v87 = 2;
    goto LABEL_112;
  }
LABEL_106:
  v87 = 3;
  if ( v9 > 0x20000 )
  {
    if ( v9 > *(unsigned int *)(a1 + 528) )
      HeapBackend = RtlpHpLargeAlloc(a1, v3, v9, v10);
    else
      HeapBackend = RtlpHpAllocateHeapBackend(a1, v3, v9, v10);
  }
  else
  {
    HeapBackend = RtlpHpVsContextAllocate(a1 + 704, v86, v85, v10);
  }
  Slow = HeapBackend;
LABEL_112:
  if ( !Slow )
    return Slow;
  if ( (v108 & 0x20002F08) == 0 || (v89 = RtlpHpExtrasAppend((_RTL_SRWLOCK *)a1, Slow, v3, v24, 0LL, v108), !v109) )
  {
LABEL_135:
    if ( (unsigned int)RtlpHpStackLoggingEnabled(a1) )
      RtlpHpStackTraceAddStack(a1, Slow);
    if ( *(char *)(a1 + 20) < 0 )
      RtlpLogHeapAllocateEvent(a1, Slow, v3, v87);
    return Slow;
  }
  v90 = (unsigned int *)(a1 + 20);
  *(_BYTE *)(v89 + 2) ^= (v109 ^ *(_BYTE *)(v89 + 2)) & 0xF;
  __writegsqword(0x1858u, 0LL);
  if ( (int)RtlpCallInterceptRoutine(v109, (PVOID)a1, Slow, 2) >= 0 )
  {
    __writegsqword(0x1858u, (unsigned __int64)v90);
    v99 = *v90;
    if ( (v99 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v99);
    goto LABEL_135;
  }
  RtlpCallInterceptRoutine(v109, (PVOID)a1, Slow, 3);
  __writegsqword(0x1858u, (unsigned __int64)v90);
  v91 = *v90;
  if ( (v91 & 0x10) != 0 && *(_DWORD *)(a1 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
    RtlpHpEnvAcquireGlobalLockSharedContended(a1 + 20, v91);
  if ( (_WORD)Slow )
  {
    v93 = a1 + 320;
  }
  else
  {
    v92 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((Slow - qword_1801CD918) >> 20));
    if ( !v92 || (_DWORD)v92 == 3 )
    {
      RtlpHpLargeFree(a1, (char *)Slow);
      return 0LL;
    }
    v93 = a1 + 320;
    if ( (_DWORD)v92 == 2 )
      v93 = a1 + 512;
  }
  v94 = *(_QWORD *)v93 & Slow;
  if ( RtlpHpHeapGlobals ^ v94 ^ *(_QWORD *)(v94 + 0x10) ^ v93 )
  {
    RtlpLogHeapFailure(9, *(_QWORD *)(v93 + 56), Slow, 0LL, 0LL, 0LL);
    return 0LL;
  }
  else
  {
    v95 = *(_BYTE *)(v93 + 8);
    v96 = v94 + 32 * ((unsigned __int64)(unsigned int)(Slow - v94) >> v95);
    v97 = -32LL * *(unsigned __int8 *)(v96 + 26) + v96;
    v98 = v94 + ((__int64)(v97 - v94) >> 5 << v95);
    if ( *(_BYTE *)(v97 + 24) + (v98 == Slow) == 11 )
      RtlpHpLfhContextFree(*(_QWORD *)(v93 + 24), v98, Slow);
    else
      RtlpHpSegFreeInternal(v93, Slow, v97, 0LL);
    return 0LL;
  }
}
