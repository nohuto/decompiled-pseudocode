/*
 * XREFs of RtlDebugFreeHeap @ 0x180022020
 * Callers:
 *     RtlpFreeHeap @ 0x18005A020 (RtlpFreeHeap.c)
 * Callees:
 *     RtlpBreakPointHeap @ 0x18000D5E4 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x18000F2D0 (RtlpAnalyzeHeapFailure.c)
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 *     RtlpGetExtraStuffPointer @ 0x18001FE30 (RtlpGetExtraStuffPointer.c)
 *     RtlpCheckHeapSignature @ 0x180020320 (RtlpCheckHeapSignature.c)
 *     RtlpValidateHeapEntry @ 0x1800203D0 (RtlpValidateHeapEntry.c)
 *     RtlpValidateHeap @ 0x1800216B0 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x180021CEC (RtlpValidateHeapHeaders.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x1800872D0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHeapExceptionFilter @ 0x180105400 (RtlpHeapExceptionFilter.c)
 *     RtlpGetTagName @ 0x180113834 (RtlpGetTagName.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlDebugFreeHeap(_QWORD *Src, int a2, char *a3)
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
  if ( (*((_DWORD *)Src + 29) & 0x1000000) != 0 )
    return (unsigned __int8)((__int64 (*)(void))qword_1801CB5A0)();
  if ( !RtlpCheckHeapSignature(Src, "RtlFreeHeap") )
  {
    v6 = 0;
    goto LABEL_34;
  }
  v8 = *((_DWORD *)Src + 29) | 0x10000000 | a2;
  Flags = v8;
  if ( (v8 & 1) == 0 )
  {
    RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)Src[44]);
    v16 = 1;
    Flags = v8 | 1;
  }
  RtlpValidateHeap(Src, 0);
  v9 = (unsigned __int64)(a3 - 16);
  _m_prefetchw(a3 - 16);
  if ( *(a3 - 1) == 5 )
    v9 -= 16LL * *(unsigned __int8 *)(v9 + 14);
  v18 = v9;
  if ( !RtlpValidateHeapEntry((unsigned __int64)Src, v9, "RtlFreeHeap") )
    goto LABEL_34;
  v10 = NtCurrentPeb();
  if ( a3 == (char *)qword_1801D2E60 )
  {
    if ( v10->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("About to free block at %p\n", (const void *)qword_1801D2E60);
  }
  else
  {
    if ( (v10->NtGlobalFlag & 0x800) == 0 )
      goto LABEL_11;
    v11 = dword_1801D2E68;
    if ( !dword_1801D2E68 )
      goto LABEL_11;
    v12 = (_BYTE *)v9;
    if ( *((_DWORD *)Src + 31) )
    {
      *(_DWORD *)(v9 + 8) ^= *((_DWORD *)Src + 34);
      if ( *(_BYTE *)(v9 + 11) != (*(_BYTE *)(v9 + 8) ^ (unsigned __int8)(*(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10))) )
      {
        RtlpAnalyzeHeapFailure((unsigned __int64)Src, v9);
        v11 = dword_1801D2E68;
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
    if ( *((_DWORD *)Src + 31) )
    {
      *v14 = v12[8] ^ v12[9] ^ v12[10];
      *((_DWORD *)v12 + 2) ^= *((_DWORD *)Src + 34);
    }
    if ( !v13 || v13 != v11 || *((_WORD *)Src + 104) != HIWORD(dword_1801D2E68) )
      goto LABEL_11;
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    TagName = RtlpGetTagName(Src, v19);
    DbgPrint("About to free block at %p with tag %ws\n", a3, TagName);
  }
  RtlpBreakPointHeap();
LABEL_11:
  v6 = RtlFreeHeap(Src, Flags, a3);
  RtlpValidateHeapHeaders((char *)Src, 1);
  RtlpValidateHeap(Src, 0);
LABEL_34:
  if ( v16 )
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)Src[44]);
  return v6;
}
