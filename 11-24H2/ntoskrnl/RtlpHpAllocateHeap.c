/*
 * XREFs of RtlpHpAllocateHeap @ 0x1402B7A40
 * Callers:
 *     ExAllocateHeapPages @ 0x140440774 (ExAllocateHeapPages.c)
 * Callees:
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402B7624 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpVsContextAllocate @ 0x1402B7840 (RtlpHpVsContextAllocate.c)
 *     RtlpHpAllocateHeapSlow @ 0x1402B819C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1402B9010 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpAllocateHeapBackend @ 0x1402C15F0 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpLargeAlloc @ 0x140420250 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x140421D08 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F561C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404FAC50 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlHeapZero @ 0x1406B4F30 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocateHeap(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  unsigned int v4; // edi
  unsigned __int64 v6; // r15
  __int64 v7; // r13
  unsigned __int64 Slow; // r12
  unsigned __int64 v9; // r10
  unsigned int v10; // r8d
  __int64 v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rsi
  signed __int64 i; // rbx
  signed __int64 v19; // rax
  struct _KTHREAD *v20; // r9
  unsigned __int64 v21; // r11
  struct _LIST_ENTRY *v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned int v24; // r10d
  char *v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  _QWORD *v28; // r9
  _QWORD *v29; // r8
  signed __int64 v34; // rax
  unsigned int v35; // ecx
  __int64 v36; // r8
  int v37; // eax
  unsigned __int64 v38; // rax
  int v39; // r8d
  signed __int64 v43; // rax
  unsigned __int64 v44; // rdx
  signed __int64 v45; // rtt
  __int64 v46; // r9
  signed __int64 v47; // rax
  __int64 v48; // r10
  signed __int64 v49; // rax
  signed __int64 v50; // rtt
  signed __int64 v51; // r8
  unsigned __int64 v52; // rdx
  unsigned __int64 v54; // rax
  unsigned int v55; // eax
  __int64 v57; // rax
  unsigned __int64 v58; // r11
  struct _KTHREAD *CurrentThread; // r9
  __int64 v60; // r10
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v62; // rdx
  char *v63; // r8
  unsigned __int64 v64; // rdx
  __int16 v65; // si
  unsigned __int64 v66; // r8
  _QWORD *v67; // r10
  _QWORD *v68; // rdx
  unsigned __int64 v70; // rcx
  int v74; // edx
  int v75; // [rsp+20h] [rbp-68h]
  int v76; // [rsp+20h] [rbp-68h]
  int v77; // [rsp+24h] [rbp-64h]
  unsigned int v78; // [rsp+30h] [rbp-58h]
  int v79; // [rsp+34h] [rbp-54h]
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
  if ( (a3 & 0x2FF8) == 0 )
  {
    v6 = a2;
    if ( a2 <= 1 )
      v6 = 1LL;
    if ( v6 < *(unsigned __int16 *)(a1 + 900) )
    {
      v7 = a1 + 832;
      Slow = 0LL;
      v9 = ((unsigned __int64)*(unsigned int *)(a1 + 908) >> 4) & 0x1FF;
      v10 = (*(_DWORD *)(a1 + 908) >> 13) & 0x3FFFF;
      v11 = (unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v6 + 15) >> 4)) - 1;
      _BitScanReverse(&v12, v10);
      v81 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v6 + 15) >> 4)) - 1;
      v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v12 - 2)
                                  + 8LL * (v10 ^ (1 << v12))
                                  + 8)
                      + 8 * v9);
      if ( !v13 )
        v13 = RtlpHpLfhThreadDataInitializeSet(v7);
      v14 = 2 * v11;
      v15 = v7 + ((unsigned __int16)v13 << 6);
      v88 = BYTE4(v13);
      v16 = *(unsigned __int16 *)(v14 + v15);
      if ( *(_WORD *)(v14 + v15) )
      {
LABEL_8:
        v17 = v7 + (unsigned int)((_DWORD)v16 << 6);
        if ( *(_WORD *)(v17 + 4) )
        {
          v57 = *(_QWORD *)(v17 + 56);
          if ( (v57 & 0xFFF) != 0 )
          {
            v58 = v57 & 0xFFFFFFFFFFFFF000uLL;
            *(_QWORD *)(v17 + 56) = v57 - 1;
            CurrentThread = KeGetCurrentThread();
            v60 = (unsigned int)*(unsigned __int8 *)((v57 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
            Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
            v62 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
            v83 = qword_140E28208 ^ *(_DWORD *)((v57 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v57 & 0xFFFFFFFFFFFFF000uLL) >> 12);
            v63 = (char *)Blink + v62;
            v64 = (unsigned __int64)Blink ^ v62;
            v65 = BYTE4(v63);
            v66 = (v57 & 0xFFFFFFFFFFFFF000uLL) + 64;
            CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v64, 37);
            CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v64 ^ (v64 << 16) ^ __ROL8__(Blink, 24));
            v67 = (_QWORD *)(v66 + 8 * (v60 - 1));
            v68 = (_QWORD *)(v66 + 8LL * *(unsigned __int8 *)((v57 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
            while ( *v68 == -1LL )
            {
              if ( v68 == v67 )
                v68 = (_QWORD *)((v57 & 0xFFFFFFFFFFFFF000uLL) + 64);
              else
                ++v68;
            }
            _RAX = 1LL << ((unsigned __int16)(v65 * __popcnt(~*v68)) >> 8);
            __asm
            {
              pdep    rcx, rax, rcx
              tzcnt   rax, rcx
            }
            *v68 |= _RCX;
            v74 = (_DWORD)v68 - v66;
            *(_BYTE *)(v58 + 36) = (unsigned int)(_RAX + 8 * v74) >> 6;
            Slow = v58 + ((_DWORD)_RAX + 8 * v74) * (unsigned __int16)v83 + (unsigned int)HIWORD(v83);
            if ( (v4 & 2) != 0 )
              RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          }
          else
          {
            Slow = RtlpHpLfhSlotAllocateSlow(v7, v17, a2, v4);
          }
          goto LABEL_28;
        }
        v79 = 0;
        _m_prefetchw((const void *)(v17 + 56));
        for ( i = *(_QWORD *)(v17 + 56); ; i = v19 )
        {
          if ( (i & 0xFFF) == 0 )
          {
            Slow = RtlpHpLfhSlotAllocateSlow(v7, v17, a2, v4);
            goto LABEL_26;
          }
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 56), i - 1, i);
          if ( i == v19 )
            break;
          v79 = 1;
        }
        v20 = KeGetCurrentThread();
        v21 = i & 0xFFFFFFFFFFFFF000uLL;
        v22 = v20[1].SchedulerApc.ApcListEntry.Blink;
        v23 = (unsigned __int64)v20[1].SchedulerApc.Reserved[0];
        v75 = qword_140E28208 ^ *(_DWORD *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((i & 0xFFFFFFFFFFFFF000uLL) >> 12);
        v24 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
        v25 = (char *)v22 + v23;
        v26 = (unsigned __int64)v22 ^ v23;
        v84 = BYTE4(v25);
        v20[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v26 ^ (v26 << 16) ^ __ROL8__(v22, 24));
        v27 = (i & 0xFFFFFFFFFFFFF000uLL) + 64;
        v20[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v26, 37);
        v78 = *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x32);
        v82 = *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x27);
        v28 = (_QWORD *)(v27 + 8 * (v24 - 1LL));
        v29 = (_QWORD *)(v27 + 8LL * *(unsigned __int8 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24));
        v80 = v28;
LABEL_13:
        while ( 1 )
        {
          _RDX = ~*v29;
          if ( *v29 != -1LL )
            break;
          if ( v29 == v28 )
LABEL_54:
            v29 = (_QWORD *)v27;
          else
            ++v29;
        }
        while ( 1 )
        {
          if ( (qword_140E28228 & 4) != 0 )
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
            if ( v29 == v28 || v78 != 64 )
            {
              __asm { tzcnt   rcx, rdx }
              _BitScanReverse64(&v54, _RDX);
              v55 = v54 - _RCX + 1;
              if ( v78 < v55 )
                v55 = v78;
              v84 = _RCX + ((v84 * v55) >> 8);
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
          _m_prefetchw(v29);
          v34 = _InterlockedOr64(v29, _R9);
          if ( (_R9 & v34) == 0 )
            break;
          v28 = v80;
          _RDX = ~v34;
          if ( v34 == -1 )
          {
            v27 = v21 + 64;
            if ( v29 == v80 )
              goto LABEL_54;
            ++v29;
            goto LABEL_13;
          }
        }
        v35 = _R10 + 8 * ((_DWORD)v29 - (v21 + 64));
        *(_BYTE *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v35 >> 6;
        v85 = v35;
        v36 = HIWORD(v75) + v35 * (unsigned __int16)v75;
        v76 = HIWORD(v75) + v35 * (unsigned __int16)v75;
        if ( v82 <= 1u )
        {
          if ( v35 > *(unsigned __int16 *)((i & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
          {
            RtlpHpLfhSubsegmentPrefetch(v7, i & 0xFFFFFFFFFFFFF000uLL, v36);
            v21 = v52;
          }
        }
        else
        {
          v37 = RtlpHpLfhSubsegmentCommitBlock(v7, i & 0xFFFFFFFFFFFFF000uLL, v36);
          v21 = i & 0xFFFFFFFFFFFFF000uLL;
          if ( v37 < 0 )
          {
            v38 = 0LL;
            if ( v85 != -1 )
            {
              _InterlockedAnd64(
                (volatile signed __int64 *)((i & 0xFFFFFFFFFFFFF000uLL) + 8LL * (v85 >> 6) + 64),
                __ROL8__(-2LL, v85 & 0x3F));
              goto LABEL_43;
            }
LABEL_25:
            Slow = v38;
            if ( v38 )
              goto LABEL_26;
LABEL_43:
            v43 = *(_QWORD *)(v21 + 16);
            do
            {
              v77 = HIDWORD(v43);
              v87 = v43;
              if ( BYTE6(v43) == 1 )
                BYTE6(v87) = 2;
              WORD1(v87) = WORD1(v43) + 1;
              v44 = (unsigned __int64)*(unsigned __int16 *)(v21 + 44) << 6;
              v45 = v43;
              v43 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 16), v87, v43);
            }
            while ( v45 != v43 );
            if ( !*(_BYTE *)(v44 + v7 + 92) )
            {
              *(_BYTE *)(v44 + v7 + 92) = 1;
              if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)v7 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
              {
                RtlpHpEnvCompactionSchedule(*(_QWORD **)(*(_QWORD *)v7 + 56LL));
                v21 = i & 0xFFFFFFFFFFFFF000uLL;
              }
            }
            if ( BYTE2(v77) == 1 )
            {
              v46 = v7 + ((unsigned __int16)v77 << 6);
              _m_prefetchw((const void *)(v46 + 8));
              v47 = *(_QWORD *)(v46 + 8);
              v48 = *(_DWORD *)(v21 + 24) & 0xFFF;
              *(_QWORD *)(v21 + 24) = (v47 - (v47 & 0xFFF)) | v48;
              v50 = v47;
              v49 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v46 + 8),
                      v47 ^ (v47 ^ i) & 0xFFFFFFFFFFFFF000uLL,
                      v47);
              if ( v50 != v49 )
              {
                do
                {
                  v51 = v49;
                  *(_QWORD *)(v21 + 24) = (v49 - (v49 & 0xFFF)) | v48;
                  v49 = _InterlockedCompareExchange64(
                          (volatile signed __int64 *)(v46 + 8),
                          v49 ^ (v49 ^ i) & 0xFFFFFFFFFFFFF000uLL,
                          v49);
                }
                while ( v49 != v51 );
              }
            }
LABEL_26:
            if ( v79 )
              RtlpHpLfhBucketUpdateAffinityMapping(
                v7,
                (volatile signed __int8 *)(v7 + ((unsigned __int64)*(unsigned __int16 *)(v17 + 2) << 6)));
LABEL_28:
            v39 = v6;
            if ( Slow != -1LL )
              return Slow;
            goto LABEL_34;
          }
          LODWORD(v36) = v76;
        }
        v38 = v21 + (unsigned int)v36;
        v86 = v38;
        if ( (v4 & 2) != 0 )
        {
          RtlHeapZero(v21 + (unsigned int)v36, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
          v38 = v86;
          v21 = i & 0xFFFFFFFFFFFFF000uLL;
        }
        goto LABEL_25;
      }
      if ( RtlpHpLfhBucketCheckAndUpdate(v7, v81, v16) )
      {
        v70 = v7 + ((unsigned __int64)v88 << 8) + 1472;
        LODWORD(v16) = *(unsigned __int16 *)(v14 + v70);
        if ( v15 != v70 )
          *(_WORD *)(v14 + v15) = *(_WORD *)(v14 + v70);
        goto LABEL_8;
      }
    }
    v39 = v6;
LABEL_34:
    if ( v6 <= 0x20000 )
      return RtlpHpVsContextAllocate((_BYTE *)(a1 + 704), a2, v39, v4);
    if ( v6 <= *(unsigned int *)(a1 + 528) )
      return RtlpHpAllocateHeapBackend(a1, a2, v6, v4);
    return RtlpHpLargeAlloc(a1, a2, v6, v4);
  }
  return RtlpHpAllocateHeapSlow(a1, a2, a3 & 0x2FFA);
}
