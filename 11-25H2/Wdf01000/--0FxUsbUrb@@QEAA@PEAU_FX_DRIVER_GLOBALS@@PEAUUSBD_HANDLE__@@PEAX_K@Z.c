/*
 * XREFs of ??0FxUsbUrb@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUUSBD_HANDLE__@@PEAX_K@Z @ 0x14002335C
 * Callers:
 *     ?CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x1400018AC (-CreateIsochUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@KPEAPEAUWDFMEMORY__@@PEAPEAU_URB@@.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140023128 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 * Callees:
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x140080A1C (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

void __fastcall FxUsbUrb::FxUsbUrb(
        FxUsbUrb *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        USBD_HANDLE__ *USBDHandle,
        void *Buffer,
        unsigned __int64 BufferSize)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  KIRQL v9; // al

  this->m_Globals = FxDriverGlobals;
  *(_DWORD *)&this->m_Type = 9441280;
  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxUsbUrb_vtbl *)FxObject::`vftable';
  this->m_SpinLock.m_Lock = 0LL;
  this->m_SpinLock.m_DbgFlagIsInitialized = 1;
  this->m_Refcnt = 1;
  *(_DWORD *)&this->m_ObjectFlags = 0x10000;
  this->m_ParentObject = 0LL;
  this->m_ChildListHead.Blink = &this->m_ChildListHead;
  this->m_ChildListHead.Flink = &this->m_ChildListHead;
  this->m_ChildEntry.Blink = &this->m_ChildEntry;
  this->m_ChildEntry.Flink = &this->m_ChildEntry;
  m_Globals = this->m_Globals;
  this->m_DisposeSingleEntry.Next = 0LL;
  this->m_DeviceBase = 0LL;
  if ( m_Globals->FxVerifierOn )
    FxObject::Vf_VerifyConstruct(this, FxDriverGlobals, 0);
  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxUsbUrb_vtbl *)FxMemoryObject::`vftable'{for `FxObject'};
  this->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryObject::`vftable'{for `IFxMemory'};
  this->m_BufferSize = BufferSize;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
    FxObject::AllocateTagTracker(this, 0x100Au);
  this->m_pBuffer = Buffer;
  this->FxMemoryBufferPreallocated::FxMemoryObject::FxObject::__vftable = (FxUsbUrb_vtbl *)FxUsbUrb::`vftable'{for `FxObject'};
  this->m_USBDHandle = USBDHandle;
  this->FxMemoryBufferPreallocated::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
  v9 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  this->m_ObjectFlags |= 0x800u;
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v9);
}
