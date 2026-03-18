/*
 * XREFs of DpGetMSBDDDisplayInfoPlusEdid @ 0x14022E530
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoIsMsBddAnchoredDevice @ 0x1400593B8 (DpiFdoIsMsBddAnchoredDevice.c)
 */

__int64 __fastcall DpGetMSBDDDisplayInfoPlusEdid(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rdx
  __int64 result; // rax

  if ( a1 && a2 )
  {
    if ( DpiFdoIsMsBddAnchoredDevice(a1) )
    {
      *v2 = xmmword_14015E0B0;
      v2[1] = *(&xmmword_14015E0B0 + 1);
      v2[2] = *(&xmmword_14015E0B0 + 2);
      v2[3] = *(&xmmword_14015E0B0 + 3);
      v2[4] = *(&xmmword_14015E0B0 + 4);
      v2[5] = *(&xmmword_14015E0B0 + 5);
      v2[6] = *(&xmmword_14015E0B0 + 6);
      v2[7] = *(&xmmword_14015E0B0 + 7);
      v2[8] = *(&xmmword_14015E0B0 + 8);
      result = 0LL;
      v2[9] = *(&xmmword_14015E0B0 + 9);
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
