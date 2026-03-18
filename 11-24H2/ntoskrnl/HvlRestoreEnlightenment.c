/*
 * XREFs of HvlRestoreEnlightenment @ 0x14058308C
 * Callers:
 *     PopHiberCheckResume @ 0x140B6E970 (PopHiberCheckResume.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     HvlpTryConfigureInterface @ 0x14058B81C (HvlpTryConfigureInterface.c)
 *     HvlpPhase0Enlightenments @ 0x14058BF18 (HvlpPhase0Enlightenments.c)
 */

__int64 __fastcall HvlRestoreEnlightenment(char a1)
{
  __int64 result; // rax
  int v2; // eax

  result = HvlpEnlightenments;
  HvlEnlightenments = HvlpEnlightenments;
  if ( a1 == 1 )
  {
    result = HvlpFlags;
    if ( (HvlpFlags & 2) == 0 && !VslVsmEnabled )
    {
      v2 = HvlpTryConfigureInterface(0LL);
      if ( v2 < 0 )
        KeBugCheckEx(0x20001u, v2, 0LL, 0LL, 0LL);
      result = HvlpPhase0Enlightenments(0LL);
      if ( (int)result < 0 )
        KeBugCheckEx(0x20001u, (int)result, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
