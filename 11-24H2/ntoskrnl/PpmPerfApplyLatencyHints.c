/*
 * XREFs of PpmPerfApplyLatencyHints @ 0x14042A3A0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyLatencyHint @ 0x14042A41C (PpmPerfApplyLatencyHint.c)
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
