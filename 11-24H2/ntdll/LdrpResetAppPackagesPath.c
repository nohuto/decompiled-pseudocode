/*
 * XREFs of LdrpResetAppPackagesPath @ 0x1800EE27C
 * Callers:
 *     LdrUpdatePackageSearchPath @ 0x1800EE180 (LdrUpdatePackageSearchPath.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrpResetAppPackagesPath(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  __int64 v3; // rbx

  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpDllDirectoryLock, a2, a3);
  if ( (_WORD)LdrpAppPackagesPath )
  {
    v3 = *((_QWORD *)&LdrpAppPackagesPath + 1);
    ++LdrpAppPackagesPathVersion;
    *((_QWORD *)&LdrpAppPackagesPath + 1) = 0LL;
    LODWORD(LdrpAppPackagesPath) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  if ( v3 )
    RtlpSysVolFree(v3);
  return 0LL;
}
