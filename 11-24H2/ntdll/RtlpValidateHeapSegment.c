/*
 * XREFs of RtlpValidateHeapSegment @ 0x1800222F8
 * Callers:
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x18000C420 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x18000C880 (RtlpFindEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x18000F610 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180010480 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180010840 (RtlpDeCommitFreeBlock.c)
 *     RtlpGetExtraStuffPointer @ 0x18001FE30 (RtlpGetExtraStuffPointer.c)
 *     RtlpCheckBusyBlockTail @ 0x18002059C (RtlpCheckBusyBlockTail.c)
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180164350 (RtlCompareMemoryUlong.c)
 */

char __fastcall RtlpValidateHeapSegment(
        _DWORD *BaseAddress,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        __int64 a7,
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
  __int64 v18; // r8
  __int64 v19; // rax
  _DWORD *v20; // rcx
  bool v21; // zf
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  SIZE_T v25; // rsi
  __int64 *v26; // r15
  _QWORD *v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned int v33; // ecx
  unsigned __int64 v34; // rbp
  _QWORD *v35; // rsi
  _QWORD *Entry; // r8
  char v37; // al
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // cx
  char v40; // al
  int v41; // ecx
  int v42; // eax
  __int64 *v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  int v46; // ecx
  SIZE_T v47; // rbp
  unsigned int v48; // [rsp+78h] [rbp+10h]
  unsigned int v49; // [rsp+80h] [rbp+18h]

  v8 = 0LL;
  v9 = a4;
  v10 = 0;
  v48 = 0;
  v11 = 0;
  v49 = 0;
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
        if ( BaseAddress[31] != (_DWORD)v8 )
        {
          *(_DWORD *)(v14 + 8) ^= BaseAddress[34];
          if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
          {
            RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, v14);
            v8 = 0LL;
          }
        }
        if ( (_WORD)v15 != (*((_WORD *)BaseAddress + 70) ^ *(_WORD *)(v14 + 12)) )
        {
          if ( NtCurrentPeb()->Ldr == v8 )
            DbgPrint("HEAP: ");
          else
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          DbgPrint(
            "Heap entry %p has incorrect PreviousSize field (%04x instead of %04x)\n",
            (const void *)v14,
            *(unsigned __int16 *)(v14 + 12) ^ *((unsigned __int16 *)BaseAddress + 70),
            (unsigned __int16)v15);
LABEL_22:
          v21 = BaseAddress[31] == 0;
LABEL_23:
          if ( !v21 )
          {
            *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
            *(_DWORD *)(v14 + 8) ^= BaseAddress[34];
          }
          return 0;
        }
        v15 = *(unsigned __int16 *)(v14 + 8);
        v16 = *(_BYTE *)(v14 + 10);
        v17 = 16 * v15;
        if ( (v16 & 1) != 0 )
          break;
        if ( ((v16 >> 2) & ((BaseAddress[28] & 0x40) != 0)) == 0 )
          goto LABEL_28;
        v25 = v17 - 32;
        if ( (v16 & 2) != 0 && v25 > 4 )
          v25 = v17 - 36;
        if ( (v16 & 8) == 0 )
        {
          v47 = RtlCompareMemoryUlong((PVOID)(v14 + 32), v25, 0xFEEEFEEE);
          if ( v47 != v25 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("Free Heap block %p modified at %p after it was freed\n", v14, v14 + v47 + 16);
            goto LABEL_22;
          }
          v11 = v49;
          v10 = v48;
LABEL_28:
          v23 = *(unsigned __int16 *)(v14 + 8);
          ++*v9;
          *a5 += v23;
          v8 = 0LL;
          goto LABEL_11;
        }
        v26 = *(__int64 **)(v14 + 24);
        v27 = (_QWORD *)(v14 + 16);
        v28 = *(_QWORD *)(v14 + 16);
        v29 = *v26;
        v30 = *(_QWORD *)(v28 + 8);
        if ( *v26 != v14 + 16 || v29 != v30 )
        {
          RtlpLogHeapFailure(13, (_DWORD)BaseAddress, v14 + 16, v30, v29, (__int64)v8);
          goto LABEL_59;
        }
        *((_QWORD *)BaseAddress + 24) -= v15;
        v31 = *((_QWORD *)BaseAddress + 39);
        if ( v31 )
        {
          while ( 1 )
          {
            v32 = *(unsigned int *)(v31 + 8);
            if ( *(unsigned __int16 *)(v14 + 8) < v32 )
            {
              v33 = *(unsigned __int16 *)(v14 + 8);
              goto LABEL_54;
            }
            if ( !*(_QWORD *)v31 )
              break;
            v31 = *(_QWORD *)v31;
          }
          v33 = v32 - 1;
LABEL_54:
          RtlpHeapRemoveListEntry(
            (__int64)BaseAddress,
            v31,
            1,
            (__int64 *)(v14 + 16),
            v33,
            *(unsigned __int16 *)(v14 + 8));
          v8 = 0LL;
        }
        *v26 = v28;
        *(_QWORD *)(v28 + 8) = v26;
        if ( (*(_BYTE *)(v14 + 10) & 8) == 0 || (v37 = RtlpCommitBlock((__int64 *)BaseAddress, v14), v8 = 0LL, v37) )
        {
          v34 = *(unsigned __int16 *)(v14 + 8);
          v35 = BaseAddress + 84;
          *(_BYTE *)(v14 + 10) = (_BYTE)v8;
          *(_BYTE *)(v14 + 15) = (_BYTE)v8;
          if ( *((_PEB_LDR_DATA **)BaseAddress + 39) == v8 )
          {
            Entry = (_QWORD *)*v35;
          }
          else
          {
            Entry = RtlpFindEntry((__int64)BaseAddress, (unsigned int)v34);
            v8 = 0LL;
          }
          if ( v35 != Entry )
          {
            v41 = BaseAddress[31];
            do
            {
              if ( v41 )
              {
                v42 = *((_DWORD *)Entry - 2);
                v41 = BaseAddress[31];
                if ( (v42 & v41) != 0 )
                  v42 ^= BaseAddress[34];
              }
              else
              {
                LOWORD(v42) = *((_WORD *)Entry - 4);
              }
              if ( v34 <= (unsigned __int16)v42 )
                break;
              Entry = (_QWORD *)*Entry;
            }
            while ( v35 != Entry );
          }
          v43 = (__int64 *)Entry[1];
          if ( (_QWORD *)*v43 == Entry )
          {
            *v27 = Entry;
            *(_QWORD *)(v14 + 24) = v43;
            *v43 = (__int64)v27;
            Entry[1] = v27;
          }
          else
          {
            RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v43, (__int64)v8);
            v8 = 0LL;
          }
          *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(v14 + 8);
          v44 = *((_QWORD *)BaseAddress + 39);
          if ( v44 )
          {
            while ( 1 )
            {
              v45 = *(unsigned int *)(v44 + 8);
              if ( *(unsigned __int16 *)(v14 + 8) < v45 )
                break;
              if ( !*(_QWORD *)v44 )
              {
                v46 = v45 - 1;
                goto LABEL_95;
              }
              v44 = *(_QWORD *)v44;
            }
            v46 = *(unsigned __int16 *)(v14 + 8);
LABEL_95:
            RtlpHeapAddListEntry((__int64)BaseAddress, v44, 1, v14 + 16, v46, *(unsigned __int16 *)(v14 + 8));
            v8 = 0LL;
          }
          v11 = v49;
          v10 = v48;
          v9 = a4;
          if ( BaseAddress[31] != (_DWORD)v8 )
          {
            *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
            *(_DWORD *)(v14 + 8) ^= BaseAddress[34];
          }
        }
        else
        {
          RtlpDeCommitFreeBlock(BaseAddress, v14, *(unsigned __int16 *)(v14 + 8), 1);
LABEL_59:
          v11 = v49;
          v8 = 0LL;
          v9 = a4;
        }
      }
      v18 = a7;
      if ( a7 )
      {
        v38 = (v16 & 2) != 0 ? *(_WORD *)(RtlpGetExtraStuffPointer(v14) + 2) : *(unsigned __int8 *)(v14 + 11);
        if ( v38 )
        {
          if ( (v38 & 0x8000u) == 0 )
          {
            if ( (v38 & 0x800) == 0 && v38 < *((_WORD *)BaseAddress + 112) )
              *(_QWORD *)(v18 + 8LL * v38) += v15;
          }
          else
          {
            v39 = v38 & 0x7FFF;
            if ( v39 < 0x81u )
              *(_QWORD *)(a8 + 8LL * v39) += v15;
          }
        }
      }
      if ( (*(_BYTE *)(v14 + 10) & 4) != 0 )
      {
        v40 = RtlpCheckBusyBlockTail((__int64)BaseAddress, v14);
        v8 = 0LL;
        if ( !v40 )
        {
          v21 = BaseAddress[31] == 0;
          goto LABEL_23;
        }
      }
LABEL_11:
      v19 = *(unsigned __int8 *)(v14 + 14);
      if ( (_BYTE)v19 )
        v20 = (_DWORD *)((v14 & 0xFFFFFFFFFFFF0000uLL) - (v19 << 16) + 0x10000);
      else
        v20 = BaseAddress;
      if ( v20 != (_DWORD *)a2 )
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
      if ( BaseAddress[31] != (_DWORD)v8 )
      {
        *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
        *(_DWORD *)(v14 + 8) ^= BaseAddress[34];
      }
      v14 += v17;
    }
    v24 = *(_QWORD *)(v14 + 56);
    if ( v24 )
    {
      ++v11;
      v10 += v24 >> 12;
      v49 = v11;
      v48 = v10;
      if ( BaseAddress[31] != (_DWORD)v8 )
      {
        *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
        *(_DWORD *)(v14 + 8) ^= BaseAddress[34];
      }
      v14 += v24 + 64;
      if ( v14 != *(_QWORD *)(a2 + 72) )
      {
        if ( BaseAddress[31] != (_DWORD)v8 )
        {
          *(_DWORD *)(v14 + 8) ^= BaseAddress[34];
          if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
          {
            RtlpAnalyzeHeapFailure((unsigned __int64)BaseAddress, v14);
            v8 = 0LL;
          }
        }
        if ( *((_WORD *)BaseAddress + 70) != *(_WORD *)(v14 + 12) )
        {
          if ( NtCurrentPeb()->Ldr == v8 )
            DbgPrint("HEAP: ");
          else
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          DbgPrint(
            "Heap block at %p has corrupted PreviousSize (%lx)\n",
            v14,
            *(unsigned __int16 *)(v14 + 12) ^ (unsigned int)*((unsigned __int16 *)BaseAddress + 70));
          goto LABEL_22;
        }
        if ( BaseAddress[31] != (_DWORD)v8 )
        {
          *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
          *(_DWORD *)(v14 + 8) ^= BaseAddress[34];
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
  if ( BaseAddress[31] != (_DWORD)v8 )
  {
    *(_BYTE *)(v14 + 11) = *(_BYTE *)(v14 + 8) ^ *(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10);
    *(_DWORD *)(v14 + 8) ^= BaseAddress[34];
  }
  return 1;
}
