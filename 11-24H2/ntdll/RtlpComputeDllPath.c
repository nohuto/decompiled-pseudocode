/*
 * XREFs of RtlpComputeDllPath @ 0x180084520
 * Callers:
 *     RtlpGetCachedPath @ 0x1800842B0 (RtlpGetCachedPath.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpLookupCurDirSetting @ 0x180083BF4 (RtlpLookupCurDirSetting.c)
 *     RtlpComputePath @ 0x180084760 (RtlpComputePath.c)
 */

__int64 __fastcall RtlpComputeDllPath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  int v3; // ebx
  char *v4; // rcx
  __int64 v5; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  if ( *((_QWORD *)&LdrpDllDirectory + 1) )
  {
    RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
    if ( *((_QWORD *)&LdrpDllDirectory + 1) )
    {
      v4 = (char *)&unk_18017C3BC;
      goto LABEL_5;
    }
    RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  }
  v3 = dword_1801D23A8;
  if ( !dword_1801D23A8 )
    v3 = RtlpLookupCurDirSetting((__int64)L"\"$", 1u, &dword_1801D23A8);
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v4 = (char *)&unk_18017C380 + 20 * v3;
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
