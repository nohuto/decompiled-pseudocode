/*
 * XREFs of IoSetIoPriorityHintIntoThread @ 0x14032F240
 * Callers:
 *     <none>
 * Callees:
 *     PsSetIoPriorityThread @ 0x140330D1C (PsSetIoPriorityThread.c)
 */

__int64 __fastcall IoSetIoPriorityHintIntoThread(__int64 a1, unsigned int a2)
{
  if ( a2 >= 5 )
    return 3221225485LL;
  PsSetIoPriorityThread();
  return 0LL;
}
