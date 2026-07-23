/*
 * XREFs of RtlpComputeSearchPath @ 0x1800AAB60
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpLookupCurDirSetting @ 0x1800ABF84 (RtlpLookupCurDirSetting.c)
 *     RtlpComputePath @ 0x1800ACAF0 (RtlpComputePath.c)
 */

__int64 RtlpComputeSearchPath()
{
  int v0; // ebx
  unsigned __int64 EnvironmentVersion; // rdi
  __int64 v2; // rbx

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
      v0 = dword_1801D4410;
      if ( !dword_1801D4410 )
        v0 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_1801759D8);
    }
  }
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v2 = RtlpComputePath((char *)&unk_18017F3A0 + 20 * v0, 5LL, 0LL);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 88) = EnvironmentVersion;
    *(_BYTE *)(v2 + 116) = 0;
  }
  return v2;
}
