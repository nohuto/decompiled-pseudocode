/*
 * XREFs of HamRpcSrvCloseDesktopBridgeActivity @ 0x18009D100
 * Callers:
 *     <none>
 * Callees:
 *     CempGetTokenHostInfo @ 0x180039E20 (CempGetTokenHostInfo.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18007829C (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamRpcSrvCloseDesktopBridgeActivity(__int64 a1, void *a2, __int64 a3)
{
  int TokenHostInfo; // ebx
  void *TokenHandle; // [rsp+20h] [rbp-258h] BYREF
  char v8[544]; // [rsp+30h] [rbp-248h] BYREF
  unsigned __int64 v9; // [rsp+250h] [rbp-28h]

  memset_0(v8, 0, 0x228uLL);
  TokenHandle = 0LL;
  TokenHostInfo = NtOpenProcessToken(a2, 8u, &TokenHandle);
  if ( TokenHostInfo >= 0 )
    TokenHostInfo = CempGetTokenHostInfo(TokenHandle, v8);
  if ( TokenHandle )
    NtClose(TokenHandle);
  if ( TokenHostInfo >= 0 )
  {
    TokenHostInfo = ArSrvCloseActivity(v9, a3);
    if ( TokenHostInfo >= 0 )
      return 0;
  }
  return (unsigned int)TokenHostInfo;
}
