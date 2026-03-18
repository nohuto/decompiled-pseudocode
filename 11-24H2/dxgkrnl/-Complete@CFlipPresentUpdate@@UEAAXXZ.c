/*
 * XREFs of ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x140018D20
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x14001927C (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall CFlipPresentUpdate::Complete(CFlipPresentUpdate *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 40)) >= 0 )
  {
    CFlipManager::ProcessCompletedProducerPresentUpdate((CFlipManager *)(v1 + 32), this);
    CPushLock::ReleaseLock((CPushLock *)(v1 + 40));
  }
  ObfDereferenceObject((PVOID)v1);
}
