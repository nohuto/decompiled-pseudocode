/*
 * XREFs of CmpAbortLightWeightTransaction @ 0x140867070
 * Callers:
 *     CmpRollbackLightWeightTransaction @ 0x140866FE0 (CmpRollbackLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x1409D90CC (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408671C0 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x140867280 (CmpTransMgrRollback.c)
 */

void __fastcall CmpAbortLightWeightTransaction(__int64 a1)
{
  char v2; // bl
  ULONG_PTR v4; // rdi
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6[2]; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v5 = 0;
  v2 = 1;
  if ( (unsigned int)dword_140E09E08 > 5 && (qword_140E09E18 & 1) != 0 && (qword_140E09E20 & 1) == qword_140E09E20 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09E08, (unsigned __int8 *)&byte_140053C47, 0LL, 0LL, 2u, v6);
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    CmpTransMgrRollback(v4, &v5);
    CmpCleanupLightWeightTransaction(v4);
  }
  if ( (unsigned int)dword_140E09E08 > 5 )
  {
    if ( (qword_140E09E18 & 1) == 0 || (qword_140E09E20 & 1) != qword_140E09E20 )
      v2 = 0;
    if ( v2 )
    {
      v9 = 0;
      v8 = 4;
      v7 = &v5;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E09E08,
        (unsigned __int8 *)&dword_140053D4D + 3,
        0LL,
        0LL,
        3u,
        v6);
    }
  }
}
