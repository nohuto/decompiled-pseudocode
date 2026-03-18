/*
 * XREFs of CmpHiveCachePnpNotificationCallback @ 0x1407D58B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     SetFailureLocation @ 0x140465824 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpHiveCacheEntryCleanup @ 0x1407D5668 (CmpHiveCacheEntryCleanup.c)
 *     CmpHiveCacheEntryLockAcquire @ 0x1407D5808 (CmpHiveCacheEntryLockAcquire.c)
 *     CmpHiveCacheEntryLockRelease @ 0x1407D586C (CmpHiveCacheEntryLockRelease.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmpHiveCachePnpNotificationCallback(PVOID NotificationStructure, _QWORD *Context)
{
  __int64 v3; // r8
  __int64 v4; // rax
  char v5; // si
  void *v6; // rcx
  unsigned int v7; // edi
  __int128 v9; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-48h] BYREF

  v9 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v9);
  v4 = *(_QWORD *)(v3 + 4) - *(_QWORD *)&GUID_IO_VOLUME_LOCK.Data1;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( !v4 )
    v4 = *(_QWORD *)(v3 + 12) - *(_QWORD *)GUID_IO_VOLUME_LOCK.Data4;
  if ( v4 )
  {
    v7 = 0;
  }
  else
  {
    CmpAttachToRegistryProcess(&ApcState);
    CmpHiveCacheEntryLockAcquire((__int64)Context);
    v5 = 1;
    if ( (unsigned int)(*((_DWORD *)Context + 42) - 3) <= 2 )
    {
      v7 = -1073741431;
      SetFailureLocation(0LL, 0, 43, -1073741431, 16);
    }
    else
    {
      v6 = (void *)Context[44];
      *((_DWORD *)Context + 42) = 3;
      ObfDereferenceObject(v6);
      CmpHiveCacheEntryLockRelease((__int64)Context);
      CmpHiveCacheEntryCleanup((__int64)Context, 5);
      v7 = 0;
      v5 = 0;
    }
    CmpDetachFromRegistryProcess(&ApcState);
    if ( v5 )
      CmpHiveCacheEntryLockRelease((__int64)Context);
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v9);
  return v7;
}
