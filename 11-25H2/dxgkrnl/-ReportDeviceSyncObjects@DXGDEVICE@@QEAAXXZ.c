/*
 * XREFs of ?ReportDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x14032B22C
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1403C1254 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140026F40 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x14032B2CC (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::ReportDeviceSyncObjects(ADAPTER_RENDER **this)
{
  DXGDEVICESYNCOBJECT **v2; // rdi
  DXGDEVICESYNCOBJECT *i; // rbx

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8650;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      8650LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v2 = this + 68;
  for ( i = *v2; i != (DXGDEVICESYNCOBJECT *)v2 && i; i = *(DXGDEVICESYNCOBJECT **)i )
    DXGDEVICESYNCOBJECT::ReportState(i);
}
