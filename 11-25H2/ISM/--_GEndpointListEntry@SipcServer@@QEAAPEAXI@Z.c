/*
 * XREFs of ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x18010B048
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180062840 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_BUFFER_INFO@@2PEAX@ZP6AX0W4SIPC_ENDPOINT_STATUS@@3@Z3PEAPEAU2@@Z @ 0x18010B410 (-AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAUISIPCEndpoint@@W4SIPC_BUFFER_STATUS@@PEBUSIPC_.c)
 *     ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x18010BA24 (-Clear@-$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ.c)
 *     ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x18010D940 (-OnDisposePublic@SipcServer@@EEAAXXZ.c)
 *     ?RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z @ 0x18010E440 (-RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009DA74 (--3@YAXPEAX@Z.c)
 *     ??1EndpointListEntry@SipcServer@@QEAA@XZ @ 0x18010AE84 (--1EndpointListEntry@SipcServer@@QEAA@XZ.c)
 */

SipcServer::EndpointListEntry *__fastcall SipcServer::EndpointListEntry::`scalar deleting destructor'(
        SipcServer::EndpointListEntry *this)
{
  SipcServer::EndpointListEntry::~EndpointListEntry(this);
  operator delete(this);
  return this;
}
