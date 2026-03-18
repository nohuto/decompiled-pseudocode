/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x14004235C
 * Callers:
 *     ?ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140042064 (-ControlDeviceInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1400427B8 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140043034 (-PdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x140014104 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

__int64 __fastcall FxPkgGeneral::PostCreateDeviceInitialize(FxPkgGeneral *this, WDFDEVICE_INIT *Init)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  unsigned __int8 Flags; // cl
  NTSTATUS _a2; // ebx
  _WDF_EXECUTION_LEVEL m_ExecutionLevel; // eax
  FxDeviceBase *v8; // rax
  FxDeviceBase *v9; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r8
  FxDeviceBase *m_DeviceBase; // rax
  _DEVICE_OBJECT *m_DeviceObject; // rsi
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-69h] BYREF
  _WDF_IO_QUEUE_CONFIG queueConfig; // [rsp+80h] [rbp-29h] BYREF

  m_Globals = this->m_Globals;
  Flags = Init->Control.Flags;
  _a2 = 0;
  if ( Flags )
  {
    m_DeviceBase = this->m_DeviceBase;
    m_DeviceObject = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    if ( (Flags & 1) != 0
      && (_a2 = IoRegisterShutdownNotification(m_DeviceBase->m_DeviceObject.m_DeviceObject), _a2 < 0)
      || (Init->Control.Flags & 2) != 0 && (_a2 = IoRegisterLastChanceShutdownNotification(m_DeviceObject), _a2 < 0) )
    {
      IoUnregisterShutdownNotification(m_DeviceObject);
      return (unsigned int)_a2;
    }
    this->m_EvtDeviceShutdown.m_Method = Init->Control.ShutdownNotification;
  }
  if ( (this->m_Flags & 0xC) != 0 )
  {
    memset(&queueConfig.AllowZeroLengthRequests, 0, 0x54uLL);
    queueConfig.Size = 96;
    m_ExecutionLevel = this->m_ExecutionLevel;
    *(_QWORD *)&queueConfig.DispatchType = 3LL;
    memset(&attributes.EvtDestroyCallback, 0, 40);
    attributes.ExecutionLevel = m_ExecutionLevel;
    attributes.SynchronizationScope = this->m_SynchronizationScope;
    v8 = this->m_DeviceBase;
    *(_OWORD *)&attributes.Size = 0LL;
    attributes.Size = 56;
    _a2 = FxPkgIo::CreateQueue(
            (FxPkgIo *)v8[3].m_ChildListHead.Blink,
            &queueConfig,
            &attributes,
            0LL,
            &this->m_DefaultQueueForCreates);
    if ( _a2 < 0 )
    {
      v9 = this->m_DeviceBase;
      m_ObjectSize = v9->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x11u, WPP_FxPkgGeneral_cpp_Traceguids, _a1, _a2);
    }
  }
  return (unsigned int)_a2;
}
