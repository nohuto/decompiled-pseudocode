/*
 * XREFs of ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x14005EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1400078F8 (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14000B474 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14000C610 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x140046D2C (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     DxgkGetSessionFlipManagerRegistry @ 0x14006FDFC (DxgkGetSessionFlipManagerRegistry.c)
 *     Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline @ 0x140078D98 (Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CFlipManager::Close(PRKEVENT *this, struct _EPROCESS *a2, void *a3, __int64 a4, unsigned __int64 a5)
{
  struct IFlipManagerRegistry *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( a4 == 1 && (a2 == (struct _EPROCESS *)this[6] || a2 == (struct _EPROCESS *)this[5]) )
  {
    CPushLock::AcquireLockExclusive((CPushLock *)(this + 1));
    if ( a2 == (struct _EPROCESS *)this[6] )
      CFlipManager::ProcessConsumerDisconnect(this);
    if ( a2 == (struct _EPROCESS *)this[5] )
      CFlipManager::ProcessProducerDisconnect((CFlipManager *)this);
    CPushLock::ReleaseLock((CPushLock *)(this + 1));
  }
  if ( (unsigned int)Feature_CompSwapchainRenderAndPresentSync__private_IsEnabledDeviceUsageNoInline(this) )
  {
    if ( a5 == 1 )
    {
      v8 = 0LL;
      if ( (int)DxgkGetSessionFlipManagerRegistry(&v8) >= 0 )
        (*(void (__fastcall **)(struct IFlipManagerRegistry *, char *))(*(_QWORD *)v8 + 8LL))(v8, (char *)this + 344);
    }
  }
  return 0LL;
}
