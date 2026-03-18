/*
 * XREFs of ?IsTtmDeviceListLockOwner@DXGSESSIONMGR@@QEAAEXZ @ 0x140078D50
 * Callers:
 *     ?RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1401F48B0 (-RegisterTtmDevice@CTTMDEVICE@@QEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z @ 0x1401F5E4C (-UnRegisterTtmDevice@CTTMDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall DXGSESSIONMGR::IsTtmDeviceListLockOwner(DXGSESSIONMGR *this)
{
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  return *((_QWORD *)this + 43) == (_QWORD)KeGetCurrentThread();
}
