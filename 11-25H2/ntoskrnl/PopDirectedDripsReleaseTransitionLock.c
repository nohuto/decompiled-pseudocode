/*
 * XREFs of PopDirectedDripsReleaseTransitionLock @ 0x140A3BF88
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x140A3B814 (PopDirectedDripsSuspendDevices.c)
 *     PopDirectedDripsResumeDevices @ 0x140A3BEB0 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     PopReleaseTransitionLock @ 0x140AA0354 (PopReleaseTransitionLock.c)
 */

__int64 __fastcall PopDirectedDripsReleaseTransitionLock(void *a1)
{
  __int64 result; // rax

  _m_prefetchw(a1);
  result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFBF);
  if ( (result & 0x40) != 0 )
    return PopReleaseTransitionLock(7LL);
  return result;
}
