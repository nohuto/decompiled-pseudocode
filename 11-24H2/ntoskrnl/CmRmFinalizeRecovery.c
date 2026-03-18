/*
 * XREFs of CmRmFinalizeRecovery @ 0x140AA88D4
 * Callers:
 *     CmpLoadKeyCommon @ 0x140464478 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA230 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407CBE38 (CmpMountPreloadedHives.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     CmpTransDereferenceTransaction @ 0x14087925C (CmpTransDereferenceTransaction.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087B17C (LOCK_TRANSACTION_LIST.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrRollback @ 0x140A06460 (CmpTransMgrRollback.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmRmFinalizeRecovery(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  void *v5; // rcx
  void *v6; // rcx
  int v8; // [rsp+20h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-40h] BYREF

  v8 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  LOCK_TRANSACTION_LIST();
  v2 = (_QWORD **)(a1 + 16);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    CmpTransMgrRollback((__int64)v3, &v8);
    CmpAttachToRegistryProcess(&ApcState);
    CmpTransMgrFreeVolatileData((ULONG_PTR)v3, 8);
    CmpDetachFromRegistryProcess(&ApcState);
    if ( v3[7] )
      CmpTransDereferenceTransaction(v3[7]);
    v5 = (void *)v3[9];
    if ( v5 )
      ObfDereferenceObject(v5);
    v6 = (void *)v3[10];
    if ( v6 )
      ZwClose(v6);
    ExFreePoolWithTag(v3, 0x72544D43u);
    LOCK_TRANSACTION_LIST();
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
