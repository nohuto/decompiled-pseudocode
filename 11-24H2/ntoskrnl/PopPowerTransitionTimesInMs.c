/*
 * XREFs of PopPowerTransitionTimesInMs @ 0x1404A62DC
 * Callers:
 *     PopCalculateWakeTimeAdjustment @ 0x14074F6CC (PopCalculateWakeTimeAdjustment.c)
 *     PopDiagTracePowerTransitionTime @ 0x140A7E06C (PopDiagTracePowerTransitionTime.c)
 * Callees:
 *     PopQpcTimeInMs @ 0x140B6BC70 (PopQpcTimeInMs.c)
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
    result = PopQpcTimeInMs(&qword_140F0BF48, &qword_140F0BF50);
    *a1 = result;
  }
  if ( a2 )
  {
    result = PopQpcTimeInMs(&qword_140F0BF68, &qword_140F0BF70);
    *a2 = result;
  }
  if ( a5 )
  {
    a5 = 0LL;
    result = PopQpcTimeInMs(&a5, &qword_140F0BF88);
    *v12 = result;
    if ( dword_140F0C198 )
    {
      result = (unsigned int)(qword_140F0C010 + result);
      *v12 = result;
    }
  }
  if ( a3 )
  {
    result = qword_140F0BFD0 / v11;
    *a3 = qword_140F0BFD0 / v11;
  }
  if ( a4 )
  {
    result = (qword_140F0C110 + qword_140F0C048) / v11;
    *a4 = result;
  }
  if ( a6 )
  {
    result = qword_140F0BFB0 / v11;
    *a6 = qword_140F0BFB0 / v11;
  }
  return result;
}
