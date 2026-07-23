/*
 * XREFs of SleepstudyHelper_UnregisterComponent @ 0x1404E5ED0
 * Callers:
 *     <none>
 * Callees:
 *     SleepstudyHelperDestroyBlocker @ 0x1404778D0 (SleepstudyHelperDestroyBlocker.c)
 */

__int64 __fastcall SleepstudyHelper_UnregisterComponent(KSPIN_LOCK *a1)
{
  if ( a1 == (KSPIN_LOCK *)&SleepstudyHelperUnsupportedHandle )
    return 0LL;
  else
    return SleepstudyHelperDestroyBlocker(a1);
}
