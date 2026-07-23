/*
 * XREFs of MiLargeCoalesceCandidatesExist @ 0x140264934
 * Callers:
 *     MiPerformOnDemandLargePageCoalesce @ 0x1402640DC (MiPerformOnDemandLargePageCoalesce.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLargeCoalesceCandidatesExist(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  _DWORD *v3; // r8
  __int64 v4; // r10
  __int64 v5; // r11

  v2 = *(_QWORD *)(a1 + 24);
  v3 = (_DWORD *)(a1 + 12);
  v4 = *(_QWORD *)(a1 + 32);
  if ( a2 == 2 )
    v5 = 57216LL * (unsigned int)*v3 + qword_140E38D50 + 57112;
  else
    v5 = v2 + 57112;
  return *(__int64 *)(v5 + 8LL * a2) > 0
      && (*(_DWORD *)(v4 + 4LL * a2) != *v3 || *(_QWORD *)(v2 + 8LL * a2 + 57136) > *(_QWORD *)(v4 + 8LL * a2 + 16));
}
