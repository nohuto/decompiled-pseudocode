/*
 * XREFs of ?Attach@SipcWin32Handle@@QEAAXPEAX@Z @ 0x180096BF4
 * Callers:
 *     ?Initialize@SipcPort@@IEAAJXZ @ 0x180096B88 (-Initialize@SipcPort@@IEAAJXZ.c)
 *     ?Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z @ 0x18010BB24 (-Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z.c)
 *     ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_BUFFER_INFO@@52@ZP6AX3W4SIPC_ENDPOINT_STATUS@@2@Z2PEAPEAV1@@Z @ 0x18010CA98 (-CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AXPEAUISIPCEndpoin.c)
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094CA0 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 */

void __fastcall SipcWin32Handle::Attach(void **this, void *a2)
{
  if ( a2 != *this )
  {
    SipcWin32Handle::Reset(this);
    *this = a2;
  }
}
