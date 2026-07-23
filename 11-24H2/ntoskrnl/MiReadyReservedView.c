/*
 * XREFs of MiReadyReservedView @ 0x14044D858
 * Callers:
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x140356F24 (MmMapViewInSystemCache.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiCompareTbFlushTimeStamp @ 0x14044D95C (MiCompareTbFlushTimeStamp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

ULONG_PTR __fastcall MiReadyReservedView(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 v5; // rcx
  ULONG_PTR result; // rax
  _BYTE v7[208]; // [rsp+40h] [rbp-E8h] BYREF

  v4 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = *v4;
  if ( qword_140E2DCC0 )
  {
    if ( (v5 & 0x10) != 0 )
      v5 &= ~0x10uLL;
    else
      v5 &= ~qword_140E2DCC0;
  }
  if ( (unsigned __int8)MiCompareTbFlushTimeStamp(HIDWORD(v5)) )
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
