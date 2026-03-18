/*
 * XREFs of RtlpHpMetadataAlloc @ 0x140420674
 * Callers:
 *     RtlpHpLargeAlloc @ 0x140420250 (RtlpHpLargeAlloc.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x140604534 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpHeapAllocate @ 0x140604AC8 (RtlpHpHeapAllocate.c)
 *     ExpSecurePoolCreate @ 0x140658620 (ExpSecurePoolCreate.c)
 *     ExpPrivatePoolCreate @ 0x1407C5F40 (ExpPrivatePoolCreate.c)
 * Callees:
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402B7624 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpVsContextAllocate @ 0x1402B7840 (RtlpHpVsContextAllocate.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x1402B9010 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     RtlpHpAllocateHeapBackend @ 0x1402C15F0 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpSegAlloc @ 0x1402C162C (RtlpHpSegAlloc.c)
 *     RtlpHpLargeAlloc @ 0x140420250 (RtlpHpLargeAlloc.c)
 *     RtlpHpEnvTlsGetValue @ 0x140420C10 (RtlpHpEnvTlsGetValue.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x140421D08 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x1404839D4 (RtlpHpEnvCompactionIsScheduled.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1404F561C (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1404FAC50 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpLogHeapAllocateEvent @ 0x1405F32B8 (RtlpLogHeapAllocateEvent.c)
 *     RtlRunOnceExecuteOnce @ 0x14095F8F0 (RtlRunOnceExecuteOnce.c)
 */

unsigned __int64 __fastcall RtlpHpMetadataAlloc(unsigned __int64 a1, unsigned __int64 a2, int a3, unsigned __int64 *a4)
{
  unsigned __int64 Slow; // rbx
  union _RTL_RUN_ONCE *v8; // r15
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
  __int64 HeapBackend; // rax
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
  signed __int64 v41; // rax
  unsigned int v42; // r13d
  __int64 v43; // r12
  signed __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v48; // rax
  unsigned int v49; // eax
  int v51; // r8d
  __int64 v52; // rax
  unsigned __int64 v53; // r11
  struct _KTHREAD *CurrentThread; // r9
  __int64 v55; // r10
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v57; // rdx
  __int64 v58; // r8
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // r9
  _QWORD *v61; // r10
  _QWORD *v62; // rdx
  int v66; // edx
  char v67; // dl
  unsigned __int64 v68; // rdx
  signed __int64 v69; // rtt
  __int64 v70; // r9
  signed __int64 v71; // rax
  unsigned __int64 v72; // r10
  signed __int64 v73; // rax
  signed __int64 v74; // rtt
  signed __int64 v75; // r8
  unsigned int v76; // [rsp+30h] [rbp-68h]
  int v77; // [rsp+34h] [rbp-64h]
  int v78; // [rsp+38h] [rbp-60h]
  int v79; // [rsp+3Ch] [rbp-5Ch]
  unsigned __int64 *v80; // [rsp+48h] [rbp-50h]
  unsigned __int64 v81; // [rsp+50h] [rbp-48h]
  __int128 Parameter; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int8 v83; // [rsp+B8h] [rbp+20h]
  int v84; // [rsp+B8h] [rbp+20h]
  signed __int64 v85; // [rsp+B8h] [rbp+20h]
  __int64 v86; // [rsp+B8h] [rbp+20h]
  unsigned __int8 v87; // [rsp+BCh] [rbp+24h]

  Slow = 0LL;
  v81 = *a4;
  BYTE3(v81) = 0;
  v8 = (union _RTL_RUN_ONCE *)&qword_140E6BB98[2 * (unsigned int)dword_14001E850[(unsigned __int8)BYTE1(*a4)]];
  BYTE1(v81) = dword_14001E850[(unsigned __int8)BYTE1(*a4)];
  Parameter = v81;
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
    v51 = a2;
    v24 = a2;
LABEL_63:
    HeapBackend = RtlpHpVsContextAllocate((_BYTE *)(Value + 704), v24, v51, 0);
LABEL_25:
    Slow = HeapBackend;
    goto LABEL_5;
  }
  if ( a1 >= *(unsigned __int16 *)(Value + 900) )
    goto LABEL_46;
  v13 = Value + 832;
  v14 = *((unsigned __int8 *)RtlpLfhBucketIndexMap + ((unsigned int)(a1 + 15) >> 4)) - 1;
  v15 = RtlpHpEnvTlsGetValue(*(unsigned int *)(Value + 908));
  if ( !v15 )
    v15 = RtlpHpLfhThreadDataInitializeSet(Value + 832);
  v16 = v13 + ((unsigned __int16)v15 << 6);
  v87 = BYTE4(v15);
  v17 = *(unsigned __int16 *)(v16 + 2LL * v14);
  if ( !*(_WORD *)(v16 + 2LL * v14) )
  {
    if ( RtlpHpLfhBucketCheckAndUpdate(Value + 832, v14, v17) )
    {
      v46 = v13 + ((unsigned __int64)v87 << 8) + 1472;
      LODWORD(v17) = *(unsigned __int16 *)(v46 + 2LL * v14);
      if ( v16 != v46 )
        *(_WORD *)(v16 + 2LL * v14) = *(_WORD *)(v46 + 2LL * v14);
      goto LABEL_12;
    }
LABEL_46:
    v24 = a1;
    goto LABEL_22;
  }
LABEL_12:
  v18 = v13 + (unsigned int)((_DWORD)v17 << 6);
  if ( *(_WORD *)(v18 + 4) )
  {
    v52 = *(_QWORD *)(v18 + 56);
    if ( (v52 & 0xFFF) != 0 )
    {
      v53 = v52 & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(v18 + 56) = v52 - 1;
      CurrentThread = KeGetCurrentThread();
      v55 = (unsigned int)*(unsigned __int8 *)((v52 & 0xFFFFFFFFFFFFF000uLL) + 0x18) - 8;
      Blink = CurrentThread[1].SchedulerApc.ApcListEntry.Blink;
      v57 = (unsigned __int64)CurrentThread[1].SchedulerApc.Reserved[0];
      v84 = qword_140E28208 ^ *(_DWORD *)((v52 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v52 & 0xFFFFFFFFFFFFF000uLL) >> 12);
      v58 = (__int64)Blink + v57;
      v59 = (unsigned __int64)Blink ^ v57;
      CurrentThread[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v59, 37);
      CurrentThread[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v59 ^ (v59 << 16) ^ __ROL8__(Blink, 24));
      v60 = (v52 & 0xFFFFFFFFFFFFF000uLL) + 64;
      v61 = (_QWORD *)(v60 + 8 * (v55 - 1));
      v62 = (_QWORD *)(v60 + 8LL * *(unsigned __int8 *)((v52 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
      while ( *v62 == -1LL )
      {
        if ( v62 == v61 )
          v62 = (_QWORD *)((v52 & 0xFFFFFFFFFFFFF000uLL) + 64);
        else
          ++v62;
      }
      _RAX = 1LL << ((unsigned __int16)(BYTE4(v58) * (unsigned __int16)__popcnt(~*v62)) >> 8);
      __asm { pdep    rcx, rax, rcx }
      __asm { tzcnt   rax, rcx }
      *v62 |= _RCX;
      v66 = (_DWORD)v62 - v60;
      *(_BYTE *)(v53 + 36) = (unsigned int)(_RAX + 8 * v66) >> 6;
      Slow = v53 + ((_DWORD)_RAX + 8 * v66) * (unsigned __int16)v84 + (unsigned int)HIWORD(v84);
      v10 = 3;
    }
    else
    {
      Slow = RtlpHpLfhSlotAllocateSlow(Value + 832, v18, a1, 0);
    }
    goto LABEL_21;
  }
  v77 = 0;
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
    v77 = 1;
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
  v78 = qword_140E28208 ^ *(_DWORD *)(v22 + 40) ^ (v22 >> 12);
  v29 = (__int64)v27 + v28;
  v30 = (unsigned __int64)v27 ^ v28;
  v80 = (unsigned __int64 *)(v22 + 24);
  v31 = (unsigned int)*(unsigned __int8 *)(v22 + 24) - 8;
  v32 = BYTE4(v29);
  v26[1].SchedulerApc.ApcListEntry.Blink = (struct _LIST_ENTRY *)(v30 ^ (v30 << 16) ^ __ROL8__(v27, 24));
  v33 = (_QWORD *)(v22 + 64);
  v26[1].SchedulerApc.Reserved[0] = (PVOID)__ROL8__(v30, 37);
  v34 = *(unsigned __int8 *)(v22 + 50);
  v83 = *(_BYTE *)(v22 + 39);
  v35 = v22 + 64 + 8 * (v31 - 1);
  v76 = v34;
  v36 = (_QWORD *)(v22 + 64 + 8LL * *(unsigned __int8 *)(v22 + 36));
  while ( 1 )
  {
    _R8 = ~*v36;
    if ( *v36 != -1LL )
      break;
LABEL_43:
    if ( v36 == (_QWORD *)v35 )
      v36 = v33;
    else
      ++v36;
  }
  while ( 1 )
  {
    if ( (qword_140E28228 & 4) != 0 )
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
      if ( v36 == (_QWORD *)v35 || v34 != 64 )
      {
        __asm { tzcnt   rcx, r8 }
        _BitScanReverse64(&v48, _R8);
        v49 = v48 - _RCX + 1;
        if ( v34 < v49 )
          v49 = v34;
        v32 = _RCX + ((v49 * v32) >> 8);
        _R8 = __ROR8__(_R8, v32);
        __asm { tzcnt   r9, r8 }
        LODWORD(_R9) = v32 + _R9;
      }
      else
      {
        _R8 = __ROR8__(_R8, v32);
        __asm { tzcnt   r9, r8 }
        LODWORD(_R9) = ((_BYTE)v32 + (_BYTE)_R9) & 0x3F;
      }
      _R10 = 1LL << _R9;
    }
    _m_prefetchw(v36);
    v41 = _InterlockedOr64(v36, _R10);
    if ( (_R10 & v41) == 0 )
      break;
    v34 = v76;
    _R8 = ~v41;
    if ( v41 == -1 )
    {
      v33 = (_QWORD *)(v22 + 64);
      goto LABEL_43;
    }
  }
  v42 = _R9 + 8 * ((_DWORD)v36 - (v22 + 64));
  *(_BYTE *)(v22 + 36) = v42 >> 6;
  v43 = HIWORD(v78) + v42 * (unsigned __int16)v78;
  if ( v83 <= 1u )
  {
    if ( v42 > *(unsigned __int16 *)(v22 + 48) )
      RtlpHpLfhSubsegmentPrefetch(Value + 832, v22, (unsigned int)v43);
    goto LABEL_36;
  }
  if ( (int)RtlpHpLfhSubsegmentCommitBlock(Value + 832, v22, (unsigned int)v43) >= 0 )
  {
LABEL_36:
    v23 = v22 + v43;
    goto LABEL_37;
  }
  v23 = 0LL;
  if ( v42 == -1 )
  {
LABEL_37:
    if ( v23 )
      goto LABEL_38;
    goto LABEL_50;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 8LL * (v42 >> 6) + 64), __ROL8__(-2LL, v42 & 0x3F));
LABEL_50:
  v45 = *(_QWORD *)(v22 + 16);
  do
  {
    v85 = v45;
    v67 = BYTE6(v45);
    v79 = HIDWORD(v45);
    if ( BYTE6(v45) == 1 )
      v67 = 2;
    WORD1(v85) = WORD1(v45) + 1;
    BYTE6(v85) = v67;
    v68 = (unsigned __int64)*(unsigned __int16 *)(v22 + 44) << 6;
    v69 = v45;
    v45 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 16), v85, v45);
  }
  while ( v69 != v45 );
  if ( !*(_BYTE *)(v68 + v13 + 92) )
  {
    *(_BYTE *)(v68 + v13 + 92) = 1;
    v86 = *(_QWORD *)v13;
    if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(*(_QWORD *)(*(_QWORD *)v13 + 56LL)) )
      RtlpHpEnvCompactionSchedule(*(_QWORD **)(v86 + 56));
  }
  if ( BYTE2(v79) == 1 )
  {
    v70 = v13 + ((unsigned __int16)v79 << 6);
    _m_prefetchw((const void *)(v70 + 8));
    v71 = *(_QWORD *)(v70 + 8);
    v72 = *v80;
    *v80 ^= (*v80 ^ v71) & 0xFFFFFFFFFFFFF000uLL;
    v74 = v71;
    v73 = _InterlockedCompareExchange64((volatile signed __int64 *)(v70 + 8), v22 | v71 & 0xFFF, v71);
    if ( v74 != v73 )
    {
      do
      {
        v75 = v73;
        *v80 = v72 ^ (v72 ^ v73) & 0xFFFFFFFFFFFFF000uLL;
        v73 = _InterlockedCompareExchange64((volatile signed __int64 *)(v70 + 8), v73 & 0xFFF | v22, v73);
      }
      while ( v73 != v75 );
      v13 = Value + 832;
    }
  }
LABEL_38:
  v10 = 3;
LABEL_18:
  if ( v77 )
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
        HeapBackend = RtlpHpLargeAlloc((__int128 *)Value, a1, a1, 0);
      goto LABEL_25;
    }
    v51 = v24;
    goto LABEL_63;
  }
  v10 = 2;
LABEL_5:
  if ( (*(_DWORD *)(Value + 20) & 0x80u) != 0 )
    RtlpLogHeapAllocateEvent(Value, Slow, a1, v10);
  return Slow;
}
