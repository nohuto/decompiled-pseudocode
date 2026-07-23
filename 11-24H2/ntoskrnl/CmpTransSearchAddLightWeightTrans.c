/*
 * XREFs of CmpTransSearchAddLightWeightTrans @ 0x14087D418
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     CmpTransReferenceTransaction @ 0x14087D3B8 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x14087D58C (CmpTransDereferenceTransaction.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087F02C (LOCK_TRANSACTION_LIST.c)
 *     CmpBindHiveToTrans @ 0x14087F0D8 (CmpBindHiveToTrans.c)
 *     CmpTransAllocateTrans @ 0x140A78D9C (CmpTransAllocateTrans.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpTransSearchAddLightWeightTrans(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned __int64 v5; // rbp
  int v9; // r15d
  unsigned int v10; // edi
  __int64 v11; // rax
  signed __int64 Trans; // rax
  _QWORD *v14; // rsi
  signed __int64 v15; // rdi
  _QWORD *v16; // rax

  v5 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v9 = 0;
  v10 = CmpTransReferenceTransaction(a1);
  if ( (v10 & 0x80000000) != 0 )
    return v10;
  v11 = *(_QWORD *)(v5 + 16);
  if ( v11 )
  {
    *a4 = v11;
    v10 = 0;
    goto LABEL_4;
  }
  if ( !a3 )
  {
    v10 = -1072103422;
    goto LABEL_4;
  }
  Trans = CmpTransAllocateTrans(a1, 0LL, 0LL, a2);
  v14 = (_QWORD *)Trans;
  if ( !Trans )
  {
    v10 = -1073741670;
LABEL_4:
    if ( a1 )
      CmpTransDereferenceTransaction(a1);
    if ( !v9 )
      return v10;
LABEL_19:
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    return v10;
  }
  v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 16), Trans, 0LL);
  if ( v15 )
  {
    v9 = 1;
    LOCK_TRANSACTION_LIST();
    v10 = (unsigned int)CmpBindHiveToTrans(a2, v15) != 0 ? -1072103421 : -1072103423;
    ExFreePoolWithTag(v14, 0x72544D43u);
    goto LABEL_4;
  }
  LOCK_TRANSACTION_LIST();
  if ( (v14[6] & 7) != 0 )
  {
    v10 = -1072103422;
    goto LABEL_19;
  }
  *((_DWORD *)v14 + 12) = 128;
  v16 = (_QWORD *)qword_140EF5598;
  if ( *(__int64 **)qword_140EF5598 != &CmpLightTransactionList )
    __fastfail(3u);
  *v14 = &CmpLightTransactionList;
  v14[1] = v16;
  *v16 = v14;
  qword_140EF5598 = (__int64)v14;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  v10 = 0;
  *a4 = v14;
  return v10;
}
