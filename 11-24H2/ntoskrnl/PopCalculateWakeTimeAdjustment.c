/*
 * XREFs of PopCalculateWakeTimeAdjustment @ 0x1407513AC
 * Callers:
 *     PopValidateRTCWake @ 0x140B6D334 (PopValidateRTCWake.c)
 * Callees:
 *     PpmConvertTime @ 0x14032D070 (PpmConvertTime.c)
 *     PopPowerTransitionTimesInMs @ 0x1404ABDF0 (PopPowerTransitionTimesInMs.c)
 */

unsigned __int64 PopCalculateWakeTimeAdjustment()
{
  unsigned __int64 result; // rax
  unsigned int v1; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v1 = 0;
  if ( dword_140F0B12C == 4 )
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
  return PpmConvertTime(qword_140F0B490, PopQpcFrequency, 0x3E8uLL);
}
