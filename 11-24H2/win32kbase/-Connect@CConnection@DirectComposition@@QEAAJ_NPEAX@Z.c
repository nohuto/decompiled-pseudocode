/*
 * XREFs of ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140223EAC
 * Callers:
 *     ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140224048 (-Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14006CD70 (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x14006E390 (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ?EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x14006FA48 (-EnableMMCSS@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400748D4 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400750F0 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1400E1A10 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ @ 0x140197F14 (-OnConnectionReconnected@CChannelGroup@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::Connect(DirectComposition::CConnection *this, char a2, void *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  int v11; // ebx
  void *CurrentProcess; // rax
  __int64 v14; // rdx
  void *v15; // rbx
  bool v16; // al

  DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*((_QWORD *)this + 19) + 32LL));
  DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)this + 2));
  v10 = *((_DWORD *)this + 37) == 0;
  *((_BYTE *)this + 253) = a2;
  if ( !v10 )
  {
    v11 = -1073741258;
LABEL_3:
    DirectComposition::CConnection::Disconnect(this);
    goto LABEL_4;
  }
  CurrentProcess = (void *)PsGetCurrentProcess(v7, v6, v8, v9);
  v15 = CurrentProcess;
  if ( CurrentProcess )
    ObReferenceObjectByPointer(CurrentProcess, 0x1FFFFFu, (POBJECT_TYPE)PsProcessType, 0);
  if ( *(_QWORD *)this )
    ObfDereferenceObject(*(PVOID *)this);
  *(_QWORD *)this = v15;
  v11 = DirectComposition::CEvent::Create(a3, v14, (struct DirectComposition::CEvent **)this + 11);
  if ( v11 < 0 )
    goto LABEL_3;
  *((_DWORD *)this + 37) = 1;
  *((_DWORD *)this + 36) = 0;
  DirectComposition::CChannelGroup::OnConnectionReconnected((DirectComposition::CConnection *)((char *)this + 24));
  KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 11) + 8LL), 1, 0);
  ExAcquirePushLockSharedEx((char *)this + 200, 0LL);
  *((_BYTE *)this + 208) = 0;
  if ( *((_DWORD *)this + 61) )
    DirectComposition::CSystemChannel::EnableMMCSS(*((DirectComposition::CSystemChannel **)this + 19), 1);
  if ( *((_DWORD *)this + 62) )
    v16 = (int)DirectComposition::CSystemChannel::BoostCompositorClock(
                 *((DirectComposition::CSystemChannel **)this + 19),
                 1) >= 0;
  else
    v16 = 0;
  *((_BYTE *)this + 252) = v16;
  DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 200));
LABEL_4:
  ExReleaseResourceLite(*((PERESOURCE *)this + 2));
  KeLeaveCriticalRegion();
  DirectComposition::CChannel::Unlock(*((PERESOURCE **)this + 19));
  return (unsigned int)v11;
}
