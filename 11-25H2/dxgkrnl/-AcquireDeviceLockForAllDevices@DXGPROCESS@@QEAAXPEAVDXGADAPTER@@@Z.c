/*
 * XREFs of ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1403D9480
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x1402BD920 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1403E52A0 (-DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140015644 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004C16C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x140290400 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1402BA024 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::AcquireDeviceLockForAllDevices(struct _KTHREAD **this, struct DXGADAPTER *a2)
{
  struct _KTHREAD *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 Current; // rax
  __int64 v8; // rbx
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF

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
    WdLogGlobalForLineNumber = 3366;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DeviceCreationLock.IsExclusiveOwner()",
      3366LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_6:
  v4 = this[40];
  v9[0] = this + 40;
  while ( 1 )
  {
    v9[1] = v4;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v9);
    v8 = Current;
    if ( !Current )
      break;
    if ( *(struct DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL) == a2
      && !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Current + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v8 + 16) + 16LL));
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventBlockThread, v6, 40);
      }
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v8 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v8 + 16) + 16LL));
    }
    v4 = *(struct _KTHREAD **)v4;
  }
}
