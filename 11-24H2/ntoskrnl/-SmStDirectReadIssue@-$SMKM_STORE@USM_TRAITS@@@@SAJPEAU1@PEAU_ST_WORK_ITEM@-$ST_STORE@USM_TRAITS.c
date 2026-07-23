/*
 * XREFs of ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x140230DA0
 * Callers:
 *     ?SmStDirectReadCallout@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140231CC0 (-SmStDirectReadCallout@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14027CA30 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402F7A24 (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1402F7AB0 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1402F9208 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     ?SmStUnhandledExceptionFilter@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST_STORE_EXCEPTION_SOURCE@1@@Z @ 0x140608F88 (-SmStUnhandledExceptionFilter@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAXPEAU_EXCEPTION_POINTERS@@W4_SMST.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStDirectReadIssue(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v5; // r12
  int v6; // r8d
  __int64 v7; // r13
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  ULONG_PTR v11; // rsi
  int v12; // ebx
  __int64 result; // rax
  unsigned __int8 v15; // [rsp+B8h] [rbp+20h]

  v5 = &KeGetCurrentThread()[1].SavedApcStateFill[15];
  v15 = *v5;
  *v5 = *(_BYTE *)(a1 + 7596);
  v6 = (unsigned __int8)*(_DWORD *)(a2 + 8);
  v7 = a1 + 7576;
  v8 = *(_QWORD *)(a1 + 7576);
  v9 = _InterlockedIncrement64((volatile signed __int64 *)(v8 + 3336));
  if ( *(_QWORD *)(v8 + 3344) < v9 )
    *(_QWORD *)(v8 + 3344) = v9;
  v10 = (unsigned int)(v6 - 1);
  if ( (unsigned int)v10 >= 0x11 )
    v10 = 16LL;
  _InterlockedAdd64((volatile signed __int64 *)(v8 + 8 * v10 + 3200), 1uLL);
  _InterlockedAdd((volatile signed __int32 *)(a1 + 7440), 1u);
  v11 = a1 + 6840;
  *(_DWORD *)(a3 + 448) = StLockAcquireShared((struct VLOCK *)(a1 + 6840));
  v12 = ST_STORE<SM_TRAITS>::StDmPageRetrieve(a1 + 80, a3, a2);
  ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(a1 + 80, a1 + 6728);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 6840), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v11);
  KeAbPostRelease(v11);
  KeLeaveGuardedRegion();
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 7440));
  LODWORD(result) = v12;
  if ( v12 == -2147483634 )
    LODWORD(result) = -1073741670;
  _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)v7 + 3336LL));
  *v5 = v15;
  return (unsigned int)result;
}
