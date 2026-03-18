/*
 * XREFs of PopPowerTransitionTimesInMs @ 0x1404AA960
 * Callers:
 *     PopCalculateWakeTimeAdjustment @ 0x1407452DC (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTracePowerTransitionTime @ 0x140A8009C (PopDiagTracePowerTransitionTime.c)
 * Callees:
 *     PopQpcTimeInMs @ 0x140B5AA60 (PopQpcTimeInMs.c)
 */

unsigned __int64 __fastcall PopPowerTransitionTimesInMs(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        _DWORD *a6)
{
  unsigned __int64 result; // rax
  unsigned __int64 v11; // r11
  _DWORD *v12; // r10

  result = (unsigned __int64)KeGetCurrentPrcb();
  v11 = 1000LL * *(unsigned int *)(result + 68);
  if ( a1 )
  {
    result = PopQpcTimeInMs(&qword_140F0B068, &qword_140F0B070);
    *a1 = result;
  }
  if ( a2 )
  {
    result = PopQpcTimeInMs(&qword_140F0B088, &qword_140F0B090);
    *a2 = result;
  }
  if ( a5 )
  {
    a5 = 0LL;
    result = PopQpcTimeInMs(&a5, &qword_140F0B0A8);
    *v12 = result;
    if ( dword_140F0B2B8 )
    {
      result = (unsigned int)(qword_140F0B130 + result);
      *v12 = result;
    }
  }
  if ( a3 )
  {
    result = qword_140F0B0F0 / v11;
    *a3 = qword_140F0B0F0 / v11;
  }
  if ( a4 )
  {
    result = (qword_140F0B230 + qword_140F0B168) / v11;
    *a4 = result;
  }
  if ( a6 )
  {
    result = qword_140F0B0D0 / v11;
    *a6 = qword_140F0B0D0 / v11;
  }
  return result;
}
