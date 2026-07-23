/*
 * XREFs of RtlpCheckBusyBlockTail @ 0x18002059C
 * Callers:
 *     RtlpValidateHeapEntry @ 0x1800203D0 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800222F8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpBreakPointHeap @ 0x18000D5E4 (RtlpBreakPointHeap.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlCompareMemory @ 0x1801642D0 (RtlCompareMemory.c)
 */

char __fastcall RtlpCheckBusyBlockTail(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  char v4; // al
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rcx
  __int64 v7; // r9
  char v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  char v11; // al
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  SIZE_T v15; // rbp
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax

  v3 = a1;
  v4 = *(_BYTE *)(a2 + 15);
  if ( v4 == 1 )
    return 1;
  if ( v4 == 4 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v19 = *(_DWORD *)(a2 + 8);
      if ( (v19 & *(_DWORD *)(a1 + 124)) != 0 )
        v19 ^= *(_DWORD *)(a1 + 136);
    }
    else
    {
      LOWORD(v19) = *(_WORD *)(a2 + 8);
    }
    v10 = *(_QWORD *)(a2 - 16) - (unsigned __int16)v19;
  }
  else
  {
    if ( v4 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        LODWORD(v7) = *(_DWORD *)(a2 + 8);
        if ( ((unsigned int)v7 & *(_DWORD *)(a1 + 124)) != 0 )
          LODWORD(v7) = *(_DWORD *)(a1 + 136) ^ v7;
      }
      else
      {
        LOWORD(v7) = *(_WORD *)(a2 + 8);
      }
      v5 = a2 >> 4;
    }
    else
    {
      v5 = a2 >> 4;
      v6 = *(_DWORD *)(a2 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(a2 >> 4) ^ (unsigned int)a1;
      if ( (_WORD)v6 )
        v7 = 0LL;
      else
        v7 = *(_QWORD *)(a2 - (v6 >> 12));
      LOWORD(v7) = *(_WORD *)(v7 + 36);
      LODWORD(a1) = v3;
    }
    v8 = *(_BYTE *)(a2 + 15);
    if ( v8 == 5 )
    {
      v9 = *(unsigned __int16 *)(a2 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(v3 + 140);
    }
    else if ( (v8 & 0x40) != 0 )
    {
      v9 = *(unsigned __int16 *)(a2 + 16LL * (v8 & 0x3F) + 12);
    }
    else if ( (v8 & 0x3F) == 0x3F )
    {
      if ( v8 >= 0 )
      {
        if ( *(_DWORD *)(v3 + 124) )
        {
          LODWORD(v18) = *(_DWORD *)(a2 + 8);
          if ( ((unsigned int)v18 & *(_DWORD *)(v3 + 124)) != 0 )
            LODWORD(v18) = *(_DWORD *)(v3 + 136) ^ v18;
        }
        else
        {
          LOWORD(v18) = *(_WORD *)(a2 + 8);
        }
      }
      else
      {
        v17 = *(_DWORD *)(a2 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v5 ^ (unsigned int)a1;
        if ( (_WORD)v17 )
          v18 = 0LL;
        else
          v18 = *(_QWORD *)(a2 - (v17 >> 12));
        LOWORD(v18) = *(_WORD *)(v18 + 36);
      }
      v9 = *(_QWORD *)(a2 + 16LL * (unsigned __int16)v18);
    }
    else
    {
      v9 = v8 & 0x3F;
    }
    v10 = 16LL * (unsigned __int16)v7 - v9;
  }
  v11 = *(_BYTE *)(a2 + 15);
  if ( v11 == 5 )
  {
    v12 = *(unsigned __int8 *)(a2 + 14);
LABEL_14:
    v13 = 16 * v12;
    goto LABEL_15;
  }
  if ( (v11 & 0x40) != 0 )
  {
    v12 = *(_BYTE *)(a2 + 15) & 0x3F;
    goto LABEL_14;
  }
  v13 = 0LL;
LABEL_15:
  v14 = v13 + v10;
  v15 = RtlCompareMemory((const void *)(v14 + a2 + 16), &CheckHeapFillPattern, 0x10uLL);
  if ( v15 == 16 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap block at %p modified at %p past requested size of %Ix\n",
    (const void *)a2,
    (const void *)(v14 + a2 + 16 + v15),
    v14);
  RtlpBreakPointHeap();
  return 0;
}
