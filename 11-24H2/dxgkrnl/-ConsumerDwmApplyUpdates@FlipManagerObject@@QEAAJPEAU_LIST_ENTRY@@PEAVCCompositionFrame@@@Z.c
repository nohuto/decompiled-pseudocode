/*
 * XREFs of ?ConsumerDwmApplyUpdates@FlipManagerObject@@QEAAJPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x14001B38C
 * Callers:
 *     ?ReleaseFlipManagerTokensToFrame@CTokenManager@@IEAA_NPEAVCCompositionFrame@@@Z @ 0x14001B09C (-ReleaseFlipManagerTokensToFrame@CTokenManager@@IEAA_NPEAVCCompositionFrame@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14001A9A4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14001BAF0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1400490A8 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerDwmApplyUpdates(
        char *Object,
        struct _LIST_ENTRY *a2,
        struct CCompositionFrame *a3)
{
  int v6; // ebx

  v6 = CPushLock::AcquireLockExclusive((CPushLock *)(Object + 40));
  if ( v6 >= 0 )
  {
    ObReferenceObjectByPointer(Object, 3u, g_pDxgkCompositionObjectType, 0);
    CFlipManager::ConsumerDwmApplyUpdates((CFlipManager *)(Object + 32), a2, a3);
    CPushLock::ReleaseLock((CPushLock *)(Object + 40));
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v6;
}
