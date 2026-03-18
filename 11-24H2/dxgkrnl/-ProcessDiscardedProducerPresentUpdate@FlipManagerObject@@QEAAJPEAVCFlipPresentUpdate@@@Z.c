/*
 * XREFs of ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1400A07BC
 * Callers:
 *     ?Discard@CFlipPresentUpdate@@UEAAXXZ @ 0x1400A0780 (-Discard@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x140018C58 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x140018E68 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x14009F1E4 (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x14009F700 (-CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

__int64 __fastcall FlipManagerObject::ProcessDiscardedProducerPresentUpdate(
        FlipManagerObject *this,
        struct CFlipPresentUpdate *a2)
{
  CFlipManager *v4; // rcx
  int v5; // edi

  v5 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v5 >= 0 )
  {
    CFlipManager::ReleaseKernelPresentUpdateReferences(v4, a2);
    CEndpointResourceStateManager::CancelPendingUpdates((FlipManagerObject *)((char *)this + 88));
    if ( !*((_BYTE *)a2 + 72) )
      CEndpointResourceStateManager::ClearAllContentBindings((FlipManagerObject *)((char *)this + 88));
    if ( *((_QWORD *)this + 10) == 1LL )
      CFlipManager::MarkAsLost((__int64)this + 32, -1073741823, 20, *((_QWORD *)a2 + 8));
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v5;
}
