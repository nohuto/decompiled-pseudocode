/*
 * XREFs of RtlpHpVsContextFree @ 0x14035BAE0
 * Callers:
 *     ExFreeHeapPool @ 0x140359950 (ExFreeHeapPool.c)
 *     RtlpHpFreeHeap @ 0x14035B220 (RtlpHpFreeHeap.c)
 *     RtlpHpSegFreeInternal @ 0x14035BF90 (RtlpHpSegFreeInternal.c)
 *     RtlpFreeNTHeapInternal @ 0x14047917C (RtlpFreeNTHeapInternal.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x14035B9C4 (RtlpLogHeapFailure.c)
 *     RtlpHpVsSlotFreeList @ 0x14035C0D0 (RtlpHpVsSlotFreeList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1406B48B0 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpVsContextFree(__int64 a1, _WORD *a2, ULONG_PTR a3, unsigned int *a4)
{
  char v4; // r11
  __int64 v5; // rdi
  PSLIST_ENTRY v8; // rbx
  unsigned int v9; // ecx
  _SLIST_HEADER *v10; // r14
  _SLIST_HEADER *v11; // rcx
  ULONG_PTR v13; // rsi
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // rdx
  int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r9
  int v22; // ecx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // r9
  int v25; // ecx

  v4 = *(_BYTE *)(a1 + 4);
  v5 = a3 - 16;
  if ( (v4 & 1) != 0 && (a3 & 0xFFF) == 0 )
    v5 = a3 - 32;
  v8 = 0LL;
  if ( !a2 )
  {
    v16 = RtlpHpHeapGlobals ^ *(_QWORD *)v5;
    v17 = HIDWORD(v5) ^ HIDWORD(v16);
    v18 = v5 ^ v16;
    if ( (v17 & 0xFF0000) != 0 )
    {
      v25 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v5 + 8) ^ v5);
    }
    else
    {
      v19 = HIDWORD(v18);
      if ( (_WORD)v19 )
      {
        v20 = v5 - 16LL * (unsigned __int16)v19;
        v21 = RtlpHpHeapGlobals ^ *(_QWORD *)v20;
        v22 = HIDWORD(v20) ^ HIDWORD(v21);
        v23 = v20 ^ v21;
        if ( (v22 & 0xFF0000) == 0 )
        {
          v24 = HIDWORD(v23);
          if ( !(_WORD)v24 )
          {
            v25 = 0;
            goto LABEL_24;
          }
          v20 -= 16LL * (unsigned __int16)v24;
        }
        v25 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v20 + 8) ^ v20);
LABEL_24:
        a2 = (_WORD *)((v20 - (unsigned int)(v25 << 12)) & 0xFFFFFFFFFFFFF000uLL);
        goto LABEL_3;
      }
      v25 = 0;
    }
    v20 = v5;
    goto LABEL_24;
  }
LABEL_3:
  if ( (((unsigned __int16)(a2[16] ^ a2[18]) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 8) ^ a1;
    a3 = (ULONG_PTR)a2;
    v14 = 0LL;
    v15 = 18;
    goto LABEL_14;
  }
  if ( ((HIDWORD(v5) ^ HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v5)) & 0xFF0000) == 0 )
  {
    v13 = *(_QWORD *)(a1 + 8) ^ a1;
    v14 = v5;
    v15 = 8;
LABEL_14:
    RtlpLogHeapFailure(v15, v13, a3, v14, 0LL, 0LL);
    return (unsigned int)v8;
  }
  v9 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16;
  *a4 = v9;
  v10 = (_SLIST_HEADER *)(a1 + ((unsigned __int64)(unsigned __int16)a2[17] << 6));
  if ( (v4 & 2) == 0 || v9 >= 0x1000 )
    goto LABEL_17;
  v11 = v10 + 4;
  if ( LOWORD(v10[4].Alignment) >= 0x20u )
  {
    v8 = RtlpInterlockedFlushSList(v11);
LABEL_17:
    *(_QWORD *)(v5 + 16) = v8;
    RtlpHpVsSlotFreeList(a1, v10);
    goto LABEL_9;
  }
  RtlpInterlockedPushEntrySList(v11, (PSLIST_ENTRY)(v5 + 16));
LABEL_9:
  LODWORD(v8) = 1;
  return (unsigned int)v8;
}
