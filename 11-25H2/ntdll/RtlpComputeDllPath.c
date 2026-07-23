/*
 * XREFs of RtlpComputeDllPath @ 0x1800AC8B0
 * Callers:
 *     RtlpGetCachedPath @ 0x1800AC640 (RtlpGetCachedPath.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpLookupCurDirSetting @ 0x1800ABF84 (RtlpLookupCurDirSetting.c)
 *     RtlpComputePath @ 0x1800ACAF0 (RtlpComputePath.c)
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
      v4 = (char *)&unk_18017F3DC;
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v3 = dword_1801D43F8;
  if ( !dword_1801D43F8 )
    v3 = RtlpLookupCurDirSetting((PUNICODE_STRING)&stru_1801758D0, 1u, &dword_1801D43F8);
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v4 = (char *)&unk_18017F3A0 + 20 * v3;
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
