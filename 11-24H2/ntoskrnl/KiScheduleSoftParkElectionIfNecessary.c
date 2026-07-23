/*
 * XREFs of KiScheduleSoftParkElectionIfNecessary @ 0x14041E46C
 * Callers:
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x14041E2F0 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 */

char __fastcall KiScheduleSoftParkElectionIfNecessary(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx

  LOBYTE(v1) = KeSoftParkedQueueThreshold;
  if ( KeSoftParkedQueueThreshold )
  {
    if ( *(_QWORD *)(a1 + 792) > (unsigned __int64)(unsigned int)KeSoftParkedQueueThreshold )
    {
      v3 = *(_QWORD *)(KiProcessorBlock[*((unsigned int *)qword_140F22998
                                        + 64 * (unsigned __int64)*(unsigned __int16 *)(a1 + 710)
                                        + *(unsigned __int8 *)(a1 + 705))]
                     + 192);
      v1 = *(_QWORD *)(v3 + 96);
      if ( (~*(_QWORD *)(v3 + 80) & v1) != 0 && !*(_BYTE *)(a1 + 788) )
      {
        *(_BYTE *)(a1 + 788) = 1;
        LOBYTE(v1) = KeInsertQueueDpc((PRKDPC)(a1 + 800), 0LL, 0LL);
      }
    }
  }
  return v1;
}
