/*
 * XREFs of HamRpcCltRetrieveDynamicIdForHostId @ 0x18001C044
 * Callers:
 *     HamHostIdRetrieveDynamicId @ 0x180005760 (HamHostIdRetrieveDynamicId.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamRpcCltRetrieveDynamicIdForHostId(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  return NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_18001EBF0, 3u, 0LL, a1, a2, a3, a4, a5, a6);
}
