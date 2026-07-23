/*
 * XREFs of RtlDebugAllocateHeap @ 0x18001F7A4
 * Callers:
 *     RtlpAllocateHeap @ 0x1801159A0 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpBreakPointHeap @ 0x18000D5E4 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x18001FE30 (RtlpGetExtraStuffPointer.c)
 *     RtlpCheckHeapSignature @ 0x180020320 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180021CEC (RtlpValidateHeapHeaders.c)
 *     RtlLogStackBackTraceEx @ 0x180030DDC (RtlLogStackBackTraceEx.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 *     RtlpGetTagName @ 0x180113834 (RtlpGetTagName.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

PVOID __fastcall RtlDebugAllocateHeap(unsigned __int64 Src, int a2, SIZE_T a3)
{
  ULONG v6; // edi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  SIZE_T v9; // rax
  PVOID Heap; // rdi
  unsigned __int64 v11; // rdi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v13; // r14
  unsigned __int16 v14; // ax
  struct _PEB *v15; // rax
  __int64 TagName; // rax
  char v18; // [rsp+20h] [rbp-38h]
  PVOID v19; // [rsp+28h] [rbp-30h]
  unsigned __int16 v20; // [rsp+78h] [rbp+20h]

  v18 = 0;
  if ( (*(_DWORD *)(Src + 116) & 0x1000000) != 0 )
    return (PVOID)((__int64 (*)(void))qword_1801CB590)();
  if ( !(unsigned __int8)RtlpCheckHeapSignature(Src, "RtlAllocateHeap") )
    goto LABEL_45;
  v6 = *(_DWORD *)(Src + 116) | 0x10000100 | a2;
  v7 = a3;
  if ( !a3 )
    v7 = 1LL;
  v8 = *(_QWORD *)(Src + 264) & (*(_QWORD *)(Src + 256) + v7);
  if ( v8 < 0x20 )
    v8 = 32LL;
  v9 = v8 + 16;
  if ( v9 < a3 || v9 > *(_QWORD *)(Src + 200) )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, *(_QWORD *)(Src + 200));
LABEL_45:
    Heap = 0LL;
    goto LABEL_46;
  }
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(Src + 352));
    v18 = 1;
    v6 |= 1u;
  }
  RtlpValidateHeap((PVOID)Src);
  Heap = RtlAllocateHeap((PVOID)Src, v6, a3);
  v19 = Heap;
  RtlpValidateHeapHeaders((void *)Src);
  if ( !Heap )
    goto LABEL_46;
  v11 = (unsigned __int64)Heap - 16;
  _m_prefetchw((const void *)v11);
  if ( *(_BYTE *)(v11 + 15) == 5 )
    v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
  if ( *(_DWORD *)(Src + 124) )
  {
    *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(Src + 136);
    if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
      RtlpAnalyzeHeapFailure(Src, v11);
  }
  if ( (*(_BYTE *)(v11 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v11);
    v13 = ExtraStuffPointer;
    if ( (*(_DWORD *)(Src + 112) & 0x8000000) != 0 )
      *ExtraStuffPointer = RtlLogStackBackTraceEx(1LL);
    else
      *ExtraStuffPointer = 0;
    v14 = v13[1];
  }
  else
  {
    v14 = *(unsigned __int8 *)(v11 + 11);
  }
  v20 = v14;
  if ( *(_DWORD *)(Src + 124) )
  {
    *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
    *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(Src + 136);
  }
  if ( (*(_DWORD *)(Src + 112) & 0x20000000) != 0 )
    RtlpValidateHeap((PVOID)Src);
  v15 = NtCurrentPeb();
  Heap = v19;
  if ( v19 == (PVOID)RtlpHeapStopOn )
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
  if ( (v15->NtGlobalFlag & 0x800) != 0 && v20 && v20 == word_1801D2E48 && *(_WORD *)(Src + 208) == word_1801D2E4A )
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
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(Src + 352));
  return Heap;
}
