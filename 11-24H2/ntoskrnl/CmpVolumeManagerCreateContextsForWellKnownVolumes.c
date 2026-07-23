/*
 * XREFs of CmpVolumeManagerCreateContextsForWellKnownVolumes @ 0x1406F6E90
 * Callers:
 *     CmInitSystem2 @ 0x140C61648 (CmInitSystem2.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpVolumeContextLockExclusive @ 0x1407D8DF8 (CmpVolumeContextLockExclusive.c)
 *     CmpVolumeContextUnlockExclusive @ 0x1407D90A0 (CmpVolumeContextUnlockExclusive.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1407D90D8 (CmpVolumeManagerGetContextForFilePath.c)
 */

_KAFFINITY_EX *CmpVolumeManagerCreateContextsForWellKnownVolumes()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  int v2; // ebx
  __int64 **v3; // rax
  _QWORD *v4; // rdi
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v6);
  v2 = 0;
  if ( CmpWellKnownVolumeList )
  {
    v3 = &CmpWellKnownVolumeList;
    do
    {
      v4 = v3 + 1;
      if ( (int)CmpVolumeManagerGetContextForFilePath(v0, *v3, v1, v3 + 1) >= 0 )
      {
        CmpVolumeContextLockExclusive(*v4);
        *(_DWORD *)(*v4 + 64LL) = 2;
        CmpVolumeContextUnlockExclusive(*v4);
      }
      v3 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v2];
    }
    while ( *v3 );
  }
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v6);
}
