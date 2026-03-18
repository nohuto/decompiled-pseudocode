/*
 * XREFs of ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x14014C75C
 * Callers:
 *     UserKSTInitialize @ 0x140215930 (UserKSTInitialize.c)
 *     ??1CKernelSensorThread@@UEAA@XZ @ 0x14021FA98 (--1CKernelSensorThread@@UEAA@XZ.c)
 *     ?DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ @ 0x14021FC00 (-DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?DestroyEventHandlesNoLock@CKernelSensorThread@@AEAAXXZ @ 0x14014C79C (-DestroyEventHandlesNoLock@CKernelSensorThread@@AEAAXXZ.c)
 */

void __fastcall CKernelSensorThread::DestroyEventHandles(CKernelSensorThread *this)
{
  W32AcquirePushLockExclusiveEx((CKernelSensorThread *)((char *)this + 8), 0);
  CKernelSensorThread::DestroyEventHandlesNoLock(this);
  W32ReleasePushLockExclusiveEx((CKernelSensorThread *)((char *)this + 8), 0LL);
}
