/*
 * XREFs of HamRpcSrvAddHostDependency @ 0x1800817C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvAddHostDependency(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4)
{
  return HamSrvAddHostDependency(a1, a2, a3, a4);
}
