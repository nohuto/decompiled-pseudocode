/*
 * XREFs of RtlDebugReAllocateHeap @ 0x18002B9EC
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 *     RtlpReAllocateHeap @ 0x18002A860 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x1800257CC (RtlLogStackBackTraceEx.c)
 *     RtlpGetExtraStuffPointer @ 0x180025F70 (RtlpGetExtraStuffPointer.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlReAllocateHeap @ 0x180029DE0 (RtlReAllocateHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x18005A8C0 (RtlpBreakPointHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x1800933E0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x180093490 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180094770 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180094DAC (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 *     RtlpGetTagName @ 0x18011B880 (RtlpGetTagName.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char *__fastcall RtlDebugReAllocateHeap(__int64 a1, int a2, char *a3, SIZE_T a4)
{
  char *v8; // rsi
  int v10; // r14d
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r14
  struct _PEB *v14; // rax
  __int16 v15; // dx
  unsigned __int16 v16; // cx
  _BYTE *v17; // r14
  __int64 TagName; // rax
  char *Heap; // rax
  __int64 v20; // r14
  _WORD *ExtraStuffPointer; // rax
  _WORD *v22; // r15
  unsigned __int16 v23; // ax
  struct _PEB *v24; // rax
  __int64 v25; // rax
  char v26; // [rsp+30h] [rbp-48h]
  unsigned __int16 v27; // [rsp+34h] [rbp-44h]
  char *v28; // [rsp+38h] [rbp-40h]
  _BYTE *v29; // [rsp+40h] [rbp-38h]
  int Flags; // [rsp+88h] [rbp+10h]

  v26 = 0;
  v8 = 0LL;
  v28 = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return (char *)((__int64 (*)(void))qword_1801CE598)();
  if ( !(unsigned __int8)RtlpCheckHeapSignature(a1, "RtlReAllocateHeap") )
    goto LABEL_68;
  v10 = *(_DWORD *)(a1 + 116) | 0x10000100 | a2;
  Flags = v10;
  v11 = a4;
  if ( !a4 )
    v11 = 1LL;
  v12 = (*(_QWORD *)(a1 + 264) & (*(_QWORD *)(a1 + 256) + v11)) + 16;
  if ( v12 < a4 || v12 > *(_QWORD *)(a1 + 200) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a4, *(_QWORD *)(a1 + 200));
LABEL_68:
    v8 = 0LL;
    goto LABEL_69;
  }
  v27 = 0;
  if ( (v10 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v26 = 1;
    Flags = v10 | 1;
  }
  RtlpValidateHeap(a1);
  v13 = (__int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v13 -= 16LL * *(unsigned __int8 *)(v13 + 14);
  v29 = (_BYTE *)v13;
  if ( (unsigned __int8)RtlpValidateHeapEntry(a1, v13, "RtlReAllocateHeap") )
  {
    v14 = NtCurrentPeb();
    if ( a3 == (char *)qword_1801D5EB0 )
    {
      if ( v14->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("About to reallocate block at %p to %Ix bytes\n", (const void *)qword_1801D5EB0, a4);
    }
    else
    {
      if ( (v14->NtGlobalFlag & 0x800) == 0 )
        goto LABEL_36;
      v15 = dword_1801D5EB8;
      if ( !dword_1801D5EB8 )
        goto LABEL_36;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v13 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v13 + 11) != (*(_BYTE *)(v13 + 8) ^ (unsigned __int8)(*(_BYTE *)(v13 + 9) ^ *(_BYTE *)(v13 + 10))) )
        {
          RtlpAnalyzeHeapFailure(a1, v13);
          v15 = dword_1801D5EB8;
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
      if ( *(_DWORD *)(a1 + 124) )
      {
        *v17 = v29[8] ^ v29[9] ^ v29[10];
        *((_DWORD *)v29 + 2) ^= *(_DWORD *)(a1 + 136);
      }
      if ( !v16 || v16 != v15 || *(_WORD *)(a1 + 208) != HIWORD(dword_1801D5EB8) )
        goto LABEL_36;
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      TagName = RtlpGetTagName(a1, v27);
      DbgPrint("About to rellocate block at %p to 0x%Ix bytes with tag %ws\n", a3, a4, TagName);
    }
    RtlpBreakPointHeap();
LABEL_36:
    Heap = (char *)RtlReAllocateHeap((PVOID)a1, Flags, a3, a4);
    v8 = Heap;
    v28 = Heap;
    if ( Heap )
    {
      v20 = (__int64)(Heap - 16);
      _m_prefetchw(Heap - 16);
      if ( *(Heap - 1) == 5 )
        v20 -= 16LL * *(unsigned __int8 *)(v20 + 14);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v20 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v20 + 11) != (*(_BYTE *)(v20 + 8) ^ (unsigned __int8)(*(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v20);
      }
      if ( (*(_BYTE *)(v20 + 10) & 2) != 0 )
      {
        ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v20);
        v22 = ExtraStuffPointer;
        if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
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
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v20 + 11) = *(_BYTE *)(v20 + 8) ^ *(_BYTE *)(v20 + 9) ^ *(_BYTE *)(v20 + 10);
        *(_DWORD *)(v20 + 8) ^= *(_DWORD *)(a1 + 136);
      }
    }
    RtlpValidateHeapHeaders((void *)a1);
    RtlpValidateHeap(a1);
  }
  if ( v8 )
  {
    v24 = NtCurrentPeb();
    v8 = v28;
    if ( v28 == (char *)qword_1801D5EB0 )
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
      DbgPrint("Just reallocated block at %p to %Ix bytes\n", (const void *)qword_1801D5EB0, a4);
LABEL_57:
      RtlpBreakPointHeap();
      goto LABEL_69;
    }
    if ( (v24->NtGlobalFlag & 0x800) != 0 && __PAIR32__(*(_WORD *)(a1 + 208), v27) == dword_1801D5EB8 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      v25 = RtlpGetTagName(a1, v27);
      v8 = v28;
      DbgPrint("Just reallocated block at %p to 0x%Ix bytes with tag %ws\n", v28, a4, v25);
      goto LABEL_57;
    }
  }
LABEL_69:
  if ( v26 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return v8;
}
