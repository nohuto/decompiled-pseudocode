/*
 * XREFs of ?MarkInvalid@CInputSink@@UEAAXXZ @ 0x14006C900
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ @ 0x14006C94C (-InvalidateAndReleaseQueues@CInputSink@@IEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CInputSink::MarkInvalid(CInputSink *this)
{
  if ( (**(unsigned __int8 (__fastcall ***)(CInputSink *))this)(this) )
  {
    CInputSink::InvalidateAndReleaseQueues(this);
    CPushLock::AcquireLockExclusive((CInputSink *)((char *)this + 8));
    *((_BYTE *)this + 24) = 0;
    CPushLock::ReleaseLock((CInputSink *)((char *)this + 8));
  }
}
