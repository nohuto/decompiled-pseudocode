/*
 * XREFs of RtlDebugAllocateHeap @ 0x180025BE0
 * Callers:
 *     RtlpAllocateHeap @ 0x180026310 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlLogStackBackTraceEx @ 0x1800257CC (RtlLogStackBackTraceEx.c)
 *     RtlpGetExtraStuffPointer @ 0x180025F70 (RtlpGetExtraStuffPointer.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x18005A8C0 (RtlpBreakPointHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x1800933E0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180094770 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180094DAC (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 *     RtlpGetTagName @ 0x18011B880 (RtlpGetTagName.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDebugAllocateHeap(_DWORD *Src, int a2, unsigned __int64 a3)
{
  int v6; // edi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 Heap; // rdi
  __int64 v11; // rdi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v13; // r14
  unsigned __int16 v14; // ax
  struct _PEB *v15; // rax
  __int64 TagName; // rax
  char v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  unsigned __int16 v20; // [rsp+78h] [rbp+20h]

  v18 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_1801CE590)();
  if ( !(unsigned __int8)RtlpCheckHeapSignature(Src, "RtlAllocateHeap") )
    goto LABEL_45;
  v6 = Src[29] | 0x10000100 | a2;
  v7 = a3;
  if ( !a3 )
    v7 = 1LL;
  v8 = *((_QWORD *)Src + 33) & (*((_QWORD *)Src + 32) + v7);
  if ( v8 < 0x20 )
    v8 = 32LL;
  v9 = v8 + 16;
  if ( v9 < a3 || v9 > *((_QWORD *)Src + 25) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *((_QWORD *)Src + 25));
LABEL_45:
    Heap = 0LL;
    goto LABEL_46;
  }
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(*((_QWORD *)Src + 44));
    v18 = 1;
  }
  RtlpValidateHeap(Src, 0LL);
  Heap = RtlAllocateHeap(Src);
  v19 = Heap;
  RtlpValidateHeapHeaders(Src);
  if ( !Heap )
    goto LABEL_46;
  v11 = Heap - 16;
  _m_prefetchw((const void *)v11);
  if ( *(_BYTE *)(v11 + 15) == 5 )
    v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
  if ( Src[31] )
  {
    *(_DWORD *)(v11 + 8) ^= Src[34];
    if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
      RtlpAnalyzeHeapFailure(Src, v11);
  }
  if ( (*(_BYTE *)(v11 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v11);
    v13 = ExtraStuffPointer;
    if ( (Src[28] & 0x8000000) != 0 )
      *ExtraStuffPointer = RtlLogStackBackTraceEx(1u);
    else
      *ExtraStuffPointer = 0;
    v14 = v13[1];
  }
  else
  {
    v14 = *(unsigned __int8 *)(v11 + 11);
  }
  v20 = v14;
  if ( Src[31] )
  {
    *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
    *(_DWORD *)(v11 + 8) ^= Src[34];
  }
  if ( (Src[28] & 0x20000000) != 0 )
    RtlpValidateHeap(Src, 0LL);
  v15 = NtCurrentPeb();
  Heap = v19;
  if ( v19 == RtlpHeapStopOn )
  {
    if ( v15->Ldr )
    {
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      Heap = v19;
    }
    else
    {
      DbgPrint("HEAP: ");
    }
    DbgPrint("Just allocated block at %p for %Ix bytes\n", (const void *)RtlpHeapStopOn, a3);
    goto LABEL_40;
  }
  if ( (v15->NtGlobalFlag & 0x800) != 0 && v20 && v20 == word_1801D5EA8 && *((_WORD *)Src + 104) == word_1801D5EAA )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName(Src, v20);
    Heap = v19;
    DbgPrint("Just allocated block at %p for 0x%Ix bytes with tag %ws\n", v19, a3, TagName);
LABEL_40:
    RtlpBreakPointHeap();
  }
LABEL_46:
  if ( v18 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return Heap;
}
