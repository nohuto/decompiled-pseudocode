/*
 * XREFs of RtlpComputeDllPath @ 0x1800063D0
 * Callers:
 *     RtlpGetCachedPath @ 0x180006160 (RtlpGetCachedPath.c)
 * Callees:
 *     RtlpLookupCurDirSetting @ 0x180005AA0 (RtlpLookupCurDirSetting.c)
 *     RtlpComputePath @ 0x180006610 (RtlpComputePath.c)
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall RtlpComputeDllPath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  int v3; // ebx
  char *v4; // rcx
  __int64 v5; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( LdrpDllDirectory.Buffer )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
    if ( LdrpDllDirectory.Buffer )
    {
      v4 = (char *)&unk_18017735C;
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v3 = dword_1801D13B0;
  if ( !dword_1801D13B0 )
    v3 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_180172070, 1u, &dword_1801D13B0);
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v4 = (char *)&unk_180177320 + 20 * v3;
LABEL_5:
  v5 = RtlpComputePath(v4, 5LL, a1);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 88) = EnvironmentVersion;
    *(_BYTE *)(v5 + 116) = 0;
  }
  return v5;
}
