/*
 * XREFs of ?AddProcessAdapterInfo@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400418E8
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14037DFF0 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall ADAPTER_RENDER::AddProcessAdapterInfo(struct _KTHREAD **this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY *v4; // rcx

  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  if ( this[10] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4608;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_OpenAdapterLock.IsExclusiveOwner()",
      4608LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (struct _LIST_ENTRY *)this[38];
  if ( (struct _KTHREAD **)v4->Flink != this + 37 )
    __fastfail(3u);
  a2->Flink = (struct _LIST_ENTRY *)(this + 37);
  a2->Blink = v4;
  v4->Flink = a2;
  this[38] = (struct _KTHREAD *)a2;
  ++*((_DWORD *)this + 78);
}
