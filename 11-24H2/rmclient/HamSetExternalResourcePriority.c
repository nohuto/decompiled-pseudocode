/*
 * XREFs of HamSetExternalResourcePriority @ 0x18001B4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamSetExternalResourcePriority(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  CLIENT_CALL_RETURN result; // rax

  v4 = a1[1];
  if ( v4 )
    result.Simple = HampInProcSetExternalResourcePriority(v4, a2, a3, a1);
  else
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0xDu, 0LL, *a1, a2, a3).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
