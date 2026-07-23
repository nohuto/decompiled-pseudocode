/*
 * XREFs of SleepstudyHelperDestroyBlocker @ 0x1404778D0
 * Callers:
 *     SleepstudyHelper_UnregisterComponent @ 0x1404E5ED0 (SleepstudyHelper_UnregisterComponent.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x140767BC0 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x140767C90 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     PopPowerRequestDelete @ 0x1409A1090 (PopPowerRequestDelete.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140AC9430 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140AC9510 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 * Callees:
 *     SshpDereferenceBlocker @ 0x140477900 (SshpDereferenceBlocker.c)
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
