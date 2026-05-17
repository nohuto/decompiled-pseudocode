/*
 * XREFs of RtlpValidateHeapSegment @ 0x180095454
 * Callers:
 *     RtlpValidateHeap @ 0x180094770 (RtlpValidateHeap.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x180025F70 (RtlpGetExtraStuffPointer.c)
 *     RtlpHeapAddListEntry @ 0x180038080 (RtlpHeapAddListEntry.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x180058550 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpCheckBusyBlockTail @ 0x18009365C (RtlpCheckBusyBlockTail.c)
 *     RtlpCommitBlock @ 0x1800966E0 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180096B50 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindEntry @ 0x1800BD830 (RtlpFindEntry.c)
 *     RtlCompareMemoryUlong @ 0x180167520 (RtlCompareMemoryUlong.c)
 */

char __fastcall RtlpValidateHeapSegment(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *Entry,
        _DWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        _QWORD *a7,
        __int64 a8)
{
  _PEB_LDR_DATA *v8; // r10
  _DWORD *v9; // r12
  unsigned int v10; // ebp
  unsigned int v11; // esi
  unsigned __int64 v14; // rbx
  __int64 v15; // r13
  unsigned __int8 v16; // dl
  __int64 v17; // r15
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  bool v20; // zf
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  __int64 *v25; // r15
  _QWORD *v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned int v32; // ecx
  unsigned __int64 v33; // rbp
  _QWORD **v34; // rsi
  char v35; // al
  __int64 v36; // r9
  unsigned __int16 v37; // cx
  unsigned __int16 v38; // cx
  char v39; // al
  int v40; // ecx
  int v41; // eax
  __int64 *v42; // rax
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // rbp
  unsigned int v47; // [rsp+78h] [rbp+10h]
  unsigned int v48; // [rsp+80h] [rbp+18h]

  v8 = 0LL;
  v9 = a4;
  v10 = 0;
  v47 = 0;
  v11 = 0;
  v48 = 0;
  v14 = a2;
  while ( 2 )
  {
    LOWORD(v15) = (_WORD)v8;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v14 >= *(_QWORD *)(a2 + 72) )
        {
          if ( *(_DWORD *)(a2 + 80) == v10 )
          {
            if ( *(_DWORD *)(a2 + 84) == v11 )
              return 1;
            if ( NtCurrentPeb()->Ldr == v8 )
              DbgPrint("HEAP: ");
            else
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            DbgPrint(
              "Heap Segment at %p contains invalid NumberOfUnCommittedRanges (%x != %x)\n",
              a2,
              *(unsigned int *)(a2 + 84),
              v11);
          }
          else
          {
            if ( NtCurrentPeb()->Ldr == v8 )
              DbgPrint("HEAP: ");
            else
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            DbgPrint(
              "Heap Segment at %p contains invalid NumberOfUnCommittedPages (%x != %x)\n",
              a2,
              *(unsigned int *)(a2 + 80),
              v10);
          }
          return 0;
        }
        *a6 = v14;
        if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
        {
          *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
          if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
          {
            RtlpAnalyzeHeapFailure(a1, v14);
            v8 = 0LL;
          }
        }
        if ( (_WORD)v15 != (*(_WORD *)(a1 + 140) ^ *(_WORD *)(v14 + 12)) )
        {
          if ( NtCurrentPeb()->Ldr == v8 )
            DbgPrint("HEAP: ");
          else
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          DbgPrint(
            "Heap entry %p has incorrect PreviousSize field (%04x instead of %04x)\n",
            (const void *)v14,
            *(unsigned __int16 *)(v14 + 12) ^ *(unsigned __int16 *)(a1 + 140),
            (unsigned __int16)v15);
LABEL_22:
          v20 = *(_DWORD *)(a1 + 124) == 0;
LABEL_23:
          if ( !v20 )
          {
            *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
            *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
          }
          return 0;
        }
        v15 = *(unsigned __int16 *)(v14 + 8);
        v16 = *(_BYTE *)(v14 + 10);
        v17 = 16 * v15;
        if ( (v16 & 1) != 0 )
          break;
        if ( ((v16 >> 2) & ((*(_BYTE *)(a1 + 112) & 0x40) != 0)) == 0 )
          goto LABEL_28;
        v24 = v17 - 32;
        if ( (v16 & 2) != 0 && v24 > 4 )
          v24 = v17 - 36;
        if ( (v16 & 8) == 0 )
        {
          v46 = RtlCompareMemoryUlong(v14 + 32, v24, 4277075694LL);
          if ( v46 != v24 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("Free Heap block %p modified at %p after it was freed\n", v14, v14 + v46 + 16);
            goto LABEL_22;
          }
          v11 = v48;
          v10 = v47;
LABEL_28:
          v22 = *(unsigned __int16 *)(v14 + 8);
          ++*v9;
          *a5 += v22;
          v8 = 0LL;
          goto LABEL_11;
        }
        v25 = *(__int64 **)(v14 + 24);
        v26 = (_QWORD *)(v14 + 16);
        v27 = *(_QWORD *)(v14 + 16);
        v28 = *v25;
        v29 = *(_QWORD *)(v27 + 8);
        if ( *v25 != v14 + 16 || v28 != v29 )
        {
          RtlpLogHeapFailure(13, a1, v14 + 16, v29, v28, (__int64)v8);
          goto LABEL_59;
        }
        *(_QWORD *)(a1 + 192) -= v15;
        v30 = *(_QWORD *)(a1 + 312);
        if ( v30 )
        {
          while ( 1 )
          {
            v31 = *(unsigned int *)(v30 + 8);
            if ( *(unsigned __int16 *)(v14 + 8) < v31 )
            {
              v32 = *(unsigned __int16 *)(v14 + 8);
              goto LABEL_54;
            }
            if ( !*(_QWORD *)v30 )
              break;
            v30 = *(_QWORD *)v30;
          }
          v32 = v31 - 1;
LABEL_54:
          RtlpHeapRemoveListEntry(a1, v30, 1, (__int64 *)(v14 + 16), v32, *(unsigned __int16 *)(v14 + 8));
          v8 = 0LL;
        }
        *v25 = v27;
        *(_QWORD *)(v27 + 8) = v25;
        if ( (*(_BYTE *)(v14 + 10) & 8) == 0 || (v35 = RtlpCommitBlock(a1, v14, Entry), v8 = 0LL, v35) )
        {
          v33 = *(unsigned __int16 *)(v14 + 8);
          v34 = (_QWORD **)(a1 + 336);
          *(_BYTE *)(v14 + 10) = (_BYTE)v8;
          *(_BYTE *)(v14 + 15) = (_BYTE)v8;
          if ( *(_PEB_LDR_DATA **)(a1 + 312) == v8 )
          {
            Entry = *v34;
          }
          else
          {
            Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned int)v33);
            v8 = 0LL;
          }
          if ( v34 != Entry )
          {
            v40 = *(_DWORD *)(a1 + 124);
            do
            {
              if ( v40 )
              {
                v41 = *((_DWORD *)Entry - 2);
                v40 = *(_DWORD *)(a1 + 124);
                if ( (v41 & v40) != 0 )
                  v41 ^= *(_DWORD *)(a1 + 136);
              }
              else
              {
                LOWORD(v41) = *((_WORD *)Entry - 4);
              }
              if ( v33 <= (unsigned __int16)v41 )
                break;
              Entry = (_QWORD *)*Entry;
            }
            while ( v34 != Entry );
          }
          v42 = (__int64 *)Entry[1];
          if ( (_QWORD *)*v42 == Entry )
          {
            *v26 = Entry;
            *(_QWORD *)(v14 + 24) = v42;
            *v42 = (__int64)v26;
            Entry[1] = v26;
          }
          else
          {
            RtlpLogHeapFailure(13, 0LL, (__int64)Entry, 0LL, *v42, (__int64)v8);
            v8 = 0LL;
          }
          *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v14 + 8);
          v43 = *(_QWORD *)(a1 + 312);
          if ( v43 )
          {
            while ( 1 )
            {
              v44 = *(unsigned int *)(v43 + 8);
              if ( *(unsigned __int16 *)(v14 + 8) < v44 )
                break;
              if ( !*(_QWORD *)v43 )
              {
                v45 = v44 - 1;
                goto LABEL_95;
              }
              v43 = *(_QWORD *)v43;
            }
            v45 = *(unsigned __int16 *)(v14 + 8);
LABEL_95:
            RtlpHeapAddListEntry(a1, v43, 1, v14 + 16, v45, *(unsigned __int16 *)(v14 + 8));
            v8 = 0LL;
          }
          v11 = v48;
          v10 = v47;
          v9 = a4;
          if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
          {
            *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
            *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
          }
        }
        else
        {
          LOBYTE(v36) = 1;
          RtlpDeCommitFreeBlock(a1, v14, *(unsigned __int16 *)(v14 + 8), v36);
LABEL_59:
          v11 = v48;
          v8 = 0LL;
          v9 = a4;
        }
      }
      Entry = a7;
      if ( a7 )
      {
        v37 = (v16 & 2) != 0 ? *(_WORD *)(RtlpGetExtraStuffPointer(v14) + 2) : *(unsigned __int8 *)(v14 + 11);
        if ( v37 )
        {
          if ( (v37 & 0x8000u) == 0 )
          {
            if ( (v37 & 0x800) == 0 && v37 < *(_WORD *)(a1 + 224) )
              Entry[v37] += v15;
          }
          else
          {
            v38 = v37 & 0x7FFF;
            if ( v38 < 0x81u )
              *(_QWORD *)(a8 + 8LL * v38) += v15;
          }
        }
      }
      if ( (*(_BYTE *)(v14 + 10) & 4) != 0 )
      {
        v39 = RtlpCheckBusyBlockTail(a1, v14);
        v8 = 0LL;
        if ( !v39 )
        {
          v20 = *(_DWORD *)(a1 + 124) == 0;
          goto LABEL_23;
        }
      }
LABEL_11:
      v18 = *(unsigned __int8 *)(v14 + 14);
      if ( (_BYTE)v18 )
        v19 = (v14 & 0xFFFFFFFFFFFF0000uLL) - (v18 << 16) + 0x10000;
      else
        v19 = a1;
      if ( v19 != a2 )
      {
        if ( NtCurrentPeb()->Ldr == v8 )
          DbgPrint("HEAP: ");
        else
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        DbgPrint("Heap block at %p has incorrect segment offset (%x)\n", v14, *(unsigned __int8 *)(v14 + 14));
        goto LABEL_22;
      }
      if ( *(_BYTE *)(v14 + 15) == 3 )
        break;
      if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
      {
        *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
        *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v14 += v17;
    }
    v23 = *(_QWORD *)(v14 + 56);
    if ( v23 )
    {
      ++v11;
      v10 += v23 >> 12;
      v48 = v11;
      v47 = v10;
      if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
      {
        *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
        *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v14 += v23 + 64;
      if ( v14 != *(_QWORD *)(a2 + 72) )
      {
        if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
        {
          *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
          if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
          {
            RtlpAnalyzeHeapFailure(a1, v14);
            v8 = 0LL;
          }
        }
        if ( *(_WORD *)(a1 + 140) != *(_WORD *)(v14 + 12) )
        {
          if ( NtCurrentPeb()->Ldr == v8 )
            DbgPrint("HEAP: ");
          else
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          DbgPrint(
            "Heap block at %p has corrupted PreviousSize (%lx)\n",
            v14,
            *(unsigned __int16 *)(v14 + 12) ^ (unsigned int)*(unsigned __int16 *)(a1 + 140));
          goto LABEL_22;
        }
        if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
        {
          *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
          *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
        }
      }
      continue;
    }
    break;
  }
  if ( v14 + 16LL * *(unsigned __int16 *)(v14 + 8) != *(_QWORD *)(a2 + 72) )
  {
    if ( NtCurrentPeb()->Ldr == v8 )
      DbgPrint("HEAP: ");
    else
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    DbgPrint("Heap block at %p is not last block in segment (%p)\n", v14, *(_QWORD *)(a2 + 72));
    goto LABEL_22;
  }
  if ( *(_DWORD *)(a1 + 124) != (_DWORD)v8 )
  {
    *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
    *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  return 1;
}
