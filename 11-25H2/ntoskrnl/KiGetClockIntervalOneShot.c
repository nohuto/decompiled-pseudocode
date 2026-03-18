/*
 * XREFs of KiGetClockIntervalOneShot @ 0x1404435F0
 * Callers:
 *     KiSetClockIntervalOneShot @ 0x140274DA0 (KiSetClockIntervalOneShot.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140277C78 (KiSetClockIntervalToMinimumRequested.c)
 *     KiRestoreClockTickRate @ 0x1404C7BF0 (KiRestoreClockTickRate.c)
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
