/*
 * XREFs of ?DeactivateInputProcessing@CKernelSensorThread@@UEAA_NXZ @ 0x14021FC00
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x14014C75C (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 *     ?DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ @ 0x14021FB40 (-DeactivateInputProcessing@CInputThreadBase@@UEAA_NXZ.c)
 */

char __fastcall CKernelSensorThread::DeactivateInputProcessing(CKernelSensorThread *this)
{
  char v2; // bl

  v2 = CInputThreadBase::DeactivateInputProcessing(this);
  if ( v2 )
    CKernelSensorThread::DestroyEventHandles(this);
  return v2;
}
