/*
 * XREFs of HamDebugQueryPackageState @ 0x180011E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamDebugQueryPackageState(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  if ( !a4 )
    return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EFA0, 6u, 0LL, *a1, a2, a3);
  *a4 = 0LL;
  *a5 = 0;
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EFA0, 7u, 0LL, *a1, a2, a3, a4, a5);
}
