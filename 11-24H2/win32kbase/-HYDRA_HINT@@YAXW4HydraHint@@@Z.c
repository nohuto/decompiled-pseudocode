/*
 * XREFs of ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x1401483DC
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x14013264C (-UserInitialize@@YAJXZ.c)
 *     _lambda_003a05ce5104f89dcc953024da4d9dc6_::operator() @ 0x14014835C (_lambda_003a05ce5104f89dcc953024da4d9dc6_--operator().c)
 *     ?xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z @ 0x14015D194 (-xxxCheckProcessAndSessionState@@YAJPEAU_W32PROCESS@@@Z.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140164AC0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     xxxRemoteConnect @ 0x140167F90 (xxxRemoteConnect.c)
 *     InitVideo @ 0x1401B2E18 (InitVideo.c)
 *     CleanupResources @ 0x1401B7088 (CleanupResources.c)
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HYDRA_HINT(__int64 a1)
{
  int v1; // ebx
  __int64 result; // rax

  v1 = a1;
  result = W32GetUserSessionState(a1);
  *(_DWORD *)(result + 69192) |= v1;
  return result;
}
