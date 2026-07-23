/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x140A02D6C
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140A02A20 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087F02C (LOCK_TRANSACTION_LIST.c)
 *     CmpProcessLightWeightUOW @ 0x140A02EF4 (CmpProcessLightWeightUOW.c)
 *     CmpCleanupLightWeightPrepare @ 0x140A4E660 (CmpCleanupLightWeightPrepare.c)
 *     CmListGetNextElement @ 0x140BBB940 (CmListGetNextElement.c)
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
  if ( (unsigned int)dword_140E09F58 > 5 && (qword_140E09F68 & 1) != 0 && (qword_140E09F70 & 1) == qword_140E09F70 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09F58, (unsigned __int8 *)&dword_140055C1C, 0LL, 0LL, 2u, v12);
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
  if ( (unsigned int)dword_140E09F58 > 5 )
  {
    if ( (qword_140E09F68 & 1) == 0 || (qword_140E09F70 & 1) != qword_140E09F70 )
      v4 = 0;
    if ( v4 )
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09F58, (unsigned __int8 *)byte_140055C4D, 0LL, 0LL, 2u, v12);
  }
  return (unsigned int)v5;
}
