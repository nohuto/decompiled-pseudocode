/*
 * XREFs of SleepstudyHelperCreateBlockerFromGuid @ 0x1403DF2C0
 * Callers:
 *     PopPowerRequestStatsCreateSleepstudyBlocker @ 0x140A19B2C (PopPowerRequestStatsCreateSleepstudyBlocker.c)
 *     SleepstudyHelper_RegisterComponentEx @ 0x140AC49E0 (SleepstudyHelper_RegisterComponentEx.c)
 *     PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140C1DA64 (PopUserShutdownInitializeSleepstudyDiagnostics.c)
 * Callees:
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x1403DF3A0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140A1A000 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SSHSupportAllocatePaged @ 0x140A4ACBC (SSHSupportAllocatePaged.c)
 */

__int64 __fastcall SleepstudyHelperCreateBlockerFromGuid(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        __int64 *a6)
{
  unsigned int v6; // ebx
  __int64 Paged; // rax
  __int64 v12; // rdi
  __int128 v13; // xmm1
  int v14; // ebp

  v6 = 0;
  if ( a1
    && a2
    && a3
    && a4
    && a5 <= 8
    && a6
    && (Paged = SSHSupportAllocatePaged(96LL, *(unsigned int *)(a1 + 24)), (v12 = Paged) != 0) )
  {
    *(_QWORD *)Paged = a1;
    *(_DWORD *)(Paged + 8) = a5;
    *(_OWORD *)(Paged + 16) = *a2;
    v13 = *a3;
    *(_BYTE *)(Paged + 88) = 1;
    *(_OWORD *)(Paged + 32) = v13;
    v14 = SleepstudyHelperSetBlockerFriendlyName(Paged, a4);
    if ( v14 < 0 )
    {
      SleepstudyHelperDestroyBlockerBuilder(v12);
      return (unsigned int)v14;
    }
    else
    {
      *a6 = v12;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
