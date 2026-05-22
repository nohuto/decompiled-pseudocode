/*
 * XREFs of ?RemoveOwner@SipcEndpoint@@QEAAXXZ @ 0x18011043C
 * Callers:
 *     ??1EndpointListEntry@SipcServer@@QEAA@XZ @ 0x18010CD94 (--1EndpointListEntry@SipcServer@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall SipcEndpoint::RemoveOwner(SipcEndpoint *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 8LL))(*((_QWORD *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
  SipcEndpoint::Disconnect(this);
}
