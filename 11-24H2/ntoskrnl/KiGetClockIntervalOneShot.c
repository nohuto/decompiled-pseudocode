/*
 * XREFs of KiGetClockIntervalOneShot @ 0x1404446C0
 * Callers:
 *     KiSetClockIntervalOneShot @ 0x14029D85C (KiSetClockIntervalOneShot.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402A0A58 (KiSetClockIntervalToMinimumRequested.c)
 *     KiRestoreClockTickRate @ 0x1404C89B0 (KiRestoreClockTickRate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetClockIntervalOneShot(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)KeMinimumIncrement;
  if ( a1 > a2 + (unsigned __int64)(unsigned int)KeMinimumIncrement )
    return KeMinimumIncrement * (((int)a1 + KeMinimumIncrement - (int)a2 - 1) / (unsigned int)KeMinimumIncrement);
  return result;
}
