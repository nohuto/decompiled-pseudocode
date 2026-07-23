/*
 * XREFs of RtlpDupTebLanguageList @ 0x1800CA478
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800C99F0 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpMuiRegDupLanguageList @ 0x1800C9DCC (RtlpMuiRegDupLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x1800CA5CC (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x1800CB820 (RtlpMuiRegDupLanguageConfigList.c)
 */

_QWORD *__fastcall RtlpDupTebLanguageList(__int64 *a1)
{
  __int64 v2; // rdx
  _QWORD *Heap; // rbx
  __int64 v4; // rax
  __int64 v6; // rax

  if ( !a1 )
    return 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
  if ( !Heap )
    return 0LL;
  if ( *a1 && (v4 = RtlpMuiRegDupLanguageList(*a1, v2), (*Heap = v4) == 0LL)
    || a1[1] && (v6 = RtlpMuiRegDupLanguageConfigList(), (Heap[1] = v6) == 0LL) )
  {
    RtlpFreeTebLanguageList(Heap);
    return 0LL;
  }
  return Heap;
}
