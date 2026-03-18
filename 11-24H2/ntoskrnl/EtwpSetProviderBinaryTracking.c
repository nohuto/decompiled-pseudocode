/*
 * XREFs of EtwpSetProviderBinaryTracking @ 0x140A45A78
 * Callers:
 *     NtTraceControl @ 0x140834A80 (NtTraceControl.c)
 * Callees:
 *     EtwpGetNextGuidEntry @ 0x14083D5B0 (EtwpGetNextGuidEntry.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 *     EtwpTrackGuidEntryRegistrations @ 0x140A45B44 (EtwpTrackGuidEntryRegistrations.c)
 */

__int64 __fastcall EtwpSetProviderBinaryTracking(__int64 a1, unsigned int a2, char a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int *v7; // rdi
  _DWORD *i; // rdx
  _QWORD *NextGuidEntry; // rax
  _DWORD *v10; // rsi
  _DWORD *j; // rdx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _DWORD *v14; // rsi

  v5 = 0;
  v6 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 0);
  v7 = (unsigned int *)v6;
  if ( v6 )
  {
    if ( a3 )
    {
      _InterlockedOr((volatile signed __int32 *)(v6 + 816), 0x2000000u);
      for ( i = 0LL; ; i = v10 )
      {
        NextGuidEntry = EtwpGetNextGuidEntry(a1, i, 0);
        v10 = NextGuidEntry;
        if ( !NextGuidEntry )
          break;
        EtwpTrackGuidEntryRegistrations(v7, NextGuidEntry, 0LL);
      }
      for ( j = 0LL; ; j = v14 )
      {
        v12 = EtwpGetNextGuidEntry(a1, j, 2u);
        v14 = v12;
        if ( !v12 )
          break;
        LOBYTE(v13) = 2;
        EtwpTrackGuidEntryRegistrations(v7, v12, v13);
      }
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v6 + 816), 0xFDFFFFFF);
    }
    EtwpReleaseLoggerContext(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
