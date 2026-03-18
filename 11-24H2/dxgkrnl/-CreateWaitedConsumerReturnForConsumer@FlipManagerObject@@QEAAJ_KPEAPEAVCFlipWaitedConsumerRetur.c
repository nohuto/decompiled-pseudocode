/*
 * XREFs of ?CreateWaitedConsumerReturnForConsumer@FlipManagerObject@@QEAAJ_KPEAPEAVCFlipWaitedConsumerReturn@@@Z @ 0x140049C78
 * Callers:
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x140049AFC (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::CreateWaitedConsumerReturnForConsumer(
        FlipManagerObject *this,
        __int64 a2,
        struct CFlipWaitedConsumerReturn **a3)
{
  CPushLock *v3; // rdi
  signed int v6; // ebx
  struct CFlipWaitedConsumerReturn *Pool2; // rax

  v3 = (FlipManagerObject *)((char *)this + 40);
  v6 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v6 >= 0 )
  {
    Pool2 = (struct CFlipWaitedConsumerReturn *)ExAllocatePool2(257LL, 24LL, 1920418630LL);
    if ( Pool2 )
    {
      *((_QWORD *)Pool2 + 1) = 0LL;
      *(_QWORD *)Pool2 = &CFlipWaitedConsumerReturn::`vftable';
      *((_QWORD *)Pool2 + 2) = a2;
    }
    *a3 = Pool2;
    v6 = Pool2 == 0LL ? 0xC0000017 : 0;
    CPushLock::ReleaseLock(v3);
  }
  return (unsigned int)v6;
}
