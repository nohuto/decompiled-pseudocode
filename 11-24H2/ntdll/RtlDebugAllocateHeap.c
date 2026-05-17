/*
 * XREFs of RtlDebugAllocateHeap @ 0x18009CC30
 * Callers:
 *     RtlpAllocateHeap @ 0x18009D360 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpAnalyzeHeapFailure @ 0x18002F740 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x180031DF0 (RtlpBreakPointHeap.c)
 *     RtlpCheckHeapSignature @ 0x18003F9F0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeap @ 0x180040D80 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800413BC (RtlpValidateHeapHeaders.c)
 *     RtlLogStackBackTraceEx @ 0x18009C824 (RtlLogStackBackTraceEx.c)
 *     RtlpGetExtraStuffPointer @ 0x18009CFC0 (RtlpGetExtraStuffPointer.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x18010A4D0 (RtlpHeapExceptionFilter.c)
 *     RtlpGetTagName @ 0x180118800 (RtlpGetTagName.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDebugAllocateHeap(_QWORD *Src, int a2, unsigned __int64 a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 Heap; // rdi
  unsigned __int64 v11; // rdi
  _WORD *ExtraStuffPointer; // rax
  _WORD *v13; // r14
  unsigned __int16 v14; // ax
  struct _PEB *v15; // rax
  __int64 TagName; // rax
  char v18; // [rsp+20h] [rbp-38h]
  __int64 v19; // [rsp+28h] [rbp-30h]
  unsigned __int16 v20; // [rsp+78h] [rbp+20h]

  v18 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return ((__int64 (*)(void))qword_1801CC590)();
  if ( !RtlpCheckHeapSignature(Src, "RtlAllocateHeap") )
    goto LABEL_45;
  v6 = *((_DWORD *)Src + 29) | 0x10000100 | a2;
  v7 = a3;
  if ( !a3 )
    v7 = 1LL;
  v8 = Src[33] & (Src[32] + v7);
  if ( v8 < 0x20 )
    v8 = 32LL;
  v9 = v8 + 16;
  if ( v9 < a3 || v9 > Src[25] )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("Invalid allocation size - %Ix (exceeded %Ix)\n", a3, Src[25]);
LABEL_45:
    Heap = 0LL;
    goto LABEL_46;
  }
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(Src[44]);
    v18 = 1;
    v6 |= 1u;
  }
  RtlpValidateHeap((__int64)Src, 0);
  Heap = RtlAllocateHeap((__int64)Src, v6, a3);
  v19 = Heap;
  RtlpValidateHeapHeaders(Src, 1);
  if ( !Heap )
    goto LABEL_46;
  v11 = Heap - 16;
  _m_prefetchw((const void *)v11);
  if ( *(_BYTE *)(v11 + 15) == 5 )
    v11 -= 16LL * *(unsigned __int8 *)(v11 + 14);
  if ( *((_DWORD *)Src + 31) )
  {
    *(_DWORD *)(v11 + 8) ^= *((_DWORD *)Src + 34);
    if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
      RtlpAnalyzeHeapFailure((__int64)Src, v11);
  }
  if ( (*(_BYTE *)(v11 + 10) & 2) != 0 )
  {
    ExtraStuffPointer = (_WORD *)RtlpGetExtraStuffPointer(v11);
    v13 = ExtraStuffPointer;
    if ( (Src[14] & 0x8000000) != 0 )
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
  if ( *((_DWORD *)Src + 31) )
  {
    *(_BYTE *)(v11 + 11) = *(_BYTE *)(v11 + 8) ^ *(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10);
    *(_DWORD *)(v11 + 8) ^= *((_DWORD *)Src + 34);
  }
  if ( (Src[14] & 0x20000000) != 0 )
    RtlpValidateHeap((__int64)Src, 0);
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
  if ( (v15->NtGlobalFlag & 0x800) != 0 && v20 && v20 == word_1801D3E48 && *((_WORD *)Src + 104) == word_1801D3E4A )
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
    RtlLeaveCriticalSection(Src[44]);
  return Heap;
}
