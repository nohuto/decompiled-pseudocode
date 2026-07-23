/*
 * XREFs of EtwpRelogEvent @ 0x180090C10
 * Callers:
 *     EtwpTraceUmEvent @ 0x180090890 (EtwpTraceUmEvent.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     EtwpSwitchBuffer @ 0x180091120 (EtwpSwitchBuffer.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall EtwpRelogEvent(__int64 a1, __int64 a2)
{
  unsigned int v4; // r13d
  unsigned int v5; // ebx
  int v6; // ecx
  size_t v7; // r15
  char v8; // al
  __int64 v9; // r14
  unsigned int v10; // r12d
  unsigned int v11; // edx
  unsigned int v12; // ecx
  __int64 *v13; // rax
  __int64 v14; // rbx
  unsigned __int32 v15; // ecx
  void *v16; // rcx
  bool v18; // zf
  PVOID v19; // rax
  PVOID Heap; // rax
  unsigned int v21; // [rsp+68h] [rbp+10h]

  v4 = 0;
  v5 = 0;
  if ( *(_WORD *)a2 < 0x58u )
    return 87;
  v6 = *(_DWORD *)(a1 + 308) & 0x1000;
  if ( v6 )
    v5 = *(unsigned __int16 *)(a2 + 86);
  v7 = *(unsigned int *)(a2 + 80);
  if ( !(_DWORD)v7 )
  {
    ++*(_DWORD *)(a1 + 368);
    ++*(_DWORD *)(*(_QWORD *)(a1 + 496) + 12LL * v5 + 4);
    return 87;
  }
  v8 = *(_BYTE *)(a2 + 4);
  if ( v8 != 80 || *(_QWORD *)(a1 + 504) || (unsigned int)v7 < 0x30 )
  {
    if ( v8 != 82 || v6 || *(_QWORD *)(a1 + 520) || (unsigned int)v7 < 8 || *(_BYTE *)(*(_QWORD *)(a2 + 72) + 7LL) )
      goto LABEL_7;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, *(unsigned int *)(a2 + 80));
    *(_QWORD *)(a1 + 520) = Heap;
    if ( Heap )
    {
      memmove(Heap, *(const void **)(a2 + 72), v7);
      *(_DWORD *)(a1 + 528) = v7;
      goto LABEL_7;
    }
    return 1450;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(a2 + 72) + 7LL) )
  {
    v19 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, *(unsigned int *)(a2 + 80));
    *(_QWORD *)(a1 + 504) = v19;
    if ( v19 )
    {
      memmove(v19, *(const void **)(a2 + 72), v7);
      *(_DWORD *)(a1 + 512) = v7;
      goto LABEL_7;
    }
    return 1450;
  }
LABEL_7:
  v9 = *(_WORD *)(a2 + 84) & 0x7FF;
  if ( (*(_DWORD *)(a1 + 308) & 0x1000) != 0 )
    LODWORD(v9) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 488) + 8LL * v5) + 2 * v9);
  if ( (unsigned int)v7 > *(_DWORD *)(a1 + 196) )
  {
LABEL_23:
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 368));
    if ( (*(_DWORD *)(a1 + 308) & 0x10000) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 496)
                                                      + 12LL
                                                      * *(unsigned __int16 *)(*(_QWORD *)(a1 + 536)
                                                                            + 4LL * (unsigned int)v9)
                                                      + 4));
    goto LABEL_25;
  }
  v10 = (v7 + 7) & 0xFFFFFFF8;
  v11 = *(_DWORD *)(a1 + 192);
  v21 = v11;
  v12 = *(_DWORD *)(a1 + 188);
  if ( (unsigned int)v9 >= v12 )
  {
    LODWORD(v9) = (unsigned int)v9 % v12;
    v11 = *(_DWORD *)(a1 + 192);
  }
  v13 = (__int64 *)(a1 + 8 * ((unsigned int)v9 + 70LL));
  while ( 1 )
  {
    v14 = *v13;
    if ( *v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 12));
      if ( *(_DWORD *)(v14 + 44) == 1 && *(_DWORD *)(v14 + 8) <= v11 )
        break;
    }
LABEL_22:
    v18 = (unsigned __int8)EtwpSwitchBuffer(a1, v14, (unsigned int)v9) == 1;
    v11 = v21;
    v13 = (__int64 *)(a1 + 8 * ((unsigned int)v9 + 70LL));
    if ( !v18 )
      goto LABEL_23;
  }
  v15 = _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), v10);
  if ( v15 + v10 > v11 )
  {
    if ( v15 <= v11 )
      *(_DWORD *)(v14 + 4) = v15;
    goto LABEL_22;
  }
  v16 = (void *)(v14 + v15);
  if ( v16 )
  {
    memmove(v16, *(const void **)(a2 + 72), v7);
    _InterlockedDecrement((volatile signed __int32 *)(v14 + 12));
    return v4;
  }
LABEL_25:
  if ( (unsigned int)v7 > 0xFFF8 )
  {
    return 534;
  }
  else
  {
    v4 = 8;
    if ( (unsigned int)v7 > *(_DWORD *)(a1 + 196) )
      return 234;
  }
  return v4;
}
