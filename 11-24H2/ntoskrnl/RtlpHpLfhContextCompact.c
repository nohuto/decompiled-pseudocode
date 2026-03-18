/*
 * XREFs of RtlpHpLfhContextCompact @ 0x1402B445C
 * Callers:
 *     RtlpHpHeapCompact @ 0x1402B39E4 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpEnvCompactionSchedule @ 0x1402B389C (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1402B4550 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerCompact @ 0x1402B461C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotsCompact @ 0x140606FAC (RtlpHpLfhPrivateSlotsCompact.c)
 */

void __fastcall RtlpHpLfhContextCompact(__int64 *a1)
{
  int v2; // ebp
  __int64 *v3; // r14
  __int64 v4; // r15
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rbx

  if ( *((_DWORD *)a1 + 19) )
  {
    v2 = 0;
    if ( (a1[9] & 1) != 0 )
      v2 = RtlpHpLfhPrivateSlotsCompact();
    v3 = a1 + 56;
    v4 = 128LL;
    do
    {
      v5 = 0LL;
      if ( (*v3 & 1) == 0 )
        v5 = *v3;
      if ( v5 )
      {
        if ( *(_BYTE *)(v5 + 92) )
        {
          *(_BYTE *)(v5 + 92) = 0;
          v7 = (unsigned int)RtlpHpLfhHeatMapQuery(a1, a1 + 24, v5);
          RtlpHpLfhOwnerCompact(a1, v5, v7);
          if ( (int)v7 >= 1 )
          {
            *(_BYTE *)(v5 + 92) = 1;
            ++v2;
          }
        }
      }
      ++v3;
      --v4;
    }
    while ( v4 );
    if ( v2 )
    {
      if ( BYTE1(**(_QWORD **)(*a1 + 56)) == 1 )
        v6 = ExpHpGCScheduledNonPaged;
      else
        v6 = ExpHpGCScheduledPaged;
      if ( !v6 )
        RtlpHpEnvCompactionSchedule(*(_QWORD **)(*a1 + 56));
    }
  }
}
