/*
 * XREFs of ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x14005F6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x140016DE0 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1400466FC (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x1400792CC (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UnregisterWithRegistry@CFlipManager@@AEAAXXZ @ 0x14009F470 (-UnregisterWithRegistry@CFlipManager@@AEAAXXZ.c)
 */

__int64 __fastcall CFlipManager::Close(PRKEVENT *this, struct _EPROCESS *a2, void *a3, __int64 a4, unsigned __int64 a5)
{
  if ( a4 == 1 && (a2 == (struct _EPROCESS *)this[6] || a2 == (struct _EPROCESS *)this[5]) )
  {
    CPushLock::AcquireLockExclusive((CPushLock *)(this + 1));
    if ( a2 == (struct _EPROCESS *)this[6] )
      CFlipManager::ProcessConsumerDisconnect(this);
    if ( a2 == (struct _EPROCESS *)this[5] )
      CFlipManager::ProcessProducerDisconnect((CFlipManager *)this);
    CPushLock::ReleaseLock((CPushLock *)(this + 1));
  }
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline(this) && a5 == 1 )
    CFlipManager::UnregisterWithRegistry((CFlipManager *)this);
  return 0LL;
}
