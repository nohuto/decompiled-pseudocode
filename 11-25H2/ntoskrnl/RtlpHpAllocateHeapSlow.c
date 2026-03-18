/*
 * XREFs of RtlpHpAllocateHeapSlow @ 0x1403C9AF8
 * Callers:
 *     RtlpHpAllocateHeap @ 0x1403C93A0 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1402DA9BC (RtlpLogHeapFailure.c)
 *     RtlpHpLfhContextFree @ 0x1402E04D0 (RtlpHpLfhContextFree.c)
 *     RtlpHpAllocateHeapBackend @ 0x1402F89B0 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1403BBC64 (RtlpHpEnvCompactionSchedule.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1403C7D9C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1403C870C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1403CA350 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpVsContextAllocate @ 0x1403CA760 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x1403CAA94 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1403CAEB8 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpEnvTlsGetValue @ 0x1403CB4AC (RtlpHpEnvTlsGetValue.c)
 *     RtlpHpLargeFree @ 0x1403CB4FC (RtlpHpLargeFree.c)
 *     RtlpHpSegFreeInternal @ 0x1403CBADC (RtlpHpSegFreeInternal.c)
 *     RtlpHpCalculateAllocSize @ 0x140403610 (RtlpHpCalculateAllocSize.c)
 *     RtlpCallInterceptRoutine @ 0x14046F820 (RtlpCallInterceptRoutine.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x1404882C8 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlpHpExtrasAppend @ 0x1404D1AC8 (RtlpHpExtrasAppend.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2D18 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404F87B0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpLogHeapAllocateEvent @ 0x1405E6F70 (RtlpLogHeapAllocateEvent.c)
 *     RtlHeapZero @ 0x1406A9C60 (RtlHeapZero.c)
 */

ULONG_PTR __fastcall RtlpHpAllocateHeapSlow(__int64 a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR Slow; // rbx
  unsigned int v5; // r9d
  __int64 v7; // rax
  int v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // r9d
  unsigned int v11; // r15d
  unsigned __int64 v12; // r13
  __int64 v13; // r14
  unsigned int v14; // ebp
  __int64 Value; // rax
  __int64 v16; // rbx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rbp
  __int64 v20; // rax
  unsigned __int64 v22; // r11
  struct _KTHREAD *CurrentThread; // r9
  __int64 v24; // r10
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v26; // rdx
  char *v27; // r8
  unsigned __int64 v28; // rdx
  _QWORD *v29; // r10
  _QWORD *v30; // rdx
  int v34; // edx
  signed __int64 i; // rdi
  signed __int64 v36; // rax
  unsigned __int64 v37; // rdi
  struct _KTHREAD *v38; // r9
  __int64 v39; // rbx
  struct _LIST_ENTRY *v40; // rcx
  unsigned __int64 v41; // rdx
  char *v42; // r8
  unsigned __int64 v43; // rdx
  int v44; // r11d
  unsigned int v45; // r9d
  __int64 v46; // rbx
  signed __int64 *v47; // rdx
  signed __int64 v48; // r8
  unsigned __int64 v51; // rax
  unsigned int v52; // eax
  unsigned int v57; // r15d
  __int64 v58; // rbx
  signed __int64 v59; // rax
  char v60; // dl
  unsigned __int64 v61; // rdx
  signed __int64 v62; // rtt
  __int64 v63; // r15
  __int64 v64; // r10
  signed __int64 v65; // rax
  signed __int64 v66; // rax
  signed __int64 v67; // rtt
  signed __int64 v68; // r8
  __int64 v69; // r8
  unsigned int v70; // edi
  __int64 HeapBackend; // rax
  __int64 v72; // rax
  __int64 v73; // rbp
  __int64 v74; // rax
  int v75; // eax
  __int64 v76; // r10
  ULONG_PTR v77; // r8
  char v78; // cl
  ULONG_PTR v79; // r11
  ULONG_PTR v80; // r11
  unsigned __int64 v81; // rdx
  int v83; // [rsp+30h] [rbp-68h]
  unsigned int v84; // [rsp+34h] [rbp-64h]
  int v85; // [rsp+38h] [rbp-60h]
  int v86; // [rsp+3Ch] [rbp-5Ch]
  int v87; // [rsp+40h] [rbp-58h]
  int v88; // [rsp+44h] [rbp-54h]
  __int64 v89[9]; // [rsp+50h] [rbp-48h] BYREF
  int v90; // [rsp+B0h] [rbp+18h]
  int v91; // [rsp+B8h] [rbp+20h]
  unsigned __int8 v92; // [rsp+B8h] [rbp+20h]
  signed __int64 v93; // [rsp+B8h] [rbp+20h]
  unsigned __int8 v94; // [rsp+BCh] [rbp+24h]

  v90 = a3;
  Slow = 0LL;
  v89[0] = 0LL;
  v5 = a3;
  v86 = 0;
  v7 = 0LL;
  if ( (a3 & 0x20) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 24);
    v86 = v8;
    if ( v8 )
    {
      v90 = a3 | 8;
      if ( (int)RtlpCallInterceptRoutine(v8, a1, 0, 1, (__int64)v89) < 0 )
        return Slow;
      v7 = v89[0];
      v5 = v90;
    }
  }
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return Slow;
  v9 = RtlpHpCalculateAllocSize(v7 + a2, v5);
  v11 = v10 & 0x10002002;
  v12 = v9;
  v83 = v10 & 0x10002002;
  if ( v9 >= *(unsigned __int16 *)(a1 + 900) )
    goto LABEL_73;
  v13 = a1 + 832;
  v14 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(v9 + 15) >> 4)) - 1;
  Value = RtlpHpEnvTlsGetValue(*(unsigned int *)(a1 + 908));
  if ( !Value )
    Value = RtlpHpLfhThreadDataInitializeSet(a1 + 832);
  v16 = v13 + ((unsigned __int16)Value << 6);
  v94 = BYTE4(Value);
  v17 = *(unsigned __int16 *)(v16 + 2LL * v14);
  if ( !*(_WORD *)(v16 + 2LL * v14) )
  {
    if ( RtlpHpLfhBucketCheckAndUpdate(a1 + 832, v14, v17) )
    {
      v18 = v13 + ((unsigned __int64)v94 << 8) + 1472;
      LODWORD(v17) = *(unsigned __int16 *)(v18 + 2LL * v14);
      if ( v16 != v18 )
        *(_WORD *)(v16 + 2LL * v14) = *(_WORD *)(v18 + 2LL * v14);
      goto LABEL_13;
    }
LABEL_73:
    v69 = (unsigned int)v12;
    goto LABEL_74;
  }
LABEL_13:
  v19 = v13 + (unsigned int)((_DWORD)v17 << 6);
  if ( *(_WORD *)(v19 + 4) )
  {
    v20 = *(_QWORD *)(v19 + 56);
    if ( (v20 & 0xFFF) != 0 )
    {
      v22 = v20 & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(v19 + 56) = v20 - 1;
      CurrentThread = KeGetCurrentThread();
      v24 = (unsigned int)*(unsigned __int8 *)((v20 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
      Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
      v26 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
      v91 = qword_140E27FC8 ^ *(_DWORD *)((v20 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v20 & 0xFFFFFFFFFFFFF000uLL) >> 12);
      v27 = (char *)Blink + v26;
      v28 = (unsigned __int64)Blink ^ v26;
      CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v28, 37);
      CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v28 ^ (v28 << 16) ^ __ROL8__(Blink, 24));
      _R9 = (v20 & 0xFFFFFFFFFFFFF000uLL) + 64;
      v29 = (_QWORD *)(_R9 + 8 * (v24 - 1));
      v30 = (_QWORD *)(_R9 + 8LL * *(unsigned __int8 *)((v20 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
      while ( *v30 == -1LL )
      {
        if ( v30 == v29 )
          v30 = (_QWORD *)((v20 & 0xFFFFFFFFFFFFF000uLL) + 64);
        else
          ++v30;
      }
      _RAX = 1LL << ((unsigned __int16)(BYTE4(v27) * (unsigned __int16)__popcnt(~*v30)) >> 8);
      __asm { pdep    rcx, rax, rcx }
      __asm { tzcnt   rax, rcx }
      *v30 |= _RCX;
      v34 = (_DWORD)v30 - _R9;
      LODWORD(_R9) = 2;
      *(_BYTE *)(v22 + 36) = (unsigned int)(_RAX + 8 * v34) >> 6;
      Slow = v22 + HIWORD(v91) + ((_DWORD)_RAX + 8 * v34) * (unsigned int)(unsigned __int16)v91;
      if ( (v11 & 2) != 0 )
        RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
    }
    else
    {
      Slow = RtlpHpLfhSlotAllocateSlow(a1 + 832, v19, a2, v11);
    }
    goto LABEL_70;
  }
  v85 = 0;
  _m_prefetchw((const void *)(v19 + 56));
  for ( i = *(_QWORD *)(v19 + 56); (i & 0xFFF) != 0; i = v36 )
  {
    v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 56), i - 1, i);
    if ( i == v36 )
    {
      v37 = i & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_29;
    }
    v85 = 1;
  }
  v37 = 0LL;
LABEL_29:
  if ( !v37 )
  {
    Slow = RtlpHpLfhSlotAllocateSlow(a1 + 832, v19, a2, v11);
    goto LABEL_68;
  }
  v38 = KeGetCurrentThread();
  v39 = (unsigned int)*(unsigned __int8 *)(v37 + 24) - 8;
  v40 = v38[1].SchedulerApc.ApcListEntry.Blink;
  v41 = (unsigned __int64)v38[1].SchedulerApc.Reserved[0];
  v87 = qword_140E27FC8 ^ *(_DWORD *)(v37 + 40) ^ (v37 >> 12);
  v42 = (char *)v40 + v41;
  v43 = (unsigned __int64)v40 ^ v41;
  v44 = BYTE4(v42);
  v38[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v43, 37);
  v38[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v43 ^ (v43 << 16) ^ __ROL8__(v40, 24));
  v45 = *(unsigned __int8 *)(v37 + 50);
  v92 = *(_BYTE *)(v37 + 39);
  v46 = v37 + 64 + 8 * (v39 - 1);
  v84 = v45;
  v47 = (signed __int64 *)(v37 + 64 + 8LL * *(unsigned __int8 *)(v37 + 36));
LABEL_31:
  v48 = *v47;
  while ( 1 )
  {
    _R8 = ~v48;
    if ( !_R8 )
    {
      if ( v47 == (signed __int64 *)v46 )
        v47 = (signed __int64 *)(v37 + 64);
      else
        ++v47;
      goto LABEL_31;
    }
    if ( (qword_140E27FE8 & 4) != 0 )
    {
      _RAX = 1LL << ((unsigned __int16)(v44 * __popcnt(_R8)) >> 8);
      __asm
      {
        pdep    r10, rax, r8
        tzcnt   r9, r10
      }
    }
    else
    {
      if ( v47 == (signed __int64 *)v46 || v45 != 64 )
      {
        __asm { tzcnt   rcx, r8 }
        _BitScanReverse64(&v51, _R8);
        v52 = v51 - _RCX + 1;
        if ( v45 < v52 )
          v52 = v45;
        v44 = _RCX + ((v52 * v44) >> 8);
        _R8 = __ROR8__(_R8, v44);
        __asm { tzcnt   r9, r8 }
        LODWORD(_R9) = v44 + _R9;
      }
      else
      {
        _R8 = __ROR8__(_R8, v44);
        __asm { tzcnt   r9, r8 }
        LODWORD(_R9) = ((_BYTE)v44 + (_BYTE)_R9) & 0x3F;
      }
      _R10 = 1LL << _R9;
    }
    _m_prefetchw(v47);
    v48 = _InterlockedOr64(v47, _R10);
    if ( (_R10 & v48) == 0 )
      break;
    v45 = v84;
  }
  v57 = _R9 + 8 * ((_DWORD)v47 - (v37 + 64));
  LODWORD(_R9) = (unsigned __int16)v87;
  *(_BYTE *)(v37 + 36) = v57 >> 6;
  v58 = HIWORD(v87) + v57 * (unsigned __int16)v87;
  if ( v92 <= 1u )
  {
    if ( v57 > *(unsigned __int16 *)(v37 + 48) )
      RtlpHpLfhSubsegmentPrefetch(a1 + 832, v37, (unsigned int)v58);
  }
  else if ( (int)RtlpHpLfhSubsegmentCommitBlock(a1 + 832, v37, (unsigned int)v58) < 0 )
  {
    Slow = 0LL;
    if ( v57 != -1 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v37 + 8LL * (v57 >> 6) + 64), __ROL8__(-2LL, v57 & 0x3F));
      goto LABEL_57;
    }
    v11 = v83;
    goto LABEL_56;
  }
  v11 = v83;
  Slow = v37 + v58;
  if ( (v83 & 2) != 0 )
    RtlHeapZero(Slow, ((unsigned int)a2 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
LABEL_56:
  if ( !Slow )
  {
LABEL_57:
    v59 = *(_QWORD *)(v37 + 16);
    LODWORD(_R9) = 2;
    do
    {
      v93 = v59;
      v60 = BYTE6(v59);
      v88 = HIDWORD(v59);
      if ( BYTE6(v59) == 1 )
        v60 = 2;
      WORD1(v93) = WORD1(v59) + 1;
      BYTE6(v93) = v60;
      v61 = (unsigned __int64)*(unsigned __int16 *)(v37 + 44) << 6;
      v62 = v59;
      v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v37 + 16), v93, v59);
    }
    while ( v62 != v59 );
    if ( !*(_BYTE *)(v61 + v13 + 92) )
    {
      *(_BYTE *)(v61 + v13 + 92) = 1;
      v63 = *(_QWORD *)v13;
      if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(*(_QWORD *)(*(_QWORD *)v13 + 56LL), v61, 1LL, 2LL) )
        RtlpHpEnvCompactionSchedule(*(_QWORD **)(v63 + 56));
    }
    if ( BYTE2(v88) == 1 )
    {
      _R9 = v13 + ((unsigned __int16)v88 << 6);
      _m_prefetchw((const void *)(_R9 + 8));
      v64 = *(_QWORD *)(v37 + 24);
      v65 = *(_QWORD *)(_R9 + 8);
      *(_QWORD *)(v37 + 24) = v64 ^ (v65 ^ v64) & 0xFFFFFFFFFFFFF000uLL;
      v67 = v65;
      v66 = _InterlockedCompareExchange64((volatile signed __int64 *)(_R9 + 8), v65 & 0xFFF | v37, v65);
      if ( v67 != v66 )
      {
        do
        {
          v68 = v66;
          *(_QWORD *)(v37 + 24) = v64 ^ (v66 ^ v64) & 0xFFFFFFFFFFFFF000uLL;
          v66 = _InterlockedCompareExchange64((volatile signed __int64 *)(_R9 + 8), v66 & 0xFFF | v37, v66);
        }
        while ( v66 != v68 );
      }
    }
    v11 = v83;
  }
LABEL_68:
  if ( v85 )
    RtlpHpLfhBucketUpdateAffinityMapping(
      a1 + 832,
      (volatile signed __int8 *)(v13 + ((unsigned __int64)*(unsigned __int16 *)(v19 + 2) << 6)));
LABEL_70:
  v69 = (unsigned int)v12;
  if ( Slow != -1LL )
  {
    v70 = 2;
    goto LABEL_80;
  }
LABEL_74:
  v70 = 3;
  if ( v12 > 0x20000 )
  {
    if ( v12 > *(unsigned int *)(a1 + 528) )
      HeapBackend = RtlpHpLargeAlloc(a1, a2, v12, v11);
    else
      HeapBackend = RtlpHpAllocateHeapBackend(a1, a2, v12, v11);
  }
  else
  {
    HeapBackend = RtlpHpVsContextAllocate(a1 + 704, (unsigned int)a2, v69, v11);
  }
  Slow = HeapBackend;
LABEL_80:
  if ( Slow )
  {
    if ( (v90 & 0x20002F08) != 0 )
    {
      v72 = RtlpHpExtrasAppend(a1, Slow, a2, _R9, v89[0], v90);
      if ( v86 )
      {
        v73 = v72 + 16;
        *(_BYTE *)(v72 + 2) ^= (v86 ^ *(_BYTE *)(v72 + 2)) & 0xF;
        if ( (int)RtlpCallInterceptRoutine(v86, a1, Slow, 2, v72 + 16) < 0 )
        {
          RtlpCallInterceptRoutine(v86, a1, Slow, 3, v73);
          if ( (_WORD)Slow )
          {
            v76 = a1 + 320;
          }
          else
          {
            v74 = RtlCSparseBitmapBitmaskRead((__int64)&dword_140E68050, 2 * ((Slow - qword_140E68048) >> 20));
            if ( !v74 || (v75 = v74 - 1, v75 == 2) )
            {
              RtlpHpLargeFree(a1, Slow);
              return 0LL;
            }
            v76 = a1 + 320;
            if ( v75 == 1 )
              v76 = a1 + 512;
          }
          v77 = *(_QWORD *)v76 & Slow;
          if ( (RtlpHpHeapGlobals ^ *(_QWORD *)(v77 + 0x10) ^ v77) == v76 )
          {
            v78 = *(_BYTE *)(v76 + 8);
            v79 = v77 + 32 * ((unsigned __int64)(unsigned int)(Slow - v77) >> v78);
            v80 = -32LL * *(unsigned __int8 *)(v79 + 26) + v79;
            v81 = v77 + ((__int64)(v80 - v77) >> 5 << v78);
            if ( *(_BYTE *)(v80 + 24) + (v81 == Slow) == 11 )
              RtlpHpLfhContextFree(*(ULONG_PTR **)(v76 + 24), v81, Slow);
            else
              RtlpHpSegFreeInternal(v76, Slow, v80, 0LL);
          }
          else
          {
            RtlpLogHeapFailure(9, *(_QWORD *)(v76 + 56), Slow, 0LL, 0LL, 0LL);
          }
          return 0LL;
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 20) & 0x80u) != 0 )
      RtlpLogHeapAllocateEvent(a1, Slow, a2, v70);
  }
  return Slow;
}
