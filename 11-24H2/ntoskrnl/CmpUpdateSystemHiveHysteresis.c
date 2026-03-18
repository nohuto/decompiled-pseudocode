/*
 * XREFs of CmpUpdateSystemHiveHysteresis @ 0x140A5B334
 * Callers:
 *     HvpAddBin @ 0x140980584 (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x140A4FDCC (HvFreeHivePartial.c)
 * Callees:
 *     CmpDoQueueSystemHiveHysteresis @ 0x1407D226C (CmpDoQueueSystemHiveHysteresis.c)
 */

void __fastcall CmpUpdateSystemHiveHysteresis(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // eax

  if ( a1 == qword_140E09A70 && CmpSystemHiveHysteresisCallback )
  {
    v3 = 100 * (a2 + 4096) / CmSystemHiveLimitSize;
    if ( a2 <= a3 )
    {
      if ( !CmpSystemHiveHysteresisLowSeen && v3 < CmpSystemHiveHysteresisLow )
      {
        CmpSystemHiveHysteresisLowSeen = 1;
        if ( CmpSystemHiveHysteresisHighSeen == 1 )
        {
          if ( CmpDoQueueSystemHiveHysteresis(v3) != 1 )
            goto LABEL_9;
LABEL_14:
          CmpSystemHiveHysteresisHighSeen = 0;
        }
      }
    }
    else if ( !CmpSystemHiveHysteresisHighSeen && v3 > CmpSystemHiveHysteresisHigh )
    {
      CmpSystemHiveHysteresisHighSeen = 1;
      if ( CmpSystemHiveHysteresisLowSeen == 1 )
      {
        if ( CmpDoQueueSystemHiveHysteresis(v3) == 1 )
        {
LABEL_9:
          CmpSystemHiveHysteresisLowSeen = 0;
          return;
        }
        goto LABEL_14;
      }
    }
  }
}
