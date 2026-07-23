/*
 * XREFs of PpmPerfApplyLatencyHints @ 0x1403A28D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyLatencyHint @ 0x1403A294C (PpmPerfApplyLatencyHint.c)
 */

char PpmPerfApplyLatencyHints()
{
  __int64 i; // rbx
  unsigned int j; // edi

  if ( PpmCheckLatencyBoostActive )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
      {
        if ( *(_QWORD *)(1192LL * j + *(_QWORD *)(i + 312)) )
          PpmPerfApplyLatencyHint();
      }
    }
  }
  return 1;
}
