/*
 * XREFs of RtlpDupTebLanguageList @ 0x1800EC0D4
 * Callers:
 *     RtlSetThreadPreferredUILanguages2 @ 0x1800EBF30 (RtlSetThreadPreferredUILanguages2.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpMuiRegDupLanguageList @ 0x18007D0E0 (RtlpMuiRegDupLanguageList.c)
 *     RtlpFreeTebLanguageList @ 0x1800EC22C (RtlpFreeTebLanguageList.c)
 *     RtlpMuiRegDupLanguageConfigList @ 0x1800EC278 (RtlpMuiRegDupLanguageConfigList.c)
 */

_QWORD *__fastcall RtlpDupTebLanguageList(__int64 *a1)
{
  __int64 v2; // rdx
  _QWORD *Heap; // rbx
  __int64 v4; // rax
  __int64 v6; // rax

  if ( !a1 )
    return 0LL;
  Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x10uLL);
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
