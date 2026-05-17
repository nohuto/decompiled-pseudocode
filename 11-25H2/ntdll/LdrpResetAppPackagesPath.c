/*
 * XREFs of LdrpResetAppPackagesPath @ 0x1800EED5C
 * Callers:
 *     LdrUpdatePackageSearchPath @ 0x1800EEC60 (LdrUpdatePackageSearchPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 */

__int64 LdrpResetAppPackagesPath()
{
  __int64 v0; // rbx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpDllDirectoryLock);
  if ( (_WORD)LdrpAppPackagesPath )
  {
    v0 = *((_QWORD *)&LdrpAppPackagesPath + 1);
    ++LdrpAppPackagesPathVersion;
    *((_QWORD *)&LdrpAppPackagesPath + 1) = 0LL;
    LODWORD(LdrpAppPackagesPath) = 0;
  }
  else
  {
    v0 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  if ( v0 )
    RtlpSysVolFree(v0);
  return 0LL;
}
