/*
 * XREFs of RtlpComputeExePath @ 0x18010FCA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpComputePath @ 0x1800ACAF0 (RtlpComputePath.c)
 */

int *__fastcall RtlpComputeExePath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  void *v3; // rcx
  int *v4; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v3 = &unk_18017F3C8;
  if ( !a1 )
    v3 = &unk_18017F3A0;
  v4 = RtlpComputePath((__int64)v3, 5 - (unsigned int)(a1 != 0), 0LL, 0);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v4 )
  {
    *((_QWORD *)v4 + 11) = EnvironmentVersion;
    *((_BYTE *)v4 + 116) = 0;
  }
  return v4;
}
