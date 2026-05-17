/*
 * XREFs of RtlDebugFreeHeap @ 0x18009517C
 * Callers:
 *     RtlpFreeHeap @ 0x1800560F0 (RtlpFreeHeap.c)
 * Callees:
 *     RtlpGetExtraStuffPointer @ 0x180025F70 (RtlpGetExtraStuffPointer.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180028990 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpAnalyzeHeapFailure @ 0x180058210 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpBreakPointHeap @ 0x18005A8C0 (RtlpBreakPointHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpCheckHeapSignature @ 0x1800933E0 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x180093490 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x180094770 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180094DAC (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010CF40 (RtlpHeapExceptionFilter.c)
 *     RtlpGetTagName @ 0x18011B880 (RtlpGetTagName.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDebugFreeHeap(_QWORD *Src, int a2, __int64 a3)
{
  unsigned int v6; // r14d
  int v8; // esi
  unsigned __int64 v9; // rsi
  __int64 v10; // r9
  struct _PEB *v11; // rax
  __int16 v12; // dx
  _BYTE *v13; // r14
  unsigned __int16 v14; // cx
  _BYTE *v15; // rsi
  __int64 TagName; // rax
  char v17; // [rsp+20h] [rbp-38h]
  unsigned int v18; // [rsp+68h] [rbp+10h]
  unsigned __int64 v19; // [rsp+78h] [rbp+20h]
  unsigned __int16 v20; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v17 = 0;
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned __int8)((__int64 (*)(void))qword_1801CE5A0)();
  if ( !RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v6 = 0;
    goto LABEL_34;
  }
  v8 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
  v18 = v8;
  if ( (v8 & 1) == 0 )
  {
    RtlEnterCriticalSection(Src[44]);
    v17 = 1;
    v18 = v8 | 1;
  }
  RtlpValidateHeap((__int64)Src, 0);
  v9 = a3 - 16;
  _m_prefetchw((const void *)(a3 - 16));
  if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
    v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
  v19 = v9;
  if ( !RtlpValidateHeapEntry((unsigned __int64)Src, v9, "RtlFreeHeap") )
    goto LABEL_34;
  v11 = NtCurrentPeb();
  if ( a3 == qword_1801D5EC0 )
  {
    if ( v11->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("About to free block at %p\n", (const void *)qword_1801D5EC0);
  }
  else
  {
    if ( (v11->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_11;
    v12 = dword_1801D5EC8;
    if ( !dword_1801D5EC8 )
      goto LABEL_11;
    v13 = (_BYTE *)v9;
    if ( *((_DWORD *)Src + 31) )
    {
      *(_DWORD *)(v9 + 8) ^= *((_DWORD *)Src + 34);
      if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
      {
        RtlpAnalyzeHeapFailure((__int64)Src, v9);
        v12 = dword_1801D5EC8;
      }
    }
    if ( (*(_BYTE *)(v9 + 10) & 2) != 0 )
    {
      v14 = *(_WORD *)(RtlpGetExtraStuffPointer(v9) + 2);
      v15 = (_BYTE *)(v9 + 11);
    }
    else
    {
      v15 = (_BYTE *)(v9 + 11);
      v14 = *(unsigned __int8 *)(v19 + 11);
    }
    v20 = v14;
    if ( *((_DWORD *)Src + 31) )
    {
      *v15 = v13[8] ^ v13[9] ^ v13[10];
      *((_DWORD *)v13 + 2) ^= *((_DWORD *)Src + 34);
    }
    if ( !v14 || v14 != v12 || *((_WORD *)Src + 104) != HIWORD(dword_1801D5EC8) )
      goto LABEL_11;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName(Src, v20);
    DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
  }
  RtlpBreakPointHeap();
LABEL_11:
  v6 = RtlFreeHeap((__int64)Src, v18, a3, v10);
  RtlpValidateHeapHeaders(Src, 1);
  RtlpValidateHeap((__int64)Src, 0);
LABEL_34:
  if ( v17 )
    RtlLeaveCriticalSection(Src[44]);
  return v6;
}
