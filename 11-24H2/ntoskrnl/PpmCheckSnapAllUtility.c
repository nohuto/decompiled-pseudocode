/*
 * XREFs of PpmCheckSnapAllUtility @ 0x1404073F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkSnapNodeStatistics @ 0x140230C2C (PpmParkSnapNodeStatistics.c)
 *     PpmPerfSnapUtility @ 0x140407500 (PpmPerfSnapUtility.c)
 */

char PpmCheckSnapAllUtility()
{
  unsigned __int64 v0; // rbx
  unsigned __int16 i; // di
  unsigned __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 j; // rbx
  unsigned int k; // edi
  __int64 v7; // rcx

  PpmParkSnapNodeStatistics();
  v0 = PpmCheckRegistered.Bitmap[0];
  for ( i = 0; ; v0 = PpmCheckRegistered.Bitmap[i] )
  {
    while ( v0 )
    {
      _BitScanForward64(&v2, v0);
      v0 &= ~(1LL << v2);
      v3 = *((unsigned int *)qword_140F22998 + 64 * i + (unsigned __int8)v2);
      if ( (unsigned int)v3 >= (unsigned int)KeNumberProcessors_0 )
        v4 = 0LL;
      else
        v4 = KiProcessorBlock[v3];
      PpmPerfSnapUtility(v4 + 35248);
    }
    if ( ++i >= (unsigned int)PpmCheckRegistered.Count )
      break;
  }
  for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
  {
    for ( k = 0; k < *(_DWORD *)(j + 296); ++k )
    {
      v7 = *(_QWORD *)(j + 312) + 1192LL * k;
      if ( *(_DWORD *)(v7 + 16) == 1 )
        PpmPerfSnapUtility(*(_QWORD *)v7);
    }
  }
  return 1;
}
