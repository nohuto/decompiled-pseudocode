/*
 * XREFs of PopFxUpdateGlobalDeviceAccountingInfo @ 0x1404AF84C
 * Callers:
 *     PopFxSetDripsBlockedByDeviceActivity @ 0x1403CAC3C (PopFxSetDripsBlockedByDeviceActivity.c)
 *     PopFxSetGlobalDeviceAccountingEnabled @ 0x1404BE2A8 (PopFxSetGlobalDeviceAccountingEnabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxUpdateGlobalDeviceAccountingInfo(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  result = qword_140F0D7C8;
  if ( qword_140F0D7C8 < a1 )
  {
    v3 = a1 - qword_140F0D7C8;
    qword_140F0D7D0 += v3;
    if ( v3 >= a2 )
    {
      LODWORD(v4) = 0;
      while ( (unsigned int)v4 < 5 )
      {
        v5 = (unsigned int)v4;
        v4 = (unsigned int)(v4 + 1);
        if ( v3 >= PopFxAccountingBucketLimits[v5] && v3 < PopFxAccountingBucketLimits[v4] )
        {
          ++*((_QWORD *)&xmmword_140F0D7E0 + v5);
          *((_QWORD *)&xmmword_140F0D808 + v5) += v3;
          return result;
        }
      }
    }
    else
    {
      qword_140F0D7D8 += v3;
    }
  }
  return result;
}
