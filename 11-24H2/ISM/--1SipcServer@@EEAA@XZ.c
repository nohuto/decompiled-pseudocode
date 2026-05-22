/*
 * XREFs of ??1SipcServer@@EEAA@XZ @ 0x18010CE6C
 * Callers:
 *     ??_ESipcServer@@EEAAPEAXI@Z @ 0x18010CFC0 (--_ESipcServer@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1AggregateWaitHandle@@QEAA@XZ @ 0x18010CC98 (--1AggregateWaitHandle@@QEAA@XZ.c)
 *     ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x18010D934 (-Clear@-$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ.c)
 *     ?Reset@SipcLocalSid@@QEAAXXZ @ 0x1801104E4 (-Reset@SipcLocalSid@@QEAAXXZ.c)
 */

void __fastcall SipcServer::~SipcServer(SipcServer *this)
{
  *(_QWORD *)this = &SipcServer::`vftable'{for `SipcObjectBase<ISIPCServer>'};
  *((_QWORD *)this + 2) = &SipcServer::`vftable'{for `SipcEndpointOwner'};
  NtList<SipcServer::EndpointListEntry>::Clear((char *)this + 112);
  AggregateWaitHandle::~AggregateWaitHandle((HANDLE *)this + 8);
  *((_QWORD *)this + 2) = &SipcEndpointOwner::`vftable';
  SipcLocalSid::Reset((SipcServer *)((char *)this + 48));
  *(_QWORD *)this = &SipcObjectBase<ISIPCServer>::`vftable';
}
