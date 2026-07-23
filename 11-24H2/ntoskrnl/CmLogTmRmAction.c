/*
 * XREFs of CmLogTmRmAction @ 0x140A015A0
 * Callers:
 *     CmKtmNotification @ 0x140A00E10 (CmKtmNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpTransWriteLog @ 0x140A01E5C (CmpTransWriteLog.c)
 *     HvBufferCheckSum @ 0x140A02614 (HvBufferCheckSum.c)
 */

NTSTATUS __fastcall CmLogTmRmAction(__int64 a1, __int64 a2, unsigned int a3)
{
  bool v4; // zf
  __int128 v5; // xmm0
  NTSTATUS result; // eax
  CLFS_LSN plsnFlush; // [rsp+30h] [rbp-50h] BYREF
  CLFS_LSN plsnLastFlushed; // [rsp+38h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-40h] BYREF
  __int128 v10; // [rsp+50h] [rbp-30h]
  __int128 v11; // [rsp+60h] [rbp-20h]

  plsnFlush.ullOffset = 0LL;
  plsnLastFlushed.ullOffset = 0LL;
  v4 = *(_QWORD *)(a1 + 96) == 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( v4 )
    return 0;
  v5 = *(_OWORD *)(a2 + 88);
  DWORD1(v9) = 48;
  v10 = v5;
  *((_QWORD *)&v9 + 1) = a3;
  LODWORD(v9) = HvBufferCheckSum(&v9, 48LL);
  result = CmpTransWriteLog(a1, (unsigned int)&v9, 48, 2, &plsnFlush);
  if ( result >= 0 )
    return ClfsFlushToLsn(*(PVOID *)(a1 + 96), &plsnFlush, &plsnLastFlushed);
  return result;
}
