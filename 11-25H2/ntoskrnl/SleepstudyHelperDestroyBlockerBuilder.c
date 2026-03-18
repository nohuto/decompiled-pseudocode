/*
 * XREFs of SleepstudyHelperDestroyBlockerBuilder @ 0x140A1A000
 * Callers:
 *     SleepstudyHelperCreateBlockerFromGuid @ 0x1403DF2C0 (SleepstudyHelperCreateBlockerFromGuid.c)
 *     SleepstudyHelperCreateBlockerFromComponent @ 0x140757E30 (SleepstudyHelperCreateBlockerFromComponent.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x140757FD0 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1407580B0 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 *     SleepstudyHelperCreateBlockerFromDevice @ 0x140A19740 (SleepstudyHelperCreateBlockerFromDevice.c)
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A19B2C (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     SleepstudyHelperBuildBlocker @ 0x140A19C50 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140AC49E0 (SleepstudyHelper_RegisterComponentEx.c)
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140AC4AD0 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 *     PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140C1DA64 (PopUserShutdownInitializeSleepstudyDiagnostics.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     SshpDereferenceBlocker @ 0x14047CBC0 (SshpDereferenceBlocker.c)
 */

__int64 __fastcall SleepstudyHelperDestroyBlockerBuilder(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  void *v4; // rcx
  ULONG v5; // esi
  void *v6; // rcx
  void *v7; // rcx
  KSPIN_LOCK *v8; // rcx

  v1 = 0;
  if ( a1 )
  {
    v3 = *a1;
    v4 = (void *)a1[7];
    v5 = *(_DWORD *)(v3 + 24);
    if ( v4 )
    {
      *((_DWORD *)a1 + 12) = 0;
      CmpFreeTransientPoolWithTag(v4, v5);
      a1[7] = 0LL;
    }
    v6 = (void *)a1[8];
    if ( v6 )
      CmpFreeTransientPoolWithTag(v6, v5);
    v7 = (void *)a1[9];
    if ( v7 )
      CmpFreeTransientPoolWithTag(v7, v5);
    v8 = (KSPIN_LOCK *)a1[10];
    if ( v8 )
      SshpDereferenceBlocker(v8, 1, 1);
    CmpFreeTransientPoolWithTag(a1, v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
