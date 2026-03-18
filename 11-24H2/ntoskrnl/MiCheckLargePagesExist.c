/*
 * XREFs of MiCheckLargePagesExist @ 0x1403098F8
 * Callers:
 *     MiProcessLargeCoalesceBitmapCandidates @ 0x140309490 (MiProcessLargeCoalesceBitmapCandidates.c)
 *     MiProcessLargeCoalesceCandidates @ 0x14030A3A4 (MiProcessLargeCoalesceCandidates.c)
 *     MiPerformOnDemandLargePageCoalesce @ 0x1403D5278 (MiPerformOnDemandLargePageCoalesce.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckLargePagesExist(__int64 a1)
{
  __int64 v2; // r9
  int v3; // edx
  __int64 v4; // r8
  __int64 i; // rcx

  v2 = *(_QWORD *)(a1 + 24) + 1280LL * *(unsigned int *)(a1 + 8);
  v3 = 0;
  v4 = 112LL;
LABEL_2:
  if ( v3 > *(_DWORD *)(a1 + 16) )
    return 0LL;
  for ( i = 0LL; ; ++i )
  {
    if ( i >= 1 )
    {
      ++v3;
      v4 += 2LL;
      goto LABEL_2;
    }
    if ( *(_QWORD *)(v2 + 8 * (v4 + i)) )
      break;
  }
  return 1LL;
}
