/*
 * XREFs of HamRpcSrvGetApplicationStateForPsmKey @ 0x18006C530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HamRpcSrvGetApplicationStateForPsmKey(
        struct _HAM_CLIENT_CONTEXT *a1,
        char *a2,
        unsigned __int8 *a3,
        unsigned int a4,
        enum _HAM_APPLICATION_EXECUTION_STATE *a5,
        enum _HAM_TERMINATE_REASON *a6)
{
  return HamSrvGetApplicationStateForPsmKey(a1, a2, a3, a4, a5, a6);
}
