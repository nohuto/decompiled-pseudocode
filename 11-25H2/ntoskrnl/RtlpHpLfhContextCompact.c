/*
 * XREFs of RtlpHpLfhContextCompact @ 0x1403C8290
 * Callers:
 *     RtlpHpHeapCompact @ 0x1403C7C84 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpEnvCompactionSchedule @ 0x1403BBC64 (RtlpHpEnvCompactionSchedule.c)
 *     RtlpHpLfhOwnerCompact @ 0x1403C801C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1403C8930 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhPrivateSlotsCompact @ 0x1405FAC6C (RtlpHpLfhPrivateSlotsCompact.c)
 */

void __fastcall RtlpHpLfhContextCompact(__int64 *a1)
{
  int v2; // ebp
  __int64 *v3; // r14
  __int64 v4; // r15
  __int64 v5; // rsi
  signed int v6; // ebx
  int v7; // eax

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
          v6 = RtlpHpLfhHeatMapQuery(a1, a1 + 24, v5);
          RtlpHpLfhOwnerCompact((__int64)a1, v5, v6);
          if ( v6 >= 1 )
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
        v7 = ExpHpGCScheduledNonPaged;
      else
        v7 = ExpHpGCScheduledPaged;
      if ( !v7 )
        RtlpHpEnvCompactionSchedule(*(_QWORD **)(*a1 + 56));
    }
  }
}
