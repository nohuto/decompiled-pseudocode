/*
 * XREFs of PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A18E00
 * Callers:
 *     PopPowerRequestStatsCreate @ 0x140A18B2C (PopPowerRequestStatsCreate.c)
 *     PopPowerRequestStatsInitialize @ 0x140C359C4 (PopPowerRequestStatsInitialize.c)
 * Callees:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1403D1F30 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     RtlRandomEx @ 0x14040A510 (RtlRandomEx.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A18F20 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A192D0 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SleepstudyHelperSetBlockerVerboseDescription @ 0x140A19404 (SleepstudyHelperSetBlockerVerboseDescription.c)
 */

__int64 __fastcall PopPowerRequestStatsCreateSleepstudyBlocker(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rdi
  int v8; // ebx
  __int64 v10; // [rsp+30h] [rbp-30h] BYREF
  GUID v11; // [rsp+40h] [rbp-20h] BYREF
  __int128 v12; // [rsp+50h] [rbp-10h] BYREF
  ULONG Seed; // [rsp+98h] [rbp+38h] BYREF

  v10 = 0LL;
  if ( PopPowerRequestSleepstudyHandle )
  {
    v12 = RtlRandomEx(&Seed);
    v11 = 0LL;
    if ( a2 == 7 )
    {
      v11.Data1 = -1428313379;
      LOBYTE(v11.Data2) = 6;
    }
    else
    {
      v11 = GUID_SPR_BLOCKER_GROUP_AUDIO_ACTIVITY;
    }
    v6 = SleepstudyHelperCreateBlockerFromGuid(PopPowerRequestSleepstudyHandle, &v11, &v12, a1 + 8, a2, &v10);
    v7 = v10;
    v8 = v6;
    if ( v6 >= 0 )
    {
      if ( (*(_DWORD *)a1 & 1) == 0
        || (v8 = SleepstudyHelperSetBlockerVerboseDescription(
                   v10,
                   *(unsigned __int16 *)(a1 + 40),
                   (int)a1 + 24,
                   *(_DWORD *)(a1 + 44),
                   a1 + 48),
            v8 >= 0) )
      {
        v8 = SleepstudyHelperBuildBlocker(v7, a3);
        if ( v8 >= 0 )
        {
          v7 = 0LL;
          v8 = 0;
        }
      }
    }
    if ( v7 )
      SleepstudyHelperDestroyBlockerBuilder(v7);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v8;
}
