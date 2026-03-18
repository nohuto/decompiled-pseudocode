/*
 * XREFs of PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404AE9AC
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1403559B0 (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x140355C34 (PopFxSetGlobalDeviceAccountingEnabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxUpdateGlobalDeviceAccountingInfo(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  result = qword_140F0CE88;
  if ( qword_140F0CE88 < a1 )
  {
    v3 = a1 - qword_140F0CE88;
    qword_140F0CE90 += v3;
    if ( v3 >= a2 )
    {
      LODWORD(v4) = 0;
      while ( (unsigned int)v4 < 5 )
      {
        v5 = (unsigned int)v4;
        v4 = (unsigned int)(v4 + 1);
        if ( v3 >= PopFxAccountingBucketLimits[v5] && v3 < PopFxAccountingBucketLimits[v4] )
        {
          ++*((_QWORD *)&xmmword_140F0CEA0 + v5);
          *((_QWORD *)&xmmword_140F0CEC8 + v5) += v3;
          return result;
        }
      }
    }
    else
    {
      qword_140F0CE98 += v3;
    }
  }
  return result;
}
