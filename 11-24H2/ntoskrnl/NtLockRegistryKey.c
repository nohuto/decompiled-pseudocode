/*
 * XREFs of NtLockRegistryKey @ 0x1407D0270
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmLockKeyForWrite @ 0x1409DBB68 (CmLockKeyForWrite.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
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
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v1 = (int)KeyHandle;
  v10 = 0LL;
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
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v9);
  return v6;
}
