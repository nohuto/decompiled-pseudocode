/*
 * XREFs of PspUpdateJobPeakProcessMemory @ 0x1409E55F8
 * Callers:
 *     PspFoldProcessAccountingIntoJob @ 0x1409E5458 (PspFoldProcessAccountingIntoJob.c)
 * Callees:
 *     <none>
 */

void __fastcall PspUpdateJobPeakProcessMemory(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx

  if ( a2 > *(_QWORD *)(a1 + 712) )
  {
    _m_prefetchw((const void *)(a1 + 712));
    v3 = *(_QWORD *)(a1 + 712);
    do
    {
      if ( a2 <= v3 )
        break;
      v4 = v3;
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 712), a2, v3);
    }
    while ( v3 != v4 );
  }
}
