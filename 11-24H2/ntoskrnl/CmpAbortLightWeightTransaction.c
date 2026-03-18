/*
 * XREFs of CmpAbortLightWeightTransaction @ 0x140A06250
 * Callers:
 *     CmpRollbackLightWeightTransaction @ 0x140A061B8 (CmpRollbackLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140A064F0 (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     CmpCleanupLightWeightTransaction @ 0x140A063A0 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x140A06460 (CmpTransMgrRollback.c)
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
  if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 1) != 0 && (qword_140E09F00 & 1) == qword_140E09F00 )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)word_1400550A2, 0LL, 0LL, 2u, v6);
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 )
  {
    CmpTransMgrRollback(v4, &v5);
    CmpCleanupLightWeightTransaction(v4);
  }
  if ( (unsigned int)dword_140E09EE8 > 5 )
  {
    if ( (qword_140E09EF8 & 1) == 0 || (qword_140E09F00 & 1) != qword_140E09F00 )
      v2 = 0;
    if ( v2 )
    {
      v9 = 0;
      v8 = 4;
      v7 = &v5;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E09EE8, (unsigned __int8 *)&word_1400550CE, 0LL, 0LL, 3u, v6);
    }
  }
}
