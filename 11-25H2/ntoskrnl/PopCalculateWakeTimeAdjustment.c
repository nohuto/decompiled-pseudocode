/*
 * XREFs of PopCalculateWakeTimeAdjustment @ 0x1407452DC
 * Callers:
 *     PopValidateRTCWake @ 0x140B5E254 (PopValidateRTCWake.c)
 * Callees:
 *     PpmConvertTime @ 0x1403E7C50 (PpmConvertTime.c)
 *     PopPowerTransitionTimesInMs @ 0x1404AA960 (PopPowerTransitionTimesInMs.c)
 */

unsigned __int64 PopCalculateWakeTimeAdjustment()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_140F0AE8C == 4 )
  {
    if ( !PoResumeFromHibernate )
    {
      PopPowerTransitionTimesInMs(0LL, 0LL, 0LL, 0LL, (__int64)&v1, 0LL);
      return v1;
    }
  }
  else if ( !PoResumeFromHibernate )
  {
    return result;
  }
  return PpmConvertTime(qword_140F0B1F0, PopQpcFrequency, 0x3E8uLL);
}
