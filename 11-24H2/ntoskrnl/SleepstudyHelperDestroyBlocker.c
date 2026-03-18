/*
 * XREFs of SleepstudyHelperDestroyBlocker @ 0x14047C6C0
 * Callers:
 *     SleepstudyHelper_UnregisterComponent @ 0x1404EE770 (SleepstudyHelper_UnregisterComponent.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x140767990 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x140767A70 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     PopPowerRequestDelete @ 0x1409BAA40 (PopPowerRequestDelete.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140ACB790 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140ACB880 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 * Callees:
 *     SshpDereferenceBlocker @ 0x14047C6F0 (SshpDereferenceBlocker.c)
 */

__int64 __fastcall SleepstudyHelperDestroyBlocker(KSPIN_LOCK *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    SshpDereferenceBlocker(a1);
  else
    return (unsigned int)-1073741811;
  return v1;
}
