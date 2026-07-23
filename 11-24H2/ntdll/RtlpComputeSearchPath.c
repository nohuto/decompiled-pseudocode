/*
 * XREFs of RtlpComputeSearchPath @ 0x180105DB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLookupCurDirSetting @ 0x180005AA0 (RtlpLookupCurDirSetting.c)
 *     RtlpComputePath @ 0x180006610 (RtlpComputePath.c)
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 */

int *RtlpComputeSearchPath()
{
  int v0; // ebx
  unsigned __int64 EnvironmentVersion; // rdi
  int *v2; // rbx

  v0 = 1;
  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( (RtlpSearchPathMode & 1) == 0 )
  {
    if ( (RtlpSearchPathMode & 0x10000) != 0 )
    {
      v0 = 0;
    }
    else
    {
      v0 = dword_1801D13C8;
      if ( !dword_1801D13C8 )
        v0 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_180173028, 0, &dword_1801D13C8);
    }
  }
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v2 = RtlpComputePath((__int64)&unk_180177320 + 20 * v0, 5u, 0LL, 0);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v2 )
  {
    *((_QWORD *)v2 + 11) = EnvironmentVersion;
    *((_BYTE *)v2 + 116) = 0;
  }
  return v2;
}
