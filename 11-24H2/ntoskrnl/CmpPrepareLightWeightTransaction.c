/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x140A0683C
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140A064F0 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x14031CF70 (ExReleaseFastMutexUnsafe.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     LOCK_TRANSACTION_LIST @ 0x14087B17C (LOCK_TRANSACTION_LIST.c)
 *     CmpProcessLightWeightUOW @ 0x140A069C4 (CmpProcessLightWeightUOW.c)
 *     CmpCleanupLightWeightPrepare @ 0x140A567CC (CmpCleanupLightWeightPrepare.c)
 *     CmListGetNextElement @ 0x140BB9940 (CmListGetNextElement.c)
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
  if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 1) != 0 && (qword_140E09F00 & 1) == qword_140E09F00 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)&dword_14005513C, 0LL, 0LL, 2u, v12);
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
  if ( (unsigned int)dword_140E09EE8 > 5 )
  {
    if ( (qword_140E09EF8 & 1) == 0 || (qword_140E09F00 & 1) != qword_140E09F00 )
      v4 = 0;
    if ( v4 )
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)byte_140055071, 0LL, 0LL, 2u, v12);
  }
  return (unsigned int)v5;
}
