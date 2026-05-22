/*
 * XREFs of ??1EndpointListEntry@SipcServer@@QEAA@XZ @ 0x18010CD94
 * Callers:
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x18010CF58 (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?PrivateRelease@?$SipcObjectBase@UISIPCEndpoint@@@@QEAAXXZ @ 0x18010FC04 (-PrivateRelease@-$SipcObjectBase@UISIPCEndpoint@@@@QEAAXXZ.c)
 *     ?RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x1801103A4 (-RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?RemoveOwner@SipcEndpoint@@QEAAXXZ @ 0x18011043C (-RemoveOwner@SipcEndpoint@@QEAAXXZ.c)
 */

void __fastcall SipcServer::EndpointListEntry::~EndpointListEntry(SipcServer::EndpointListEntry *this)
{
  if ( *((_QWORD *)this + 2) )
  {
    AggregateWaitHandle::RemoveHandle((AggregateWaitHandle *)(*((_QWORD *)this + 3) + 64LL), *((void **)this + 4));
    AggregateWaitHandle::RemoveHandle((AggregateWaitHandle *)(*((_QWORD *)this + 3) + 64LL), *((void **)this + 5));
    SipcEndpoint::RemoveOwner(*((SipcEndpoint **)this + 2));
    SipcObjectBase<ISIPCEndpoint>::PrivateRelease(*((_QWORD *)this + 2));
  }
}
