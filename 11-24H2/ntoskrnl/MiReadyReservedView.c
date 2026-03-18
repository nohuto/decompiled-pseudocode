/*
 * XREFs of MiReadyReservedView @ 0x1404C04A8
 * Callers:
 *     MiObtainSystemCacheView @ 0x140241D90 (MiObtainSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1402D5CA4 (MmMapViewInSystemCache.c)
 * Callees:
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiCompareTbFlushTimeStamp @ 0x14023E0A8 (MiCompareTbFlushTimeStamp.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

ULONG_PTR __fastcall MiReadyReservedView(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // rcx
  ULONG_PTR result; // rax
  _BYTE v7[208]; // [rsp+40h] [rbp-E8h] BYREF

  v4 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = *v4;
  if ( qword_140E2DB80 )
  {
    if ( (v5 & 0x10) != 0 )
      v5 &= ~0x10uLL;
    else
      v5 &= ~qword_140E2DB80;
  }
  if ( MiCompareTbFlushTimeStamp(HIDWORD(v5)) )
  {
    memset_0(v7, 0, 0xC8uLL);
    MiInitializeTbFlushList((__int64)v7, a1 + 18816, 20, 8, 1);
    MiInsertTbFlushEntry((__int64)v7, a2, 64LL, 0);
    MiFlushTbList((__int64)v7);
  }
  result = CLFS_LSN_NULL_EXT;
  *v4 = CLFS_LSN_NULL_EXT;
  return result;
}
