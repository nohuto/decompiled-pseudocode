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

__int64 __fastcall RtlDebugFreeHeap(unsigned __int64 a1, int a2, char *a3)
{
  LOGICAL v6; // r14d
  int v8; // esi
  unsigned __int64 v9; // rsi
  struct _PEB *v10; // rax
  __int16 v11; // dx
  _BYTE *v12; // r14
  unsigned __int16 v13; // cx
  _BYTE *v14; // rsi
  __int64 TagName; // rax
  char v16; // [rsp+20h] [rbp-38h]
  int Flags; // [rsp+68h] [rbp+10h]
  unsigned __int64 v18; // [rsp+78h] [rbp+20h]
  unsigned __int16 v19; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v16 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return (unsigned __int8)((__int64 (*)(void))qword_1801CE5A0)();
  if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlFreeHeap") )
  {
    v6 = 0;
    goto LABEL_34;
  }
  v8 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
  Flags = v8;
  if ( (v8 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
    v16 = 1;
    Flags = v8 | 1;
  }
  RtlpValidateHeap(a1, 0);
  v9 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
  v18 = v9;
  if ( !RtlpValidateHeapEntry(a1, v9, "RtlFreeHeap") )
    goto LABEL_34;
  v10 = NtCurrentPeb();
  if ( a3 == (char *)qword_1801D5EC0 )
  {
    if ( v10->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("About to free block at %p\n", (const void *)qword_1801D5EC0);
  }
  else
  {
    if ( (v10->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_11;
    v11 = dword_1801D5EC8;
    if ( !dword_1801D5EC8 )
      goto LABEL_11;
    v12 = (_BYTE *)v9;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
      {
        RtlpAnalyzeHeapFailure(a1, v9);
        v11 = dword_1801D5EC8;
      }
    }
    if ( (*(_BYTE *)(v9 + 10) & 2) != 0 )
    {
      v13 = *(_WORD *)(RtlpGetExtraStuffPointer(v9) + 2);
      v14 = (_BYTE *)(v9 + 11);
    }
    else
    {
      v14 = (_BYTE *)(v9 + 11);
      v13 = *(unsigned __int8 *)(v18 + 11);
    }
    v19 = v13;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *v14 = v12[8] ^ v12[9] ^ v12[10];
      *((_DWORD *)v12 + 2) ^= *(_DWORD *)(a1 + 136);
    }
    if ( !v13 || v13 != v11 || *(_WORD *)(a1 + 208) != HIWORD(dword_1801D5EC8) )
      goto LABEL_11;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName(a1, v19);
    DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
  }
  RtlpBreakPointHeap();
LABEL_11:
  v6 = RtlFreeHeap((PVOID)a1, Flags, a3);
  RtlpValidateHeapHeaders((char *)a1, 1);
  RtlpValidateHeap(a1, 0);
LABEL_34:
  if ( v16 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(a1 + 352));
  return v6;
}
