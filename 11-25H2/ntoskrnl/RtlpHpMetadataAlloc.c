/*
 * XREFs of RtlpHpMetadataAlloc @ 0x1403CAF34
 * Callers:
 *     RtlpHpLargeAlloc @ 0x1403CAA94 (RtlpHpLargeAlloc.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1405F81F4 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpHeapAllocate @ 0x1405F8788 (RtlpHpHeapAllocate.c)
 *     ExpSecurePoolCreate @ 0x14064C6C0 (ExpSecurePoolCreate.c)
 *     ExpPrivatePoolCreate @ 0x1407B6770 (ExpPrivatePoolCreate.c)
 * Callees:
 *     RtlpHpAllocateHeapBackend @ 0x1402F89B0 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpSegAlloc @ 0x1402F89EC (RtlpHpSegAlloc.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1403BBC64 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1403C870C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1403CA350 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpVsContextAllocate @ 0x1403CA760 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x1403CAA94 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x1403CAEB8 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpEnvTlsGetValue @ 0x1403CB4AC (RtlpHpEnvTlsGetValue.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x1404882C8 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F2D18 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404F87B0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpLogHeapAllocateEvent @ 0x1405E6F70 (RtlpLogHeapAllocateEvent.c)
 *     RtlRunOnceExecuteOnce @ 0x140825180 (RtlRunOnceExecuteOnce.c)
 */

unsigned __int64 __fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 Slow; // rbx
  _RTL_RUN_ONCE *v8; // r15
  __int64 Value; // r15
  unsigned int v10; // r13d
  int v11; // esi
  __int64 v13; // r14
  unsigned int v14; // r12d
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rbp
  signed __int64 i; // rsi
  signed __int64 v20; // rax
  unsigned int v21; // r8d
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // r12
  unsigned int v24; // edx
  unsigned __int64 HeapBackend; // rax
  struct _KTHREAD *v26; // r9
  struct _LIST_ENTRY *v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  __int64 v31; // r13
  int v32; // r12d
  _QWORD *v33; // rcx
  unsigned int v34; // r9d
  __int64 v35; // r13
  _QWORD *v36; // rdx
  unsigned __int64 v39; // rax
  unsigned int v40; // eax
  signed __int64 v44; // rax
  signed __int64 v45; // r8
  unsigned int v46; // r13d
  __int64 v47; // r9
  __int64 v48; // r12
  signed __int64 v49; // rax
  unsigned __int64 v50; // rcx
  int v52; // r8d
  __int64 v53; // rax
  unsigned __int64 v55; // r11
  struct _KTHREAD *CurrentThread; // r9
  __int64 v57; // r10
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v59; // rdx
  __int64 v60; // r8
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // r9
  _QWORD *v63; // r10
  _QWORD *v64; // rdx
  int v68; // edx
  char v69; // dl
  unsigned __int64 v70; // rdx
  signed __int64 v71; // rtt
  __int64 v72; // r9
  signed __int64 v73; // rax
  unsigned __int64 v74; // r10
  signed __int64 v75; // rax
  signed __int64 v76; // rtt
  signed __int64 v77; // r8
  unsigned int v78; // [rsp+30h] [rbp-68h]
  int v79; // [rsp+34h] [rbp-64h]
  int v80; // [rsp+38h] [rbp-60h]
  int v81; // [rsp+3Ch] [rbp-5Ch]
  unsigned __int64 *v82; // [rsp+48h] [rbp-50h]
  unsigned __int64 v83; // [rsp+50h] [rbp-48h]
  __int128 Parameter; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int8 v85; // [rsp+B8h] [rbp+20h]
  int v86; // [rsp+B8h] [rbp+20h]
  signed __int64 v87; // [rsp+B8h] [rbp+20h]
  __int64 v88; // [rsp+B8h] [rbp+20h]
  unsigned __int8 v89; // [rsp+BCh] [rbp+24h]

  Slow = 0LL;
  v83 = *a4;
  BYTE3(v83) = 0;
  v8 = (_RTL_RUN_ONCE *)&qword_140E6B8D8[2 * (unsigned int)dword_14001E630[(unsigned __int8)BYTE1(*a4)]];
  BYTE1(v83) = dword_14001E630[(unsigned __int8)BYTE1(*a4)];
  Parameter = v83;
  if ( !v8->Value && RtlRunOnceExecuteOnce(v8 + 1, RtlpHpMetadataHeapCreate, &Parameter, 0LL) < 0 )
    return Slow;
  Value = v8->Value;
  v10 = 3;
  if ( a3 )
  {
    v11 = a3 - 1;
    if ( !v11 )
    {
      HeapBackend = RtlpHpSegAlloc(
                      Value + (*(unsigned int *)(Value + 336) < a1 ? 512LL : 320LL),
                      a1,
                      a1,
                      a2,
                      a2 < a1 ? 0x4000000 : 0);
      goto LABEL_25;
    }
    if ( v11 != 1 )
      goto LABEL_5;
    v52 = a2;
    v24 = a2;
LABEL_62:
    HeapBackend = RtlpHpVsContextAllocate((_BYTE *)(Value + 704), v24, v52, 0);
LABEL_25:
    Slow = HeapBackend;
    goto LABEL_5;
  }
  if ( a1 >= *(unsigned __int16 *)(Value + 900) )
    goto LABEL_42;
  v13 = Value + 832;
  v14 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(a1 + 15) >> 4)) - 1;
  v15 = RtlpHpEnvTlsGetValue(*(unsigned int *)(Value + 908));
  if ( !v15 )
    v15 = RtlpHpLfhThreadDataInitializeSet(Value + 832);
  v16 = v13 + ((unsigned __int16)v15 << 6);
  v89 = BYTE4(v15);
  v17 = *(unsigned __int16 *)(v16 + 2LL * v14);
  if ( !*(_WORD *)(v16 + 2LL * v14) )
  {
    if ( RtlpHpLfhBucketCheckAndUpdate(Value + 832, v14, v17) )
    {
      v50 = v13 + ((unsigned __int64)v89 << 8) + 1472;
      LODWORD(v17) = *(unsigned __int16 *)(v50 + 2LL * v14);
      if ( v16 != v50 )
        *(_WORD *)(v16 + 2LL * v14) = *(_WORD *)(v50 + 2LL * v14);
      goto LABEL_12;
    }
LABEL_42:
    v24 = a1;
    goto LABEL_22;
  }
LABEL_12:
  v18 = v13 + (unsigned int)((_DWORD)v17 << 6);
  if ( *(_WORD *)(v18 + 4) )
  {
    v53 = *(_QWORD *)(v18 + 56);
    if ( (v53 & 0xFFF) != 0 )
    {
      v55 = v53 & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(v18 + 56) = v53 - 1;
      CurrentThread = KeGetCurrentThread();
      v57 = (unsigned int)*(unsigned __int8 *)((v53 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
      Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
      v59 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
      v86 = qword_140E27FC8 ^ *(_DWORD *)((v53 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v53 & 0xFFFFFFFFFFFFF000uLL) >> 12);
      v60 = (__int64)Blink + v59;
      v61 = (unsigned __int64)Blink ^ v59;
      CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v61, 37);
      CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v61 ^ (v61 << 16) ^ __ROL8__(Blink, 24));
      v62 = (v53 & 0xFFFFFFFFFFFFF000uLL) + 64;
      v63 = (_QWORD *)(v62 + 8 * (v57 - 1));
      v64 = (_QWORD *)(v62 + 8LL * *(unsigned __int8 *)((v53 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
      while ( *v64 == -1LL )
      {
        if ( v64 == v63 )
          v64 = (_QWORD *)((v53 & 0xFFFFFFFFFFFFF000uLL) + 64);
        else
          ++v64;
      }
      _RAX = 1LL << ((unsigned __int16)(BYTE4(v60) * (unsigned __int16)__popcnt(~*v64)) >> 8);
      __asm { pdep    rcx, rax, rcx }
      __asm { tzcnt   rax, rcx }
      *v64 |= _RCX;
      v68 = (_DWORD)v64 - v62;
      *(_BYTE *)(v55 + 36) = (unsigned int)(_RAX + 8 * v68) >> 6;
      Slow = v55 + ((_DWORD)_RAX + 8 * v68) * (unsigned __int16)v86 + (unsigned int)HIWORD(v86);
      v10 = 3;
    }
    else
    {
      Slow = RtlpHpLfhSlotAllocateSlow(Value + 832, v18, a1, 0);
    }
    goto LABEL_21;
  }
  v79 = 0;
  _m_prefetchw((const void *)(v18 + 56));
  for ( i = *(_QWORD *)(v18 + 56); ; i = v20 )
  {
    if ( (i & 0xFFF) == 0 )
    {
      v21 = a1;
      goto LABEL_17;
    }
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v18 + 56), i - 1, i);
    if ( i == v20 )
      break;
    v79 = 1;
  }
  v21 = a1;
  v22 = i & 0xFFFFFFFFFFFFF000uLL;
  if ( !v22 )
  {
LABEL_17:
    v23 = RtlpHpLfhSlotAllocateSlow(Value + 832, v18, v21, 0);
    goto LABEL_18;
  }
  v26 = KeGetCurrentThread();
  v27 = v26[1].SchedulerApc.ApcListEntry.Blink;
  v28 = (unsigned __int64)v26[1].SchedulerApc.Reserved[0];
  v80 = qword_140E27FC8 ^ *(_DWORD *)(v22 + 40) ^ (v22 >> 12);
  v29 = (__int64)v27 + v28;
  v30 = (unsigned __int64)v27 ^ v28;
  v82 = (unsigned __int64 *)(v22 + 24);
  v31 = (unsigned int)*(unsigned __int8 *)(v22 + 24) - 8;
  v32 = BYTE4(v29);
  v26[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v30 ^ (v30 << 16) ^ __ROL8__(v27, 24));
  v33 = (_QWORD *)(v22 + 64);
  v26[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v30, 37);
  v34 = *(unsigned __int8 *)(v22 + 50);
  v85 = *(_BYTE *)(v22 + 39);
  v35 = v22 + 64 + 8 * (v31 - 1);
  v78 = v34;
  v36 = (_QWORD *)(v22 + 64 + 8LL * *(unsigned __int8 *)(v22 + 36));
  while ( 1 )
  {
    _R8 = ~*v36;
    if ( *v36 != -1LL )
      break;
LABEL_39:
    if ( v36 == (_QWORD *)v35 )
      v36 = v33;
    else
      ++v36;
  }
  while ( 1 )
  {
    if ( (qword_140E27FE8 & 4) != 0 )
    {
      _RAX = 1LL << ((unsigned __int16)(v32 * __popcnt(_R8)) >> 8);
      __asm
      {
        pdep    r10, rax, r8
        tzcnt   r9, r10
      }
    }
    else
    {
      if ( v36 != (_QWORD *)v35 && v34 == 64 )
      {
        _R8 = __ROR8__(_R8, v32);
        __asm { tzcnt   r9, r8 }
        LODWORD(_R9) = ((_BYTE)v32 + (_BYTE)_R9) & 0x3F;
      }
      else
      {
        __asm { tzcnt   rcx, r8 }
        _BitScanReverse64(&v39, _R8);
        v40 = v39 - _RCX + 1;
        if ( v34 < v40 )
          v40 = v34;
        v32 = _RCX + ((v40 * v32) >> 8);
        _R8 = __ROR8__(_R8, v32);
        __asm { tzcnt   r9, r8 }
        LODWORD(_R9) = v32 + _R9;
      }
      _R10 = 1LL << _R9;
    }
    _m_prefetchw(v36);
    v44 = _InterlockedOr64(v36, _R10);
    v45 = v44;
    if ( (_R10 & v44) == 0 )
      break;
    v34 = v78;
    _R8 = ~v44;
    if ( v44 == -1 )
    {
      v33 = (_QWORD *)(v22 + 64);
      goto LABEL_39;
    }
  }
  v46 = _R9 + 8 * ((_DWORD)v36 - (v22 + 64));
  v47 = (unsigned __int16)v80;
  *(_BYTE *)(v22 + 36) = v46 >> 6;
  v48 = HIWORD(v80) + v46 * (unsigned __int16)v80;
  if ( v85 <= 1u )
  {
    if ( v46 > *(unsigned __int16 *)(v22 + 48) )
      RtlpHpLfhSubsegmentPrefetch(Value + 832, v22, v48, (unsigned __int16)v80);
    goto LABEL_45;
  }
  if ( (int)RtlpHpLfhSubsegmentCommitBlock(Value + 832, v22, v48) >= 0 )
  {
LABEL_45:
    v23 = v22 + v48;
    goto LABEL_46;
  }
  v23 = 0LL;
  if ( v46 == -1 )
  {
LABEL_46:
    if ( v23 )
      goto LABEL_47;
    goto LABEL_50;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 8LL * (v46 >> 6) + 64), __ROL8__(-2LL, v46 & 0x3F));
LABEL_50:
  v49 = *(_QWORD *)(v22 + 16);
  do
  {
    v87 = v49;
    v69 = BYTE6(v49);
    v81 = HIDWORD(v49);
    if ( BYTE6(v49) == 1 )
      v69 = 2;
    WORD1(v87) = WORD1(v49) + 1;
    BYTE6(v87) = v69;
    v70 = (unsigned __int64)*(unsigned __int16 *)(v22 + 44) << 6;
    v71 = v49;
    v49 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 16), v87, v49);
  }
  while ( v71 != v49 );
  if ( !*(_BYTE *)(v70 + v13 + 92) )
  {
    *(_BYTE *)(v70 + v13 + 92) = 1;
    v88 = *(_QWORD *)v13;
    if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(*(_QWORD *)(*(_QWORD *)v13 + 56LL), v70, v45, v47) )
      RtlpHpEnvCompactionSchedule(*(_QWORD **)(v88 + 56));
  }
  if ( BYTE2(v81) == 1 )
  {
    v72 = v13 + ((unsigned __int16)v81 << 6);
    _m_prefetchw((const void *)(v72 + 8));
    v73 = *(_QWORD *)(v72 + 8);
    v74 = *v82;
    *v82 ^= (*v82 ^ v73) & 0xFFFFFFFFFFFFF000uLL;
    v76 = v73;
    v75 = _InterlockedCompareExchange64((volatile signed __int64 *)(v72 + 8), v22 | v73 & 0xFFF, v73);
    if ( v76 != v75 )
    {
      do
      {
        v77 = v75;
        *v82 = v74 ^ (v74 ^ v75) & 0xFFFFFFFFFFFFF000uLL;
        v75 = _InterlockedCompareExchange64((volatile signed __int64 *)(v72 + 8), v75 & 0xFFF | v22, v75);
      }
      while ( v75 != v77 );
      v13 = Value + 832;
    }
  }
LABEL_47:
  v10 = 3;
LABEL_18:
  if ( v79 )
    RtlpHpLfhBucketUpdateAffinityMapping(
      v13,
      (volatile signed __int8 *)(v13 + ((unsigned __int64)*(unsigned __int16 *)(v18 + 2) << 6)));
  Slow = v23;
LABEL_21:
  v24 = a1;
  if ( Slow == -1LL )
  {
LABEL_22:
    if ( a1 > 0x20000 )
    {
      if ( a1 <= *(unsigned int *)(Value + 528) )
        HeapBackend = RtlpHpAllocateHeapBackend(Value, a1, a1, 0);
      else
        HeapBackend = RtlpHpLargeAlloc(Value, a1, a1, 0);
      goto LABEL_25;
    }
    v52 = v24;
    goto LABEL_62;
  }
  v10 = 2;
LABEL_5:
  if ( (*(_DWORD *)(Value + 20) & 0x80u) != 0 )
    RtlpLogHeapAllocateEvent(Value, Slow, a1, v10);
  return Slow;
}
