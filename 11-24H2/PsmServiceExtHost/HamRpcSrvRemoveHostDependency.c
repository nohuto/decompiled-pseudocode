/*
 * XREFs of HamRpcSrvRemoveHostDependency @ 0x180081CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvRemoveHostDependency(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  return HamSrvRemoveHostDependency(a1, a2, a3);
}
