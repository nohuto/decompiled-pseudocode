/*
 * XREFs of ??1CKernelSensorThread@@UEAA@XZ @ 0x14021FA98
 * Callers:
 *     ??_GCKernelSensorThread@@UEAAPEAXI@Z @ 0x14021FB00 (--_GCKernelSensorThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x14014C75C (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 */

void __fastcall CKernelSensorThread::~CKernelSensorThread(CKernelSensorThread *this)
{
  *(_QWORD *)this = &CKernelSensorThread::`vftable';
  CKernelSensorThread::DestroyEventHandles(this);
  *(_QWORD *)this = &CInputThreadBase::`vftable';
}
