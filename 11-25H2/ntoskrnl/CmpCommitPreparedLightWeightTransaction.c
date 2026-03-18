/*
 * XREFs of CmpCommitPreparedLightWeightTransaction @ 0x1409D9388
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x1409D90CC (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140285A50 (ExReleaseFastMutexUnsafe.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     LOCK_TRANSACTION_LIST @ 0x140885DE8 (LOCK_TRANSACTION_LIST.c)
 *     CmpProcessLightWeightUOW @ 0x1409D96AC (CmpProcessLightWeightUOW.c)
 *     CmListGetNextElement @ 0x140BA9A30 (CmListGetNextElement.c)
 */

void __fastcall CmpCommitPreparedLightWeightTransaction(__int64 a1, __int64 a2)
{
  int v2; // esi
  char v5; // bl
  __int64 NextElement; // rax
  __int64 v8; // [rsp+30h] [rbp-50h] BYREF
  __int64 v9; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v11; // [rsp+60h] [rbp-20h]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]

  if ( a1 )
  {
    v2 = 0;
    v5 = 1;
    if ( (unsigned int)dword_140E09E08 > 5 && (qword_140E09E18 & 1) != 0 && (qword_140E09E20 & 1) == qword_140E09E20 )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09E08,
        (unsigned __int8 *)qword_140053D18,
        0LL,
        0LL,
        2u,
        v10);
    v9 = MEMORY[0xFFFFF78000000014];
    LOCK_TRANSACTION_LIST();
    *(_DWORD *)(a1 + 48) |= 4u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    v8 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a1 + 16, &v8, 0LL);
      if ( !NextElement )
        break;
      CmpProcessLightWeightUOW(NextElement, &v9, 1LL, a2);
      ++v2;
    }
    if ( (unsigned int)dword_140E09E08 > 5 )
    {
      if ( (qword_140E09E18 & 1) == 0 || (qword_140E09E20 & 1) != qword_140E09E20 )
        v5 = 0;
      if ( v5 )
      {
        v13 = 0;
        v11 = &v8;
        LODWORD(v8) = v2;
        v12 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09E08,
          (unsigned __int8 *)byte_140053CD5,
          0LL,
          0LL,
          3u,
          v10);
      }
    }
  }
}
