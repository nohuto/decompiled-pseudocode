/*
 * XREFs of HamTerminateActivityHostEx @ 0x18000FE10
 * Callers:
 *     HamTerminateActivityHost @ 0x18000FDE0 (HamTerminateActivityHost.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamTerminateActivityHostEx(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7)
{
  __int64 v9; // rcx
  CLIENT_CALL_RETURN result; // rax
  int v11; // [rsp+28h] [rbp-40h]
  int v12; // [rsp+30h] [rbp-38h]

  v9 = a1[1];
  if ( v9 )
  {
    result.Simple = HampInProcTerminateActivityHost(v9, a2, a3, a4, a5, a6, a7);
  }
  else
  {
    v12 = a4;
    v11 = a3;
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xCu, 0LL, *a1, a2, v11, v12, a5, a6, a7).Pointer;
  }
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
