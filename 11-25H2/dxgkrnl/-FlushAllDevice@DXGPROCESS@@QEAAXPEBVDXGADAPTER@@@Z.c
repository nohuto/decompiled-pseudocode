/*
 * XREFs of ?FlushAllDevice@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@@Z @ 0x1403E16C0
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x1402BD920 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x14004C16C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x14038A344 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

void __fastcall DXGPROCESS::FlushAllDevice(struct _KTHREAD **this, const struct DXGADAPTER *a2)
{
  char *v4; // rax
  struct _KTHREAD *v5; // rbx
  _QWORD *Current; // rax
  _QWORD v7[3]; // [rsp+50h] [rbp-18h] BYREF

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2854;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      2854LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2856;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"pAdapterToFlush", 2856LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !(unsigned int)Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( this[28] == KeGetCurrentThread() )
      goto LABEL_10;
    goto LABEL_9;
  }
  if ( this[28] != KeGetCurrentThread() )
  {
LABEL_9:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2857;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_DeviceCreationLock.IsExclusiveOwner()",
      2857LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
LABEL_10:
  v4 = (char *)(this + 40);
  v5 = this[40];
  v7[0] = v4;
  while ( 1 )
  {
    v7[1] = v5;
    Current = (_QWORD *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v7);
    if ( !Current )
      break;
    if ( *(const struct DXGADAPTER **)(Current[2] + 16LL) == a2 )
      DXGDEVICE::FlushScheduler(Current, 5, 0xFFFFFFFD, 0);
    v5 = *(struct _KTHREAD **)v5;
  }
}
