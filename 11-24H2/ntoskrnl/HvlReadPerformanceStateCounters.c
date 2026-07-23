/*
 * XREFs of HvlReadPerformanceStateCounters @ 0x14043D5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HvlReadPerformanceStateCounters(unsigned int a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // r11
  __int128 *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int i; // eax

  v4 = a2;
  if ( a2 < 2 )
  {
    if ( a1 < (unsigned int)HvlpLogicalProcessorCount
      && (v5 = (__int128 *)((char *)HvlpLogicalProcessorRegions + 104 * a1), *((_DWORD *)v5 + 1) == a1) )
    {
LABEL_4:
      if ( v5 )
      {
LABEL_5:
        _mm_lfence();
        v6 = *((_QWORD *)v5 + 3);
        v7 = *((unsigned int *)&xmmword_140E3EE10 + 2 * v4 + 7);
        *a3 = *(_QWORD *)(v6 + 8LL * *((unsigned int *)&xmmword_140E3EE10 + 2 * v4 + 6));
        *a4 = *(_QWORD *)(v6 + 8 * v7);
        return;
      }
    }
    else
    {
      v5 = (__int128 *)HvlpLogicalProcessorRegions;
      for ( i = 0; i < (unsigned int)HvlpLogicalProcessorCount; ++i )
      {
        if ( *((_DWORD *)v5 + 1) == a1 )
          goto LABEL_4;
        v5 = (__int128 *)((char *)v5 + 104);
      }
      if ( !a1 )
      {
        v5 = &xmmword_140E3EDA0;
        goto LABEL_5;
      }
    }
  }
  *a3 = 0LL;
  *a4 = 0LL;
}
