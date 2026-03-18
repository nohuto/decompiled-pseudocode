/*
 * XREFs of CmpTransInitializeTransaction @ 0x140A04118
 * Callers:
 *     CmpTransSearchAddTrans @ 0x14087A4F0 (CmpTransSearchAddTrans.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     CmpTransReferenceTransaction @ 0x140879088 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x14087925C (CmpTransDereferenceTransaction.c)
 *     CmpTransSearchAddTrans @ 0x14087A4F0 (CmpTransSearchAddTrans.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087B17C (LOCK_TRANSACTION_LIST.c)
 *     CmTmCreateEnlistment @ 0x140A042A4 (CmTmCreateEnlistment.c)
 *     CmpStartRMLogs @ 0x140A04324 (CmpStartRMLogs.c)
 *     CmpAccountForLogReservation @ 0x140A05174 (CmpAccountForLogReservation.c)
 */

__int64 __fastcall CmpTransInitializeTransaction(__int64 a1)
{
  __int64 *v1; // r14
  __int64 v2; // rbx
  __int64 v4; // rcx
  int v5; // ebp
  __int64 *v6; // r15
  int started; // edi
  void *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  signed __int32 v13[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = 0LL;
  v1 = (__int64 *)(a1 + 56);
  v2 = 0LL;
  v4 = *(_QWORD *)(a1 + 56);
  v5 = 64;
  if ( !v4 )
    goto LABEL_11;
  v6 = v1;
  if ( *(PVOID *)(a1 + 64) == CmRmSystem )
  {
LABEL_6:
    v2 = *v1;
    started = CmpTransReferenceTransaction(*v1);
    if ( started < 0 )
      return (unsigned int)started;
    started = CmpStartRMLogs(*(_QWORD *)(a1 + 64));
    if ( started < 0
      || (started = CmTmCreateEnlistment(
                      a1 + 80,
                      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 56LL),
                      *v6 & 0xFFFFFFFFFFFFFFFEuLL,
                      a1),
          started < 0) )
    {
LABEL_18:
      if ( v2 )
        CmpTransDereferenceTransaction(v2);
      return (unsigned int)started;
    }
    v14 = 0LL;
    v8 = *(void **)(a1 + 80);
    Object = 0LL;
    ObReferenceObjectByHandle(v8, 0, 0LL, 0, &Object, 0LL);
    LOBYTE(v9) = 1;
    v10 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 72) = Object;
    if ( (int)CmpAccountForLogReservation(v10, v11, v9) >= 0 )
      v5 = 96;
LABEL_11:
    LOCK_TRANSACTION_LIST();
    if ( (*(_DWORD *)(a1 + 48) & 6) == 0 )
    {
      *(_DWORD *)(a1 + 48) = v5;
      --CmpTransactionInitializingCount;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      _InterlockedOr(v13, 0);
      if ( CmpTransactionInitializingEvent )
        ExfUnblockPushLock((__int64)&CmpTransactionInitializingEvent, 0LL);
      return 0;
    }
    started = -1072103422;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    goto LABEL_18;
  }
  if ( !CmRmSystem )
    return (unsigned int)-1072103419;
  started = CmpTransSearchAddTrans(v4, 0LL, (__int64)CmRmSystem, (struct _EX_RUNDOWN_REF *)qword_140E09A70, 1, &v16);
  if ( started >= 0 )
  {
    v6 = (__int64 *)(a1 + 56);
    goto LABEL_6;
  }
  return (unsigned int)started;
}
