/*
 * XREFs of ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x18009A088
 * Callers:
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@PEAX@Z @ 0x180086550 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@P.c)
 *     ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180086670 (-OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800E0A5C (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEAX@Z @ 0x1800E0EE0 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAUISIPCServer@@PEBUSIPC_CLIENT_INFO@@PEA.c)
 * Callees:
 *     ?SetActiveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z @ 0x180082F8C (-SetActiveViewClient@LampArrayDevice@@QEAA_NPEAULampArrayEndpoint@@@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::SetActiveViewClient(
        HANDLE *this,
        struct LampArrayDevice *a2,
        struct LampArrayEndpoint *a3)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !LampArrayDevice::SetActiveViewClient(a2, a3) || SetEvent(this[41]) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x254,
             (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
             v4);
}
