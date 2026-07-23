/*
 * XREFs of RtlpHpAllocateHeapSlow @ 0x1404D2B7C
 * Callers:
 *     RtlpHpAllocateHeap @ 0x1403E93B0 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhContextFree @ 0x14035BCF0 (RtlpHpLfhContextFree.c)
 *     RtlpHpSegFreeInternal @ 0x14035BF90 (RtlpHpSegFreeInternal.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14035C3DC (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegAlloc @ 0x14035DCCC (RtlpHpSegAlloc.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14035ED20 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpEnvTlsGetValue @ 0x14035F690 (RtlpHpEnvTlsGetValue.c)
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14035FCA0 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpVsContextAllocate @ 0x14036781C (RtlpHpVsContextAllocate.c)
 *     RtlpHpCalculateAllocSize @ 0x140404870 (RtlpHpCalculateAllocSize.c)
 *     RtlpHpLargeAlloc @ 0x1404585E4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x140458F38 (RtlpHpLargeFree.c)
 *     RtlpCallInterceptRoutine @ 0x1404688C8 (RtlpCallInterceptRoutine.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x14047EEF4 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlpHpLfhBlockBitmapAllocateNonAtomic @ 0x1404AE428 (RtlpHpLfhBlockBitmapAllocateNonAtomic.c)
 *     RtlpHpExtrasAppend @ 0x1404CAA28 (RtlpHpExtrasAppend.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1404E7284 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2F1C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404F8530 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpLogHeapAllocateEvent @ 0x1405F08F8 (RtlpLogHeapAllocateEvent.c)
 *     RtlHeapZero @ 0x1406B5ED0 (RtlHeapZero.c)
 */

unsigned __int64 __fastcall RtlpHpAllocateHeapSlow(ULONG_PTR a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 Slow; // rbx
  int v6; // r9d
  unsigned __int64 v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // rax
  int v10; // r9d
  int v11; // r13d
  unsigned __int64 v12; // r15
  ULONG_PTR v13; // r14
  unsigned int v14; // ebp
  __int64 Value; // rax
  ULONG_PTR v16; // rbx
  __int64 v17; // r8
  ULONG_PTR v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v21; // rdi
  struct _KTHREAD *CurrentThread; // r10
  unsigned int v23; // edx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v25; // r8
  char *v26; // r9
  unsigned __int64 v27; // r8
  unsigned int NonAtomic; // eax
  __int64 v29; // r9
  signed __int64 v30; // rdi
  signed __int64 v31; // rax
  unsigned __int64 v32; // rdi
  unsigned __int64 BlockShared; // rax
  signed __int64 v34; // r8
  signed __int64 v35; // rax
  char v36; // dl
  unsigned __int64 v37; // rdx
  signed __int64 v38; // rtt
  ULONG_PTR v39; // r10
  __int64 v40; // r11
  signed __int64 v41; // rax
  signed __int64 v42; // rax
  signed __int64 v43; // rtt
  int v44; // r8d
  unsigned int v45; // ebp
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // r14
  __int64 v50; // rax
  int v51; // eax
  ULONG_PTR v52; // rsi
  unsigned __int64 v53; // r8
  char v54; // cl
  unsigned __int64 v55; // r10
  __int64 v56; // r10
  unsigned __int64 v57; // rdx
  int v59; // [rsp+30h] [rbp-58h]
  signed __int64 v60; // [rsp+38h] [rbp-50h]
  __int64 v61; // [rsp+38h] [rbp-50h]
  int v62; // [rsp+44h] [rbp-44h]
  unsigned __int64 v63[8]; // [rsp+48h] [rbp-40h] BYREF
  int v64; // [rsp+A0h] [rbp+18h]
  int v65; // [rsp+A8h] [rbp+20h]
  int v66; // [rsp+A8h] [rbp+20h]
  unsigned __int8 v67; // [rsp+ACh] [rbp+24h]

  v64 = a3;
  Slow = 0LL;
  v63[0] = 0LL;
  v59 = 0;
  v6 = a3;
  v7 = 0LL;
  if ( (a3 & 0x20) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 24);
    v59 = v8;
    if ( v8 )
    {
      v64 = a3 | 8;
      if ( (int)RtlpCallInterceptRoutine(v8, a1, 0LL, 1u, (__int64)v63) < 0 )
        return Slow;
      v7 = v63[0];
      v6 = v64;
    }
  }
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return Slow;
  v9 = RtlpHpCalculateAllocSize(a2 + v7, v6);
  v11 = v10 & 0x10002002;
  v12 = v9;
  if ( v9 >= *(unsigned __int16 *)(a1 + 900) )
    goto LABEL_40;
  v13 = a1 + 832;
  v14 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v9 + 15) >> 4)) - 1;
  Value = RtlpHpEnvTlsGetValue(*(_DWORD *)(a1 + 908));
  if ( !Value )
    Value = RtlpHpLfhThreadDataInitializeSet(a1 + 832);
  v16 = v13 + ((unsigned __int16)Value << 6);
  v67 = BYTE4(Value);
  v17 = *(unsigned __int16 *)(v16 + 2LL * v14);
  if ( !*(_WORD *)(v16 + 2LL * v14) )
  {
    if ( RtlpHpLfhBucketCheckAndUpdate(a1 + 832, v14, v17) )
    {
      v18 = v13 + ((unsigned __int64)v67 << 8) + 1472;
      LODWORD(v17) = *(unsigned __int16 *)(v18 + 2LL * v14);
      if ( v16 != v18 )
        *(_WORD *)(v16 + 2LL * v14) = *(_WORD *)(v18 + 2LL * v14);
      goto LABEL_13;
    }
LABEL_40:
    v44 = v12;
    goto LABEL_41;
  }
LABEL_13:
  v19 = v13 + (unsigned int)((_DWORD)v17 << 6);
  if ( *(_WORD *)(v19 + 4) )
  {
    v20 = *(_QWORD *)(v19 + 56);
    if ( (v20 & 0xFFF) != 0 )
    {
      v21 = v20 & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(v19 + 56) = v20 - 1;
      CurrentThread = KeGetCurrentThread();
      v23 = *(unsigned __int8 *)((v20 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
      Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
      v25 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
      v65 = qword_140E28348 ^ *(_DWORD *)((v20 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v20 & 0xFFFFFFFFFFFFF000uLL) >> 12);
      v26 = (char *)Blink + v25;
      v27 = (unsigned __int64)Blink ^ v25;
      CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v27 ^ (v27 << 16) ^ __ROL8__(Blink, 24));
      CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v27, 37);
      NonAtomic = RtlpHpLfhBlockBitmapAllocateNonAtomic(
                    (_QWORD *)((v20 & 0xFFFFFFFFFFFFF000uLL) + 64),
                    v23,
                    *(unsigned __int8 *)((v20 & 0xFFFFFFFFFFFFF000uLL) + 0x24),
                    BYTE4(v26));
      *(_BYTE *)(v21 + 36) = NonAtomic >> 6;
      Slow = v21 + HIWORD(v65) + NonAtomic * (unsigned __int16)v65;
      if ( (v11 & 2) != 0 )
        RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
      goto LABEL_38;
    }
LABEL_37:
    Slow = RtlpHpLfhSlotAllocateSlow(a1 + 832, v19, a2, v11);
    goto LABEL_38;
  }
  v66 = 0;
  _m_prefetchw((const void *)(v19 + 56));
  v30 = *(_QWORD *)(v19 + 56);
  if ( (v30 & 0xFFF) != 0 )
  {
    while ( 1 )
    {
      v31 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 56), v30 - 1, v30);
      if ( v30 == v31 )
        break;
      v66 = 1;
      v30 = v31;
      if ( (v31 & 0xFFF) == 0 )
        goto LABEL_20;
    }
    v32 = v30 & 0xFFFFFFFFFFFFF000uLL;
  }
  else
  {
LABEL_20:
    v32 = 0LL;
  }
  if ( !v32 )
    goto LABEL_37;
  BlockShared = RtlpHpLfhSubsegmentAllocateBlockShared(a1 + 832, v32, a2, v11);
  v34 = 0LL;
  Slow = BlockShared;
  if ( !BlockShared )
  {
    v35 = *(_QWORD *)(v32 + 16);
    v29 = 1LL;
    do
    {
      v60 = v35;
      v36 = BYTE6(v35);
      v62 = HIDWORD(v35);
      if ( BYTE6(v35) == 1 )
        v36 = 2;
      WORD1(v60) = WORD1(v35) + 1;
      BYTE6(v60) = v36;
      v37 = (unsigned __int64)*(unsigned __int16 *)(v32 + 44) << 6;
      v38 = v35;
      v35 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 16), v60, v35);
    }
    while ( v38 != v35 );
    if ( !*(_BYTE *)(v37 + v13 + 92) )
    {
      *(_BYTE *)(v37 + v13 + 92) = 1;
      v61 = *(_QWORD *)v13;
      if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(*(_QWORD **)(*(_QWORD *)v13 + 56LL)) )
        RtlpHpEnvCompactionSchedule(*(_QWORD **)(v61 + 56));
      v29 = 1LL;
    }
    if ( BYTE2(v62) == 1 )
    {
      v39 = v13 + ((unsigned __int16)v62 << 6);
      _m_prefetchw((const void *)(v39 + 8));
      v40 = *(_QWORD *)(v32 + 24);
      v29 = 4095LL;
      v41 = *(_QWORD *)(v39 + 8);
      *(_QWORD *)(v32 + 24) = v40 ^ (v41 ^ v40) & 0xFFFFFFFFFFFFF000uLL;
      v43 = v41;
      v42 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 8), v32 | v41 & 0xFFF, v41);
      if ( v43 != v42 )
      {
        do
        {
          v34 = v42;
          *(_QWORD *)(v32 + 24) = v40 ^ (v40 ^ v42) & 0xFFFFFFFFFFFFF000uLL;
          v42 = _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 8), v32 | v42 & 0xFFF, v42);
        }
        while ( v42 != v34 );
      }
    }
  }
  if ( v66 )
    RtlpHpLfhBucketUpdateAffinityMapping(
      a1 + 832,
      v13 + ((unsigned __int64)*(unsigned __int16 *)(v19 + 2) << 6),
      v34,
      v29);
LABEL_38:
  v44 = v12;
  if ( Slow != -1LL )
  {
    v45 = 2;
    goto LABEL_49;
  }
LABEL_41:
  v45 = 3;
  if ( v12 > 0x20000 )
  {
    if ( v12 > *(unsigned int *)(a1 + 528) )
    {
      v46 = RtlpHpLargeAlloc((__int128 *)a1, a2, v12, v11);
    }
    else
    {
      v47 = a1 + 320;
      if ( v12 > *(unsigned int *)(a1 + 336) )
        v47 = a1 + 512;
      v46 = RtlpHpSegAlloc(v47, a2, v12, v12, v11);
    }
  }
  else
  {
    v46 = RtlpHpVsContextAllocate((_BYTE *)(a1 + 704), a2, v44, v11);
  }
  Slow = v46;
LABEL_49:
  if ( Slow )
  {
    if ( (v64 & 0x20002F08) != 0 )
    {
      v48 = RtlpHpExtrasAppend(a1, Slow, a2, v29, v63[0], v64);
      if ( v59 )
      {
        v49 = v48 + 16;
        *(_BYTE *)(v48 + 2) ^= (v59 ^ *(_BYTE *)(v48 + 2)) & 0xF;
        if ( (int)RtlpCallInterceptRoutine(v59, a1, Slow, 2u, v48 + 16) < 0 )
        {
          RtlpCallInterceptRoutine(v59, a1, Slow, 3u, v49);
          if ( (_WORD)Slow )
          {
            v52 = a1 + 320;
          }
          else
          {
            v50 = RtlCSparseBitmapBitmaskRead((__int64)&dword_140E68510, 2 * ((Slow - qword_140E68508) >> 20));
            if ( !v50 || (v51 = v50 - 1, v51 == 2) )
            {
              RtlpHpLargeFree(a1, Slow);
              return 0LL;
            }
            v52 = a1 + 320;
            if ( v51 == 1 )
              v52 += 192LL;
          }
          v53 = *(_QWORD *)v52 & Slow;
          if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v53 + 0x10) ^ v53) == v52 )
          {
            v54 = *(_BYTE *)(v52 + 8);
            v55 = v53 + 32 * ((unsigned __int64)(unsigned int)(Slow - v53) >> v54);
            v56 = -32LL * *(unsigned __int8 *)(v55 + 26) + v55;
            v57 = v53 + ((__int64)(v56 - v53) >> 5 << v54);
            if ( *(_BYTE *)(v56 + 24) + (v57 == Slow) == 11 )
              RtlpHpLfhContextFree(*(ULONG_PTR **)(v52 + 24), v57, Slow);
            else
              RtlpHpSegFreeInternal((__int64 *)v52, Slow, v56, 0LL);
          }
          else
          {
            RtlpLogHeapFailure(9, *(_QWORD *)(v52 + 56), Slow, 0LL, 0LL, 0LL);
          }
          return 0LL;
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 20) & 0x80u) != 0 )
      RtlpLogHeapAllocateEvent(a1, Slow, a2, v45);
  }
  return Slow;
}
