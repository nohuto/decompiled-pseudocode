/*
 * XREFs of MiPfCompletePrefetchIos @ 0x140351AD0
 * Callers:
 *     MmPrefetchPagesEx @ 0x140938DE0 (MmPrefetchPagesEx.c)
 *     MiPrefetchControlArea @ 0x14093AC84 (MiPrefetchControlArea.c)
 * Callees:
 *     MiPfCompleteCoalescedIo @ 0x140351964 (MiPfCompleteCoalescedIo.c)
 *     MiPfCoalesceAndIssueIOs @ 0x140352778 (MiPfCoalesceAndIssueIOs.c)
 *     MiPfCompleteInPageSupport @ 0x140352CB4 (MiPfCompleteInPageSupport.c)
 */

__int64 __fastcall MiPfCompletePrefetchIos(ULONG_PTR *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  ULONG_PTR v6; // rcx
  ULONG_PTR v7; // rax
  unsigned int v8; // eax

  v3 = 0;
  if ( a2 )
    MiPfCoalesceAndIssueIOs(a2, a1, 0LL);
  while ( 1 )
  {
    v6 = *a1;
    if ( (ULONG_PTR *)*a1 == a1 )
      break;
    if ( *(ULONG_PTR **)(v6 + 8) != a1 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
      __fastfail(3u);
    *a1 = v7;
    *(_QWORD *)(v7 + 8) = a1;
    if ( (*(_DWORD *)(v6 + 192) & 0x1000000) != 0 )
      v8 = MiPfCompleteCoalescedIo(v6, a3);
    else
      v8 = MiPfCompleteInPageSupport(v6, a3);
    if ( ((v8 + 0x80000000) & 0x80000000) == 0 && v8 != -1073740748 )
      v3 = v8;
  }
  return v3;
}
