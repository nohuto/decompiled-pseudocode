/*
 * XREFs of ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x14004668C
 * Callers:
 *     NtFlipObjectDisconnectEndpoint @ 0x1400465F0 (NtFlipObjectDisconnectEndpoint.c)
 * Callees:
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x140016DE0 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1400466FC (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::DisconnectEndpoint(FlipManagerObject *this, char a2)
{
  int v4; // ebx
  CFlipManager *v6; // rcx

  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    v6 = (FlipManagerObject *)((char *)this + 32);
    if ( a2 )
    {
      CFlipManager::ProcessProducerDisconnect(v6);
    }
    else if ( *((_QWORD *)this + 10) != 1LL )
    {
      CFlipManager::ProcessConsumerDisconnect((PRKEVENT *)v6);
    }
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v4;
}
