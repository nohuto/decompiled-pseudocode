/*
 * XREFs of RtlpHpAllocateHeap @ 0x1403C93A0
 * Callers:
 *     ExAllocateHeapPages @ 0x1402F7304 (ExAllocateHeapPages.c)
 * Callees:
 *     RtlpHpAllocateHeapBackend @ 0x1402F89B0 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1403BBC64 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1403C870C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpAllocateHeapSlow @ 0x1403C9AF8 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1403CA350 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpVsContextAllocate @ 0x1403CA760 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x1403CAA94 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1403CAEB8 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2D18 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404F87B0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlHeapZero @ 0x1406A9C60 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocateHeap(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  unsigned int v4; // edi
  unsigned __int64 v7; // r15
  __int64 v8; // r13
  unsigned __int64 Slow; // r12
  unsigned __int64 v10; // r10
  unsigned int v11; // r8d
  __int64 v12; // rsi
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rsi
  signed __int64 i; // rbx
  signed __int64 v20; // rax
  struct _KTHREAD *v21; // r9
  unsigned __int64 v22; // r11
  struct _LIST_ENTRY *v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned int v25; // r10d
  char *v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  _QWORD *v29; // r9
  _QWORD *v30; // r8
  signed __int64 v35; // rax
  __int64 v36; // r8
  unsigned int v38; // ecx
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rdx
  unsigned __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v47; // rax
  unsigned __int64 v48; // r11
  struct _KTHREAD *CurrentThread; // r9
  __int64 v50; // r10
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v52; // rdx
  char *v53; // r8
  unsigned __int64 v54; // rdx
  __int16 v55; // si
  unsigned __int64 v56; // r8
  _QWORD *v57; // r10
  _QWORD *v58; // rdx
  signed __int64 v59; // rax
  unsigned __int64 v60; // rdx
  signed __int64 v61; // rtt
  __int64 v62; // r10
  signed __int64 v63; // rax
  __int64 v64; // r11
  signed __int64 v65; // rax
  signed __int64 v66; // rtt
  signed __int64 v67; // r8
  unsigned __int64 v68; // rcx
  int v74; // edx
  int v75; // [rsp+20h] [rbp-68h]
  int v76; // [rsp+20h] [rbp-68h]
  int v77; // [rsp+24h] [rbp-64h]
  unsigned int v78; // [rsp+28h] [rbp-60h]
  int v79; // [rsp+2Ch] [rbp-5Ch]
  _QWORD *v80; // [rsp+48h] [rbp-40h]
  unsigned int v81; // [rsp+A0h] [rbp+18h]
  unsigned __int8 v82; // [rsp+A0h] [rbp+18h]
  int v83; // [rsp+A0h] [rbp+18h]
  int v84; // [rsp+A8h] [rbp+20h]
  unsigned int v85; // [rsp+A8h] [rbp+20h]
  unsigned __int64 v86; // [rsp+A8h] [rbp+20h]
  signed __int64 v87; // [rsp+A8h] [rbp+20h]
  unsigned __int8 v88; // [rsp+ACh] [rbp+24h]

  v4 = a3 & 0x2FFA;
  if ( (a3 & 0x2FF8) != 0 )
    return RtlpHpAllocateHeapSlow(a1, a2, a3 & 0x2FFA);
  v7 = a2;
  if ( a2 <= 1 )
    v7 = 1LL;
  if ( v7 < *(unsigned __int16 *)(a1 + 900) )
  {
    v8 = a1 + 832;
    Slow = 0LL;
    v10 = ((unsigned __int64)*(unsigned int *)(a1 + 908) >> 4) & 0x1FF;
    v11 = (*(_DWORD *)(a1 + 908) >> 13) & 0x3FFFF;
    v12 = (unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v7 + 15) >> 4)) - 1;
    _BitScanReverse(&v13, v11);
    v81 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v7 + 15) >> 4)) - 1;
    v14 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v13 - 2) + 8LL * (v11 ^ (1 << v13)) + 8)
                    + 8 * v10);
    if ( !v14 )
      v14 = RtlpHpLfhThreadDataInitializeSet(v8);
    v15 = 2 * v12;
    v16 = v8 + ((unsigned __int16)v14 << 6);
    v88 = BYTE4(v14);
    v17 = *(unsigned __int16 *)(v15 + v16);
    if ( *(_WORD *)(v15 + v16) )
    {
LABEL_9:
      v18 = v8 + (unsigned int)((_DWORD)v17 << 6);
      if ( *(_WORD *)(v18 + 4) )
      {
        v47 = *(_QWORD *)(v18 + 56);
        if ( (v47 & 0xFFF) != 0 )
        {
          v48 = v47 & 0xFFFFFFFFFFFFF000uLL;
          *(_QWORD *)(v18 + 56) = v47 - 1;
          CurrentThread = KeGetCurrentThread();
          v50 = (unsigned int)*(unsigned __int8 *)((v47 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
          Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
          v52 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
          v83 = qword_140E27FC8 ^ *(_DWORD *)((v47 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v47 & 0xFFFFFFFFFFFFF000uLL) >> 12);
          v53 = (char *)Blink + v52;
          v54 = (unsigned __int64)Blink ^ v52;
          v55 = BYTE4(v53);
          v56 = (v47 & 0xFFFFFFFFFFFFF000uLL) + 64;
          CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v54, 37);
          CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v54 ^ (v54 << 16) ^ __ROL8__(Blink, 24));
          v57 = (_QWORD *)(v56 + 8 * (v50 - 1));
          v58 = (_QWORD *)(v56 + 8LL * *(unsigned __int8 *)((v47 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
          while ( *v58 == -1LL )
          {
            if ( v58 == v57 )
              v58 = (_QWORD *)((v47 & 0xFFFFFFFFFFFFF000uLL) + 64);
            else
              ++v58;
          }
          _RAX = 1LL << ((unsigned __int16)(v55 * __popcnt(~*v58)) >> 8);
          __asm
          {
            pdep    rcx, rax, rcx
            tzcnt   rax, rcx
          }
          *v58 |= _RCX;
          v74 = (_DWORD)v58 - v56;
          *(_BYTE *)(v48 + 36) = (unsigned int)(_RAX + 8 * v74) >> 6;
          Slow = v48 + ((_DWORD)_RAX + 8 * v74) * (unsigned __int16)v83 + (unsigned int)HIWORD(v83);
          if ( (v4 & 2) != 0 )
            RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
        }
        else
        {
          Slow = RtlpHpLfhSlotAllocateSlow(v8, v18, a2, v4);
        }
        goto LABEL_38;
      }
      v79 = 0;
      _m_prefetchw((const void *)(v18 + 56));
      for ( i = *(_QWORD *)(v18 + 56); ; i = v20 )
      {
        if ( (i & 0xFFF) == 0 )
        {
          Slow = RtlpHpLfhSlotAllocateSlow(v8, v18, a2, v4);
          goto LABEL_36;
        }
        v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 56), i - 1, i);
        if ( i == v20 )
          break;
        v79 = 1;
      }
      v21 = KeGetCurrentThread();
      v22 = i & 0xFFFFFFFFFFFFF000uLL;
      v23 = v21[1].SchedulerApc.ApcListEntry.Blink;
      v24 = (unsigned __int64)v21[1].SchedulerApc.Reserved[0];
      v75 = qword_140E27FC8 ^ *(_DWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((i & 0xFFFFFFFFFFFFF000uLL) >> 12);
      v25 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
      v26 = (char *)v23 + v24;
      v27 = (unsigned __int64)v23 ^ v24;
      v84 = BYTE4(v26);
      v21[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v27 ^ (v27 << 16) ^ __ROL8__(v23, 24));
      v28 = (i & 0xFFFFFFFFFFFFF000uLL) + 64;
      v21[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v27, 37);
      v78 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x32);
      v82 = *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x27);
      v29 = (_QWORD *)(v28 + 8 * (v25 - 1LL));
      v30 = (_QWORD *)(v28 + 8LL * *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24));
      v80 = v29;
LABEL_14:
      while ( 1 )
      {
        _RDX = ~*v30;
        if ( *v30 != -1LL )
          break;
        if ( v30 == v29 )
LABEL_43:
          v30 = (_QWORD *)v28;
        else
          ++v30;
      }
      while ( 1 )
      {
        if ( (qword_140E27FE8 & 4) != 0 )
        {
          _RAX = 1LL << ((unsigned __int16)(v84 * __popcnt(_RDX)) >> 8);
          __asm
          {
            pdep    r9, rax, rdx
            tzcnt   r10, r9
          }
        }
        else
        {
          if ( v30 == v29 || v78 != 64 )
          {
            __asm { tzcnt   rcx, rdx }
            _BitScanReverse64(&v44, _RDX);
            v45 = v44 - _RCX + 1;
            if ( v78 < v45 )
              v45 = v78;
            v84 = _RCX + ((v84 * v45) >> 8);
            _RDX = __ROR8__(_RDX, v84);
            __asm { tzcnt   r10, rdx }
            LODWORD(_R10) = v84 + _R10;
          }
          else
          {
            _RDX = __ROR8__(_RDX, v84);
            __asm { tzcnt   r10, rdx }
            LODWORD(_R10) = ((_BYTE)v84 + (_BYTE)_R10) & 0x3F;
          }
          _R9 = 1LL << _R10;
        }
        _m_prefetchw(v30);
        v35 = _InterlockedOr64(v30, _R9);
        if ( (_R9 & v35) == 0 )
          break;
        v29 = v80;
        _RDX = ~v35;
        if ( v35 == -1 )
        {
          v28 = v22 + 64;
          if ( v30 == v80 )
            goto LABEL_43;
          ++v30;
          goto LABEL_14;
        }
      }
      v38 = _R10 + 8 * ((_DWORD)v30 - (v22 + 64));
      *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v38 >> 6;
      v85 = v38;
      v39 = HIWORD(v75) + v38 * (unsigned __int16)v75;
      v76 = HIWORD(v75) + v38 * (unsigned __int16)v75;
      if ( v82 <= 1u )
      {
        if ( v38 > *(unsigned __int16 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
        {
          RtlpHpLfhSubsegmentPrefetch(v8, i & 0xFFFFFFFFFFFFF000uLL, v39);
          v22 = v42;
        }
      }
      else
      {
        if ( (int)RtlpHpLfhSubsegmentCommitBlock(v8, i & 0xFFFFFFFFFFFFF000uLL, v39) < 0 )
        {
          v40 = 0LL;
          if ( v85 != -1 )
          {
            v41 = i & 0xFFFFFFFFFFFFF000uLL;
            _InterlockedAnd64(
              (volatile signed __int64 *)((i & 0xFFFFFFFFFFFFF000uLL) + 8LL * (v85 >> 6) + 64),
              __ROL8__(-2LL, v85 & 0x3F));
            goto LABEL_60;
          }
LABEL_35:
          Slow = v40;
          if ( v40 )
            goto LABEL_36;
          v41 = i & 0xFFFFFFFFFFFFF000uLL;
LABEL_60:
          v59 = *(_QWORD *)(v41 + 16);
          do
          {
            v77 = HIDWORD(v59);
            v87 = v59;
            if ( BYTE6(v59) == 1 )
              BYTE6(v87) = 2;
            WORD1(v87) = WORD1(v59) + 1;
            v60 = (unsigned __int64)*(unsigned __int16 *)(v41 + 44) << 6;
            v61 = v59;
            v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v41 + 16), v87, v59);
          }
          while ( v61 != v59 );
          if ( !*(_BYTE *)(v60 + v8 + 92) )
          {
            *(_BYTE *)(v60 + v8 + 92) = 1;
            if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)v8 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
            {
              RtlpHpEnvCompactionSchedule(*(_QWORD **)(*(_QWORD *)v8 + 56LL));
              v41 = i & 0xFFFFFFFFFFFFF000uLL;
            }
          }
          if ( BYTE2(v77) == 1 )
          {
            v62 = v8 + ((unsigned __int16)v77 << 6);
            _m_prefetchw((const void *)(v62 + 8));
            v63 = *(_QWORD *)(v62 + 8);
            v64 = *(_DWORD *)(v41 + 24) & 0xFFF;
            *(_QWORD *)(v41 + 24) = (v63 - (v63 & 0xFFF)) | v64;
            v66 = v63;
            v65 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v62 + 8),
                    v63 ^ (v63 ^ i) & 0xFFFFFFFFFFFFF000uLL,
                    v63);
            if ( v66 != v65 )
            {
              do
              {
                v67 = v65;
                *(_QWORD *)(v41 + 24) = (v65 - (v65 & 0xFFF)) | v64;
                v65 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v62 + 8),
                        v65 ^ (v65 ^ i) & 0xFFFFFFFFFFFFF000uLL,
                        v65);
              }
              while ( v65 != v67 );
            }
          }
LABEL_36:
          if ( v79 )
            RtlpHpLfhBucketUpdateAffinityMapping(
              v8,
              (volatile signed __int8 *)(v8 + ((unsigned __int64)*(unsigned __int16 *)(v18 + 2) << 6)));
LABEL_38:
          v36 = (unsigned int)v7;
          if ( Slow != -1LL )
            return Slow;
          goto LABEL_27;
        }
        LODWORD(v39) = v76;
        v22 = i & 0xFFFFFFFFFFFFF000uLL;
      }
      v40 = v22 + (unsigned int)v39;
      v86 = v40;
      if ( (v4 & 2) != 0 )
      {
        RtlHeapZero(v22 + (unsigned int)v39, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
        v40 = v86;
      }
      goto LABEL_35;
    }
    if ( RtlpHpLfhBucketCheckAndUpdate(v8, v81, v17) )
    {
      v68 = v8 + ((unsigned __int64)v88 << 8) + 1472;
      LODWORD(v17) = *(unsigned __int16 *)(v15 + v68);
      if ( v16 != v68 )
        *(_WORD *)(v15 + v16) = *(_WORD *)(v15 + v68);
      goto LABEL_9;
    }
  }
  v36 = (unsigned int)v7;
LABEL_27:
  if ( v7 <= 0x20000 )
    return RtlpHpVsContextAllocate(a1 + 704, (unsigned int)a2, v36, v4);
  if ( v7 <= *(unsigned int *)(a1 + 528) )
    return RtlpHpAllocateHeapBackend(a1, a2, v7, v4);
  return RtlpHpLargeAlloc(a1, a2, v7, v4);
}
