/*
 * XREFs of RtlpQueryMemoryUsageHeap @ 0x180105890
 * Callers:
 *     RtlpHeapQueryTotalReserveSize @ 0x180105800 (RtlpHeapQueryTotalReserveSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpQueryMemoryUsageHeap(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return 3221225474LL;
  *a2 = *(_QWORD *)(a1 + 592) + *(_QWORD *)(a1 + 568);
  v5 = *(_QWORD *)(a1 + 576);
  v6 = *(_QWORD *)(a1 + 600) - *(_QWORD *)(a1 + 672);
  *a3 = v6 + v5;
  if ( *a2 < (unsigned __int64)(v6 + v5) )
    *a2 = v6 + v5;
  return 0LL;
}
