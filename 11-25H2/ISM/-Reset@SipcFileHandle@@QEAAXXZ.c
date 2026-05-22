/*
 * XREFs of ?Reset@SipcFileHandle@@QEAAXXZ @ 0x18009B918
 * Callers:
 *     ?Share@AlpcSection@@QEAAJG_NPEA_K@Z @ 0x180083E90 (-Share@AlpcSection@@QEAAJG_NPEA_K@Z.c)
 *     ?Attach@SipcFileHandle@@QEAAXPEAX@Z @ 0x18010B938 (-Attach@SipcFileHandle@@QEAAXPEAX@Z.c)
 *     ?Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z @ 0x18010BB24 (-Create@AlpcSection@@SAJPEBVAlpcPort@@_KAEBVSipcSectionId@@PEAXPEAPEAV1@@Z.c)
 *     ?CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAttributes@@_KGPEAXPEAIPEAPEAVSipcPort@@@Z @ 0x18010C2EC (-CreateClientPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@EEAEBUSipcPrivateNamespaceAtt.c)
 *     ?CreateProxyEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@@Z @ 0x18010C760 (-CreateProxyEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@@Z.c)
 *     ?SendXvmmDisconnect@AlpcSection@@CAJ_K@Z @ 0x18010E718 (-SendXvmmDisconnect@AlpcSection@@CAJ_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SipcFileHandle::Reset(HANDLE *this)
{
  if ( *this != (HANDLE)-1LL )
  {
    CloseHandle(*this);
    *this = (HANDLE)-1LL;
  }
}
