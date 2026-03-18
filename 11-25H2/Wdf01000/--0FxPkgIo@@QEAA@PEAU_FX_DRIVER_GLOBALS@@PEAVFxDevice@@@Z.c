/*
 * XREFs of ??0FxPkgIo@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxDevice@@@Z @ 0x14004EBB4
 * Callers:
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14004E398 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140022034 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1400AC740 (memset.c)
 */

void __fastcall FxPkgIo::FxPkgIo(FxPkgIo *this, _FX_DRIVER_GLOBALS *FxDriverGlobals, FxDevice *Device)
{
  FxNonPagedObject::FxNonPagedObject(this, (_FX_DRIVER_GLOBALS *)0x1100, 0, FxDriverGlobals);
  this->__vftable = (FxPkgIo_vtbl *)FxPkgIo::`vftable';
  this->m_InCallerContextCallback.m_Method = 0LL;
  this->m_DefaultQueue = 0LL;
  this->m_DeviceBase = Device;
  memset(this->m_DispatchTable, 0, sizeof(this->m_DispatchTable));
  *(_WORD *)&this->m_Filter = 0;
  this->m_QueuesAreShuttingDown = 0;
  this->m_IoQueueListHead.Blink = &this->m_IoQueueListHead;
  this->m_IoQueueListHead.Flink = &this->m_IoQueueListHead;
  this->m_DynamicDispatchInfoListHead.Blink = &this->m_DynamicDispatchInfoListHead;
  this->m_DynamicDispatchInfoListHead.Flink = &this->m_DynamicDispatchInfoListHead;
  this->m_RandomSeed = MEMORY[0xFFFFF78000000320];
  if ( FxDriverGlobals->FxVerboseOn )
    WPP_IFR_SF_q(FxDriverGlobals, 5u, 0xDu, 0xAu, WPP_FxPkgIo_cpp_Traceguids, this);
}
