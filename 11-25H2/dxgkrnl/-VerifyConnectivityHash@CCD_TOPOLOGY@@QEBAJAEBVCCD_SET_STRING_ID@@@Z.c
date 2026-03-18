/*
 * XREFs of ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x140261CC0
 * Callers:
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x14036D944 (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z @ 0x1400500D8 (-QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x140374B0C (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z.c)
 */

int __fastcall CCD_TOPOLOGY::VerifyConnectivityHash(CCD_TOPOLOGY *this, const struct CCD_SET_STRING_ID *a2)
{
  int ConnectedSetHash; // eax
  int v5; // edi
  int result; // eax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+40h] [rbp-18h]

  v7 = 0LL;
  v8 = 0;
  ConnectedSetHash = CCD_SET_STRING_ID::QueryConnectedSetHash(a2, (struct D3DKMT_HASH *)&v7);
  v5 = ConnectedSetHash;
  if ( ConnectedSetHash >= 0 )
    return CCD_TOPOLOGY::VerifyConnectivityHash(this, (const struct D3DKMT_HASH *)&v7);
  WdLogSingleEntry4(2LL, ConnectedSetHash, this, *((_QWORD *)this + 8), a2);
  result = v5;
  WdLogGlobalForLineNumber = 3456;
  return result;
}
