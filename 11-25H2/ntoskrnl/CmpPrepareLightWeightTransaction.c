/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x1409D9524
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x1409D90CC (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     LOCK_TRANSACTION_LIST @ 0x140885DE8 (LOCK_TRANSACTION_LIST.c)
 *     CmpCleanupLightWeightPrepare @ 0x1409D927C (CmpCleanupLightWeightPrepare.c)
 *     CmpProcessLightWeightUOW @ 0x1409D96AC (CmpProcessLightWeightUOW.c)
 *     CmListGetNextElement @ 0x140BA9A30 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpPrepareLightWeightTransaction(__int64 a1, __int64 a2)
{
  char v4; // bl
  int v5; // edi
  __int64 NextElement; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12[2]; // [rsp+38h] [rbp-40h] BYREF

  v4 = 1;
  if ( (unsigned int)dword_140E09E08 > 5 && (qword_140E09E18 & 1) != 0 && (qword_140E09E20 & 1) == qword_140E09E20 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09E08, (unsigned __int8 *)&dword_140053CA4, 0LL, 0LL, 2u, v12);
  if ( a1 )
  {
    LOCK_TRANSACTION_LIST();
    *(_DWORD *)(a1 + 48) |= 1u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    v11 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a1 + 16, &v11, 0LL);
      if ( !NextElement )
        break;
      v5 = CmpProcessLightWeightUOW(NextElement, 0LL, v8, a2);
      if ( v5 < 0 )
      {
        CmpCleanupLightWeightPrepare(a1, v9, a2);
        goto LABEL_4;
      }
    }
  }
  v5 = 0;
LABEL_4:
  if ( (unsigned int)dword_140E09E08 > 5 )
  {
    if ( (qword_140E09E18 & 1) == 0 || (qword_140E09E20 & 1) != qword_140E09E20 )
      v4 = 0;
    if ( v4 )
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09E08, (unsigned __int8 *)byte_140053C73, 0LL, 0LL, 2u, v12);
  }
  return (unsigned int)v5;
}
