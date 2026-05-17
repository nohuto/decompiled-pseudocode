/*
 * XREFs of RtlpComputeSearchPath @ 0x18010B010
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpLookupCurDirSetting @ 0x180083BF4 (RtlpLookupCurDirSetting.c)
 *     RtlpComputePath @ 0x180084760 (RtlpComputePath.c)
 */

unsigned __int64 RtlpComputeSearchPath()
{
  int v0; // ebx
  unsigned __int64 EnvironmentVersion; // rdi
  unsigned __int64 v2; // rbx

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
      v0 = dword_1801D23C8;
      if ( !dword_1801D23C8 )
        v0 = RtlpLookupCurDirSetting((__int64)L"*,", 0, &dword_1801D23C8);
    }
  }
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v2 = RtlpComputePath((__int64)&unk_18017C380 + 20 * v0, 5u, 0LL, 0);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 88) = EnvironmentVersion;
    *(_BYTE *)(v2 + 116) = 0;
  }
  return v2;
}
