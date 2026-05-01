/*
 * XREFs of HamRpcSrvQueryHostStateSummary @ 0x180081C30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvQueryHostStateSummary(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        struct _HAM_HOST_STATE_SUMMARY *a3)
{
  return HamSrvQueryHostStateSummary(a1, a2, a3);
}
