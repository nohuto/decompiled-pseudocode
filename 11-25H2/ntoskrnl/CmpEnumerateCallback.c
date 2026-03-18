/*
 * XREFs of CmpEnumerateCallback @ 0x1407C21C0
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmpUnlockCallbackList @ 0x1409952C0 (CmpUnlockCallbackList.c)
 *     CmpLockCallbackListShared @ 0x14099C280 (CmpLockCallbackListShared.c)
 */

__int64 __fastcall CmpEnumerateCallback(__int64 **a1)
{
  __int64 *v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v8);
  CmpLockCallbackListShared();
  v2 = &CallbackListHead;
  if ( *a1 )
    v2 = *a1;
  v3 = (unsigned __int64)*a1 & -(__int64)(*a1 != 0LL);
  v4 = *v2;
  v5 = 0LL;
  while ( (__int64 *)v4 != &CallbackListHead )
  {
    if ( *(int *)(v4 + 16) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
      v5 = *(_QWORD *)(v4 + 40);
      *a1 = (__int64 *)v4;
      break;
    }
    v4 = *(_QWORD *)v4;
  }
  CmpUnlockCallbackList();
  if ( v3 )
  {
    if ( _InterlockedDecrement((volatile signed __int32 *)(v3 + 16)) == 0x80000000 )
    {
      _InterlockedOr(v7, 0);
      if ( CallbackListDeleteEvent )
        ExfUnblockPushLock((__int64)&CallbackListDeleteEvent, 0LL);
    }
  }
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v8);
  return v5;
}
