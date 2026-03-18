/*
 * XREFs of ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x140008D70
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140009BA0 (-ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CFlipPresentUpdate::Pending(CFlipPresentUpdate *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 1);
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 40)) >= 0 )
  {
    CFlipManager::ProcessPendingProducerPresentUpdate((CFlipManager *)(v1 + 32), this);
    CPushLock::ReleaseLock((CPushLock *)(v1 + 40));
  }
}
