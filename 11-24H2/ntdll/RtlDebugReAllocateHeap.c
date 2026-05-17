/*
 * XREFs of RtlDebugReAllocateHeap @ 0x1800A2A3C
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x1800A1040 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x1800A18B0 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpAnalyzeHeapFailure @ 0x18002F740 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180031DF0 (RtlpBreakPointHeap.c)
 *     RtlpCheckHeapSignature @ 0x18003F9F0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x18003FAA0 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180040D80 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800413BC (RtlpValidateHeapHeaders.c)
 *     RtlLogStackBackTraceEx @ 0x18009C824 (RtlLogStackBackTraceEx.c)
 *     RtlpGetExtraStuffPointer @ 0x18009CFC0 (RtlpGetExtraStuffPointer.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlReAllocateHeap @ 0x1800A0E30 (RtlReAllocateHeap.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 *     RtlpGetTagName @ 0x180118800 (RtlpGetTagName.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDebugReAllocateHeap(_QWORD *Src, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rsi
  int v10; // r14d
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  struct _PEB *v14; // rax
  __int16 v15; // dx
  unsigned __int16 v16; // cx
  _BYTE *v17; // r14
  __int64 TagName; // rax
  __int64 Heap; // rax
  unsigned __int64 v20; // r14
  _WORD *ExtraStuffPointer; // rax
  _WORD *v22; // r15
  unsigned __int16 v23; // ax
  struct _PEB *v24; // rax
  __int64 v25; // rax
  char v26; // [rsp+30h] [rbp-48h]
  unsigned __int16 v27; // [rsp+34h] [rbp-44h]
  __int64 v28; // [rsp+38h] [rbp-40h]
  _BYTE *v29; // [rsp+40h] [rbp-38h]
  unsigned int v30; // [rsp+88h] [rbp+10h]

  v26 = 0;
  v8 = 0LL;
  v28 = 0LL;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_1801CC598)();
  if ( !RtlpCheckHeapSignature(Src, "RtlReAllocateHeap") )
    goto LABEL_68;
  v10 = *((_DWORD *)Src + 29) | 0x10000100 | a2;
  v30 = v10;
  v11 = a4;
  if ( !a4 )
    v11 = 1LL;
  v12 = (Src[33] & (Src[32] + v11)) + 16;
  if ( v12 < a4 || v12 > Src[25] )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, Src[25]);
LABEL_68:
    v8 = 0LL;
    goto LABEL_69;
  }
  v27 = 0;
  if ( (v10 & 1) == 0 )
  {
    RtlEnterCriticalSection(Src[44]);
    v26 = 1;
    v30 = v10 | 1;
  }
  RtlpValidateHeap((__int64)Src, 0);
  v13 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
  v29 = (_BYTE *)v13;
  if ( RtlpValidateHeapEntry((unsigned __int64)Src, v13, "RtlReAllocateHeap") )
  {
    v14 = NtCurrentPeb();
    if ( a3 == qword_1801D3E50 )
    {
      if ( v14->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_1801D3E50, a4);
    }
    else
    {
      if ( (v14->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_36;
      v15 = dword_1801D3E58;
      if ( !dword_1801D3E58 )
        goto LABEL_36;
      if ( *((_DWORD *)Src + 31) )
      {
        *(_DWORD *)(v13 + 8) ^= *((_DWORD *)Src + 34);
        if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
        {
          RtlpAnalyzeHeapFailure((__int64)Src, v13);
          v15 = dword_1801D3E58;
        }
      }
      if ( (*(_BYTE *)(v13 + 10) & 2) != 0 )
      {
        v16 = *(_WORD *)(RtlpGetExtraStuffPointer(v13) + 2);
        v17 = (_BYTE *)(v13 + 11);
      }
      else
      {
        v17 = (_BYTE *)(v13 + 11);
        v16 = (unsigned __int8)v29[11];
      }
      v27 = v16;
      if ( *((_DWORD *)Src + 31) )
      {
        *v17 = v29[8] ^ v29[9] ^ v29[10];
        *((_DWORD *)v29 + 2) ^= *((_DWORD *)Src + 34);
      }
      if ( !v16 || v16 != v15 || *((_WORD *)Src + 104) != HIWORD(dword_1801D3E58) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName(Src, v27);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap();
LABEL_36:
    Heap = RtlReAllocateHeap((__int64)Src, v30, a3, a4);
    v8 = Heap;
    v28 = Heap;
    if ( Heap )
    {
      v20 = Heap - 16;
      _m_prefetchw((const void *)(Heap - 16));
      if ( *(_BYTE *)(Heap - 16 + 15) == 5 )
        v20 -= 16LL * *(unsigned __int8 *)(v20 + 14);
      if ( *((_DWORD *)Src + 31) )
      {
        *(_DWORD *)(v20 + 8) ^= *((_DWORD *)Src + 34);
        if ( *(_BYTE *)(v20 + 11) != (*(_BYTE *)(v20 + 8) ^ (unsigned __int8)(*(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10))) )
          RtlpAnalyzeHeapFailure((__int64)Src, v20);
      }
      if ( (*(_BYTE *)(v20 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v20);
        v22 = ExtraStuffPointer;
        if ( (Src[14] & 0x8000000) != 0 )
          *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
        else
          *ExtraStuffPointer = 0;
        v23 = v22[1];
      }
      else
      {
        v23 = *(unsigned __int8 *)(v20 + 11);
      }
      v27 = v23;
      if ( *((_DWORD *)Src + 31) )
      {
        *(_BYTE *)(v20 + 11) = *(_BYTE *)(v20 + 8) ^ *(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10);
        *(_DWORD *)(v20 + 8) ^= *((_DWORD *)Src + 34);
      }
    }
    RtlpValidateHeapHeaders(Src, 1);
    RtlpValidateHeap((__int64)Src, 0);
  }
  if ( v8 )
  {
    v24 = NtCurrentPeb();
    v8 = v28;
    if ( v28 == qword_1801D3E50 )
    {
      if ( v24->Ldr )
      {
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        v8 = v28;
      }
      else
      {
        DbgPrint("HEAP: ");
      }
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_1801D3E50, a4);
LABEL_57:
      RtlpBreakPointHeap();
      goto LABEL_69;
    }
    if ( (v24->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*((_WORD *)Src + 104), v27) == dword_1801D3E58 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v25 = RtlpGetTagName(Src, v27);
      v8 = v28;
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v28, a4, v25);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v26 )
    RtlLeaveCriticalSection(Src[44]);
  return v8;
}
