/*
 * XREFs of HamRpcSrvDebugQueryPackageState @ 0x180068D20
 * Callers:
 *     <none>
 * Callees:
 *     ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU_HAM_HOST_STATE_SUMMARY@@PEAK@Z @ 0x180068D40 (-HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU.c)
 */

__int64 __fastcall HamRpcSrvDebugQueryPackageState(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        union _HAM_EXTERNAL_STATE_SUMMARY *a3)
{
  return HamSrvQueryPackageState(a1, a2, a3, 0LL, 0LL);
}
