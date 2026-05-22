/*
 * XREFs of ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x18010F850
 * Callers:
 *     <none>
 * Callees:
 *     ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x18010CF58 (--_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z.c)
 *     ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x18010D934 (-Clear@-$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ.c)
 *     ?Reset@AggregateWaitHandle@@QEAAXXZ @ 0x180110470 (-Reset@AggregateWaitHandle@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SipcServer::OnDisposePublic(SipcServer *this)
{
  SipcServer::EndpointListEntry *v2; // rcx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx

  v2 = (SipcServer::EndpointListEntry *)*((_QWORD *)this + 17);
  if ( v2 )
  {
    SipcServer::EndpointListEntry::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 17) = 0LL;
  }
  NtList<SipcServer::EndpointListEntry>::Clear((SipcServer *)((char *)this + 112));
  AggregateWaitHandle::Reset((SipcServer *)((char *)this + 64));
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 7);
  if ( v3 )
  {
    (**v3)(v3, 1LL);
    *((_QWORD *)this + 7) = 0LL;
  }
  SipcObjectBase<ISIPCServer>::PrivateRelease(this);
}
