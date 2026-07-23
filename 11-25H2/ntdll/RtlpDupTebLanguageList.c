/*
 * XREFs of RtlpDupTebLanguageList @ 0x180087590
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x180088970 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x18008743C (RtlpMuiRegDupLanguageConfigList.c)
 *     RtlpFreeTebLanguageList @ 0x1800876EC (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageList @ 0x18008A6F8 (RtlpMuiRegDupLanguageList.c)
 */

_QWORD *__fastcall RtlpDupTebLanguageList(_QWORD *a1)
{
  _QWORD *Heap; // rbx
  __int64 v3; // rax
  __int64 v5; // rcx
  __int64 v6; // rax

  if ( !a1 )
    return 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
  if ( !Heap )
    return 0LL;
  if ( *a1 && (v3 = RtlpMuiRegDupLanguageList(*a1), (*Heap = v3) == 0LL)
    || (v5 = a1[1]) != 0 && (v6 = RtlpMuiRegDupLanguageConfigList(v5), (Heap[1] = v6) == 0LL) )
  {
    RtlpFreeTebLanguageList(Heap);
    return 0LL;
  }
  return Heap;
}
