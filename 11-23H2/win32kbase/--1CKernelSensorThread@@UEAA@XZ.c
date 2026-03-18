/*
 * XREFs of ??1CKernelSensorThread@@UEAA@XZ @ 0x1C0080C00
 * Callers:
 *     ??_GCKernelSensorThread@@UEAAPEAXI@Z @ 0x1C0080770 (--_GCKernelSensorThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x1C0083CB4 (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CKernelSensorThread::~CKernelSensorThread(CKernelSensorThread *this)
{
  *(_QWORD *)this = &CKernelSensorThread::`vftable';
  CKernelSensorThread::DestroyEventHandles(this);
  *(_QWORD *)this = &CInputThreadBase::`vftable';
  if ( *((_QWORD *)this + 2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 28LL);
}
