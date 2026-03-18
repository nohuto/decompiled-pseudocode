/*
 * XREFs of SleepstudyHelperDestroyBlocker @ 0x14047CB90
 * Callers:
 *     SleepstudyHelper_UnregisterComponent @ 0x1404EB810 (SleepstudyHelper_UnregisterComponent.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x140757FD0 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1407580B0 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     PopPowerRequestDelete @ 0x140A414A0 (PopPowerRequestDelete.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140AC49E0 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140AC4AD0 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 * Callees:
 *     SshpDereferenceBlocker @ 0x14047CBC0 (SshpDereferenceBlocker.c)
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
