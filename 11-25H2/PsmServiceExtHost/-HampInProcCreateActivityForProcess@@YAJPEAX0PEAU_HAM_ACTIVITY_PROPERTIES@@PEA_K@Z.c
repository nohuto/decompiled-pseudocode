/*
 * XREFs of ?HampInProcCreateActivityForProcess@@YAJPEAX0PEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18006C640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall HampInProcCreateActivityForProcess(
        struct _HAM_CLIENT_CONTEXT *a1,
        void *a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4)
{
  return HamSrvCreateActivityForProcess(a1, a2, a3, a4);
}
