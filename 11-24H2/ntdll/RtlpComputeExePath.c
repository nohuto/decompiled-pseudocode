/*
 * XREFs of RtlpComputeExePath @ 0x180108200
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputePath @ 0x180006610 (RtlpComputePath.c)
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 */

int *__fastcall RtlpComputeExePath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  void *v3; // rcx
  int *v4; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v3 = &unk_180177348;
  if ( !a1 )
    v3 = &unk_180177320;
  v4 = RtlpComputePath((__int64)v3, 5 - (unsigned int)(a1 != 0), 0LL, 0);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v4 )
  {
    *((_QWORD *)v4 + 11) = EnvironmentVersion;
    *((_BYTE *)v4 + 116) = 0;
  }
  return v4;
}
