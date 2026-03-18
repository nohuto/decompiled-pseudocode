/*
 * XREFs of ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1403EA328
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x1402BD920 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1403F2E70 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004C16C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall DXGPROCESS::ReleaseDeviceLockForAllDevices(struct _KTHREAD **this, struct DXGADAPTER *a2)
{
  char *v4; // rax
  struct _KTHREAD *v5; // rbx
  __int64 Current; // rax
  _QWORD v7[3]; // [rsp+50h] [rbp-18h] BYREF

  if ( !(unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( this[28] == KeGetCurrentThread() )
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( this[28] != KeGetCurrentThread() )
  {
LABEL_5:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3396;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DeviceCreationLock.IsExclusiveOwner()",
      3396LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_6:
  v4 = (char *)(this + 40);
  v5 = this[40];
  v7[0] = v4;
  while ( 1 )
  {
    v7[1] = v5;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v7);
    if ( !Current )
      break;
    if ( *(struct DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL) == a2 )
      ExReleaseResourceLite(*(PERESOURCE *)(Current + 136));
    v5 = *(struct _KTHREAD **)v5;
  }
}
