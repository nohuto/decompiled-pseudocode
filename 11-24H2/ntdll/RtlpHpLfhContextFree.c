/*
 * XREFs of RtlpHpLfhContextFree @ 0x180065110
 * Callers:
 *     RtlpHpFreeHeapSlow @ 0x1800580C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpSegReAlloc @ 0x18005CF10 (RtlpHpSegReAlloc.c)
 *     RtlpHpMetadataFree @ 0x180064B08 (RtlpHpMetadataFree.c)
 *     RtlpHpSegLfhVsFree @ 0x180065050 (RtlpHpSegLfhVsFree.c)
 *     RtlpHpVsSubsegmentCreate @ 0x180065860 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1800669B0 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpReallocMove @ 0x18009EFF0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800646A0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpEnvCompactionSchedule @ 0x1800656C0 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpEnvCompactionIsScheduled @ 0x180140874 (RtlpHpEnvCompactionIsScheduled.c)
 */

__int64 __fastcall RtlpHpLfhContextFree(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  unsigned int v6; // r9d
  unsigned int v7; // edx
  unsigned __int64 v8; // rdi
  unsigned int v9; // ecx
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  signed __int64 v13; // rax
  unsigned __int64 v14; // r8
  int v15; // edx
  unsigned __int64 v16; // rdx
  signed __int64 v17; // rtt
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  signed __int64 v22; // rax
  __int64 v23; // r10
  signed __int64 v24; // rax
  signed __int64 v25; // rtt
  signed __int64 v26; // rdx
  void **TlsExpansionSlots; // rdx
  signed __int64 v28; // [rsp+58h] [rbp+10h]
  int v29; // [rsp+64h] [rbp+1Ch]

  v4 = a3;
  v6 = qword_1801CCEC8 ^ *(_DWORD *)(a2 + 40) ^ (a2 >> 12);
  v7 = a3 - HIWORD(v6) - a2;
  v8 = (v7 * (unsigned __int64)*(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6) + a1 + 72)) >> 32;
  if ( v7 != (_DWORD)v8 * (unsigned __int16)v6 )
    return 0LL;
  v9 = *(unsigned __int16 *)(a1 + 76);
  if ( v9 < 0x40 )
  {
    v10 = __readgsqword(8 * v9 + 5248);
    goto LABEL_4;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v10 = (unsigned __int64)TlsExpansionSlots[v9 - 64];
LABEL_4:
    if ( v10 )
      goto LABEL_5;
  }
  LOWORD(v10) = RtlpHpLfhThreadDataInitializeSet(a1);
LABEL_5:
  if ( (_WORD)v10 != *(_WORD *)(a2 + 46) || *(_BYTE *)(a2 + 22) == 1 )
  {
    v11 = v8;
    v12 = *(unsigned int *)(a2 + 8 * (v8 >> 5) + 64);
    if ( _bittest64(&v12, v8 & 0x1F) )
    {
      v13 = *(_QWORD *)(a2 + 16);
      do
      {
        v29 = HIDWORD(v13);
        v28 = v13;
        if ( BYTE6(v13) == 1 )
          BYTE6(v28) = 2;
        if ( v4 )
        {
          v14 = *(_QWORD *)(a1 + 80);
          v15 = v14;
          *(_WORD *)v4 = v13;
          a3 = HIDWORD(v14);
          LOWORD(v28) = v8 + 1;
          *(_DWORD *)(v4 + 8) = v4 ^ a3 ^ __ROL4__(*(_DWORD *)v4 ^ v15, v13);
        }
        WORD1(v28) = WORD1(v13) + 1;
        v16 = (unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6;
        v17 = v13;
        v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 16), v28, v13);
      }
      while ( v17 != v13 );
      if ( !*(_BYTE *)(v16 + a1 + 92) )
      {
        *(_BYTE *)(v16 + a1 + 92) = 1;
        if ( !(unsigned int)RtlpHpEnvCompactionIsScheduled(v28, v16, a3, v8) )
          RtlpHpEnvCompactionSchedule();
      }
      if ( BYTE2(v29) == 1 )
      {
        v21 = a1 + ((unsigned __int16)v29 << 6);
        _m_prefetchw((const void *)(v21 + 8));
        v22 = *(_QWORD *)(v21 + 8);
        v23 = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(a2 + 24) = v23 & 0xFFF | (v22 - (v22 & 0xFFF));
        v25 = v22;
        v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8), a2 | v22 & 0xFFF, v22);
        if ( v25 != v24 )
        {
          do
          {
            v26 = v24;
            *(_QWORD *)(a2 + 24) = v23 ^ (v24 ^ v23) & 0xFFFFFFFFFFFFF000uLL;
            v24 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8), a2 | v24 & 0xFFF, v24);
          }
          while ( v24 != v26 );
        }
      }
      return 1LL;
    }
  }
  else
  {
    v19 = *(_QWORD *)(a2 + 8 * (v8 >> 5) + 64);
    v20 = __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v8 & 0x1F);
    v11 = v8;
    *(_QWORD *)(a2 + 8 * (v8 >> 5) + 64) = v20 & v19;
    if ( ((unsigned int)v19 & ~(_DWORD)v20) != 0 )
    {
      ++*(_WORD *)(a2 + 32);
      return 1LL;
    }
  }
  RtlpLogHeapFailure(17, *(_QWORD *)a1, v4, a2, v11, 0LL);
  return 0LL;
}
