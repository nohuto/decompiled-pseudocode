/*
 * XREFs of ?Attach@SipcWin32Handle@@QEAAXPEAX@Z @ 0x180096D04
 * Callers:
 *     ?Initialize@SipcPort@@IEAAJXZ @ 0x180096C98 (-Initialize@SipcPort@@IEAAJXZ.c)
 *     ?Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z @ 0x18010DA34 (-Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z.c)
 *     ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_BUFFER_INFO@@52@ZP6AX3W4SIPC_ENDPOINT_STATUS@@2@Z2PEAPEAV1@@Z @ 0x18010E9A8 (-CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AXPEAUISIPCEndpoin.c)
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094EA0 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 */

void __fastcall SipcWin32Handle::Attach(void **this, void *a2)
{
  if ( a2 != *this )
  {
    SipcWin32Handle::Reset(this);
    *this = a2;
  }
}
