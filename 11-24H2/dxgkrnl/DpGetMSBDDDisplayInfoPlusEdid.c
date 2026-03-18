/*
 * XREFs of DpGetMSBDDDisplayInfoPlusEdid @ 0x140234D90
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoIsMsBddAnchoredDevice @ 0x140058E78 (DpiFdoIsMsBddAnchoredDevice.c)
 */

__int64 __fastcall DpGetMSBDDDisplayInfoPlusEdid(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rdx
  __int64 result; // rax

  if ( a1 && a2 )
  {
    if ( DpiFdoIsMsBddAnchoredDevice(a1) )
    {
      *v2 = xmmword_140161070;
      v2[1] = *(&xmmword_140161070 + 1);
      v2[2] = *(&xmmword_140161070 + 2);
      v2[3] = *(&xmmword_140161070 + 3);
      v2[4] = *(&xmmword_140161070 + 4);
      v2[5] = *(&xmmword_140161070 + 5);
      v2[6] = *(&xmmword_140161070 + 6);
      v2[7] = *(&xmmword_140161070 + 7);
      v2[8] = *(&xmmword_140161070 + 8);
      result = 0LL;
      v2[9] = *(&xmmword_140161070 + 9);
    }
    else
    {
      WdLogSingleEntry1(3LL, -1071774664LL);
      result = 3223192632LL;
      WdLogGlobalForLineNumber = 1656;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1647;
  }
  return result;
}
