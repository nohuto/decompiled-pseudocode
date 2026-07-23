/*
 * XREFs of PopCalculateWakeTimeAdjustment @ 0x14074F6CC
 * Callers:
 *     PopValidateRTCWake @ 0x140B6EBD4 (PopValidateRTCWake.c)
 * Callees:
 *     PpmConvertTime @ 0x140437380 (PpmConvertTime.c)
 *     PopPowerTransitionTimesInMs @ 0x1404A62DC (PopPowerTransitionTimesInMs.c)
 */

unsigned __int64 PopCalculateWakeTimeAdjustment()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_140F0B9AC == 4 )
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
  return PpmConvertTime(qword_140F0C0D0, PopQpcFrequency, 0x3E8uLL);
}
