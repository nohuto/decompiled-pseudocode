/*
 * XREFs of CmpCreateTemporaryHive @ 0x1407BED30
 * Callers:
 *     CmSaveKey @ 0x1407BE3E4 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407BE848 (CmSaveMergedKeys.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 */

__int64 __fastcall CmpCreateTemporaryHive(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v6; // [rsp+70h] [rbp-1D8h] BYREF
  _BYTE v7[432]; // [rsp+80h] [rbp-1C8h] BYREF

  v4 = 0LL;
  v6 = 0LL;
  memset_0(v7, 0, sizeof(v7));
  if ( (int)CmpCreateHive((unsigned int)&v6, 0, 1, 0, 0LL, 0LL, 0LL, 17956864, a1, a2, 0LL, 0LL, (__int64)v7) >= 0 )
    return v6;
  return v4;
}
