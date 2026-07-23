/*
 * XREFs of RtlpHpAllocateHeap @ 0x1403E93B0
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     ExAllocateHeapPages @ 0x1403E9344 (ExAllocateHeapPages.c)
 * Callees:
 *     RtlpHpSegAlloc @ 0x14035DCCC (RtlpHpSegAlloc.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x140360750 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpVsContextAllocate @ 0x14036781C (RtlpHpVsContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x1404585E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1404A2CC0 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpAllocateHeapSlow @ 0x1404D2B7C (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1404E7284 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2F1C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404F8530 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlHeapZero @ 0x1406B5ED0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocateHeap(__int64 a1, unsigned __int64 a2, __int16 a3)
{
  __int64 v3; // r10
  unsigned int v4; // r13d
  unsigned __int64 v6; // rbp
  __int64 v7; // r15
  unsigned __int64 Slow; // r14
  unsigned __int64 v9; // r10
  unsigned int v10; // r8d
  __int64 v11; // rsi
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // r8
  int v17; // r8d
  unsigned __int64 v19; // rcx
  unsigned __int16 *v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // r11
  struct _KTHREAD *v23; // r9
  unsigned int v24; // r10d
  struct _LIST_ENTRY *v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  char *v28; // r8
  _QWORD *v29; // rdx
  unsigned __int64 i; // rcx
  int v33; // edx
  signed __int64 v35; // rbx
  signed __int64 v36; // rax
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int64 v38; // r13
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rdx
  __int64 v42; // rdi
  char *v43; // r8
  unsigned __int64 v44; // rdx
  int v45; // r11d
  unsigned int v46; // esi
  _QWORD *v47; // rdi
  _QWORD *v48; // rdx
  unsigned __int64 v55; // rax
  unsigned int v56; // eax
  signed __int64 v58; // rax
  __int64 v59; // r8
  signed __int64 v60; // r9
  int v61; // edx
  __int64 v62; // r15
  unsigned int v63; // esi
  __int64 v64; // rbp
  __int64 v65; // rdi
  unsigned __int64 v66; // rdi
  signed __int64 v67; // rax
  char v68; // dl
  unsigned __int64 v69; // rdx
  signed __int64 v70; // rtt
  __int64 v72; // r10
  signed __int64 v73; // rax
  __int64 v74; // r11
  __int64 v75; // rcx
  int v76; // [rsp+30h] [rbp-78h]
  int v77; // [rsp+40h] [rbp-68h]
  __int64 v78; // [rsp+48h] [rbp-60h]
  int v79; // [rsp+4Ch] [rbp-5Ch]
  unsigned __int64 v80; // [rsp+50h] [rbp-58h]
  unsigned __int64 v82; // [rsp+B8h] [rbp+10h]
  unsigned int v83; // [rsp+C0h] [rbp+18h]
  int v84; // [rsp+C0h] [rbp+18h]
  unsigned __int8 v85; // [rsp+C8h] [rbp+20h]
  signed __int64 v86; // [rsp+C8h] [rbp+20h]
  unsigned __int8 v87; // [rsp+CCh] [rbp+24h]

  v82 = a2;
  v3 = a1;
  v4 = a3 & 0x2FFA;
  v83 = v4;
  if ( (a3 & 0x2FF8) != 0 )
    return RtlpHpAllocateHeapSlow(a1, a2, a3 & 0x2FFA);
  v6 = a2;
  if ( a2 <= 1 )
    v6 = 1LL;
  v80 = v6;
  if ( v6 >= *(unsigned __int16 *)(a1 + 900) )
    goto LABEL_11;
  v7 = a1 + 832;
  v78 = a1 + 832;
  Slow = 0LL;
  v9 = ((unsigned __int64)*(unsigned int *)(a1 + 908) >> 4) & 0x1FF;
  v10 = (*(_DWORD *)(a1 + 908) >> 13) & 0x3FFFF;
  v11 = (unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v6 + 15) >> 4)) - 1;
  _BitScanReverse(&v12, v10);
  v13 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v12 - 2) + 8LL * (v10 ^ (1 << v12)) + 8)
                  + 8 * v9);
  if ( !v13 )
    v13 = RtlpHpLfhThreadDataInitializeSet(v7);
  v14 = 2 * v11;
  v15 = v7 + ((unsigned __int16)v13 << 6);
  v87 = BYTE4(v13);
  v16 = *(unsigned __int16 *)(2 * v11 + v15);
  if ( !*(_WORD *)(2 * v11 + v15) )
  {
    if ( !RtlpHpLfhBucketCheckAndUpdate(v7, (unsigned int)v11, v16) )
    {
      a2 = v82;
      v3 = a1;
LABEL_11:
      v17 = v6;
LABEL_12:
      if ( v6 <= 0x20000 )
        return RtlpHpVsContextAllocate((_BYTE *)(v3 + 704), a2, v17, v4);
      if ( v6 > *(unsigned int *)(v3 + 528) )
        return RtlpHpLargeAlloc(v3, a2, v6, v4);
      v75 = v3 + 320;
      if ( v6 > *(unsigned int *)(v3 + 336) )
        v75 = v3 + 512;
      return RtlpHpSegAlloc(v75, a2, v6, v6, v4);
    }
    v19 = v7 + ((unsigned __int64)v87 << 8) + 1472;
    LODWORD(v16) = *(unsigned __int16 *)(v14 + v19);
    if ( v15 != v19 )
      *(_WORD *)(v14 + v15) = *(_WORD *)(v14 + v19);
  }
  v20 = (unsigned __int16 *)(v7 + (unsigned int)((_DWORD)v16 << 6));
  if ( !v20[2] )
  {
    v76 = 0;
    _m_prefetchw(v20 + 28);
    v35 = *((_QWORD *)v20 + 7);
    if ( (v35 & 0xFFF) == 0 )
      goto LABEL_18;
    while ( 1 )
    {
      v36 = _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 7, v35 - 1, v35);
      if ( v35 == v36 )
        break;
      v76 = 1;
      v35 = v36;
      if ( (v36 & 0xFFF) == 0 )
        goto LABEL_18;
    }
    CurrentThread = KeGetCurrentThread();
    v38 = v35 & 0xFFFFFFFFFFFFF000uLL;
    Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
    v40 = (v35 & 0xFFFFFFFFFFFFF000uLL) + 64;
    v41 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
    v42 = (unsigned int)*(unsigned __int8 *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
    v77 = qword_140E28348 ^ *(_DWORD *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v35 & 0xFFFFFFFFFFFFF000uLL) >> 12);
    v43 = (char *)Blink + v41;
    v44 = (unsigned __int64)Blink ^ v41;
    v45 = BYTE4(v43);
    CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v44, 37);
    CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v44 ^ (v44 << 16) ^ __ROL8__(Blink, 24));
    v46 = *(unsigned __int8 *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 0x32);
    v85 = *(_BYTE *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 0x27);
    v47 = (_QWORD *)(v40 + 8 * (v42 - 1));
    v48 = (_QWORD *)(v40 + 8LL * *(unsigned __int8 *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
LABEL_31:
    for ( _R8 = ~*v48; *v48 == -1LL; _R8 = ~*v48 )
    {
      if ( v48 == v47 )
        v48 = (_QWORD *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 64);
      else
        ++v48;
    }
    while ( 1 )
    {
      if ( (qword_140E28368 & 4) != 0 )
      {
        _RAX = 1LL << ((unsigned __int16)(v45 * __popcnt(_R8)) >> 8);
        __asm
        {
          pdep    r9, rax, r8
          tzcnt   r10, r9
        }
      }
      else
      {
        if ( v48 == v47 || v46 != 64 )
        {
          __asm { tzcnt   rcx, r8 }
          _BitScanReverse64(&v55, _R8);
          v56 = v55 - _RCX + 1;
          if ( v46 < v56 )
            v56 = v46;
          v45 = _RCX + ((v56 * v45) >> 8);
          _R8 = __ROR8__(_R8, v45);
          __asm { tzcnt   r10, r8 }
          LODWORD(_R10) = v45 + _R10;
        }
        else
        {
          _R8 = __ROR8__(_R8, v45);
          __asm { tzcnt   r10, r8 }
          LODWORD(_R10) = ((_BYTE)v45 + (_BYTE)_R10) & 0x3F;
        }
        _R9 = 1LL << _R10;
      }
      _m_prefetchw(v48);
      v58 = _InterlockedOr64(v48, _R9);
      v59 = v58;
      if ( (_R9 & v58) == 0 )
        break;
      _R8 = ~v58;
      if ( v58 == -1 )
      {
        if ( v48 == v47 )
          v48 = (_QWORD *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 64);
        else
          ++v48;
        goto LABEL_31;
      }
    }
    v60 = (unsigned __int16)v77;
    v61 = (_DWORD)v48 - v40;
    v62 = v78;
    v63 = _R10 + 8 * v61;
    v64 = v63 >> 6;
    *(_BYTE *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v64;
    v65 = HIWORD(v77) + v63 * (unsigned __int16)v77;
    if ( v85 <= 1u )
    {
      if ( v63 > *(unsigned __int16 *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 0x30) )
        RtlpHpLfhSubsegmentPrefetch(v78, v35 & 0xFFFFFFFFFFFFF000uLL, (unsigned int)v65);
    }
    else if ( (int)RtlpHpLfhSubsegmentCommitBlock(v78, v35 & 0xFFFFFFFFFFFFF000uLL, v65) < 0 )
    {
      v66 = 0LL;
      if ( v63 != -1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v38 + 8 * v64 + 64), __ROL8__(-2LL, v63 & 0x3F));
        goto LABEL_59;
      }
LABEL_58:
      Slow = v66;
      if ( v66 )
      {
LABEL_72:
        if ( v76 )
          RtlpHpLfhBucketUpdateAffinityMapping(v62, v62 + ((unsigned __int64)v20[1] << 6), v59, v60);
        v4 = v83;
        v6 = v80;
        goto LABEL_75;
      }
LABEL_59:
      v67 = *(_QWORD *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
      v59 = 2LL;
      do
      {
        v86 = v67;
        v68 = BYTE6(v67);
        v79 = HIDWORD(v67);
        if ( BYTE6(v67) == 1 )
          v68 = 2;
        WORD1(v86) = WORD1(v67) + 1;
        BYTE6(v86) = v68;
        v69 = (unsigned __int64)*(unsigned __int16 *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 0x2C) << 6;
        v70 = v67;
        v67 = _InterlockedCompareExchange64((volatile signed __int64 *)(v38 + 16), v86, v67);
      }
      while ( v70 != v67 );
      if ( !*(_BYTE *)(v69 + v62 + 92) )
      {
        *(_BYTE *)(v69 + v62 + 92) = 1;
        if ( !(BYTE1(**(_QWORD **)(*(_QWORD *)v62 + 56LL)) == 1 ? ExpHpGCScheduledNonPaged : ExpHpGCScheduledPaged) )
          RtlpHpEnvCompactionSchedule(*(_QWORD **)(*(_QWORD *)v62 + 56LL));
      }
      if ( BYTE2(v79) == 1 )
      {
        v72 = v62 + ((unsigned __int16)v79 << 6);
        _m_prefetchw((const void *)(v72 + 8));
        v73 = *(_QWORD *)(v72 + 8);
        v74 = *(_DWORD *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 0x18) & 0xFFF;
        *(_QWORD *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = (v73 - (v73 & 0xFFF)) | v74;
        v60 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v72 + 8),
                v73 ^ (v73 ^ v35) & 0xFFFFFFFFFFFFF000uLL,
                v73);
        if ( v73 != v60 )
        {
          do
          {
            v59 = v60;
            *(_QWORD *)((v35 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = (v60 - (v60 & 0xFFF)) | v74;
            v60 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v72 + 8),
                    v60 ^ (v60 ^ v35) & 0xFFFFFFFFFFFFF000uLL,
                    v60);
          }
          while ( v60 != v59 );
        }
      }
      goto LABEL_72;
    }
    v66 = v38 + v65;
    if ( (v83 & 2) != 0 )
      RtlHeapZero(v66, ((unsigned int)v82 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    goto LABEL_58;
  }
  v21 = *((_QWORD *)v20 + 7);
  if ( (v21 & 0xFFF) == 0 )
  {
LABEL_18:
    Slow = RtlpHpLfhSlotAllocateSlow(v7, (__int64)v20, v82, v4);
    goto LABEL_75;
  }
  v22 = v21 & 0xFFFFFFFFFFFFF000uLL;
  *((_QWORD *)v20 + 7) = v21 - 1;
  v23 = KeGetCurrentThread();
  v24 = *(unsigned __int8 *)((v21 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
  v25 = v23[1].SchedulerApc.ApcListEntry.Blink;
  v26 = (unsigned __int64)v23[1].SchedulerApc.Reserved[0];
  v84 = qword_140E28348 ^ *(_DWORD *)((v21 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v21 & 0xFFFFFFFFFFFFF000uLL) >> 12);
  v28 = (char *)v25 + v26;
  v27 = (unsigned __int64)v25 ^ v26;
  LODWORD(v28) = (v21 & 0xFFFFF000) + 64;
  v23[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v27, 37);
  v23[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v27 ^ (v27 << 16) ^ __ROL8__(v25, 24));
  v29 = (_QWORD *)((v21 & 0xFFFFFFFFFFFFF000uLL) + 8
                                                 * (*(unsigned __int8 *)((v21 & 0xFFFFFFFFFFFFF000uLL) + 0x24) + 8LL));
  for ( i = ~*v29; *v29 == -1LL; i = ~*v29 )
  {
    if ( v29 == (_QWORD *)((v21 & 0xFFFFFFFFFFFFF000uLL) + 8 * (v24 + 7LL)) )
      v29 = (_QWORD *)(v22 + 64);
    else
      ++v29;
  }
  _RAX = 1LL << ((unsigned __int16)(BYTE4(v28) * (unsigned __int16)__popcnt(i)) >> 8);
  __asm { pdep    rcx, rax, rcx }
  *v29 |= _RCX;
  v33 = (_DWORD)v29 - (_DWORD)v28;
  __asm { tzcnt   rax, rcx }
  *(_BYTE *)(v22 + 36) = (unsigned int)(_RAX + 8 * v33) >> 6;
  Slow = v22 + ((_DWORD)_RAX + 8 * v33) * (unsigned __int16)v84 + (unsigned int)HIWORD(v84);
  if ( (v4 & 2) != 0 )
    RtlHeapZero(Slow, ((unsigned int)v82 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
LABEL_75:
  v17 = v6;
  if ( Slow == -1LL )
  {
    a2 = v82;
    v3 = a1;
    goto LABEL_12;
  }
  return Slow;
}
