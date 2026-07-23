/*
 * XREFs of PpmCheckRecordAllUtility @ 0x140401740
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfRecordUtility @ 0x140401850 (PpmPerfRecordUtility.c)
 *     PpmParkRecordNodeStatistics @ 0x140401FC4 (PpmParkRecordNodeStatistics.c)
 */

char PpmCheckRecordAllUtility()
{
  unsigned __int64 v0; // rbx
  unsigned __int16 i; // di
  unsigned __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 j; // rdi
  unsigned int k; // ebx
  __int64 v7; // rcx

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
      PpmPerfRecordUtility(v4 + 35248);
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
        PpmPerfRecordUtility(*(_QWORD *)v7);
    }
  }
  PpmParkRecordNodeStatistics();
  return 1;
}
