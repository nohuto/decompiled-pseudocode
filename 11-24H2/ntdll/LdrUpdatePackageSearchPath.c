/*
 * XREFs of LdrUpdatePackageSearchPath @ 0x1800E9360
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     LdrpResetAppPackagesPath @ 0x1800E945C (LdrpResetAppPackagesPath.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

NTSTATUS __cdecl LdrUpdatePackageSearchPath(PWSTR SearchPathA)
{
  NTSTATUS v1; // ebx
  __int64 v3; // rdi
  size_t v4; // rdi
  _WORD *Atom; // rax
  _WORD *v7; // r14
  void *v8; // rsi

  v1 = 0;
  if ( !SearchPathA )
    return LdrpResetAppPackagesPath();
  v3 = -1LL;
  do
    ++v3;
  while ( SearchPathA[v3] );
  v4 = 2 * v3;
  if ( !v4 )
    return LdrpResetAppPackagesPath();
  if ( v4 >= 0xFFFE )
    return -1073741562;
  Atom = RtlpAllocateAtom(v4 + 2);
  v7 = Atom;
  if ( !Atom )
    return -1073741801;
  memmove(Atom, SearchPathA, v4);
  v7[v4 >> 1] = 0;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v8 = (void *)*((_QWORD *)&LdrpAppPackagesPath + 1);
  ++LdrpAppPackagesPathVersion;
  LOWORD(LdrpAppPackagesPath) = v4;
  WORD1(LdrpAppPackagesPath) = v4 + 2;
  *((_QWORD *)&LdrpAppPackagesPath + 1) = v7;
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  if ( v8 != *((void **)&LdrpOriginalAppPackagesPath + 1) )
    RtlpSysVolFree(v8);
  return v1;
}
