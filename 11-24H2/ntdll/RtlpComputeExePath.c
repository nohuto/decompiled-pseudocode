/*
 * XREFs of RtlpComputeExePath @ 0x18010D270
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpComputePath @ 0x180084760 (RtlpComputePath.c)
 */

unsigned __int64 __fastcall RtlpComputeExePath(__int64 a1)
{
  unsigned __int64 EnvironmentVersion; // rdi
  void *v3; // rcx
  unsigned __int64 v4; // rbx

  EnvironmentVersion = NtCurrentPeb()->ProcessParameters->EnvironmentVersion;
  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  v3 = &unk_18017C3A8;
  if ( !a1 )
    v3 = &unk_18017C380;
  v4 = RtlpComputePath((__int64)v3, 5 - (unsigned int)(a1 != 0), 0LL, 0);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 88) = EnvironmentVersion;
    *(_BYTE *)(v4 + 116) = 0;
  }
  return v4;
}
