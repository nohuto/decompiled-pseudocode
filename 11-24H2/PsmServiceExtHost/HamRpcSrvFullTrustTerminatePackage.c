/*
 * XREFs of HamRpcSrvFullTrustTerminatePackage @ 0x1800718B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvFullTrustTerminatePackage(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  return HamSrvTerminatePackage(a1, a2, a3, a4);
}
