/*
 * XREFs of LdrpResetAppPackagesPath @ 0x1800E945C
 * Callers:
 *     LdrUpdatePackageSearchPath @ 0x1800E9360 (LdrUpdatePackageSearchPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 */

__int64 LdrpResetAppPackagesPath()
{
  void *v0; // rbx

  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  if ( (_WORD)LdrpAppPackagesPath )
  {
    v0 = (void *)*((_QWORD *)&LdrpAppPackagesPath + 1);
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
