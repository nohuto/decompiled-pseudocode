/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x140A42470
 * Callers:
 *     <none>
 * Callees:
 *     CmpDecrementAppHiveUnloadCount @ 0x14036D618 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x14036DA50 (CmpTryToRundownHive.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpDereferenceHive @ 0x1408484B4 (CmpDereferenceHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 *     LOCK_HIVE_LOAD @ 0x140883970 (LOCK_HIVE_LOAD.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408839E4 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x140884780 (CmpLockRegistryFreezeAware.c)
 *     CmpCompleteUnloadKey @ 0x14088523C (CmpCompleteUnloadKey.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BA9B58 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BA9B98 (CmpReleaseHiveLoadUnloadRundown.c)
 */

_KAFFINITY_EX *__fastcall CmpLateUnloadHiveWorker(__int64 a1)
{
  char v2; // bl
  char UnloadRundown; // si
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  ULONG_PTR v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  bool v11; // zf
  signed __int32 v13[8]; // [rsp+0h] [rbp-70h] BYREF
  int v14; // [rsp+20h] [rbp-50h] BYREF
  __int128 v15; // [rsp+28h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-38h] BYREF

  v15 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v15);
  v2 = 0;
  v14 = 0;
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 22;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
  {
    LOCK_HIVE_LOAD();
    CmpLockRegistryFreezeAware(1);
    v5 = *(_DWORD *)(a1 + 160);
    v14 = 6;
    if ( (v5 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 23;
    }
    else if ( *(_BYTE *)(a1 + 2944) )
    {
      v6 = *(_QWORD *)(a1 + 2936);
      if ( (*(_DWORD *)(a1 + 4112) & 0x20) != 0 )
      {
        v2 = 1;
        ++CmpActiveAppHiveUnloadCount;
      }
      if ( CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)a1, v6) )
      {
        v7 = *(_QWORD *)(a1 + 2936);
        *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 30;
        CmpAttachToRegistryProcess(&ApcState);
        CmpCompleteUnloadKey(v7, v8, &v14);
        CmpDetachFromRegistryProcess(&ApcState);
        CmpLockRegistry(v9);
        CmpDereferenceKeyControlBlock(v7);
        CmpUnlockRegistry(v10);
      }
      else if ( v2 )
      {
        CmpDecrementAppHiveUnloadCount();
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 25;
    }
  }
  else
  {
    v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F;
    *(_DWORD *)(a1 + 4LL * (unsigned int)v4 + 4240) = 24;
  }
  v11 = (v14 & 2) == 0;
  *(_DWORD *)(a1 + 4800) = 0;
  if ( !v11 )
    CmpUnlockRegistry(v4);
  _InterlockedOr(v13, 0);
  if ( *(_QWORD *)(a1 + 4808) )
    ExfUnblockPushLock(a1 + 4808, 0LL);
  if ( (v14 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  CmpDereferenceHive((volatile signed __int32 *)a1);
  return CmCleanupThreadInfo((_KAFFINITY_EX **)&v15);
}
