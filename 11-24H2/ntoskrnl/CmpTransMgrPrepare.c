/*
 * XREFs of CmpTransMgrPrepare @ 0x140A04E88
 * Callers:
 *     CmpRmUnDoPhase @ 0x1407E0B98 (CmpRmUnDoPhase.c)
 *     CmKtmNotification @ 0x140A048E0 (CmKtmNotification.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087B17C (LOCK_TRANSACTION_LIST.c)
 *     HvLockHiveWriter @ 0x140882A38 (HvLockHiveWriter.c)
 *     HvpMarkDirty @ 0x140882A90 (HvpMarkDirty.c)
 *     HvUnlockHiveWriter @ 0x140882E28 (HvUnlockHiveWriter.c)
 *     CmpGetNextActiveHive @ 0x14090B0EC (CmpGetNextActiveHive.c)
 *     CmpFlushHive @ 0x14097D2B4 (CmpFlushHive.c)
 *     CmpTransMgrSyncHive @ 0x140A06BAC (CmpTransMgrSyncHive.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmListGetNextElement @ 0x140BB9940 (CmListGetNextElement.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BB9A98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BB9AB4 (HvLockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  char v8; // si
  __int64 v9; // rcx
  __int64 NextElement; // rax
  struct _EX_RUNDOWN_REF *v11; // rbx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  ULONG_PTR v14; // rdi
  __int64 j; // rcx
  unsigned int v16; // edx
  __int64 v17; // rcx
  int v18; // ebx
  ULONG_PTR v19; // rdi
  __int64 v20; // rcx
  struct _EX_RUNDOWN_REF *v22; // rcx
  struct _EX_RUNDOWN_REF *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-70h] BYREF

  *a4 = 0;
  *a3 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  LOCK_TRANSACTION_LIST();
  v8 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0;
  }
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v9);
  v25 = 0LL;
  while ( 1 )
  {
    NextElement = CmListGetNextElement(a2 + 16, &v25, 0LL);
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 32LL) + 4152LL) == a1 )
      ++*a3;
  }
  v11 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
  if ( v11 )
  {
    v23 = v11 + 205;
    if ( ExAcquireRundownProtection(v11 + 205) )
    {
      CmpUnlockRegistry(v20);
      v18 = CmpTransMgrSyncHive((ULONG_PTR)v11);
      v22 = v23;
LABEL_25:
      ExReleaseRundownProtection_0(v22);
      goto LABEL_21;
    }
    v18 = 0;
    goto LABEL_31;
  }
  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v14 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v14 = (ULONG_PTR)NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( NextActiveHive[519] == a1 )
    {
      j = *((unsigned int *)NextActiveHive + 40);
      if ( (j & 2) == 0 )
      {
        v16 = *(_DWORD *)(a2 + 112);
        if ( v16 )
        {
          for ( j = 0LL; (unsigned int)j < v16; j = (unsigned int)(j + 1) )
          {
            if ( NextActiveHive == *(__int64 **)(a2 + 8 * j + 120) )
              goto LABEL_17;
          }
        }
        else
        {
LABEL_17:
          CmpUnlockRegistry(j);
          v18 = CmpTransMgrSyncHive(v14);
          if ( v18 < 0 )
          {
            v22 = (struct _EX_RUNDOWN_REF *)(v14 + 1640);
            goto LABEL_25;
          }
          CmpLockRegistry(v17);
        }
      }
    }
  }
  v19 = qword_140E09A70;
  v20 = *(unsigned int *)(*(_QWORD *)(qword_140E09A70 + 64) + 144LL);
  if ( (v20 & 1) != 0 )
    goto LABEL_20;
  HvLockHiveFlusherExclusive(qword_140E09A70);
  HvLockHiveWriter(v19);
  v18 = HvpMarkDirty(v19, 0, 0x20u, 0);
  HvUnlockHiveWriter(v19);
  if ( v18 < 0 )
  {
    HvUnlockHiveFlusherExclusive(v19);
LABEL_31:
    CmpUnlockRegistry(v20);
    goto LABEL_21;
  }
  *(_DWORD *)(*(_QWORD *)(v19 + 64) + 144LL) |= 1u;
  HvUnlockHiveFlusherExclusive(v19);
  CmpUnlockRegistry(v24);
  v8 = 0;
  if ( (int)CmpFlushHive(v19, 0) >= 0 )
  {
LABEL_20:
    v18 = 0;
    if ( v8 )
      goto LABEL_31;
    goto LABEL_21;
  }
  v18 = -1073741670;
LABEL_21:
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)v18;
}
