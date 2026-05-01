/*
 * XREFs of HamRpcSrvDebugSuspendPackage @ 0x180081830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvDebugSuspendPackage(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        enum _HAM_APPLICATION_EXECUTION_STATE *a3)
{
  return HamSrvSuspendPackage(a1, a2, a3);
}
