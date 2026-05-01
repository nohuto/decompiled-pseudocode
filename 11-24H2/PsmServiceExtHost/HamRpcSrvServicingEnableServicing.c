/*
 * XREFs of HamRpcSrvServicingEnableServicing @ 0x18006C480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HamRpcSrvServicingEnableServicing(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        void ***a4,
        unsigned int *a5)
{
  *a4 = 0LL;
  *a5 = 0;
  return HamSrvEnableServicing(a1, a2, a3, a4, a5);
}
