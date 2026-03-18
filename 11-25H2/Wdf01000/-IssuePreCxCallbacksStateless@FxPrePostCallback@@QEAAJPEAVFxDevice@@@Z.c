/*
 * XREFs of ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x14001B988
 * Callers:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x14001B8E4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 * Callees:
 *     ?GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallbackType@@@Z @ 0x14001BA98 (-GetCxPnpPowerCallbackContexts@FxCxDeviceInfo@@QEAAPEAVFxCxPnpPowerCallbackContext@@W4FxCxCallba.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPrePostCallback::IssuePreCxCallbacksStateless(FxPrePostCallback *this, FxDevice *Device)
{
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rdi
  FxCxDeviceInfo *Flink; // rbx
  int v5; // esi
  FxCxPnpPowerCallbackContext *CxPnpPowerCallbackContexts; // rax
  int v8; // eax

  p_m_CxDeviceInfoListHead = &Device->m_CxDeviceInfoListHead;
  Flink = (FxCxDeviceInfo *)Device->m_CxDeviceInfoListHead.Flink;
  v5 = 0;
  while ( Flink != (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead && Flink )
  {
    CxPnpPowerCallbackContexts = FxCxDeviceInfo::GetCxPnpPowerCallbackContexts(Flink, this->m_CallbackType);
    if ( CxPnpPowerCallbackContexts )
    {
      if ( CxPnpPowerCallbackContexts->u.Generic.PreCallback )
      {
        v8 = this->InvokeCxCallback(this, CxPnpPowerCallbackContexts, FxCxInvokePreCallback);
        if ( v5 >= 0 )
          v5 = v8;
      }
    }
    Flink = (FxCxDeviceInfo *)Flink->ListEntry.Flink;
  }
  return (unsigned int)v5;
}
