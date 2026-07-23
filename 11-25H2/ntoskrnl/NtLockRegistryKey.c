/*
 * XREFs of NtLockRegistryKey @ 0x1407C0680
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmLockKeyForWrite @ 0x1409E3164 (CmLockKeyForWrite.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtLockRegistryKey(HANDLE KeyHandle)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  NTSTATUS v6; // ebx
  int v7; // r8d
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = (int)KeyHandle;
  v9 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v9);
  Object = 0LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v6 = -1073741727;
  }
  else if ( (unsigned __int8)CmpAcquireShutdownRundown(v3, v2, v4, v5) )
  {
    v6 = CmObReferenceObjectByHandle(v1, 131078, v7, 0, (__int64)&Object, 0LL);
    if ( v6 >= 0 )
    {
      v6 = CmLockKeyForWrite(Object);
      if ( v6 >= 0 )
        v6 = 0;
    }
    if ( Object )
      ObfDereferenceObject(Object);
    CmpReleaseShutdownRundown();
  }
  else
  {
    v6 = -1073741431;
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v9);
  return v6;
}
