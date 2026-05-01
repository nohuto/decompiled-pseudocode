/*
 * XREFs of HamRpcSrvQueryPackageStateSummary @ 0x180081C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvQueryPackageStateSummary(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        union _HAM_EXTERNAL_STATE_SUMMARY *a5)
{
  return HamSrvQueryPackageStateSummary(a1, a2, a3, a4, a5);
}
