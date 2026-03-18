/*
 * XREFs of VidSchResumeSchedulerForSource @ 0x1400FFDD0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiResumeFlipQueues @ 0x1400FFDEC (VidSchiResumeFlipQueues.c)
 */

__int64 __fastcall VidSchResumeSchedulerForSource(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
    return VidSchiResumeFlipQueues();
  return result;
}
