/*
 * XREFs of CmpLateUnloadHiveWorker @ 0x140964D00
 * Callers:
 *     <none>
 * Callees:
 *     CmpDecrementAppHiveUnloadCount @ 0x1402BA854 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x1402BB3C0 (CmpTryToRundownHive.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpDereferenceHive @ 0x140840680 (CmpDereferenceHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x140841F90 (CmpDereferenceKeyControlBlock.c)
 *     UNLOCK_HIVE_LOAD @ 0x1408E0740 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1408E07B8 (LOCK_HIVE_LOAD.c)
 *     CmpCompleteUnloadKey @ 0x140965368 (CmpCompleteUnloadKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1409667E8 (CmpLockRegistryFreezeAware.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BBBAD0 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BBBB10 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

_KAFFINITY_EX *__fastcall CmpLateUnloadHiveWorker(__int64 a1)
{
  char v2; // bl
  char UnloadRundown; // si
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  bool v12; // zf
  signed __int32 v14[8]; // [rsp+0h] [rbp-80h] BYREF
  int v15; // [rsp+20h] [rbp-60h] BYREF
  __int128 v16; // [rsp+28h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v16);
  v2 = 0;
  v15 = 0;
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 22;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( UnloadRundown )
  {
    LOCK_HIVE_LOAD();
    LOBYTE(v4) = 1;
    CmpLockRegistryFreezeAware(v4);
    v6 = *(_DWORD *)(a1 + 160);
    v15 = 6;
    if ( (v6 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 23;
    }
    else if ( *(_BYTE *)(a1 + 2944) )
    {
      v7 = *(_QWORD *)(a1 + 2936);
      if ( (*(_DWORD *)(a1 + 4112) & 0x20) != 0 )
      {
        v2 = 1;
        ++CmpActiveAppHiveUnloadCount;
      }
      if ( CmpTryToRundownHive((struct _EX_RUNDOWN_REF *)a1, v7) )
      {
        v8 = *(_QWORD *)(a1 + 2936);
        *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 30;
        CmpAttachToRegistryProcess(&ApcState);
        CmpCompleteUnloadKey(v8, v9, &v15);
        CmpDetachFromRegistryProcess(&ApcState);
        CmpLockRegistry(v10);
        CmpDereferenceKeyControlBlock(v8);
        CmpUnlockRegistry(v11);
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
    v5 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F;
    *(_DWORD *)(a1 + 4LL * (unsigned int)v5 + 4240) = 24;
  }
  v12 = (v15 & 2) == 0;
  *(_DWORD *)(a1 + 4800) = 0;
  if ( !v12 )
    CmpUnlockRegistry(v5);
  _InterlockedOr(v14, 0);
  if ( *(_QWORD *)(a1 + 4808) )
    ExfUnblockPushLock(a1 + 4808, 0LL);
  if ( (v15 & 4) != 0 )
    UNLOCK_HIVE_LOAD();
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  CmpDereferenceHive((volatile signed __int32 *)a1);
  return CmpCleanupThreadInfo((_KAFFINITY_EX **)&v16);
}
